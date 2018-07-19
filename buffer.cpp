#include <iostream>

#include "buffer.h"
#include "malloc.h"


void buffer::put(char c) {
    std::cout << "put";
    if( this->data == nullptr) {
        this->size = 1000;
        this->data = (char*)malloc( this->size );
        this->wrptr++;
        this->rdptr = 0;
    }
};

char buffer::get() {
    std::cout << "get";


    return ' ';
};

