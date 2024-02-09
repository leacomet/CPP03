/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:57:28 by acomet            #+#    #+#             */
/*   Updated: 2024/01/31 22:45:57 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {

	std::cout << "Default FragTrap constructor called" << std::endl;
	this->_Name = "noname";
	this->_Hit_Points = 100;
	this->_Energy_Points = 100;
	this->_Attack_Damage = 30;
	this->_Class = "FragTrap";
	return;
}

FragTrap::FragTrap(std::string name) {

	std::cout << "Parameter FragTrap constructor called" << std::endl;
	this->_Name = name;
	this->_Hit_Points = 100;
	this->_Energy_Points = 100;
	this->_Attack_Damage = 30;
	this->_Class = "FragTrap";
	return;
}

FragTrap::FragTrap(FragTrap const &src) {

	std::cout << "Copy FragTrap constructor called" << std::endl;
	this->_Hit_Points = 100;
	this->_Energy_Points = 100;
	this->_Attack_Damage = 30;
	this->_Class = "FragTrap";
	*this = src;
	return;
}

FragTrap::~FragTrap(void) {

	std::cout << "Default FragTrap destructor called" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {

	this->_Name = rhs.get_Name();
	return (*this);
}

void	FragTrap::highFivesGuys(void) {

	if (this->_Hit_Points <= 0)
	{
		std::cout << this->_Class << " " << this->_Name << " have no remaining Hit Points !" << std::endl;
		return;
	}
	else if (this->_Energy_Points <= 0)
	{
		std::cout << this->_Class << " " << this->_Name << " have no remaining Energy Points !" << std::endl;
		return;
	}
	this->_Energy_Points--;
	std::cout << this->_Name << " : (._.)/" << std::endl;
	return;
}
