// This program contians all the knowledge I have about OOPS and C++

#include <iostream>
using namespace std;
/*

Inheritance Tree

                                                                SRMIST
                                                                   ↓
                                                           ______________________
                                                           ↓         ↓          ↓
                                                        Students  Teachers    Admin
                                                           ↓         ↓
                                                           [___________]
                                                                ↓
                                                              BTECH
                                                                ↓
                                                        _____________________________
                                                        ↓                           ↓
                                                        CSE                     CSE Spec
                                                                                    ↓
                                                                    _________________________________
                                                                    ↓       ↓       ↓       ↓       ↓
                                                                   CS      BDA     GT      IT    BIOTECH


*/

// Base Class SRMIST

class SRMIST
{
public:
    string Name, Designation, FatherName, MotherName;
    int age;
};

// Derived Class from Base Class SRMIST - 1: Students

class Students : public SRMIST
{
public:
    void personalS()
    {
        Designation = "Student";
        cout << "Enter Your Name :" << endl;
        cin >> Name;
        cout << "Enter Your Age :" << endl;
        cin >> age;
        cout << "Enter Your Father's Name :" << endl;
        cin >> FatherName;
        cout << "Enter Your Mother's Name :" << endl;
        cin >> MotherName;
    }
};

// Derived Class from Base Class SRMIST - 2: Teachers

class Teachers : public SRMIST
{
public:
    void personalT()
    {
        Designation = "Teacher";
        cout << "Enter Your Name :" << endl;
        cin >> Name;
        cout << "Enter Your Age :" << endl;
        cin >> age;
        cout << "Enter Your Father's Name :" << endl;
        cin >> FatherName;
        cout << "Enter Your Mother's Name :" << endl;
        cin >> MotherName;
    }
};

// Derived Class from Base Class SRMIST - 3: Admin

class Admin : public SRMIST
{
    Admin()
    {
        Designation = "Admin";
    }
};

// Hybrid Class of Class Students and Teachers named BTECH

class BTECH : public Students, public Teachers
{
public:
    int year;
    string sub1, sub2, sub3, sub4, sub5, sub6;
    string branch;
    void get_info()
    {
        cout << "Enter the year you are currenty studying :" << endl;
        cin >> year;
        cout << "Enter Subject-1 :" << endl;
        cin >> sub1;
        cout << "Enter Subject-2 :" << endl;
        cin >> sub2;
        cout << "Enter Subject-3 :" << endl;
        cin >> sub3;
        cout << "Enter Subject-4 :" << endl;
        cin >> sub4;
        cout << "Enter Subject-5 :" << endl;
        cin >> sub5;
        cout << "Enter Subject-6 :" << endl;
        cin >> sub6;
    }
};

// Deriving Class by taking hybrid class BTECH as Base Class named CSE

class CSE : public BTECH
{
public:
    CSE()
    {
        branch = "CSE CORE";
    }
};

// Deriving an another Class by taking hybrid class BTECH as Base Class named CSE_Spec

class CSE_Spec : public BTECH
{
public:
    CSE_Spec()
    {
        branch = " ";
    }
};

// Derving Class CS by taking CSE_Spec as Base class

class CS : public CSE_Spec
{
public:
    CS()
    {
        branch = "CSE Cyber Security";
    }
};

// Derving an antother Class BDA by taking CSE_Spec as Base class

class BDA : public CSE_Spec
{
public:
    BDA()
    {
        branch = "CSE Big Data Analysis";
    }
};

// Deriving another Class GT by taking CSE_Spec as Base class

class GT : public CSE_Spec
{
public:
    GT()
    {
        branch = "CSE Gaming Technology";
    }
};

// Deriving another Class IT by taking CSE_Spec as Base class

class IT : public CSE_Spec
{
public:
    IT()
    {
        branch = "CSE Information Technology";
    }
};

// Deriving another Class BIOTECH by taking CSE_Spec as Base class

class BIOTECH : public CSE_Spec
{
public:
    BIOTECH()
    {
        branch = "CSE BioTechnology";
    }
};

int main()
{
    string a;
    cout<<"Are you a Teacher/Student"<<endl;
    cin >> a;
    if (a == "Teacher")
    {
        CS meet;
        meet.personalT();
    }
    else
    {
        CS meet;
        meet.personalS();
        meet.get_info();
    }
}