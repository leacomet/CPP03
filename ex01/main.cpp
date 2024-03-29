/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:16:26 by acomet            #+#    #+#             */
/*   Updated: 2024/02/02 21:14:53 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a;
	ScavTrap	b("BIGname");
	ClapTrap	c;
	ScavTrap	d(b);

	b.attack("b");
	int	i = 0;
	std::cout << "a will attack 52 times :" << std::endl;
	while (i < 52)
	{
		a.attack("oui");
		i++;
	}
	a.guardGate();
	b.beRepaired(10);
	b.takeDamage(99);
	b.takeDamage(1);
	b.takeDamage(99);
	a.guardGate();
	b.guardGate();
	c.attack("d");
	d = b;
	d.beRepaired(10);
	d.guardGate();
}
