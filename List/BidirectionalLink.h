//
// Created by ikak on 10/08/2021.
//

#ifndef CPP_DATA_STRUCTURES_BIDIRECTIONALLINK_H
#define CPP_DATA_STRUCTURES_BIDIRECTIONALLINK_H

#include "Link.h"

template<typename T>
class BidirectionalLink : Link<T>{
private:
    Link<T>* prev;
public:
    explicit BidirectionalLink(T data);
    void setPrev(Link<T>* prev);
    Link<T>* getPrev();
};



#endif //CPP_DATA_STRUCTURES_BIDIRECTIONALLINK_H
