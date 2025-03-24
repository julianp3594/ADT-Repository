#include <iostream>
#include "ArrayDeque.h"
using namespace std;

int main() {

    // Create a new deque
    ArrayDeque boundedDeque(5);
    ArrayDeque unboundedDeque;
    
    // Add values to the deques
    cout << "Adding numbers 1-3 to the back of each deque, and numbers 4-6 into the front of each deque: " << endl;
    for (int i = 1; i <= 6; i++) {
        if (i <= 3) {
            boundedDeque.PushBack(i);
            unboundedDeque.PushBack(i);
        }
        else {
            boundedDeque.PushFront(i);
            unboundedDeque.PushFront(i);
        }
    }
    cout << endl;

    // Peek front and back elements
    cout << "Peeking front and back elements of each deque: " << endl;
    cout << "Bound deque back element: " << boundedDeque.PeekBack() << endl;
    cout << "Unbound deque back element: " << unboundedDeque.PeekBack() << endl;
    cout << "Bound deque front element: " << boundedDeque.PeekFront() << endl;
    cout << "Unbound deque front element: " << unboundedDeque.PeekFront() << endl << endl;

    // Remove elements
    cout << "Removing front and back elements from each deque: " << endl;
    for (int i = 1; i <= 2; i++) {
        if ((i % 2) == 1) {
            cout << "Removed: (" << boundedDeque.PopBack() << ") from bound deque." << endl;
            cout << "Removed: (" << unboundedDeque.PopBack() << ") from unbound deque." << endl;
        }
        else {
            cout << "Removed: (" << boundedDeque.PopFront() << ") from bound deque." << endl;
            cout << "Removed: (" << unboundedDeque.PopFront() << ") from unbound deque." << endl;
        }
    }
    cout << endl;

    // Add more items
    cout << "Adding 10 and 20 to the back, and 30 and 40 to the front of each deque: " << endl;
    for (int i = 10; i <= 40; i += 10) {
        if (i <= 20) {
            boundedDeque.PushBack(i);
            unboundedDeque.PushBack(i);
        }
        else {
            boundedDeque.PushFront(i);
            unboundedDeque.PushFront(i);
        }
    }
    cout << endl;

    // Display the contents of each deque
    cout << "Bound deque maxlength: " << boundedDeque.GetMaxLength() << endl;
    cout << "Contents of bound deque: " << endl;
    while (boundedDeque.GetLength() > 0) {
        cout << boundedDeque.PopFront() << " " << endl;
    }
    cout << "Contents of unbound deque: " << endl;
    while (unboundedDeque.GetLength() >0) {
        cout << unboundedDeque.PopFront() << " " << endl;
    }

    return 0;
}