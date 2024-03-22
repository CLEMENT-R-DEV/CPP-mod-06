#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>
#include "DataStruct.hpp"

class Serializer
{
    private:
        Serializer( void );
        Serializer( Serializer const &src);
        ~Serializer( void );
        Serializer& operator=( Serializer const &src);
    public:
        static uintptr_t   serialize( Data *ptr ); // 'uintptr_t' utilisé pour stocker des pointeurs convertis en entiers non signés
        static Data*       deserialize( uintptr_t raw ); // 'Data' est un nom de type (structure, classe ou tout autre type défini par l'utilisateur).
};

#endif