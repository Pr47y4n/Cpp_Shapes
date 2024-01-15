# Project Shapes in C++

This C++ project illustrates the principles of object-oriented programming, specifically focusing on the concepts of inheritance and abstract classes through the representation of geometric shapes.

# Features

* **Abstract Shape Class**: The project defines an abstract base class called Shape that serves as the blueprint for various geometric shapes.

* **Inheritance**: Different geometric shapes, such as Circle, Rectangle, and Triangle, inherit from the abstract Shape class, showcasing the concept of inheritance.

* **Polymorphism**: The project demonstrates polymorphism by allowing different shapes to be treated uniformly through pointers or references to the base Shape class.

* **Encapsulation**: Each shape class encapsulates its specific properties and behavior, promoting modularity and code organization.


# Installation

Clone the repository to your local machine and copy the relevant source files to your project directory.

# Usage

Include the necessary header files in your **main.cpp** and create instances of different shape classes and test their functionalities. Utilize polymorphism to treat them uniformly through pointers or references to the base **Shape** class.

    #include <iostream>
    #include "shape.h"
    #include "circle.h"
    #include "rectangle.h"
    #include "triangle.h"

    int main() {
    // Create instances of different shapes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    // Demonstrate polymorphism
    Shape* shapes[] = {&circle, &rectangle, &triangle};
    for (const auto& shape : shapes) {
        shape->display();
        std::cout << "Area: " << shape->calculateArea() << std::endl;
        std::cout << "Perimeter: " << shape->calculatePerimeter() << std::endl;
        std::cout << "----------------------" << std::endl;
    }

    return 0;
}
# Contributing

Contributions are welcome! If you have ideas for additional features, improvements, or bug fixes, please open an issue or submit a pull request.
