/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:29:06 by bifernan          #+#    #+#             */
/*   Updated: 2024/10/02 16:32:23 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::fractionalBits = 8;
		
Fixed::Fixed(const Fixed& new_value)
{
	//std::cout << "Copy constructor called" << std::endl;
	value = new_value.value;
}

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed()
{ 
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		value = obj.value;
	return *this;
}

int Fixed::getRawBits( void ) const
{ 
	//std::cout << "getRawBits member function called" << std::endl;
	return value ;
}

void Fixed::setRawBits( int const raw ) 
{ 
	//std::cout << "setRawBits member function called" << std::endl;
	value = raw ; 
}

//ex02

Fixed::Fixed(const int n)
{
	//std::cout << "Int constructor called" << std::endl;
	value = n << fractionalBits;
}

Fixed::Fixed(const float x)
{
	//std::cout << "Float constructor called" << std::endl;
	value = static_cast<int>(roundf(x * (1 << fractionalBits)));
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (value >> fractionalBits);
}

std::ostream& operator<<(std::ostream& outstream, const Fixed& fixed)
{
	outstream << fixed.toFloat();
	return (outstream);
}

bool Fixed::operator>(const Fixed & fxd) const
{
	return (this->getRawBits() > fxd.getRawBits());
}

bool Fixed::operator<(const Fixed & fxd) const
{
	return (this->getRawBits() < fxd.getRawBits());
}

bool Fixed::operator>=(const Fixed & fxd) const
{
	return (this->getRawBits() >= fxd.getRawBits());
}

bool Fixed::operator<=(const Fixed & fxd) const
{
	return (this->getRawBits() <= fxd.getRawBits());
}

bool Fixed::operator==(const Fixed& x) const
{
	return (this->value == x.value);
}

bool Fixed::operator!=(const Fixed& x) const
{
	return (this->value != x.value);
}

Fixed Fixed::operator+(const Fixed& fxd) const 
{
	Fixed rez((this->toFloat() + fxd.toFloat()));
	return (rez);
}

Fixed Fixed::operator-(const Fixed& fxd) const
{
	Fixed rez((this->toFloat() - fxd.toFloat()));
	return (rez);
}

Fixed Fixed::operator*(const Fixed& fxd) const
{
	Fixed rez((this->toFloat() * fxd.toFloat()));
	return (rez);
}

Fixed Fixed::operator/(const Fixed& fxd) const
{
	Fixed rez((this->toFloat() / fxd.toFloat()));
	return (rez);
}

Fixed& Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++value;
	return (temp);
}

Fixed& Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--value;
	return (temp);
}

Fixed& Fixed::min(Fixed & a, Fixed & b) 
{
	return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed & a, const Fixed & b)
{
	return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed & a, Fixed & b)
{
	return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed & a, const Fixed & b)
{
	return (a > b) ? a : b;
}
