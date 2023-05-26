[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-24ddc0f5d75046c5622901739e7c5dd533143b0c8e959d652212380cedb1ea36.svg)](https://classroom.github.com/a/dCur49ua)
# Cpp Stack

<img src="https://docs.csgrader.org/files/readme/Stack.svg" height="auto" width="auto" style="border-radius:3%">

## Description
Complete the Stack class in the /src directory.
**_You must use pointers for this assignment._**

The container that holds elements for this Stack should be two 
Queues. This is called
layered components, you are building one software component
on top of an already existing one. 

As an example when you are implementing a push, you can always call the
enqueue function to push an element to the beginning of the
stack. Also, when you are implementing the pop of your stack, you can
simply call the dequeue function of Queue to pop from the front of the stack.

### Boundary Conditions To Consider

1. What happens in the push and pop methods if the position is out of bounds?

2. What is the length of an empty Stack?

3. What is the outcome of top function if the position is out of bounds?

4. What is the outcome of replaceTop function if the position is out of bounds?

5. What is the outcome of clear function if Stack is already empty?

## Required Tasks
To complete this assignment you must do the following:
- Create a minimum of three integer test cases for each method in Stack.
- Create a minimum of three string test cases for each method in Stack.
- Copy the test cases for Sequence and Queue from Assignment 2.

Note: When you add a test file you will need to add the path to the add_executable(...) macro
in the test\CMAkeLists.txt file.

## Resources
Tutorial on stringstream:
https://www.softwaretestinghelp.com/stringstream-class-in-cpp/

More on Stacks: 

https://www.geeksforgeeks.org/introduction-to-stack-data-structure-and-algorithm-tutorials/

https://www.baeldung.com/cs/stack-two-queues
