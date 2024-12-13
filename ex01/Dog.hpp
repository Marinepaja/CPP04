/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:49:25 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 11:49:25 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &copy);
	~Dog();

	Dog &operator=(const Dog &copy);

	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;

private:
	std::string _type;
	Brain *_brain;

};
#endif