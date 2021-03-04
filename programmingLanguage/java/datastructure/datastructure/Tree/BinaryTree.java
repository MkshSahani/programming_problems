package datastructure.Tree;

import datastructure.Queue.Queue; 

public class BinaryTree<T> {
    private BinaryTreeNode<T> root; 

    public BinaryTree() {
        this.root = null; 
    }

    public void add(T element) {
        if(this.root == null) {
            this.root = new BinaryTreeNode<T>(element); 
        } else {
            
            BinaryTreeNode<T> temp_node = null; 
            Queue<BinaryTreeNode<T>> queue = new Queue<BinaryTreeNode<T>>(); // develop a queue. 
            queue.enQueue(this.root); 
            while(!queue.isEmpty()) {
                temp_node = queue.deQueue(); 
                if(temp_node.getLeft() == null) {
                    temp_node.setLeft(new BinaryTreeNode<T>(element)); 
                    break; 
                } else {
                    queue.enQueue(temp_node.getLeft()); 
                }

                if(temp_node.getRight() == null) {
                    temp_node.setRight(new BinaryTreeNode<T>(element)); 
                    break; 
                } else {
                    queue.enQueue(temp_node.getRight()); 
                }
            }
        }
    }

    public void levelOrderTraversal() {
        if(this.root == null) {
            System.out.println("Tree is empty !!!"); 
        } else {
            BinaryTreeNode<T> temp_node = null; 
            Queue<BinaryTreeNode<T>> queue = new Queue<BinaryTreeNode<T>>(); 
            queue.enQueue(this.root); // enQueue root node to queue. 
            while(!queue.isEmpty()) {
                temp_node = queue.deQueue(); 
                System.out.println(temp_node.getData()); 
                if(temp_node.getLeft() != null) {
                    queue.enQueue(temp_node.getLeft()); 
                } 
                if(temp_node.getRight() != null) {
                    queue.enQueue(temp_node.getRight()); 
                }
            }
        }
    }
    
}
