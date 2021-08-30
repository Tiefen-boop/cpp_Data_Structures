//
// Created by ikak on 10/08/2021.
//

#ifndef CPP_DATA_STRUCTURES_LINKEDLIST_H
#define CPP_DATA_STRUCTURES_LINKEDLIST_H

#include "Link.h"
#include "List.h"

template<typename T>
class LinkedList : List<T>{
private:
    Link<T>* first;
    Link<T>* last;
    int dataSize = 0;
    void rangeCheck(int index);
public:
    Link<T>* getFirst();
    Link<T>* getLast();
    int size();
    void add(T element);
    void add(int index, T element);
    void addFirst(T element);
    T set(int index, T element);
    T get(int index);
    bool remove(T element);
    T remove(int index);
    bool contains(T element);
    bool isEmpty();
    std::string toString();
};



#endif //CPP_DATA_STRUCTURES_LINKEDLIST_H
