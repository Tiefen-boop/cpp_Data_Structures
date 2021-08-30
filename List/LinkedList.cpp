//
// Created by ikak on 10/08/2021.
//

#include "LinkedList.h"

template<typename T>
Link<T> *LinkedList<T>::getFirst() {
    return first;
}

template<typename T>
Link<T> *LinkedList<T>::getLast() {
    return last;
}

template<typename T>
int LinkedList<T>::size() {
    return dataSize;
}

template<typename T>
void LinkedList<T>::add(T element) {
    Link<T>* link = new Link<T>(element);
    if (first == nullptr){
        first = link;
    } else {
        last->setNext(link);
    }
    last = link;
    dataSize++;
}

template<typename T>
void LinkedList<T>::add(int index, T element) {
    rangeCheck(index);
    Link<T>* link = new Link<T>(element);
    Link<T>* curr = first;
    for (int i = 1; i < index ; i++)
        curr = curr->getNext();
    link->setNext(curr->getNext());
    curr->setNext(link);
}

template<typename T>
void LinkedList<T>::addFirst(T element) {
    Link<T>* link = new Link<T>(element);
    link->setNext(first);
    first=link;
}

template<typename T>
T LinkedList<T>::set(int index, T element) {
    rangeCheck(index);
    Link<T>* curr = first;
    for (int i = 0; i < index ; i++)
        curr = curr->getNext();
    T returnVal = curr->getData();
    curr->setData(element);
    return returnVal;
}

template<typename T>
T LinkedList<T>::get(int index) {
    rangeCheck(index);
    Link<T>* curr = first;
    for (int i = 0; i < index ; i++)
        curr = curr->getNext();
    return curr->getData();
}

template<typename T>
bool LinkedList<T>::remove(T element) {
    if (dataSize == 0)
        return false;
    bool result = false;
    Link<T>* curr = first;
    Link<T>* prev = first;
    for (int i = 0; i < dataSize; i++){
        if (curr->getData()==element){
            if (curr == prev){
                first = first->getNext();
            } else
                prev->setNext(curr->getNext());
            return true;
        }
        prev = curr;
        curr = curr->getNext();
    }
}

template<typename T>
T LinkedList<T>::remove(int index) {
    rangeCheck(index);
    Link<T>* curr = first;
    Link<T>* prev = first;
    for (int i = 0; i < index; i++) {
        prev = curr;
        curr = curr->getNext();
    }
    T returnVal = curr->getData();
    if (curr == prev){
        first = first->getNext();
    } else
        prev->setNext(curr->getNext());
    return returnVal;
}

template<typename T>
bool LinkedList<T>::isEmpty() {
    return dataSize == 0;
}
