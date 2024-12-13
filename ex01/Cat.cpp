/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:12:14 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 12:12:14 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), _type("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
	this->_brain = new Brain();
}	

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy._type;
	this->_brain = new Brain(*copy._brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat copy assignment operator called." << std::endl;
	if (this != &copy)
	{
		_type = copy._type;
		delete _brain;
		this->_brain = new Brain(*copy._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow!" << std::endl;
}

std::string Cat::getType() const
{
	return _type;
}

Brain *Cat::getBrain() const
{
	return _brain;
}