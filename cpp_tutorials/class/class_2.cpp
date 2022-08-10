#include <bits/stdc++.h>
using namespace std;

class Animal {
    private:
    string name;
    double height;
    double weight;
    // static duration - maintain its value after terminating its scope
    static int numOfAnimals; 

    public:
    string getName() {return name;}
    void setName(string nameInput) {
        this -> name = nameInput;
    }

    double getHeight() {return height;}
    void setHeight(double heightInput) {
        this -> height = heightInput;
    }

    double getWeight() {return weight;}
    void setWeight(double weightInput) {
        this -> weight = weightInput;
    }

    void setAll(string, double, double); // declaration - define later
    Animal();
    ~Animal();
    Animal(string, double, double);

    static int getNumOfAnimals() {return numOfAnimals;}
    void ToString(); // declaration - define later
};

int Animal::numOfAnimals = 0;
void Animal::setAll(string nameInput, double heightInput, double weightInput) {
    this -> name = nameInput;
    this -> height = heightInput;
    this -> weight = weightInput;
    // Animal::numOfAnimals++;
}

Animal::Animal() {
    this -> name = "";
    this -> height = 0;
    this -> weight = 0;
    Animal::numOfAnimals++;
}

Animal::Animal(string nameInput, double heightInput, double weightInput) {
    this -> name = nameInput;
    this -> height = heightInput;
    this -> weight = weightInput;
    Animal::numOfAnimals++;
}

Animal::~Animal() {
    std::cout << "Animal " << this -> name << " destroyed!" << endl;
}

void Animal::ToString() {
    cout << this -> name << " is " << this -> height << " cms tall and " 
    << this -> weight << " kgs in weight." << endl;
}

//inheritance
class Dog: public Animal {
    private:
    string sound = "woof";
    public:
    void makeSound() {
        cout << "The dog " << this -> getName() << " says " << this -> sound << endl;
    }

    Dog(string, double, double, string); // declaration - define later
    Dog(): Animal(){}; // Dog class is a subclass of Animal class
    void ToString();
};

Dog::Dog(string name, double height, double weight, string soundInput) :
Animal(name, height, weight) {
    this -> sound = soundInput;
}

void Dog::ToString() {
    // // if variables are protected: use variable name
    // cout << this -> name << " is " << this -> height << " cms tall and " <<
    // this -> weight << " kgs in weight" << endl;

    // if variables are private: use function
    cout << this -> getName() << " is " << this -> getHeight() << " cms tall and " <<
    this -> getWeight() << " kgs in weight, " << "and says " << this -> sound << endl;
}

int main() {
    Animal Elephant;
    Elephant.setHeight(300);
    Elephant.setWeight(2000);
    Elephant.setName("Elephant Fred");
    Elephant.ToString();

    Animal mouse;
    mouse.setAll("Mouse Aaron", 15, 0.3);
    mouse.ToString();

    Animal Monkey ("Monkey John", 40, 9);
    Monkey.ToString();

    Dog puppy ("Puppy Roy", 30, 5, "woof woof woof");
    puppy.ToString();

    cout << "Number of animals: " << Animal::getNumOfAnimals() << endl;
    
}