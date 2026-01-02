#pragma once
#include <string>
#include <utility>

namespace shape {
    class Shape {
        std::string purpose;

    public:
        Shape() = default;

        virtual ~Shape() = default;

        explicit Shape(std::string purpose): purpose{std::move(purpose)}{}

        virtual void draw() = 0;

        virtual double perimeter() const = 0;

        virtual double area() const = 0;

        void set_purpose(const std::string &p);

        std::string get_purpose() const;
    };
}
