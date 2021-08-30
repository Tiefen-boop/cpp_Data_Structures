#include <iostream>
#include "List/List.h"
#include "List/DynamicArray.h"

int main() {
    List<char>* list = new DynamicArray<char>();
    list->add('a');
    std::cout << list->isEmpty() << std::endl << list->toString();
}
