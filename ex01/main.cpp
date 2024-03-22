#include "Serializer.hpp"

int main( void ) {
    Data        *p1 = new Data;
    Data        *p2;
    uintptr_t   raw;

    p1->data = "Test";
    std::cout << "p1->data = " << p1->data << std::endl;
    std::cout << "serialize p1 then deserialize to create p2" << std::endl;
    raw = Serializer::serialize(p1); // stock un pointeur (p1) converti en entier non signé (uintptr_t)
    p2 = Serializer::deserialize(raw);
    std::cout << "p2->data = " << p2->data << std::endl;
    delete p1; // car p1 est alloue dynamiquement avec 'new'
    return (0);
}