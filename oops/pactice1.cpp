// OOPs in C++
#include <iostream>
using namespace std;
// created a Abstract class for decided for promotion
class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};
class Employee : AbstractEmployee
{
    // it is by default private
private:
    string name;
    string company;
    int age;

public:
    // Encapsulation
    void setName(string Name)
    { // setter
        name = Name;
    }
    string getName()
    { // Getter
        return name;
    }
    void setCompany(string Company)
    {
        company = Company;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int Age)
    {
        if (age <= 18)
        {
            age = Age;
        }
    }
    int getAge()
    {
        return age;
    } // Encapsulation
    void introyourself()
    {
        cout << "Name - " << name << endl;
        cout << "company - " << company << endl;
        cout << "age - " << age << endl;
        cout << endl;
    }
    // constructor
    Employee(string Name, string Company, int Age)
    {
        name = Name;
        company = Company;
        age = Age;
    }
    // abstract class
    void AskForPromotion()
    {
        if (age >= 30)
        {
            cout << name << " Congratulation you got promoted! " << endl;
        }
        else
            cout << name << ", Sorry No promotion for you! " << endl;
    }
};
int main()
{
    Employee employee1 = Employee("kapil", "TCS", 32);
    Employee employee3 = Employee("Rohan", "TCS", 27);
    employee1.AskForPromotion();
    employee3.AskForPromotion();
    // employee1.introyourself();

    // Employee employee2 = Employee("Harsh", "SnapDragon", 25);
    // employee2.setAge(21);
    // cout << employee2.getName() << " is " << employee2.getAge() << " year old " << endl;
    // employee2.introyourself();
    // employee1.name = "kapil";
    // employee1.company = "TCS";
    // employee1.age = 26;
    return 0;
}