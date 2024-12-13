/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:57:48 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 11:57:48 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), _type("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
}	

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}	

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
		_type = copy._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Woof Woof!" << std::endl;
}

std::string Dog::getType() const
{
	return _type;
}	
