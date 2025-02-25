/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifernan <plgol.perso@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:34:12 by bifernan          #+#    #+#             */
/*   Updated: 2024/09/30 13:34:14 by bifernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

int main( void ) 
{
	Point const a(-5, 4);
	Point const b(7, 4);
	Point const c(3, -4);
	Point const p(-1, 2);

	std::cout << "\n # 1ST TEST... OK\n" << std::endl;
	bsp(a, b, c, p);
	std::cout << "\n # 2ND TEST... NOT OK\n" << std::endl;
	bsp(Point(-3,4), Point(3,3), Point(1, -2), Point(-5, 2));
	std::cout << "\n # 3RD TEST... MATCHING A SUMMIT\n" << std::endl;
	bsp(Point(-3,4), Point(3,3), Point(1, -2), Point(1, -2));
	std::cout << "\n # 4TH TEST... ON THE EDGE\n" << std::endl;
	bsp(Point(-3,4), Point(3,3), Point(1, -2), Point(-1, 1));
	std::cout << "\n # 5TH TEST... FLAT TRIANGLE\n" << std::endl;
	bsp(Point(0,4), Point(0,3), Point(0, -2), Point(-1, 1));
	std::cout << "\n # 6TH TEST... JUST TO BE SURE\n" << std::endl;
	bsp(Point(-1,1), Point(1,-1), Point(-2, -1), Point(-1, 0));

	return 0;
}
