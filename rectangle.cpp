#include "rectangle.h"

#include <iostream>

double Rectangle::calculate_area() const
{
	return m_length * m_width;
}

double Rectangle::calculate_perimeter() const
{
	return 2 * (m_length + m_width);
}

void Rectangle::display_info() const
{
	std::cout << "The area of rectangle is : " << calculate_area() << std::endl;
	std::cout << "The perimeter of rectangle is : " << calculate_perimeter() << std::endl;
}
