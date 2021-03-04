package datastructure.arrayList;

import java.util.ArrayList; 


public class arrayList<T> {
    public static void main(String[] args) {
        ArrayList<String> arrayList = new ArrayList<String>(); 
        arrayList.add("java"); 
        arrayList.add("python"); 
        for(String data : arrayList) {
            System.out.println(data); 
        }
    }
}
