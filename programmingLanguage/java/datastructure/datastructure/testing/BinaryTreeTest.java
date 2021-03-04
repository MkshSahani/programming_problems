package datastructure.testing;

import datastructure.Tree.BinaryTree; 

public class BinaryTreeTest {
    public static void main(String[] args) {
        BinaryTree<Integer> binaryTree = new BinaryTree<Integer>(); // binary tree. 
        for(int i = 0; i < 10; i++) {
            binaryTree.add((int)(Math.random() * 200)); 
        }
        binaryTree.levelOrderTraversal(); // level order traversal. 
    }
}
