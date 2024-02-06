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

    def print_tree(self, at=None):
        if at is None: at = self.root
        if at is None: # for empty tree
            return

        if at.left is not None: self.print_tree(at.left)
        if at.right is not None: self.print_tree(at.right)
        print(at.val)


tree = Tree()
for line in open(0):
    node = Node(int(line))
    tree.insert(node)
    print(node)

tree.print_tree()
