#include <iostream>
using namespace std;

struct Employee {
    string name,gender;
     string maritalStatus,productionUnit;
    int id,age;
    double basicSalary;
    double totalAllowances,grossSalary;

};
void addEmployee(const string productionUnit) {
    Employee employee;
      employee.productionUnit = productionUnit;
    cout << "Enter Name: "<<endl;
    cin >> employee.name;
    cout << "Enter ID Number: "<<endl;
    cin >> employee.id;
    cout << "Enter Gender (Male or Female): "<<endl;
    cin >> employee.gender;
    cout << "Enter Age: "<<endl;
    cin >> employee.age;
    cout << "Enter Marital Status: "<<endl;
    cin >> employee.maritalStatus;
    cout << "Enter Basic Salary: "<<endl;
    cin >> employee.basicSalary;

double TA, HRA, upkeepAllowance;
    if (productionUnit == "Cooking Oil") {
        if (employee.basicSalary >= 5000) {
              employee.totalAllowances = employee.basicSalary * 0.78 + employee.basicSalary * 0.20 + 500;
          employee.grossSalary = employee.basicSalary + employee.totalAllowances;
           } else if (employee.basicSalary >= 3000) {
               employee.totalAllowances = employee.basicSalary * 0.45 + employee.basicSalary * 0.15 + 400;
               employee.grossSalary = employee.basicSalary + employee.totalAllowances;
        } else {
             employee.totalAllowances = employee.basicSalary * 0.90 + employee.basicSalary * 0.10 + 300;
              employee.grossSalary = employee.basicSalary + employee.totalAllowances;

        }
    } else if (productionUnit == "Soap") {
        if (employee.basicSalary >= 5000) {
               employee.totalAllowances = employee.basicSalary * 0.67 + employee.basicSalary * 0.10 + 300;

        } else if (employee.basicSalary >= 3000) {
             employee.totalAllowances = employee.basicSalary * 0.90 + employee.basicSalary * 0.10 + 200;

        } else {
              employee.totalAllowances = employee.basicSalary * 0.70 + employee.basicSalary * 0.5 + 100;

        }
            employee.grossSalary = employee.basicSalary + employee.totalAllowances;
   }



    cout << "================================================================================================\n"<<endl;
    cout << "Production Unit: " << employee.productionUnit << "\n";
    cout << "Name: " << employee.name << "\n";
    cout << "ID Number: " << employee.id << "\n";
    cout << "Gender: " << employee.gender << "\n";
    cout << "Age: " << employee.age << "\n";
    cout << "Marital Status: " << employee.maritalStatus << "\n";
    cout << "Basic Salary: " << employee.basicSalary << "\n";
    cout << "Total Allowances: " << employee.totalAllowances << "\n";
    cout << "Gross Salary: " << employee.grossSalary << "\n";
    cout << "=================================================================================================\n"<<endl;
}
int main() {
    int choice;
    do {
        cout << "\n================== welcome to  our com-pony =====================\n"<<endl;
        cout << "1. Add Cooking Oil Production Employee\n";
        cout << "2. Add Soap Production Employee\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addEmployee("Cooking Oil");
                break;
            case 2:
                addEmployee("Soap");
                break;
            case 3:
                cout << "Exiting program.\n";
                cout<<"\nGoodbye\n"<<endl;
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}







