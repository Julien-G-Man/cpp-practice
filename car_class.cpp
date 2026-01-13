// Created by user on 7/25/2025.
#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Parent/Base class
class Car {
// class is like the blueprint of what is to be built
// A class groups together data (attributes) and behavior (methods) into one unit
// -like a mini-program you can reuse and create multiple copies of.

protected:
    string companyName;
    string companyCEO;
public:
    // These are attributes/data
    string name;
    string model;
    int year{};

    // Constructor
    Car(string name, string  model, const int year): name(std::move(name)), model(std::move(model)), year(year){
        cout << "Constructor is called! Car" << name << " is created." << endl;
    }
    Car()=default; // default constructor

explicit Car(remove_reference_t<const string&>& move);

// This is necessary for the private class
    void setCompanyName(const string& companyName){ this->companyName = companyName; }
    void setCompanyCEO(const string& companyCEO){ this->companyCEO=companyCEO; }
    void printName() const { cout << "The CEO of " << companyName << " is " << companyCEO << endl; }
    // encapsulation
    [[nodiscard]] std::string getCompanyName() const{ return companyName + ", " + companyCEO; }

    //Methods (member functions) that tell you what objects do
    void startEngine() const {
        cout << name << " " << model << " is starting the engine..." << endl;
    }

    void displayInfo() const {
        cout << name << " " << model <<" (" << year << ")" << endl;
    }

    virtual void printInfo(){
        cout << "Car name: " << name << endl;
        cout << "Car model: " << model << endl;
    }

    // Destructor
    ~Car(){
        cout << "Destructor is called! Car " << name << " " << model << " is removed." << endl;
    }
};

// Derived/Child class
class SportsCar : public Car {
    string type;
    public:
        SportsCar(const string& name, const string& model,
                string  type)
            :Car(name), type(std::move(type)) {}
        string getType(){ return type; }
        void setType(const string& type) const{
            this->type;
        }
    void printInfo() override{
            cout << "Brand name: " << name << endl;
            cout << "Car Model: " << model << endl;
            cout << "Car type: " << type << endl;
        }
};

int main(){
    // car1 and car2 are objects of the class Car
    // They are the actual stuff being built from the blueprint (class)
    Car car1;

    // from private class
    cout << "----- Private Class -----" << endl;
    car1.setCompanyName("Tesla Motors");
    car1.setCompanyCEO("Elon Musk");
    car1.printName();
    cout << "Company: " << car1.getCompanyName() << endl;
    cout << endl;

    // with Constructor
    Car car3("Tesla", "Model S", 2015);

    // from public class without constructor
    cout << "----- Public Class -----" << endl;
    car1.name = "Tesla";
    car1.model = "Model X";
    car1.year = 2025;

    Car car2;
    car2.name = "BWD";
    car2.model = "Premier";
    car2.year = 2024;

    // startEngine() and displayInfo() are methods, they tell you what the objects can do
    car2.startEngine();
    car1.displayInfo();
    cout << "Car brand: " << car1.name << endl;
    cout << "Car model: " << car1.model << endl;
    cout << "Year name: " << car1.year << endl;

    /*
    // Derived class
    SportsCar raceCar("Lamborghini", "Lambo 9x", "EV");
    raceCar.setCompanyName("Lamborghini");
    raceCar.setCompanyCEO("Stephan Winkelmann");
    raceCar.printName();
    cout << raceCar.getType() << endl;
    cout << raceCar.name << " is a sports car." << endl;
    */

    return 0;
}

//  TERMS SUMMARY
// Class - serves as blueprint, describes structure
// Object - instance of a class, a specific example of the class
// Instance - synonym for object
// Instantiating - creating an object from a class (that's what constructors are used for)
// Data/Attributes - variables
// Method - Member functions that tell what the class does
// Virtual function - allows  us to execute the most derived version function when invoked

// OPP CONCEPTS
// Abstraction  : Reduce complexity + isolate impact of changes -  making something easy by hiding the complicated stuff
// Inheritance  : Eliminate redundant code - We can create derived classes (child) that inherit the properties of a parent class
// Encapsulation: Reduce complexity + increase reusability - granting access to private data only through controlled public interfaces
// Polymorphism : Refactor ugly switch/case statements -  we can treat multiple different objects as their base object type

// BINDING
// Static/compile time binding; happens when we use function overloading
// Dynamics/late binding; decide which function to invoke at runtime; happens when we use function overriding

// ACCESS CONTROL
// private = only class itself can access.
// protected = class + derived classes can access
// public = everyone can access
