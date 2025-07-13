class Node:
    def __init__(self, data):
        self.data = data  # Store data
        self.next = None  # Pointer to the next node

class LinkedList:
    def __init__(self):
        self.head = None  # Initialize empty list

    def append(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node  # If list is empty, new node becomes the head
        else:
            current = self.head
            while current.next:
                current = current.next  # Traverse to the last node
            current.next = new_node  # Add new node at the end

    def display(self):
        current = self.head
        while current:
            print(current.data, end=" -> ")
            current = current.next
        print("None")

# Example usage:
my_list = LinkedList()
my_list.append(10)
my_list.append(20)
my_list.append(30)

my_list.display()

