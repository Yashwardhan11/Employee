#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    double salary;

public:
    // Default constructor
    Employee() : name(""), id(0), salary(0.0) {}

    // Parameterized constructor
    Employee(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }

    // Copy constructor
    Employee(const Employee &other) {
        name = other.name;
        id = other.id;
        salary = other.salary;
    }

    // Method to display employee details
    void display() const {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary << endl;
    }

    // Method to set employee details
    void setDetails(string empName, int empId, double empSalary) {
        name = empName;
        id = empId;
        salary = empSalary;
    }
};

int main() {
    const int SIZE = 3;  // Number of employees
    Employee employees[SIZE];  // Array of Employee objects

    // Input employee details
    for (int i = 0; i < SIZE; i++) {
        string name;
        int id;
        double salary;

        cout << "Enter details for Employee " << i + 1 << " (Name, ID, Salary): ";
        cin >> name >> id >> salary;
        employees[i].setDetails(name, id, salary);
    }

    // Display original employee details
    cout << "\nOriginal Employee Details:\n";
    for (int i = 0; i < SIZE; i++) {
        employees[i].display();
    }

    // Copy an employee's details
    cout << "\nCopying Employee 1 details to a new Employee object...\n";
    Employee copiedEmployee = employees[0];  // Using copy constructor

    // Display copied employee details
    cout << "Copied Employee Details:\n";
    copiedEmployee.display();

    return 0;
}