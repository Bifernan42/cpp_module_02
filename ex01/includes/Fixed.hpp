/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:23:52 by bifernan          #+#    #+#             */
/*   Updated: 2024/10/02 16:24:09 by bifernan         ###   ########.fr       */
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
};

std::ostream & operator<<(std::ostream & outstream, const Fixed& fixed);

#endif
