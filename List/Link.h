//
// Created by ikak on 10/08/2021.
//

#ifndef CPP_DATA_STRUCTURES_LINK_H
#define CPP_DATA_STRUCTURES_LINK_H

template<typename T>
class Link {
private:
    T data;
    Link<T>* next;
public:
    explicit Link(T data);
    void setData(T data);
    T getData();
    void setNext(Link<T>* next);
    Link<T>* getNext();
};


#endif //CPP_DATA_STRUCTURES_LINK_H
