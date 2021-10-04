class Node:
    def __init__(self,key):
        self.left = None
        self.right = None
        self.val = key


def insert(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert(root.right, key)
        else:
            root.left = insert(root.left, key)
    return root
    
def inorder(root):
    if root:
        inorder(root.left)
        print(root.val,end=" ")
        inorder(root.right)
        
def preorder(root):
    if root:
        print(root.val,end=" ")
        inorder(root.left)
        inorder(root.right)
  
def postorder(root):
    if root:
        inorder(root.left)
        inorder(root.right) 
        print(root.val,end=" ")
        
def search(root,key):
    if root is None or root.val == key:
        return root
    if root.val < key:
        return search(root.right,key)
    return search(root.left,key)


root=Node(10)
insert(root,11)
insert(root,3)
insert(root,9)
inorder(root)