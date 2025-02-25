/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:25:19 by bifernan          #+#    #+#             */
/*   Updated: 2024/09/30 13:31:53 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int	value;
		static const int fractionalBits;
	public:
		//ex00

		Fixed();
		Fixed(const Fixed &);
		Fixed& operator=(const Fixed &);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
		
		//ex01

		Fixed(const int);
		Fixed(const float);
		float toFloat(void) const;
		int toInt(void) const;

		//ex02
		
		bool operator>(const Fixed &) const;
		bool operator<(const Fixed &) const;
		bool operator>=(const Fixed &) const;
		bool operator<=(const Fixed &) const;

		Fixed operator+(const Fixed &) const;	
		Fixed operator-(const Fixed &) const;	
		Fixed operator*(const Fixed &) const;	
		Fixed operator/(const Fixed &) const;	
		
		Fixed& operator++();
		Fixed operator++(int);
		Fixed& operator--();
		Fixed operator--(int);

		static Fixed& min(Fixed &, Fixed &);
		static const Fixed& min(const Fixed &, const Fixed &);
		static Fixed& max(Fixed &, Fixed &);
		static const Fixed& max(const Fixed &, const Fixed &);

		//ex03

		bool operator==(const Fixed &) const;
		
};

std::ostream & operator<<(std::ostream & outstream, const Fixed& fixed);

#endif
