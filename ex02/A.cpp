#include "A.hpp"

A::A( void ) {
    return;
}

A::A( A const &src ) {
    *this = src;
    return;
}

A::~A( void ) {
    return;
}

A&  A::operator=( A const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}
