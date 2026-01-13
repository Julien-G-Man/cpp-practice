// Created by user on 8/12/2025.
#include <iostream>
#include <vector>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;

// Abstract Base Class
class Employee {
protected:
    int employeeID;
    string name;

public:
    Employee(int id, string n) : employeeID(id), name(n) {} // constructor
    virtual ~Employee() {} // Virtual destructor

    // Pure virtual function for polymorphism
    virtual double calculatePay() const = 0;

    // Getter methods
    int getID() const { return employeeID; }
    string getName() const { return name; }
};

// Salaried Employee
class SalariedEmployee : public Employee {
private:
    double monthlySalary;
public:
    SalariedEmployee(int id, string n, double salary)
        : Employee(id, n), monthlySalary(salary) {}

    double calculatePay() const override {
        return monthlySalary;
    }
};

// Hourly Employee
class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;
public:
    HourlyEmployee(int id, string n, double rate, double hours)
        : Employee(id, n), hourlyRate(rate), hoursWorked(hours) {}

    double calculatePay() const override {
        double regularHours = min(hoursWorked, 160.0); // 40 hrs/week * 4 weeks
        double overtimeHours = max(0.0, hoursWorked - 160.0);
        return (regularHours * hourlyRate) + (overtimeHours * hourlyRate * 1.5);
    }
};

// Commissioned Employee
class CommissionedEmployee : public Employee {
private:
    double baseSalary;
    double salesAmount;
    double commissionRate; // e.g., 0.1 for 10%
public:
    CommissionedEmployee(int id, string n, double base, double sales, double rate)
        : Employee(id, n), baseSalary(base), salesAmount(sales), commissionRate(rate) {}

    double calculatePay() const override {
        return baseSalary + (salesAmount * commissionRate);
    }
};

// Function to print payroll report
void printPayrollReport(const vector<Employee*>& employees) {
    cout << "Payroll Report\n";
    cout << "-----------------------------------------\n";
    cout << left << setw(10) << "ID" << setw(20) << "Name" << "Pay\n";
    cout << "-----------------------------------------\n";
    for (const auto& emp : employees) {
        cout << left << setw(10) << emp->getID()
             << setw(20) << emp->getName()
             << fixed << setprecision(2) << emp->calculatePay()
             << "\n";
    }
    cout << "-----------------------------------------\n";
}

int main() {
    // Create employees
    vector<Employee*> employees;
    employees.push_back(new SalariedEmployee(1, "Alice", 3000.00));
    employees.push_back(new HourlyEmployee(2, "Bob", 20.00, 170)); // 10 overtime hrs
    employees.push_back(new CommissionedEmployee(3, "Charlie", 1500.00, 5000.00, 0.10));

    // Print payroll report
    printPayrollReport(employees);

    // Clean up
    for (auto emp : employees) {
        delete emp;
    }

    return 0;
}


