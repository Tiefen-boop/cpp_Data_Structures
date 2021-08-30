//
// Created by ikak on 08/08/2021.
//

#ifndef CPP_DATA_STRUCTURES_LIST_H
#define CPP_DATA_STRUCTURES_LIST_H

#include <string>

template<typename T>
class List{
public:
    //Returns the number of elements in this list.
    virtual int size()= 0;
    //Appends the specified element to the end of this list
    virtual void add(T element)= 0;
    //Inserts the specified element at the specified position in this list
    virtual void add(int index, T element)= 0;
    //Replaces the element at the specified position in this list with the specified element. Returns previously set element;
    virtual T set(int index, T element)= 0;
    //Returns the element at the specified position in this list.
    virtual T get(int index)= 0;
    //Removes the first occurrence of the specified element from this list, if it is present
    virtual bool remove(T element)= 0;
    //Removes the element at position i and returns it
    virtual T remove(int index)= 0;
    //Returns true if this list contains the specified element.
    virtual bool contains(T element)= 0;
    //Returns true if this list contains no elements.
    virtual bool isEmpty()= 0;
    //Returns string to represent the List
    virtual std::string toString() = 0;
};

#endif //CPP_DATA_STRUCTURES_LIST_H