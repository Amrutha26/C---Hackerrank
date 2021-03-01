#include <bits/stdc++.h>
using namespace std;

int main() {
    float basic_salary, hra, gross_salary, da;
    cout << "Enter the employee's salary";
    cin >> basic_salary;
    if(basic_salary < 1500) {
        hra = 0.1 * basic_salary;
        da = 0.9 * basic_salary;
    } else {
        hra = 500;
        da = 0.98 * basic_salary;
    }

    gross_salary = basic_salary + hra + da;
    cout << "Gross salary is: " << gross_salary;

    return 0;
}
