
#include "Queue.h"
#include <optional>
// Do not use the following.
// It is back practice and can lead to side effects.
// Instead, use the scope resolution operator ::
// ex. std::cout
//using namespace std;

template <class T>
Queue<T>::Queue () = default;

template <class T>
Queue<T>::~Queue () = default;

template <class T>
void Queue<T>::clear () {

}

template<class T>
void Queue<T>::transferFrom(Queue<T> &source) {

}

template<class T>
Queue<T> & Queue<T>::operator=(Queue<T> const& rhs) = default;

template<class T>
void Queue<T>::enqueue(T &x) {
}

template<class T>
void Queue<T>::dequeue(T &x) {

}

template<class T>
void Queue<T>::replaceFront(T& x) {

}

template<class T>
std::optional<T> Queue<T>::front() {
   return std::nullopt;
}

template<class T>
int Queue<T>::length() {
    return _seq.length();
}

template<class T>
std::string Queue<T>::outputQueue() {
    return " ";
}




