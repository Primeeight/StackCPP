

#include "Stack.h"

template<class T>
Stack<T>::Stack() {}

template<class T>
Stack<T>::~Stack() {}

template<class T>
void Stack<T>::clear() {
    //Clear all elements.
//clear que 1
//clear que 2
que1.clear();
que2.clear();
    size = 0;


}

template<class T>
void Stack<T>::transferFrom(Stack<T> &source) {
    clear();
    std::optional<T> temp;
for (int i; i< source.length(); i++){
   source.pop(temp);
    if (temp != std::nullopt){
        push(temp);
    }
    source.clear();
}

}

template<class T>
Stack<T> &Stack<T>::operator=(Stack<T> rhs) {
    return (*this);
}

template<class T>
void Stack<T>::push(T &x) {
    if (que1.length() == 0) {
        que1.enqueue(x);
    } else {
        T pos;
        //Transfer all elements to que2.
        for (int i = 0; i < que1.length(); i++) {
            que1.dequeue(pos);
            que2.enqueue(pos);

        }
        //Enqueue the element to que1.
        que1.enqueue(x);
        //Transfer all the elements back to que1.
        for (int j = 0; j < que1.length(); j++) {
            que2.dequeue(pos);
            que1.enqueue(pos);
        }

    }
}

template<class T>
void Stack<T>::pop(T &x) {
    /*
     * set x = element at the top.
     *dequeue q1
     * return x.
     */
    que1.dequeue(x);
}

template<class T>
void Stack<T>::replaceTop(T &x) {
    if (length() == 0) {
        que1.enqueue(x);
    } else {
        T temp = x;
        pop(x);
        que1.enqueue(temp);
    }
}

template<class T>
std::optional<T> Stack<T>::top() {
    return que1.front();
}

template<class T>
int Stack<T>::length() {
    return size;
}

template<class T>
std::string Stack<T>::outputStack() {
    std::stringstream ss;
    T temp;
    if (que1.length() == 0) {
        ss << "";
    } else {
        std::stringstream ss;

        for (int i = 0; i < que1.length()-1; ++i) {
            pop(temp);
            ss << temp + ", ";
        }
        pop(temp);
        ss << temp;
    }
    return ss.str();
}
