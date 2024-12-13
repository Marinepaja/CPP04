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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
 {
	std::string redCode = "\033[0;31m";
	std::string resetCode = "\033[0m";
 	std::cout << redCode << "------- ANIMAL-------" << resetCode << std::endl;

 	const Animal* meta = new Animal();
 	const Animal* j = new Dog();
 	const Animal* i = new Cat();
 	std::cout << j->getType() << " " << std::endl;
 	std::cout << i->getType() << " " << std::endl;
 	i->makeSound(); //will output the cat sound!
 	j->makeSound();
 	meta->makeSound();

 	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;
	std::cout << redCode << "-------WRONG ANIMAL-------" << resetCode << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const Animal* j2 = new Dog();
	const WrongAnimal* i2 = new WrongCat();
	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound();
	j2->makeSound();
	meta2->makeSound();
	delete meta2;
	delete j2;
	delete i2;
	

 return 0;
 }