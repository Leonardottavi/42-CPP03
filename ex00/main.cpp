/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lottavi <lottavi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:10:35 by lottavi           #+#    #+#             */
/*   Updated: 2024/12/04 15:27:53 by lottavi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	claptrap("CL4P-TP");

	claptrap.attack("target1");
	claptrap.takeDamage(5);
	claptrap.beRepaired(3);
	claptrap.attack("target2");
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);

	return 0;
}
