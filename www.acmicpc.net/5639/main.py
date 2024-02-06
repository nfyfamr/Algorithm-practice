import sys
sys.setrecursionlimit(10**4+10)

class Node:
    def __init__(self, val):
        self.val = val
        self.left = None
        self.right = None

class Tree:
    def __init__(self):
        self.root = None

    def insert(self, node, at=None):
        if self.root is None:
            self.root = node
            return
        if at is None: at = self.root

        if node.val < at.val:
            if at.left == None:
                at.left = node
            else:
                self.insert(node, at.left)
        else:
            if at.right == None:
                at.right = node
            else:
                self.insert(node, at.right)

    def post_order(self, at=None):
        if at is None: at = self.root
        if at is None: # for empty tree
            return

        if at.left is not None: self.post_order(at.left)
        if at.right is not None: self.post_order(at.right)
        print(at.val)


tree = Tree()
while True:
    try:
        node = Node(int(sys.stdin.readline()))
        tree.insert(node)
    except:
        break

tree.post_order()
