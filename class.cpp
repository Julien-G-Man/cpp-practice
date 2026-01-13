#include<iostream>
#include<string>
#include<list>
using namespace std;

class Student {
public:
    long studentID;
    string studentName;
    string programme;
    int level;
    list <string> courses;

    // constructor
    Student(const long ID, const string& Name, const string& Program, const int Level, const list <string>& Courses)
    {
        studentID = ID;
        studentName = Name;
        programme = Program;
        level = Level;
        courses = Courses;
    }

    Student(int i, const char* str, const char* text, int i1, const char* string, const char* it, const char* str1,
            const char* pure_math, const char* stats);
};

// class describes structure
// object - specific example of structure/instance
// instantiating - creating a class for a person
// data members - variables
// methods - functions

int main() {

    Student student1(21476841, "Julien Glory Manana", "Computer Science", 100, "Discrete Math", "IT", "C++", "Pure Math", "Stats");
    student1.studentID = 21476841;
    student1.studentName = "Julien Glory Manana";
    student1.programme = "Computer Science";
    student1.level = 100;
    student1.courses = {"Discrete Math", "IT", "C++", "Pure Math", "Stats"};

    student1.courses.emplace_back("Python");
    student1.courses.emplace_front("Java");
    cout << "Student ID: " << student1.studentID << endl;
    cout << "Student Name:" << student1.studentName << endl;
    cout << "Programme: " << student1.programme << endl;
    cout << "Level: " << student1.level << endl;
    cout << "Courses: " << endl;

    for (const string& course:student1.courses){
        cout << "        -" << course << endl;
    }
    cout<<endl;

    /*
    Student student2;
    student2.studentID = 21153782;
    student2.studentName = "Daniel Myles";
    student2.programme = "Mechanical Engineering";
    student2.level = 100;
    student2.courses = {"Linear Algebra", "Thermodynamics", "Calculus", "Electronics", "Machine Design", "MATLAB"};

    cout << "Student ID: " << student2.studentID << endl;
    cout << "Student Name:" << student2.studentName << endl;
    cout << "Programme: " << student2.programme << endl;
    cout << "Level: " << student2.level << endl;
    cout << "Courses: " << endl;

    for (string course:student2.courses){
        cout << "        -" << course << endl;
    }
    */

    return 0;
}