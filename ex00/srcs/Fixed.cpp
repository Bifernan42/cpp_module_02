/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:22:48 by bifernan          #+#    #+#             */
/*   Updated: 2024/10/02 16:20:30 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::fractionalBits = 8;
		
Fixed::Fixed(const Fixed& new_value)
{
	std::cout << "Copy constructor called" << std::endl;
	value = new_value.getRawBits();
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{ 
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		value = obj.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{ 
	std::cout << "getRawBits member function called" << std::endl;
	return value ;
}

void Fixed::setRawBits( int const raw ) 
{ 
	std::cout << "setRawBits member function called" << std::endl;
	value = raw ; 
}
