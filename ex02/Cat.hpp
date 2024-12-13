/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:09:55 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/14 12:09:55 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat &operator=(const Cat &copy);

	void makeSound() const;
	std::string getType() const;
	Brain *getBrain() const;
	
protected:
	std::string _type;
	Brain *_brain;
};

#endif