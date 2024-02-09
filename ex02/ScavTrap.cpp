/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:57:28 by acomet            #+#    #+#             */
/*   Updated: 2024/01/31 22:24:49 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {

	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Name = "noname";
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	this->_Class = "ScavTrap";
	return;
}

ScavTrap::ScavTrap(std::string name) {

	std::cout << "Parameter ScavTrap constructor called" << std::endl;
	this->_Name = name;
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	this->_Class = "ScavTrap";
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	this->_Class = "ScavTrap";
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Default ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {

	this->_Name = rhs.get_Name();
	return (*this);
}

void	ScavTrap::guardGate() {

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
	std::cout << this->_Class << " " << this->_Name << " is now in Gate keeper mode. " << std::endl;
	return;
}
