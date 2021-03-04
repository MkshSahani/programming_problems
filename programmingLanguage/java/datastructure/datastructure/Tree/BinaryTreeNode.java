package datastructure.Tree;

public class BinaryTreeNode<T> {

    private BinaryTreeNode<T> left; 
    private BinaryTreeNode<T> right; 
    private T data; 
    
    public BinaryTreeNode() {
        this.left = null; 
        this.right = null; 
    }

    public BinaryTreeNode(T ele) {
        this.data = ele; 
        this.left = null; 
        this.right = null; 
    }

    public void setLeft(BinaryTreeNode<T> left) {
        this.left = left; 
    }

    public void setRight(BinaryTreeNode<T> right) {
        this.right = right; 
    }

    public BinaryTreeNode<T> getLeft() {
        return this.left; 
    }

    public BinaryTreeNode<T> getRight() {
        return this.right; 
    }

    public void setData(T data) {
        this.data = data; 
    }

    public T getData() {
        return this.data; 
    }
    
}
