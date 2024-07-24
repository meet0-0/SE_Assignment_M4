/*1. Write a program to find the multiplication values and the cubic values using
inline function*/

#include <iostream>

using namespace std;

class calc
{
public:
    inline int mult(int a, int b)
    {
        return a * b;
    }
    inline int cube(int a)
    {
        return a * a * a;
    }
};

main()
{
    int a, b;
    calc c;
    cout << "Enter the value of a and b: ";
    cin >> a >> b;
    cout << "Multiplication of a and b is: " << c.mult(a, b);
    cout << "\nCubic value of a is: " << c.cube(a);
    return 0;
}

/*2. Write a program of Addition, Subtraction, Division, Multiplication using
constructor.*/
#include <iostream>

using namespace std;

class cal
{
    int a, b;

public:
    cal(int x, int y)
    {
        a = x;
        b = y;
    }
    int add()
    {
        cout << "Sum = " << a + b;
    }
    int sub()
    {
        cout << "Difference = " << a - b;
    }
    int mul()
    {
        cout << "Product = " << a * b;
    }
    int div()
    {
        cout << "Division = " << a / b;
    }
};

main()
{
    int choice;

    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cal c(x, y);
    cout << "Enter choice: \n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        c.add();
        break;
    case 2:
        c.sub();
        break;
    case 3:
        c.mul();
        break;
    case 4:
        c.div();
        break;
    default:
        cout << "Invalid choice";
        break;
        return 0;
    }
}

/*3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.*/

#include <iostream>

using namespace std;

class car
{
    string company;
    string model;
    int year;

public:
    car(string com, string mod, int y)
    {
        company = com;
        model = mod;
        year = y;
    }

    void print()
    {
        cout << "\nCompany : " << company;
        cout << "\nModel : " << model;
        cout << "\nYear : " << year;
    }
};

main()
{
    car c1("BMW", "X5", 2018);
    car c2("Lamborgini", "Aventador", 2019);
    c1.print();
    cout << "\n";
    c2.print();
    return 0;
}

/*4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.*/

#include <iostream>

using namespace std;

class BankAcc
{
    int accno;
    int balance;

public:
    BankAcc(int accno, int balance)
    {
        this->accno = accno;
        this->balance = balance;
    }
    void deposit(int amt)
    {
        balance = balance + amt;
    }
    void withdraw(int amt)
    {
        balance = balance - amt;
    }
    void print()
    {
        cout << "\nAccount Number : " << accno;
        cout << "\nBalance : " << balance;
    }
};

main()
{
    BankAcc b1(1234, 1000);
    b1.deposit(500);
    b1.withdraw(200);
    b1.print();
    return 0;
}

/*5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>
using namespace std;

class Triangle
{
private:
    int side1, side2, side3;

public:
    Triangle(int s1, int s2, int s3) : side1(s1), side2(s2), side3(s3) {}

    bool equi()
    {
        return (side1 == side2 && side2 == side3);
    }
    bool iso()
    {
        return (side1 == side2 || side1 == side3 || side2 == side3) && !equi();
    }
    bool scal()
    {
        return (side1 != side2 && side1 != side3 && side2 != side3);
    }
};

int main()
{
    int s1, s2, s3;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> s1 >> s2 >> s3;

    Triangle t(s1, s2, s3);

    if (t.equi())
        cout << "The triangle is equilateral.";
    else if (t.iso())
        cout << "The triangle is isosceles.";
    else if (t.scal())
        cout << "The triangle is scalene.";
    else
        cout << "Invalid triangle sides.";
    return 0;
}

/*6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor*/

#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int e_ID;
    double salary;

public:
    Employee(string empName, int empID, double empSalary) : name(empName), e_ID(empID), salary(empSalary) {}

    void setSalary(double performanceRating)
    {
        if (performanceRating >= 4.5)
            salary *= 1.10;
        else if (performanceRating >= 3.5)
            salary *= 1.05;
        else if (performanceRating >= 2.5)
            salary *= 1.02;
        else
            salary *= 0.95;
    }

    void display()
    {
        cout << "\nEmployee Name: " << name;
        cout << "\nEmployee ID: " << e_ID;
        cout << "\nEmployee Salary: " << salary;
    }
};

int main()
{
    string name;
    int id;
    double salary, performanceRating;
    cout << "\nEnter employee name: ";
    getline(cin, name);
    cout << "\nEnter employee ID: ";
    cin >> id;
    cout << "\nEnter employee salary: ";
    cin >> salary;
    cout << "\nEnter performance rating (0-5): ";
    cin >> performanceRating;

    Employee emp(name, id, salary);

    emp.setSalary(performanceRating);
    emp.display();
    return 0;
}

/*7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid.*/

#include <iostream>
using namespace std;

class Date
{
private:
    int day, month, year;

    bool isLeapYear(int year)
    {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }

    int daysInMonth(int month, int year)
    {
        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            return isLeapYear(year) ? 29 : 28;
        default:
            return 0;
        }
    }

public:
    Date(int d, int m, int y) : day(d), month(m), year(y){}
    void setDay(int d) 
    { 
        day = d; 
    }
    void setMonth(int m) 
    { 
        month = m; 
    }
    void setYear(int y) 
    { 
        year = y; 
    }

    int getDay()
    { 
        return day; 
    }
    int getMonth() 
    { 
        return month;
    }
    int getYear()
    {
         return year; 
    }

    bool isValidDate()
    {
        if (year < 1 || month < 1 || month > 12 || day < 1 || day > daysInMonth(month, year))
            return false;
        return true;
    }

    void display()
    {
        cout << (isValidDate() ? "Valid Date: " : "Invalid Date: ") << day << "/" << month << "/" << year;
    }
};

int main()
{
    int day, month, year;

    cout << "\nEnter day: ";
    cin >> day;
    cout << "\nEnter month: ";
    cin >> month;
    cout << "\nEnter year: ";
    cin >> year;

    Date date(day, month, year);

    date.display();

    return 0;
}

/*8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation*/

#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    string street;
    string city;
    string state;
    int zipCode;

public:
    Address(string s, string c, string st, int z) : street(s), city(c), state(st), zipCode(z) {}

    void displayAddress() const
    {

        cout << "Address: " << street << ", " << city << ", " << state << " - " << zipCode;
    }
};

class Student
{
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address address;

    char calculateGrade()
    {
        if (marks >= 90)
            return 'A';
        else if (marks >= 80)
            return 'B';
        else if (marks >= 70)
            return 'C';
        else if (marks >= 60)
            return 'D';
        else
            return 'F';
    }

public:
    Student(string n, string sc, int r, double m, Address a) : name(n), studentClass(sc), rollNumber(r), marks(m), address(a) {}

    void display()
    {
        cout << "Name: " << name;
        cout << "Class: " << studentClass;
        cout << "Roll Number: " << rollNumber;
        cout << "Marks: " << marks;
        cout << "Grade: " << calculateGrade();
        address.displayAddress();
    }
};

int main()
{
    string name, studentClass, street, city, state;
    int rollNumber, zipCode;
    double marks;

    cout << "\nEnter student's name: ";
    getline(cin, name);
    cout << "\nEnter student's class: ";
    getline(cin, studentClass);
    cout << "\nEnter roll number: ";
    cin >> rollNumber;
    cout << "\nEnter marks: ";
    cin >> marks;
    cin.ignore();

    cout << "\nEnter address street: ";
    getline(cin, street);
    cout << "\nEnter city: ";
    getline(cin, city);
    cout << "\nEnter state: ";
    getline(cin, state);
    cout << "\nEnter zip code: ";
    cin >> zipCode;

    Address address(street, city, state, zipCode);
    Student student(name, studentClass, rollNumber, marks, address);

    student.display();

    return 0;
}