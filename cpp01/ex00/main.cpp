/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 16:57:47 by benmoham          #+#    #+#             */
/*   Updated: 2022/05/26 15:43:44 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie two("Uno");
   
	Zombie *tr = NULL;
   tr = newZombie("Dos");
   
   randomChump("Tres");
   delete tr;
   return (0);
}