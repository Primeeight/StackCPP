
#include "Queue.h"
#include <optional>
// Do not use the following.
// It is back practice and can lead to side effects.
// Instead, use the scope resolution operator ::
// ex. std::cout
//using namespace std;

template<class T>
Queue<T>::Queue() = default;

template<class T>
Queue<T>::~Queue() = default;

template<class T>
void Queue<T>::clear() {
    _seq.clear();

}

/**
 * Transfer the source queue to queue class
 * clear out source
 * @tparam T
 * @param source
 */
template<class T>
void Queue<T>::transferFrom(Queue<T> &source) {
    _seq.transferFrom(source);
}

template<class T>
Queue<T> &Queue<T>::operator=(Queue<T> const &rhs) = default;

template<class T>
void Queue<T>::enqueue(T &x) {
    _seq.add(x, 0);
}

template<class T>
void Queue<T>::dequeue(T &x) {
    _seq.remove(x, _seq.length());

}

/**
 * If the list is empty, return the list
 * Replace the front element with x
 * Place the removed element in x
 * Generic type @tparam T temp
 * return @param x
 */
template<class T>
void Queue<T>::replaceFront(T &x) {
    if (length() == 0) {
        return;
    } else {
        enqueue(x);
        T temp = dequeue(0);
        x = temp;
        return x;
    }

}

/**
 * TODO
 * Return an optional generic type for the front of the queue.
 * @tparam T
 * @return
 */
template<class T>
std::optional<T> Queue<T>::front() {
    return _seq.entry(0);
}

template<class T>
int Queue<T>::length() {
    return _seq.length();
}

template<class T>
std::string Queue<T>::outputQueue() {
    return _seq.outputSequence();
}




