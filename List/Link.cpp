//
// Created by ikak on 10/08/2021.
//

#include "Link.h"

template<typename T>
Link<T>::Link(T data) : data(data){}

template<typename T>
void Link<T>::setData(T data) {
    this->data = data;
}

template<typename T>
T Link<T>::getData() {
    return data;
}

template<typename T>
void Link<T>::setNext(Link<T> *next) {
    this->next = next;
}

template<typename T>
Link<T>* Link<T>::getNext() {
    return next;
}