#include <bits/stdc++.h>
using namespace std;
// polymorphism tutorial 

class Shape { // Abstract function
public: 
    virtual double area() = 0;
}; 

class Circle: public Shape {
protected:
    double width;
public:
    Circle(double w) {
        width = w;
    }
    double area() override {
        return 3.14159 * pow((width/2), 2);
    }
};

class Rectangle: public Shape {
protected:
    double width;
    double height;
public:
    Rectangle(double w, double h) {
        this -> width = w;
        this -> height = h;
    }
    double area() override final { // if declare final - cannot override anymore later
        return width * height;
    }
};

class Square: public Rectangle {
public:
    Square(double h, double w) : Rectangle(h, w) {
    }
    double area() override { // 'virtual double Square::area()' overriding final function
        return pow(width, 2);
    }
};

void showArea(Shape &shape) {
    cout << "Area: " << shape.area() << endl;
}

int main() {
    Circle circle(3);
    cout << circle.area() << endl;
    Rectangle rectangle(3,6);
    cout << rectangle.area() << endl;
    Square square(3,3);
    cout << square.area() << endl;
    return 0;
}