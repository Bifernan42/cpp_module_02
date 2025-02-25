/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:22:07 by bifernan          #+#    #+#             */
/*   Updated: 2024/10/02 16:21:52 by bifernan         ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed &);
		Fixed& operator=(const Fixed &);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
