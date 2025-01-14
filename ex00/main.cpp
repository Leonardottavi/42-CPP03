/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:10:35 by lottavi           #+#    #+#             */
/*   Updated: 2025/01/14 12:32:44 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("CL4P-TP");

	int	damage1, damage2, repair1, repair2;

	std::cout << "Enter damage for first attack: ";
	std::cin >> damage1;
	std::cout << "Enter repair amount after first attack: ";
	std::cin >> repair1;
	std::cout << "Enter damage for second attack: ";
	std::cin >> damage2;
	std::cout << "Enter repair amount after second attack: ";
	std::cin >> repair2;

	claptrap.attack("target1");
	claptrap.takeDamage(damage1);
	claptrap.beRepaired(repair1);
	claptrap.attack("target2");
	claptrap.takeDamage(damage2);
	claptrap.beRepaired(repair2);

	return 0;
}
