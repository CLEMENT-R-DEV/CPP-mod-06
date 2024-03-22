#include <cstdlib>
#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Initialisation du générateur de nombres pseudo-aléatoires
// std::clock() est l'horloge systeme, pour mieux randomiser.
Base*   generate( void ) {
	std::srand(std::time(NULL) + std::clock());
    int rdm = rand() % 3;
    if (rdm == 0)
        return (new A());
    else if (rdm == 1)
        return (new B());
    else if (rdm == 2)
        return (new C());
    else {
        std::cerr << "randomizer error" << std::endl;
        return (NULL);
    }
}

void    identify( Base* p ) { // pointeur comme param
    A*  pa;
    B*  pb;
    C*  pc;

    if ((pa = dynamic_cast<A*>(p))) // si conversion reussie alors 'p' est de la classe devrivee A
        std::cout << "identified : class A" << std::endl;
    else if ((pb = dynamic_cast<B*>(p)))
        std::cout << "identified : class B" << std::endl;
    else if ((pc = dynamic_cast<C*>(p)))
        std::cout << "identified : class C" << std::endl;
    else // Si 'p' ne pointe vers aucune classe derivee.
        std::cerr << "pointer identification failed" << std::endl;
}

void    identify( Base& p ) { // reference comme param
    A*  pa;
    B*  pb;
    C*  pc;

    if ((pa = dynamic_cast<A*>(&p)))
        std::cout << "identified : class A" << std::endl;

    else if ((pb = dynamic_cast<B*>(&p)))
        std::cout << "identified : class B" << std::endl;

    else if ((pc = dynamic_cast<C*>(&p)))
        std::cout << "identified : class C" << std::endl;
	else // Si 'p' ne pointe vers aucune classe derivee.
        std::cerr << "pointer identification failed" << std::endl;
}


int main( void ) {
    Base	*base;

    std::cout << std::endl;
	std::cout << "/*----------Pointer----------*/" << std::endl;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	base = generate();
	identify(base);
	delete base;

	std::cout << std::endl;
    std::cout << "/*----------Reference----------*/" << std::endl;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;

	base = generate();
	identify(*base);
	delete base;
    
    return (0);
}