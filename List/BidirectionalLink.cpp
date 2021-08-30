//
// Created by ikak on 10/08/2021.
//

#include "BidirectionalLink.h"

template<typename T>
BidirectionalLink<T>::BidirectionalLink(T data): Link<T>(data) {}

template<typename T>
void BidirectionalLink<T>::setPrev(Link<T> *prev) {
    this->prev = prev;
}

template<typename T>
Link<T> *BidirectionalLink<T>::getPrev() {
    return prev;
}
