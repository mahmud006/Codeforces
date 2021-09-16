#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Employee
{
public:
    string Name; //attributes
    string Company;
    int Age;

    void introduce()
    {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee employee1 = Employee("mhmd", "zdx", 22);
    // employee1.Name = "mhmd";
    // employee1.Company = "zdx";
    // employee1.Age = 22;
    employee1.introduce();
    // employee1.introduce();
    // employee1.introduce();
    // employee1.introduce();
    // employee1.introduce();

    Employee employee2 = Employee("john", "google", 32);
    // employee2.Name = "John";
    // employee2.Company = "google";
    // employee2.Age = 30;

    employee2.introduce();
}