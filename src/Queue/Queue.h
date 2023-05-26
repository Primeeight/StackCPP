#ifndef CPP_QUEUE
#define CPP_QUEUE

#include <string>
#include <optional>
#include "../Sequence/Sequence.cpp"

/**
 * Description: Queue class as a Generic class type T.
 * is modeled by string of T
 * exemplar self
 */
template <class T>
class Queue {

public:

    /**
     * Description: Constructor that initializes all attributes of this class.
     * ! replaces self
     * ! ensures: self = <>
     */
    Queue ();

    /**
     * Description: Deconstructor that reclaims all space allocated to the heap.
     */
    ~Queue ();

    /**
     * Description: Clears all of the elements in the data structure.
     * ! clears self
     */
    void clear ();

    /**
     * Description: This method transfers the source queue to queue class and clears out source.
     * ! replaces self
     * ! clears source
     * ! ensures: self = \#source and source = \< \>
     * @param source pointer to queue to be transferred from.
     */
    void transferFrom(Queue& source);

    /**
     * Description: It is the overloading method that handles when assigning a queue to another queue.
     * ! replaces self
     * ! restores rhs
     * ! ensures: self = rhs
     * @param rhs pointer queue parameter
     * @return queue that was copied over from rhs.
     */
    Queue& operator = (Queue const& rhs);

    /**
     * Description: Queue method to add to a queue.
     * ! updates self
     * ! clears x
     * ! ensures: self = \#self * \<\#x\>
     * @param x generic pointer value to add to queue.
     */
    void enqueue (T& x);

    /**
     * Description: Queue method to delete value from queue.
     * ! updates self
     * ! replaces x
     * ! requires: self /= <>
     * ! ensures: \<x\> is prefix of \#self  and  self = \#self[1, |\#self|)
     * @param x generic pointer value to delete from queue.
     */
    void dequeue(T& x);

    /**
    * Description: This method replaces the front element and places the removed value in x.
    *   If the list is empty then the list should remain empty and x is unchanged.
    * ! updates self, x
    * ! requires: self /= <>
    * ! ensures: \<x\> is prefix of \#self  and  self = \<\#x\> * \#self[1, |\#self|)
    * @param x generic pointer value to replace in the queue's front.
    */
    void replaceFront(T& x);

    /**
     * Description: Method returns the front of the queue.
     * ! restores self
     * ! requires: self /= <>
     * ! ensures: \<front\> is prefix of self
     * @return an optional generic value for the front of the queue.
     */
    std::optional<T> front();

    /**
     * Description:
     * ! restores self
     * ! ensures: length = |self|
     * @return integer value that is the length of the queue.
     */
    int length ();


    /**
     * Description: This method outputs the values in the queue.
     * output format should match value_1, value_2, ....,value_n
     * Should not have a comma after the last value
     *  restores self
     *  ensures: length = |self|
     * @return string output of queue.
     */
    std::string outputQueue();

private: //Representation of where sequence acts as a queue holding all the elements.
    Sequence<T> _seq;
};


#endif //CPP_QUEUE
