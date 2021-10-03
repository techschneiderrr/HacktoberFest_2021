class Node:
	def __init__(self, data):
		self.data = data
		self.next = None

class LinkedList:
	def __init__(self):
		self.head = None
		self.last = None
	def __iter__(self):
		return self
	def __next__(self):
		
	def print(self):
		t = self.head
		while(t != None):
			print("Node:", t.data)
			t = t.next
	def print_node(self, node):
		while(node != None):
			print("Node:", node.data)
			node = node.next
	def insert_after_pos(self, pos, data):
		i = 0
		t = self.head
		while(i != pos):
			t = t.next
		n = Node(data)
		n.next = t.next
		t.next = n
		return n
	def insert_after_node(self, node, data):
		n = Node(data)
		n.next = node.next
		node.next = n
		return n
	def prepend(self, data):
		n = Node(data)
		n.next = self.head
		self.head = n
		return n
	def append(self, data):
		if(self.last != None):
			self.last.next = Node(data)
			self.last = self.last.next
			return self.last
		if(self.head == None):
			self.head = Node(data)
			self.last = self.head
			return self.head
		t = self.head
		while(t.next != None):
			t = t.next
		t.next = Node(data)
		self.last = t.next
		return t.next