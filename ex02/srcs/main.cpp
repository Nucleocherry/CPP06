/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leoherna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:20:27 by leoherna          #+#    #+#             */
/*   Updated: 2024/10/17 16:20:27 by leoherna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base *generate(void)
{
	Base	*base;
	std::srand(std::time(NULL));
	int i = std::rand();
	if (i % 3 == 0) {
		std::cout << "Class type A created !" << std::endl;
		base = new A();
	}
	else if (i % 3 == 1) {
		std::cout << "Class type B created !" << std::endl;
		base = new B();
	}
	else {
		std::cout << "Class type C created !" << std::endl;
		base = new C();
	}
	return (base);

	
/*
	static int random = 1;
	if (random == 3)
		random = 1;
	Base *base;
    switch (random)
	{
        case 1:
            std::cout << "Generate A" << std::endl;
			base = new A();
            break;
        case 2:
            std::cout << "Generate B" << std::endl;
			base = new B();
            break;
        case 3:
            std::cout << "Generate C" << std::endl;
			base = new C();
            break;
        default:
            std::cout << "Invalid option" << std::endl;
            break;
    }
	return base;
	*/
}

void identify(Base* p)
{
	A *tryA = dynamic_cast<A *>(p);
	B *tryB = dynamic_cast<B *>(p);
	C *tryC = dynamic_cast<C *>(p);

	if (tryA != NULL) // Utilisation de NULL en C++98
		std::cout << "Pointeur is of type A" << std::endl;
	else if (tryB != NULL)
		std::cout << "Pointeur is of type B" << std::endl;
	else if (tryC != NULL)
		std::cout << "Pointeur is of type C" << std::endl;
	else
	{
		std::cout << "Unknown type" << std::endl;
	}
}

void identify(Base& p)
{
	Base *ptr = &p;

    if (dynamic_cast<A*>(ptr) != NULL)
	{
        std::cout << "Pointeur is of type A" << std::endl;
    }
    else if (dynamic_cast<B*>(ptr) != NULL)
	{
        std::cout << "Pointeur is of type B" << std::endl;
    }
    else if (dynamic_cast<C*>(ptr) != NULL)
	{
        std::cout << "Pointeur is of type C" << std::endl;
    }
    else
	{
        std::cout << "Unknown type" << std::endl;
    }
}

int main()
{
	A a;
    B b;
    C c;

    // On utilise la référence ici
    identify(a); // Devrait afficher "Pointeur is of type A"
    identify(b); // Devrait afficher "Pointeur is of type B"
    identify(c); // Devrait afficher "Pointeur is of type C"

    Base	*base = generate();
	identify(base);
	identify(*base);
	identify(NULL);
	delete base;
}
