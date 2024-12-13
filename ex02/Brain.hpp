/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaporte <mlaporte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:28:29 by mlaporte          #+#    #+#             */
/*   Updated: 2024/11/19 14:28:29 by mlaporte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
class Brain
{
public:
	Brain();
	Brain(const Brain &copy);
	~Brain();

	Brain &operator=(const Brain &copy);

	void setIdea(const std::string &idea, int index);
	std::string getIdea(int index) const;

private:
	std::string _ideas[100];
};

#endif