#ifndef CPP_STACK_H
#define CPP_STACK_H

#include <string>
#include <optional>
#include "../Queue/Queue.cpp"

/**
 * Description: Stack class as a Generic class type T.
 */

template<class T>
class Stack {
public:

    /**
    * Description: Constructor that initializes all attributes of this class.
    * alters self
    * ensures: self =\< \>
    */
    Stack();

    /**
    * Description: Deconstructor that reclaims all space allocated to the heap.
    */
    ~Stack();

    /**
    * Description: Clears all of the elements in the data structure.
    * alters self
    * ensures: self = \< \>
    */
    void clear();

    /**
    * Description: transfers the source stack to stack class and clears out source.
    * alters self, source
    * ensures self = \#source  and  source = \< \>
    * @param source pointer to Stack to be transferred from.
    */
    void transferFrom(Stack &source);

    /**
     * Description: It is the overloading method that handles when assigning a stack to another stack.
     * ! replaces self
     * ! restores rhs
     * ! ensures: self = rhs
     * @param rhs pointer stack parameter
     * @return stack that was copied over from rhs.
     */
    Stack &operator=(Stack rhs);

    /**
    * Description: adds a element to top of stack
    * alters self
    * consumes x
    * ensures: self = \<\#x\> * self
    * @param x x generic pointer value to add to stack.
    */
    void push(T &x);

     /**
     * Description: removes element at top of stack
     * alters self
     * produces x
     * requires: self /= \< \>
     * ensures: \<x\> is prefix of \#self  and  self = \#self[1, |\#self|)
     * @param x x generic pointer value to obtain value removed to stack.
     */
    void pop(T &x);

    /**
    * Description: This method replaces the top element and places the removed value in x.
    * alters self, x
    * requires: self /= \< \>
    * ensures: \<x\> is prefix of \#self  and  self = \<\#x\> * \#self[1, |\#self|)
    * @param x generic pointer value to replace top value.
    */
    void replaceTop(T &x);

    /**
     * Description: Method returns the top of the stack.
     * @return an optional generic value representing top of stack.
     */
    std::optional<T> top();

    /**
     * Description:
     * preserves self
     * requires: self /= \< \>
     * ensures: \<top\> is prefix of self
     * @return integer value that is the length of the queue.
     */
    int length();

    /**
     * Description: This method outputs the values in the stack.
     * preserves self
     * ensures: length = |self|
     */
    std::string outputStack();

private: // Representation
    Queue<T> que1;
    Queue<T> que2;
    int size = 0;
};

#endif //CPP_STACK_H
