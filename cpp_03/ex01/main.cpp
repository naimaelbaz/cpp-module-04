/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nel-baz <nel-baz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 09:38:59 by nel-baz           #+#    #+#             */
/*   Updated: 2023/12/13 12:41:49 by nel-baz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap *p = new ScavTrap;

	p->attack("target");
	delete p;
	
	// ScavTrap ob1("Player1");
	// ScavTrap ob2 = ob1;

	// ob1.attack("target1");
	// ob2.attack("target2");

	// ob1.takeDamage(5);
	// ob2.takeDamage(26);

	// ob1.beRepaired(5);
	// ob2.beRepaired(10);

	// ob2.guardGate();
}

