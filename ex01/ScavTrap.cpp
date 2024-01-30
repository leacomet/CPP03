/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:57:28 by acomet            #+#    #+#             */
/*   Updated: 2024/01/30 18:48:48 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : _Name("noname") {

	std::cout << "Default ScavTrap constructor called" << std::endl;
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : _Name(name) {

	std::cout << "Parameter ScavTrap constructor called" << std::endl;
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &src) {

	std::cout << "Copy ScavTrap constructor called" << std::endl;
	this->_Hit_Points = 100;
	this->_Energy_Points = 50;
	this->_Attack_Damage = 20;
	*this = src;
	return;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "Default ScavTrap destructor called" << std::endl;
	return;
}


// ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
// 
	// this->_Name = rhs.get_Name();
	// return (*this);
// }

void	guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode. " << std::endl;
	return;
}
