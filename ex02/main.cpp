/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:28:49 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 11:28:49 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
 {
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";
 	std::cout << redCode << "------- ANIMAL-------" << resetCode << std::endl;


 	const AAnimal* j = new Dog();
 	const AAnimal* i = new Cat();
	const Dog* k = new Dog();
	 Dog l = Dog();
	 Dog *m = &l;
 	std::cout << j->getType() << " " << std::endl;
 	std::cout << i->getType() << " " << std::endl;
 	i->makeSound(); //will output the cat sound!
 	j->makeSound();

	k->getBrain()->setIdea("hello", 0);
	k->getBrain()->setIdea("bye", 20);
	m->getBrain()->setIdea("hello", 1);
	m->getBrain()->setIdea("hello", 2);
	std::cout << k->getBrain()->getIdea(0) << std::endl;
	std::cout << m->getBrain()->getIdea(1) << std::endl;
	std::cout << l.getBrain()->getIdea(2) << std::endl;
	std::cout << k->getBrain()->getIdea(20) << std::endl;


 	

	std::cout << std::endl;
	std::cout << redCode << "------- ANIMAL TAB-------" << resetCode << std::endl;
	AAnimal *tab[100];
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int i = 0; i < 100; i++)
	{
		tab[i]->makeSound();
	}

	for (int i = 0; i < 100; i++)
	{
		delete tab[i];
	}

	delete i;
	delete j;
	delete k;

 return 0;
 }