/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:12 by bifernan          #+#    #+#             */
/*   Updated: 2024/10/02 16:33:44 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) 
{
	std::cout << "\n # MANDATORY BASIC TESTS...\n";
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	
	std::cout << "\n # BONUS TEST...\n";
	std::cout << Fixed::min( a, b ) << std::endl;

	std::cout << "\n # INITIALIZING TEST VARIABLE...\n";
	Fixed test;
	test = Fixed(3) * Fixed(9);
	std::cout << "test = " << test << std::endl;

	std::cout << "\n # PROCESSING LOGICAL TESTS...\n";
	if (test >= 42)
		std::cout << "test >= 42" << std::endl;
	if (test <= 42)
		std::cout << "test <= 42" << std::endl;
	if (test > 42)
		std::cout << "test > 42" << std::endl;
	if (test < 42)
		std::cout << "test < 42" << std::endl;
	if (test == 42)
		std::cout << "test == 42" << std::endl;
	if (test != 42)
		std::cout << "test != 42" << std::endl;
	std::cout << "\n # PROCESSING A BIG OPERATION...\n";
	test = test * Fixed(3) - test * Fixed(12) + test / Fixed(5);
	test = test * -1;
	std::cout << "test is NOW equal to : " << test << std::endl;
	std::cout << "raw bits = " << test.getRawBits() << std::endl;
	std::cout << "\n # SUBSTRACTING 500 EPSILONS...\n";
	for (int i = 0 ; i < 500 ; ++i)
	{
		--test;
	}
	std::cout << "test is now equal to : " << test << std::endl;
	std::cout << "raw bits = " << test.getRawBits() << std::endl;
	std::cout << "float = " << test.toFloat() << std::endl;
	std::cout << "int = " << test.toInt() << std::endl;
	return 0;
}
