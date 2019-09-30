class Stack:
    def __init__(self):
        self.stack = []

    def isEmpty(self):
        return self.stack == []

    def push(self,data):
        self.stack.append(data);

    def pop(self):
        data = self.stack[-1]
        del self.stack[-1]
        return data

    def peek(self):
        return self.stack[-1]

    def sizeStack(self):
        return len(self.stack)

    def printStack(self):
        for x in reversed(self.stack):
            print(x, " ")

#testing the Stack

stack = Stack()
stack.push(2)
stack.push(4)
stack.push(6)
stack.push(8)
stack.push(10)

stack.printStack()
print("popped: ",stack.pop())
print("peeked: ",stack.peek())
print("size: ",stack.sizeStack())
print("empty: ",stack.isEmpty())
print("\n");
stack.printStack()
