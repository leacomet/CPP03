/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:16:26 by acomet            #+#    #+#             */
/*   Updated: 2024/01/29 23:29:10 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a;
	ClapTrap	c("ouioui");
	ClapTrap	d(c);

	a.attack("b");
	c.attack("gobelin");
	d.attack("troll");

	int	i = 0;
	while (i < 10)
	{
		c.attack("bidule");
		i++;
	}
	c.takeDamage(5);
	c.takeDamage(5);
	c.takeDamage(5);
	d.takeDamage(8);
	d.beRepaired(10);
	i = 0;
	while (i < 11)
	{
		d.takeDamage(1);
		i++;
	}
}
