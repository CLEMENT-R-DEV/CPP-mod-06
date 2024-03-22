#include "B.hpp"

B::B( void ) {
    return;
}

B::B( B const &src ) {
    *this = src;
    return;
}

B::~B( void ) {
    return;
}

B&  B::operator=( B const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}