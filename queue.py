class Queue:

    def __init__(self):
        self.queue = []

    def isEmpty(self):
        return self.queue == []

    def enqueue(self,data):
        self.queue.append(data)

    def dequeue(self):
        data = self.queue[0]
        del self.queue[0]
        return data

    def peek(self):
        return self.queue[0]

    def sizeOfQueue(self):
        return len(self.queue)

    def printQueue(self):
        for x in self.queue:
            print(x, " ")


#test the Queue

q = Queue()
q.enqueue(1)
q.enqueue(3)
q.enqueue(4)
q.enqueue(6)
q.enqueue(8)
q.printQueue();
