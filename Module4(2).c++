/*1. WAP to create simple calculator using class*/

#include<iostream>

using namespace std;

class cal
{
    public:
    float a, b;

    int number()
    {
        cout << "Enter value of A: ";
        cin >> a;

        cout << "Enter value of B: ";
        cin >> b;
    }
    int add()
    {
        cout << "Sum : "<<a+b;
    }
    int diff()
    {
        cout << "\nDifference: "<<a-b;
    }
    int pro()
    {
        cout << "\nProduct : "<<a*b;
    }
    int div()
    {
        cout << "\nQuotient : "<<a/b;
    }
};

main ()
{
    int choice;
    cal c;
    c.number();
    cout << "1) Addition";
    cout << "\n2) Subtraction";
    cout << "\n3) Multiplication";
    cout << "\n4) Division";
    cout << "\nChoose your option: ";
    cin >> choice;

    switch (choice)
    {
    case 1: c.add();
        break;
    case 2: c.diff();
        break;
    case 3: c.pro();
        break;
    case 4: c.div();
        break;
    default:
    cout << "Invalid choice";
        break;
    }
}

/*2. Define a class to represent a bank account. Include the following members:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance*/

#include <iostream>

using namespace std;

class bank
{
    char name[20];
    int accno;
    char type[20];
    float balance;
    int amount;
    int withdraw;
    public:
    void getdata()
    {
        cout << "Enter name of depositor: ";
        cin >> name;
        cout << "Enter Account number: ";
        cin >> accno;
        cout << "Enter Type of account: ";
        cin >> type;
        cout << "Enter Account balance: ";
        cin >> balance;
    }
    void deposit()
    {
        cout << "Enter amount to be deposited: ";
        cin >> amount;
        balance = balance + amount;
    }
    void with()
    {
        cout << "Enter amount to be withdrawn: ";
        cin >> amount;
        if (balance > amount)
        {
            balance = balance - amount;
        }
        else
        {
            cout << "Insufficient balance";
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Account number: " << accno << endl;
        cout << "Type of account: " << type << endl;
        cout << "Balance: " << balance << endl;
    }
};

main()
{
    int choice;
    do
    {
        bank b;
        cout << "1) Data";
        cout << "\n2) Deposit";
        cout << "\n3) Withdraw";
        cout << "\n4) Display";
        cout << "\n5) Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice)
        {
            case 1:
            b.getdata();
            break;
            case 2:
            b.deposit();
            break;
            case 3:
            b.with();
            break;
            case 4:
            b.display();
            break;
            case 5:
            exit(0);
            break;
            default:
            cout << "Invalid choice";
        }
    }
        while (choice != 5);
}

/*Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.*/

#include <iostream>

using namespace std;

class circle
{
    private:
    int radius;

    public:
    void area()
    {
        cout << "Enter Radius of circle: ";
        cin >> radius;

        float area;
        area = 3.14*radius*radius;
        cout << "Area = "<<area;
    }

    void circum()
    {
        cout << "Enter Radius of circle: ";
        cin >> radius;

        float circum;
        circum = 3.14*2*radius;
        cout << "Circumference = "<<circum;
    }
};

main ()
{
    
    int choice;    
    do
    {
        circle a;
        cout << "\n1) Area";
        cout << "\n2) Circumference";
        cout << "\n3) Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: a.area();
            break;
            case 2: a.circum();
            break;
            case 3: exit(0);
            default: cout <<"Try again!";
            break;
        }
    }
    while (choice != 3);
}

/* Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.*/

#include <iostream>

using namespace std;

class rectangle
{
    private:
    int length;
    int width;

    public:
    void area()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;

        float area;
        area = length * width;
        cout << "Area = "<<area;
    }

    void peri()
    {
        cout << "Enter length of rectangle: ";
        cin >> length;
        cout << "Enter width of rectangle: ";
        cin >> width;

        float peri;
        peri = 2*(length + width);
        cout << "Perimeter = "<<peri;
    }
};

main ()
{
    
    int choice;    
    do
    {
        rectangle a;
        cout << "\n1) Area";
        cout << "\n2) Perimeter";
        cout << "\n3) Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: a.area();
            break;
            case 2: a.peri();
            break;
            case 3: exit(0);
            default: cout <<"Try again!";
            break;
        }
    }
    while (choice != 3);
}

/*Write a C++ program to create a class called Person that has private
member variables for name, age and country. Implement member
functions to set and get the values of these variables.*/

#include <iostream>

using namespace std;

class person
{
    private:
    char name;
    int age;
    char country;

    public:
    void details()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter country: ";
        cin >> country;
    }
};

main ()
{
    person c;
    c.details();
    return 0;
}