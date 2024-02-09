/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acomet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 23:16:26 by acomet            #+#    #+#             */
/*   Updated: 2024/01/31 22:58:03 by acomet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a;
	FragTrap	b("BoB");
	FragTrap	bidule("bidule");
	FragTrap	c(bidule);
	FragTrap	tuc("tuc");
	FragTrap	d;

	d = tuc;
	a.attack("oui");
	int i = 0;
	while (i < 100)
	{
		a.attack("ha!");
		i++;
	}
	b.beRepaired(5);
	bidule.highFivesGuys();
	c.takeDamage(5);
	c.beRepaired(10);
	c.takeDamage(104);
	c.takeDamage(1);
	c.takeDamage(9999999);
	tuc.attack("meshon");
	d.highFivesGuys();
	d.highFivesGuys();
	d.highFivesGuys();
	d.highFivesGuys();
}
