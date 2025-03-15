#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>

class Deque {
public:
   // Member functions that may change the queue
   virtual bool PushFront(int item) = 0;
   virtual bool PushBack(int item) = 0;
   virtual int PopFront() = 0;
   virtual int PopBack() = 0;
   
   // Member functions that do not change the queue
   virtual int GetLength() const = 0;
   virtual bool IsEmpty() const = 0;
   virtual int PeekFront() const = 0;
   virtual int PeekBack() const = 0;
   virtual void Print(std::ostream& printStream = std::cout,
      const std::string& separator = ", ") const = 0;
};

#endif