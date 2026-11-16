DSA Assessment Task 2 – Stack Operations Using an Array

Student Details

* Name: LINGESH YOGAN R
* Register Number: RA2511026050159
* Institution: SRM Institute of Science and Technology, Tiruchirappalli
* Course: Data Structures and Algorithms (DSA)

Topic

Stack Operations Using an Array (C Programming)

Aim

To implement Stack operations using an array in C and understand PUSH, POP, and DISPLAY operations.

Description

This program implements a Stack using an array of fixed size 5.

Stack follows the LIFO (Last In First Out) principle.

Operations Used

1. PUSH – Inserts an element into the Stack.
2. POP – Removes the top element from the Stack.
3. DISPLAY – Displays all elements present in the Stack.

Variables Used

* SIZE – Maximum size of the Stack (5).
* stack[] – Array used to store elements.
* top – Tracks the top position of the Stack.
* item – Stores the value being inserted or removed.
* i – Loop variable used in display().

Overflow and Underflow

* Stack Overflow occurs when an insertion is attempted on a full Stack.
* Stack Underflow occurs when a deletion is attempted on an empty Stack.

Program Features

* Array-based Stack implementation.
* Overflow checking.
* Underflow checking.
* PUSH, POP, and DISPLAY functions.

Expected Output

Pushed: 10
Pushed: 20
Pushed: 30
Stack: 10 20 30
Popped: 30
Pushed: 40
Pushed: 50
Pushed: 60
Stack Overflow
Stack: 10 20 40 50 60
Popped: 60
Popped: 50
Popped: 40
Popped: 20
Popped: 10
Stack is Empty
Stack Underflow
Popped: -1

Conclusion

This program helps to understand the working of Stack operations using arrays. It demonstrates the LIFO principle and handles Stack Overflow and Stack Underflow conditions.

Technologies Used

* Programming Language: C
* Data Structure: Stack
* Platform: GitHub
