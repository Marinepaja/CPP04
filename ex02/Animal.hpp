/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:30:33 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 11:30:33 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
public:
	AAnimal();
	AAnimal(const AAnimal &copy);
	virtual ~AAnimal();

	AAnimal &operator=(const AAnimal &copy);

	virtual void makeSound() const = 0; // pure virtual function
	virtual std::string getType() const;
protected:
	std::string _type;
};	

#endif