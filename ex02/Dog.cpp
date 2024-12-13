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

Dog::Dog() : AAnimal(), _type("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog &copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain(*copy._brain);
	this->_type = copy._type;

}	

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}	

Dog &Dog::operator=(const Dog &copy)
{
	if (this != &copy)
	{
		_type = copy._type;
		delete _brain;
		this->_brain = new Brain(*copy._brain);
	}
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

Brain *Dog::getBrain() const
{
	return _brain;
}