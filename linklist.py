class Node(object):
    def __init__(self,data):
        self.data = data;
        self.nextNode = None;

class LinkedList(object):
    def __init__(self):
        self.head = None
        self.size = 0
# O(1)
    def insertStart(self,data):
        self.size = self.size +1;
        newNode = Node(data);
        if not self.head:
            self.head = newNode;
        else:
            newNode.nextNode = self.head;
            self.head = newNode;

# this method returns linkedlist size in O(1)
    def size1(self):
        return self.size;

#this method returns linked list size in O(N)
    def size2(self):
        actualNode = self.head;
        size = 0;

        while actualNode is not None:
            size+=1;
            actualNode = actualNode.nextNode;
        return size;

    #insert a data in end of LinkedList O(N)

    def insertEnd(self,data):
        self.size = self.size+1;
        newNode = Node(data);
        actualNode = self.head;

        while actualNode.nextNode is not None:
            actualNode = actualNode.nextNode;

        actualNode.nextNode = newNode;
#traversing the linkedlist
    def traverseList(self):
        actualNode = self.head;

        while actualNode is not None:
            print(actualNode.data);
            actualNode = actualNode.nextNode;
#removing a node from linkedlist
    def remove(self,data):
        if self.head is None:
            return;
        self.size = self.size - 1;
        currentNode = self.head;
        previousNode = None;

        while currentNode.data != data:
            previousNode = currentNode;
            currentNode = currentNode.nextNode;

        if previousNode is None:
            self.head = currentNode.nextNode;
        else:
            previousNode.nextNode = currentNode.nextNode;


#testing linked lists

linkedlist = LinkedList();

linkedlist.insertStart(8);
linkedlist.insertStart(6);
linkedlist.insertStart(4);
linkedlist.insertStart(2);
linkedlist.insertStart(1);
linkedlist.insertEnd(10);
linkedlist.traverseList();
print("\n");
linkedlist.remove(8);
linkedlist.remove(2);
linkedlist.remove(4);
linkedlist.traverseList();
print("\n");
