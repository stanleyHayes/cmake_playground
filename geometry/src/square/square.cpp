#include <iostream>
#include <cmath>

#include "square/square.hh"

namespace square {
    Square::Square(const std::string &purpose) : Shape(purpose) {
    }

    Square::Square(const double side) : Shape{}, side{side} {
    }

    Square::Square(const std::string &purpose, const double side)
        : Shape{purpose}, side{side} {
    }

    void Square::draw() {
        std::cout << "drawing a square with side " << this->side << std::endl;
    }

    double Square::perimeter() const {
        return 4 * this->side;
    }

    double Square::area() const {
        return std::pow(this->side, 2.0);
    }

    double Square::get_side() const {
        return this->side;
    }

    void Square::set_side(const double side) {
        this->side = side;
    }
}
