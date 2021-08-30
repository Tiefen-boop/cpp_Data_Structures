//
// Created by ikak on 08/08/2021.
//

#include "DynamicArray.h"
#include <stdexcept>

template class DynamicArray<char>;

template<typename T>
DynamicArray<T>::DynamicArray() {
    data = new T[1];
}

/*
template<typename T>
DynamicArray<T>::DynamicArray(int initialCapacity) : capacity(initialCapacity){
    data = new T[initialCapacity];
}
 */

template<typename T>
int DynamicArray<T>::size() {
    return dataSize;
}

template<typename T>
void DynamicArray<T>::add(T element) {
    if (capacity == dataSize)
        increaseCapacity();
    data[dataSize] = element;
    dataSize++;
}

template<typename T>
void DynamicArray<T>::add(int index, T element) {
    rangeCheck(index);
    if (capacity == dataSize)
        increaseCapacity();
    for (int i = dataSize; i > index; i--)
        data[i] = data[i-1];
    data[index] = element;
    dataSize++;
}

template<typename T>
T DynamicArray<T>::set(int index, T element) {
    rangeCheck(index);
    T returnVal = data[index];
    data[index] = element;
    return returnVal;
}

template<typename T>
T DynamicArray<T>::get(int index) {
    rangeCheck(index);
    return data[index];
}

template<typename T>
bool DynamicArray<T>::remove(T element) {
    bool result = false;
    for (int i = 0; i < dataSize; i++)
        if (result){
            data[i] = data[i+1];
        } else {
            if (data[i] == element) {
                result = true;
                dataSize--;
                i--;
            }
        }
    return result;
}

template<typename T>
T DynamicArray<T>::remove(int index) {
    rangeCheck(index);
    T returnVal = data[index];
    for (int i = index; i < dataSize - 1; i++)
        data[i] = data[i+1];
    dataSize--;
    return returnVal;
}

template<typename T>
bool DynamicArray<T>::contains(T element) {
    for (int i = 0; i < dataSize; i++)
        if (data[i] == element) return true;
    return false;
}

template<typename T>
bool DynamicArray<T>::isEmpty() {
    return dataSize == 0;
}

template<typename T>
std::string DynamicArray<T>::toString() {
    if (isEmpty())
        return "[]";
    std::string string = "[" + std::to_string(data[0]);
    for (int i = 1; i < dataSize; i++)
        string = string + ", " + std::to_string(data[i]);
    return string + "]";
}

template<typename T>
void DynamicArray<T>::increaseCapacity() {
    T* replacement = new T[capacity+1];
    for (int i = 0; i < dataSize; i++){
        replacement[i] = data [i];
    }
    delete[] data;
    data = replacement;
    capacity++;
}

/*
template<typename T>
void DynamicArray<T>::increaseCapacity() {
    T* temp = data;
    data = new T[capacity+1];
    for (int i = 0; i < dataSize; i++){
        data[i] = temp[i];
    }
    delete[] temp;
    capacity++;
}
 */

template<typename T>
void DynamicArray<T>::rangeCheck(int index) {
    if (index < 0 || index>= dataSize)
        throw std::runtime_error("index out of range");
}
