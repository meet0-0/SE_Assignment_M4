/*1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)*/

#include <iostream>
using namespace std;

class cricketer
{
public:
    int runs;
    int wickets;
    int inputdata()
    {
        cout << "Enter Runs: ";
        cin >> runs;
        cout << "Enter Wickets: ";
        cin >> wickets;
    }
};

class batsman : public cricketer
{
public:
    int totalruns;
    int averageruns;
    int bestperformance;
    int inputdata()
    {
        cout << "Enter Total Runs: ";
        cin >> totalruns;
        cout << "Enter Average Runs: ";
        cin >> averageruns;
        cout << "Enter Best Performance: ";
        cin >> bestperformance;
    }
};

main()
{
    batsman b;
    b.inputdata();
    cout << "Total Runs: " << b.totalruns;
    cout << "Average Runs: " << b.averageruns;
    cout << "Best Performance: " << b.bestperformance;
}

/*2. Write a C++ Program to find Area of Rectangle using inheritance*/

#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breadth;

    void inputdata()
    {
        cout << "\nEnter Length: ";
        cin >> length;
        cout << "\nEnter Breadth: ";
        cin >> breadth;
    }
};

class Area : public Rectangle
{
public:
    int calArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area rect;
    rect.inputdata();
    cout << "\nThe area of the rectangle is: " << rect.calArea();
    return 0;
}

/*3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void inputPersonData()
    {
        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "\nEnter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonData()
    {
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
    }
};

class Student : public Person
{
protected:
    float percentage;

public:
    void inputStudentData()
    {
        inputPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore();
    }

    void displayStudentData()
    {
        displayPersonData();
        cout << "Percentage: " << percentage << "%";
    }
};

class Teacher : public Person
{
protected:
    float salary;

public:
    void inputTeacherData()
    {
        inputPersonData();
        cout << "\nEnter salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayTeacherData()
    {
        displayPersonData();
        cout << "\nSalary: $" << salary;
    }
};

int main()
{
    Student student;
    Teacher teacher;

    cout << "Enter student details:";
    student.inputStudentData();
    cout << "\nEnter teacher details:";
    teacher.inputTeacherData();

    cout << "\nStudent Details:";
    student.displayStudentData();
    cout << "\nTeacher Details:";
    teacher.displayTeacherData();

    return 0;
}

/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    void inputPersonData()
    {
        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "\nEnter age: ";
        cin >> age;
        cin.ignore();
    }

    void displayPersonData()
    {
        cout << "\nName: " << name << endl;
        cout << "\nAge: " << age << endl;
    }
};

class Academic
{
protected:
    int rollNumber;
    float marks[5];
    string subjects[5] = {"Math", "Science", "English", "History", "Geography"};

public:
    void inputAcademicData()
    {
        cout << "\nEnter roll number: ";
        cin >> rollNumber;
        for (int i = 0; i < 5; i++)
        {
            cout << "\nEnter marks for " << subjects[i] << ": ";
            cin >> marks[i];
        }
        cin.ignore();
    }

    void displayAcadData()
    {
        cout << "\nRoll Number: " << rollNumber;
        for (int i = 0; i < 5; i++)
        {
            cout << "\nMarks in " << subjects[i] << ": " << marks[i];
        }
    }
};

class Student : public Person, public Academic
{
public:
    void inputStudentData()
    {
        inputPersonData();
        inputAcademicData();
    }

    void displayStudentData()
    {
        displayPersonData();
        displayAcadData();
    }
};

int main()
{
    Student student;

    cout << "Enter student details:";
    student.inputStudentData();

    cout << "\nStudent Mark Sheet";
    student.displayStudentData();
    return 0;
}

/*
5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <iostream>

using namespace std;

class student
{
    int roll;

public:
    void getroll(int r)
    {
        roll = r;
    }
    int getroll()
    {
        return roll;
    }
};

class Test
{
    int maths, english;

public:
    void getmarks(int m, int e)
    {
        maths = m;
        english = e;
    }
    int getmarks()
    {
        return maths;
        return english;
    }
    int total()
    {
        return maths + english;
    }
};

class result
{
    int total;

public:
    void gettotal(int t)
    {
        total = t;
    }
    int gettotal()
    {
        return total;
    }
};

main()
{
    int rollno, marks;
    char grade;
    int maths, english;
    result r;
    Test t;
    cout << "\nEnter the Roll Number: ";
    cin >> rollno;
    cout << "\nEnter the Marks in Maths: ";
    cin >> maths;
    cout << "\nEnter the Marks in English: ";
    cin >> english;
    t.getmarks(maths, english);
    r.gettotal(t.total());
    cout << "\nTotal Marks: " << r.gettotal();
    cout << "\nAverage: " << r.gettotal() / 2;
    if ((t.total() / 2) > 70)
        cout << "\nGrade: A";
    else if ((t.total() / 2) > 60)
        cout << "\nGrade: B";
    else if ((t.total() / 2) > 50)
        cout << "\nGrade: C";
    else if ((t.total() / 2) > 40)
        cout << "\nGrade: D";
    else
        cout << "\nGrade: Fail";
}

/*6. Write a C++ Program to show access to Private Public and Protected using
Inheritance*/

#include <iostream>

using namespace std;

class Base
{
private:
    int privateVar;
protected:
    int protectedVar;
public:
    int publicVar;

    Base() : privateVar(0), protectedVar(0), publicVar(0) {}

    void display()
    {
        cout << "Base Class - Private Variable: " << privateVar << endl;
        cout << "Base Class - Protected Variable: " << protectedVar << endl;
        cout << "Base Class - Public Variable: " << publicVar << endl;
    }

    int getPrivateVar()
    {
        return privateVar;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived Class - Protected Variable: " << protectedVar << endl;
        cout << "Derived Class - Public Variable: " << publicVar << endl;
    }
};

int main()
{
    Base base;
    Derived derived;

    cout << "Accessing from Base class object:" << endl;
    base.display();

    cout << "\nAccessing from Derived class object:" << endl;
    derived.show();

    cout << "\nDirect access to public member of base class object: " << base.publicVar << endl;

    cout << "Access private member of base class object using getter: " << base.getPrivateVar() << endl;

    return 0;
}
/*7. Write a C++ Program to illustrates the use of Constructors in multilevel
inheritance*/

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base class constructor called";
    }
};

class Intermediate : public Base
{
public:
    Intermediate()
    {
        cout << "Intermediate class constructor called";
    }
};

class Derived : public Intermediate
{
public:
    Derived()
    {
        cout << "Derived class constructor called";
    }
};

int main()
{
    cout << "Creating Derived class object:";
    Derived derivedObj;

    return 0;
}

/*8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include <iostream>

using namespace std;

int operate(int a, int b)
{
    return a + b;
}
int operate(int a, int b, char op)
{
    if (op == '-')
    {
        return a - b;
    }
    else
    {
        return 0;
    }
}

float operate(float a, float b)
{
    return a * b;
}

float operate(float a, float b, bool isDivision)
{
    if (isDivision)
    {
        return a / b;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 10, b = 5;
    float x = 15.0, y = 3.0;

    cout << "Addition of " << a << " and " << b << " is: " << operate(a, b);
    cout << "Subtraction of " << a << " and " << b << " is: " << operate(a, b, '-');
    cout << "Multiplication of " << x << " and " << y << " is: " << operate(x, y);
    cout << "Division of " << x << " and " << y << " is: " << operate(x, y, true);

    return 0;
}

/*9. Write a Program of Two 1D Matrix Addition using Operator Overloading*/
// doubt

/*10.Write a program to concatenate the two strings using Operator Overloading*/
// doubt

/*11.Write a c++ program to calculate the area of circle, rectangle and triangle
using Function Overloading
Rectangle: Area * breadth
Triangle: ½ *Area* breadth
Circle: Pi * Area *Area
*/

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159265358979323846;

class AreaCalculator
{
public:
    double area(double length, double breadth)
    {
        return length * breadth;
    }

    double area(double base, double height, char type)
    {
        if (type == 'T')
        {
            return 0.5 * base * height;
        }
        return 0.0;
    }

    double area(double radius)
    {
        return PI * radius * radius;
    }
};

int main()
{
    AreaCalculator calculator;
    double length, breadth, base, height, radius;

    cout << "\nEnter length and breadth of the rectangle: ";
    cin >> length >> breadth;
    double rectangleArea = calculator.area(length, breadth);
    cout << "\nArea of rectangle: " << rectangleArea << " square units";

    cout << "\nEnter base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = calculator.area(base, height, 'T');
    cout << "\nArea of triangle: " << triangleArea << " square units";

    cout << "\nEnter radius of the circle: ";
    cin >> radius;
    double circleArea = calculator.area(radius);
    cout << "\nArea of circle: " << circleArea << " square units";

    return 0;
}

/*12.Write a program to swap the two numbers using friend function
without using third variable and no pointer and no temp*/
#include <iostream>
using namespace std;
class Swap
{
    int a, b;

public:
    void getdata(int x, int y)
    {
        a = x;
        cout << "\nEnter Number 1: ";
        cin >> a;
        b = y;
        cout << "\nEnter Number 2: ";
        cin >> b;
    }
    friend void swapdata(Swap);
};

void swapdata(Swap s)
{
    s.a = s.a - s.b;
    s.b = s.a + s.b;
    s.a = s.b - s.a;
}

int main()
{
    Swap s;
    s.getdata(10, 20);
    cout << "\nValue before swapping: ";
    swapdata(s);
    cout << "\nValue after swapping: ";
    return 0;
}

/*13.Write a program to find the max number from given two numbers
using friend function*/

#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v) : value(v) {}
    friend int findMax(Number n1, Number n2);
};

int findMax(Number n1, Number n2)
{
    return (n1.value > n2.value) ? n1.value : n2.value;
}

int main()
{
    int val1, val2;

    cout << "\nEnter the first number: ";
    cin >> val1;
    cout << "\nEnter the second number: ";
    cin >> val2;

    Number num1(val1);
    Number num2(val2);

    cout << "\nThe maximum number is: " << findMax(num1, num2);

    return 0;
}
