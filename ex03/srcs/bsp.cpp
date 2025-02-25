#include "../includes/Point.hpp"


Fixed Point::det(const Point & u, const Point & v)
{
	Fixed det;
	det = (u.getX() * v.getY()) - (v.getX() * u.getY());
	return det;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	if (a == point || b == point || c == point)
	{
		std::cout << "false : point matching a summit" << std::endl;
		return (false);
	}
	Point const vect_ab(b.getX().toFloat() - a.getX().toFloat(), b.getY().toFloat() - a.getY().toFloat());
	Point const vect_ac(c.getX().toFloat() - a.getX().toFloat(), c.getY().toFloat() - a.getY().toFloat());
	if (Point::det(vect_ab, vect_ac) == 0)
	{
		std::cerr << "Error : flat triangle" << std::endl;
		return (0);
	}
	Point const vect_pa(a.getX().toFloat() - point.getX().toFloat(), a.getY().toFloat() - point.getY().toFloat());
	Point const vect_pb(b.getX().toFloat() - point.getX().toFloat(), b.getY().toFloat() - point.getY().toFloat());
	Point const vect_pc(c.getX().toFloat() - point.getX().toFloat(), c.getY().toFloat() - point.getY().toFloat());

	Fixed area_pab(Point::det(vect_pa, vect_pb));
	Fixed area_pbc(Point::det(vect_pb, vect_pc));
	Fixed area_pca(Point::det(vect_pc, vect_pa));
	std::cout << "area PABP' = " << area_pab.toFloat() << std::endl;
	std::cout << "area PBCP' = " << area_pbc.toFloat() << std::endl;
	std::cout << "area PCAP' = " << area_pca.toFloat() << std::endl;
	if ((area_pab > 0 && area_pbc > 0 && area_pca > 0) || (area_pab < 0 && area_pbc < 0 && area_pca < 0))
	{
		std::cout << "true : point inside triangle" << std::endl;
		return (true);
	}
	else
	{
		if (area_pab == 0 || area_pbc == 0 ||  area_pca == 0)
			std::cout << "false : point matching an edge" << std::endl;
		else
			std::cout << "false : point outside triangle" << std::endl;
		return (false);
	}
}
