# 0x1D. C - Binary trees

## General 

* What is a binary tree?
Is a data structure that is based in nodes and each one of them has up to two children or 0.

* What is the difference between a binary tree and a Binary Search Tree?
The binary search tree is one of the types of binary tree that has the value of all the nodes in the left subtree lesser or equal to the root node, and the value of all the nodes in a right subtree are greater than or equal to the value of the root node.

* What is the possible gain in terms of time complexity compared to linked lists?
binary tree could has a time of complexity O(log n) and a linked list O(n)

* What are the depth, the height, the size of a binary tree?
    * The **depth** of a node is the number of edges from the node to the tree's root node. A root node will have a depth of 0.
    * The **height** of a node is the number of edges on the longest path from the node to a leaf.
    * The **size** of a tree is the number of nodes; a leaf by itself has size 1.

* What are the different traversal methods to go through a binary tree?
In this traversal method, the root node is visited first, then the left subtree and finally the right subtree.

* What is a complete, a full, a perfect, a balanced binary tree?
    * **Full Binary Tree** A Binary Tree is a full binary tree if every node has 0 or 2 children.
    * **Complete Binary Tree** A Binary Tree is a Complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible 
    * **Perfect Binary Tree** A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 