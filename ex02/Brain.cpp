/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:31:52 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/19 14:31:52 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = cpy;

}

Brain &Brain::operator=(const Brain &cpy)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			_ideas[i] = cpy._ideas[i];
	}
	return *this;
}

std::string Brain::getIdea(int index) const
{
	return _ideas[index];
}

void Brain::setIdea(const std::string &idea, int index)
{
	_ideas[index] = idea;
}