/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benmoham <benmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:32:54 by benmoham          #+#    #+#             */
/*   Updated: 2022/06/08 12:05:22 by benmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed():_result(0)
{
	std::cout<<  "\e[0;33mDefault Constructor called\e[0m"  << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout<< "\e[0;33mCopy Constructor called\e[0m" << std::endl;
	_result = src._result;
	//*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout<< "\e[0;33mDestructor called\e[0m"<< std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &				Fixed::operator=( Fixed const & rhs )
{
	std::cout<< "\e[0;31mCopy assignment operator called\e[0m"<< std::endl;
	if ( this != &rhs )
	{
		this->_result = rhs.getRawBits();
	}
	return *this;
}

 
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int		Fixed::getRawBits() const
{
	std::cout<< "\e[0;32mgetRawBits member function called\e[0m"<< std::endl;
	return(_result);
}

void	Fixed::setRawBits(int const raw)
{
	_result = raw;
}


/* ************************************************************************** */