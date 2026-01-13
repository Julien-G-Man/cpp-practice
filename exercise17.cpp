// Created by user on 8/10/2025.

#include <iostream>
#include <cmath>        // For pow() function to calculate exponents
#include <iomanip>      // For setprecision() to control decimal places
using namespace std;

// Class to handle savings calculations
class SavingsCalculator {
private:
    double periodicDeposit; // Amount deposited each period
    int m;                   // Number of compounding periods per year
    double interestRate;     // Annual interest rate (decimal form)
    int years;               // Number of years to save

public:
    // Default constructor
    SavingsCalculator() : periodicDeposit(0.0), m(0), interestRate(0.0), years(0) {}

    // Parameterized constructor
    SavingsCalculator(double deposit, int periodsPerYear, double rate, int numYears) {
        periodicDeposit = deposit;
        m = periodsPerYear;
        interestRate = rate;
        years = numYears;
    }

    // Method to set values after object creation
    void setValues(double deposit, int periodsPerYear, double rate, int numYears) {
        periodicDeposit = deposit;
        m = periodsPerYear;
        interestRate = rate;
        years = numYears;
    }

    // Method to calculate future value of periodic deposits
    double calculateFutureValue() {
        double ratePerPeriod = interestRate / m;      // Interest per compounding period
        int totalPeriods = m * years;                 // Total number of deposits
        // Formula for future value of annuity
        return periodicDeposit * ((pow(1 + ratePerPeriod, totalPeriods) - 1) / ratePerPeriod);
    }

    // Method to calculate required deposit to reach a target
    double calculateRequiredDeposit(double targetAmount) {
        double ratePerPeriod = interestRate / m;
        int totalPeriods = m * years;
        // Rearranged annuity formula to solve for deposit
        return (targetAmount * ratePerPeriod) / (pow(1 + ratePerPeriod, totalPeriods) - 1);
    }
};

int main() {
    int choice;

    // Menu loop (only repeats if invalid input)
    while (true) {
        cout << "===== Savings Calculator =====" << endl;
        cout << "1. Calculate Future Value" << endl;
        cout << "2. Calculate Required Deposit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // --- Calculate Future Value ---
            double deposit, rate;
            int m, years;

            cout << "Enter periodic deposit amount: ";
            cin >> deposit;
            cout << "Enter periods per year (e.g., 12 for monthly): ";
            cin >> m;
            cout << "Enter annual interest rate (decimal, e.g., 0.048 for 4.8%): ";
            cin >> rate;
            cout << "Enter number of years: ";
            cin >> years;

            // Create object and calculate
            SavingsCalculator calc(deposit, m, rate, years);
            double futureValue = calc.calculateFutureValue();

            // Display result with 2 decimal places
            cout << fixed << setprecision(2);
            cout << "==============================" << endl;
            cout << "Future Value: $" << futureValue << endl;
            cout << "==============================" << endl;
            break; // Exit program after valid calculation

        }
        else if (choice == 2) {
            // --- Calculate Required Deposit ---
            double target, rate;
            int m, years;

            cout << "Enter target amount: ";
            cin >> target;
            cout << "Enter periods per year (e.g., 12 for monthly): ";
            cin >> m;
            cout << "Enter annual interest rate (decimal, e.g., 0.048 for 4.8%): ";
            cin >> rate;
            cout << "Enter number of years: ";
            cin >> years;

            // Create object with zero deposit (we’ll calculate it)
            SavingsCalculator calc;
            calc.setValues(0, m, rate, years);

            // Calculate deposit needed per period
            double requiredDeposit = calc.calculateRequiredDeposit(target);

            // Display result with 2 decimal places
            cout << fixed << setprecision(2);
            cout << "=================================================" << endl;
            cout << "Required Deposit per period: $" << requiredDeposit << endl;
            cout << "=================================================" << endl;
            break; // Exit program after valid calculation

        }
        else {
            // Invalid menu choice, ask again without restarting program
            cout << "Invalid choice. Please try again." << endl;
            continue;
        }
    }

    return 0;
}
