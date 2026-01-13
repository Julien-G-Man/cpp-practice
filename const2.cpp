// Created by user on 8/7/2025.
#include <iostream>
#include <string>
#include <stdexcept> // required for std::invalid_argument

using namespace std;

class Student {
public:
    string name;
    int age;

    // parameterized constructor
    Student(string student_name, int student_age) {
        if (student_age >= 1 && student_age <= 120){
            name = student_name;
            age = student_age;
        } else {
            throw invalid_argument("Age must be between 1 and 120");
        }
    }

    // default costructor
    Student(){
        name = "default";
        age = 0;
    }

    void introduce() {
        cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
    }
};

int main(){
    Student student1("Julien", 20);
    cout << "St.1: ";
    student1.introduce();

    // This object assumes the values of the default constructor
    Student s2;
    cout << "St.2: ";
    s2.introduce();

    try {
        Student s3("Ghost", 230);
        cout << "St.3: ";
        s3.introduce();  // This won't run if constructor fails
    } catch (invalid_argument& e) {
        cout << "Error creating student: " << e.what() << endl;
    }

    try {
        Student s4("Amiri", -5);
        cout << "St.4: ";
        s4.introduce();  // This won't run if constructor fails
    } catch (invalid_argument& e) {
        cout << "Error creating student: " << e.what() << endl;
    }
}