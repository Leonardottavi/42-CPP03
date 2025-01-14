/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:10:35 by lottavi           #+#    #+#             */
/*   Updated: 2025/01/14 12:35:01 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("CL4P-TP");

	int	damage1, damage2, repair1, repair2;

	std::cout << "\033[34mEnter damage for first attack: \033[0m";
	std::cin >> damage1;
	std::cout << "\033[34mEnter repair amount after first attack: \033[0m";
	std::cin >> repair1;
	std::cout << "\033[34mEnter damage for second attack: \033[0m";
	std::cin >> damage2;
	std::cout << "\033[34mEnter repair amount after second attack: \033[0m";
	std::cin >> repair2;

	claptrap.attack("target1");
	claptrap.takeDamage(damage1);
	claptrap.beRepaired(repair1);
	claptrap.attack("target2");
	claptrap.takeDamage(damage2);
	claptrap.beRepaired(repair2);

	return 0;
}
