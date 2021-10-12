import hashlib,json
from collections import OrderedDict

class Jae_MerkTree:

	def __init__(self,listoftransaction=None):
		self.listoftransaction = listoftransaction
		self.past_transaction = OrderedDict()
 
	def create_tree(self):

		listoftransaction = self.listoftransaction
		past_transaction = self.past_transaction
		temp_transaction = []

		for index in range(0,len(listoftransaction),2):

			current = listoftransaction[index]

			if index+1 != len(listoftransaction):
				current_right = listoftransaction[index+1]

			else:
				current_right = ''

			current_hash = hashlib.sha256(current)

			if current_right != '':
				current_right_hash = hashlib.sha256(current_right)

			past_transaction[listoftransaction[index]] = current_hash.hexdigest()

			if current_right != '':
				past_transaction[listoftransaction[index+1]] = current_right_hash.hexdigest()

			if current_right != '':
				temp_transaction.append(current_hash.hexdigest() + current_right_hash.hexdigest())

			else:
				temp_transaction.append(current_hash.hexdigest())

		if len(listoftransaction) != 1:
			self.listoftransaction = temp_transaction
			self.past_transaction = past_transaction

			self.create_tree()
 
	def Get_past_transacion(self):
		return self.past_transaction

	def Get_Root_leaf(self):
		last_key = self.past_transaction.keys()[-1]
		return self.past_transaction[last_key]

if __name__ == "__main__":

	Jae_Tree = Jae_MerkTree()

	transaction = ['a','b','c','d']
 
	Jae_Tree.listoftransaction = transaction

	Jae_Tree.create_tree()

	past_transaction = Jae_Tree.Get_past_transacion()

	print "First Example - Even number of transaction Merkel Tree"
	print 'Final root of the tree : ',Jae_Tree.Get_Root_leaf()
	print(json.dumps(past_transaction, indent=4))
	print "-" * 50 

	print "Second Example - Odd number of transaction Merkel Tree"
	Jae_Tree = Jae_MerkTree()
	transaction = ['a','b','c','d','e']
	Jae_Tree.listoftransaction = transaction
	Jae_Tree.create_tree()
	past_transaction = Jae_Tree.Get_past_transacion()
	print 'Final root of the tree : ',Jae_Tree.Get_Root_leaf()
	print(json.dumps(past_transaction, indent=4))
	print "-" * 50 

	print "Final Example - Actuall use case of the Merkle Tree"

	ground_truth_Tree = Jae_MerkTree()
	ground_truth_transaction = ['a','b','c','d','e']
	ground_truth_Tree.listoftransaction = ground_truth_transaction
	ground_truth_Tree.create_tree()
	ground_truth_past_transaction = ground_truth_Tree.Get_past_transacion()
	ground_truth_root = ground_truth_Tree.Get_Root_leaf()

	tampered_Tree = Jae_MerkTree()
	tampered_Tree_transaction = ['a','b','c','d','f']
	tampered_Tree.listoftransaction = tampered_Tree_transaction
	tampered_Tree.create_tree()
	tampered_Tree_past_transaction = tampered_Tree.Get_past_transacion()
	tampered_Tree_root = tampered_Tree.Get_Root_leaf()

	print 'Company A - my final transaction hash : ',ground_truth_root
	print 'Company B - my final transaction hash : ',ground_truth_root
	print 'Company C - my final transaction hash : ',tampered_Tree_root

	# i-4) Print out all of the past transaction
	print "\n\nGround Truth past Transaction "
	print(json.dumps(ground_truth_past_transaction, indent=4))
	
	print "\n\nTamper Truth past Transaction "
	print(json.dumps(tampered_Tree_past_transaction, indent=4))
