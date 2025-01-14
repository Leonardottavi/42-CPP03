/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:42:54 by lottavi           #+#    #+#             */
/*   Updated: 2025/01/14 12:55:23 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
	ScavTrap scav("Scavvy");
	scav.attack("target");
	int damage, repair;
	std::cout << "Enter damage value: ";
	std::cin >> damage;
	scav.takeDamage(damage);
	std::cout << "Enter repair value: ";
	std::cin >> repair;
	scav.beRepaired(repair);
	scav.guardGate();
	return 0;
}
