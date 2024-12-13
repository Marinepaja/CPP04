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
}	

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
	if (this != &copy)
		_type = copy._type;
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
