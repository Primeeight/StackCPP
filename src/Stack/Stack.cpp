

#include "Stack.h"

template <class T>
Stack<T>::Stack () { }

template <class T>
Stack<T>::~Stack () { }

template <class T>
void Stack<T>::clear () {

}

template<class T>
void Stack<T>::transferFrom(Stack<T> &source) {

}

template<class T>
Stack<T> & Stack<T>::operator=(Stack<T> rhs) = default;

template<class T>
void Stack<T>::push(T &x) {

}

template<class T>
void Stack<T>::pop(T &x) {

}

template<class T>
void Stack<T>::replaceTop(T& x) {

}

template<class T>
std::optional<T> Stack<T>::top() {
    return std::nullopt;
}

template<class T>
int Stack<T>::length() {
    return 0;
}

template<class T>
std::string Stack<T>::outputStack() {
    return " ";
}
