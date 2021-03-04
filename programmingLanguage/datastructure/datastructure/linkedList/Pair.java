package datastructure.linkedList;

public class Pair<T,U> {
    private T key; 
    private U value; 

    public Pair() {
        key = null; 
        value = null; 
    }

    public Pair(T key_arg, U value_arg) {
        this.key = key_arg; 
        this.value = value_arg; 
    }

    public void setKey(T key_args) {
        this.key = key_args; 
    }

    public void setValue(U value_args) {
        this.value = value_args; 
    }

    public T getKey() {
        return this.key; 
    }

    public U getValue() {
        return this.value; 
    }

}
