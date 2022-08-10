#include <iostream>
using namespace std;

class Car {
    protected: // use protected instead of private for inheritance
    int fuel = 0;
    bool power = false;

    public:
    void go() {
        this -> fuel--;
    }

    void oiling (int n) {
        this -> fuel += n;
    }

    void fuel_check() {
        std::cout << "Fuel: " << fuel << std::endl;
    }
};

class suv : public Car { // inheritance
    public:
    void go() {
        this -> fuel -= 2;
    }
};

int main() {
    Car car = Car(); // can be written as Car car;
    car.oiling(100);
    car.fuel_check();

    for (int i=0; i<10; i++) {
        car.go();
    }
    car.fuel_check();
    car.oiling(100);
    for (int i=0; i<10; i++) {
        car.go();
    }
    car.fuel_check();

    suv mySuv = suv();
    mySuv.oiling(100);
    mySuv.fuel_check();

    for (int i=0; i<10; i++) {
        mySuv.go(); // repeat -2 10 times
    }
    mySuv.fuel_check(); // 100 -20 = 80
    
    mySuv.oiling(100); //80 + 100 = 180
    for (int i=0; i<10; i++) {
        mySuv.go(); // repeat -2 10 times
    }
    mySuv.fuel_check(); //180 - 20 = 160

    return 0;
}