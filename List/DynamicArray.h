//
// Created by ikak on 08/08/2021.
//

#ifndef CPP_DATA_STRUCTURES_DYNAMICARRAY_H
#define CPP_DATA_STRUCTURES_DYNAMICARRAY_H

#include "List.h"

template<typename T>
class DynamicArray : public List<T>{
private:
    T* data = new T[1];
    int capacity = 1;
    int dataSize = 0;
    void increaseCapacity();
    void rangeCheck(int index);
public:
    DynamicArray();
    //explicit DynamicArray(int initialCapacity);
    int size();
    void add(T element);
    void add(int index, T element);
    T set(int index, T element);
    T get(int index);
    bool remove(T element);
    T remove(int index);
    bool contains(T element);
    bool isEmpty();
    std::string toString();
};

#endif //CPP_DATA_STRUCTURES_DYNAMICARRAY_H