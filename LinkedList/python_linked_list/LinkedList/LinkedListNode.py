# filename : LinkedListNode.py 

# class : LinkedListNode 

class LinkedListNode: 

    def __init__(self): 
        self.data = None 
        self.next_link = None 

    def __str__(self): 
        return f"data : {self.data} next_node_address : {id(self.next_link)}" # return data. 

        