# filename : LinkedList.py 

# class : LinkedList 

from .LinkedListNode import LinkedListNode  

class LinkedList: 

    def __init__(self): 
        self.head = None # head of linked list. 

    def add(self, element): 
        if self.head is None: 
            self.head = LinkedListNode()
            self.head.data = element 
        else: 
            current = self.head 
            while current.next_link is not None: 
                current = current.next_link 
            current.next_link = LinkedListNode() # add new node in linked list. 
            current.next_link.data = element # update data in added node. 
    
    def printList(self): 
        if self.head is None: 
            print("Linked List is empty")
        else: 
            current = self.head 
            while current is not None: 
                print(f"{current.data}", end = ", ")
                current = current.next_link # iterate to next node. 
            print()
    
    def remove(self, element):
        if self.head is not None: 
            current = self.head 
            previous = current 
            while (current is not None) and (current.data !=  element): 
                previous = current 
                current = current.next_link # iterate to next node. 
            if current is not None: 
                if current is self.head: 
                    self.head = self.head.next_link # update head of linked list, delete the head node. 
                else: 
                    previous.next_link = current.next_link # delete target node. 

    def search(self, key): 
        if self.head is not None: 
            current = self.head 
            while current is not None: 
                if current.data == key: # if key found 
                    return (True, current.data) # return True and data 
                current = current.next_link # iterate over next node. 
            return (False, None) # return False , if key not found. 
    


    