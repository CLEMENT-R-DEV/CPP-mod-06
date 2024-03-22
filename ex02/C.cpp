#include "C.hpp"

C::C( void ) {
    return;
}

C::C( C const &src ) {
    *this = src;
    return;
}

C::~C( void ) {
    return;
}

C&  C::operator=( C const &src ) {
    if (this != &src)
        *this = src;
    return (*this);
}