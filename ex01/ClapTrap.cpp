/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 22:22:33 by acomet            #+#    #+#             */
/*   Updated: 2024/01/30 18:04:20 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _Name("noname"), _Hit_Points(10), _Energy_Points(10), _Attack_Damage(0) {

	std::cout << "Default ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_Points(10), _Energy_Points(10), _Attack_Damage(0) {

	std::cout << "Parameter ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(ClapTrap const &src) : _Hit_Points(10), _Energy_Points(10), _Attack_Damage(0) {

	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
	return;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "Default ClapTrap destructor called" << std::endl;
	return;
}

std::string	ClapTrap::get_Name(void) const {

	return (this->_Name);
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {

	this->_Name = rhs.get_Name();
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {

	if (this->_Hit_Points <= 0)
	{
		std::cout << "ClapTrap have no remaining Hit Points !" << std::endl;
		return;
	}
	else if (this->_Energy_Points <= 0)
	{
		std::cout << "ClapTrap have no remaining Energy Points !" << std::endl;
		return;
	}
	this->_Energy_Points--;
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_Attack_Damage << " points of damage!" << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if (this->_Hit_Points <= 0)
	{
		std::cout << "ClapTrap is already dead!" << std::endl;
		return;
	}
	this->_Hit_Points -= amount;
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage";
	if (this->_Hit_Points <= 0)
		std::cout << " And died of it";
	std::cout << "!" << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (this->_Hit_Points <= 0)
	{
		std::cout << "ClapTrap have no remaining Hit Points !" << std::endl;
		return;
	}
	else if (this->_Energy_Points <= 0)
	{
		std::cout << "ClapTrap have no remaining Energy Points !" << std::endl;
		return;
	}
	this->_Energy_Points--;
	this->_Hit_Points += amount;
	if (this->_Hit_Points > 10)
		this->_Hit_Points = 10;
	std::cout << "ClapTrap " << this->_Name << " repaired " << amount << " points of damage!" << std::endl;
	return;
}
