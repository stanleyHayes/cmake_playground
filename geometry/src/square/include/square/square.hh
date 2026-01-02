#pragma once
#include <shape/shape.hh>

namespace square {
    class Square : public shape::Shape {
    public:
        Square() = default;

        explicit Square(const std::string &purpose);

        explicit Square(double side);

        Square(const std::string &purpose, double side);

        void draw() override;

        double perimeter() const override;

        double area() const override;

        double get_side() const;

        void set_side(double side);

    private:
        double side{1.0};
    };
}
