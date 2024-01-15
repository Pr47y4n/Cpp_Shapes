#ifndef SHAPE_H
#define SHAPE_H

class Shape{
public:
	virtual double calculate_area() const = 0;
	virtual double calculate_perimeter() const = 0;
	virtual void display_info() const = 0;
	virtual ~Shape() = default;
};

#endif // SHAPE_H
