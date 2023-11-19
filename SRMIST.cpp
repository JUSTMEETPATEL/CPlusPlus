//This program contians all the knowledge I have about OOPS and C++

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

//Base Class SRMIST 

class SRMIST{
    public:
        string Name,Designation,FatherName,MotherName;
        int age;

        void personal_details()
        {
            cout<<"Enter Your Name :"<<endl;
            cin>>Name;
            cout<<"Enter Your Age :"<<endl;
            cin>>age;
            cout<<"Enter Your Father's Name :"<<endl;
            cin>>FatherName;
            cout<<"Enter Your Mother's Name :"<<endl;
            cin>>MotherName;
        }

};

//Derived Class from Base Class SRMIST - 1: Students

class Students : public SRMIST {
    public:
        Designation = "Student";
};

//Derived Class from Base Class SRMIST - 2: Teachers

class Teachers : public SRMIST{
    public:
        Designation = "Teacher";
};

//Derived Class from Base Class SRMIST - 3: Admin

class Admin : public SRMIST{
    Designation = "Admin";
};

// Hybrid Class of Class Students and Teachers named BTECH

class BTECH : public Students, public Teachers{
    public:

};

// Deriving Class by taking hybrid class BTECH as Base Class named CSE

class CSE : public BTECH{
    public:
        int year;
        string sub1,sub2,sub3,sub4,sub5,sub6;
};

// Deriving an another Class by taking hybrid class BTECH as Base Class named CSE_Spec

class CSE_Spec : public BTECH{
    //body
};

// Derving Class CS by taking CSE_Spec as Base class

class CS : public CSE_Spec{
    public:
        
};

// Derving an antother Class BDA by taking CSE_Spec as Base class

class BDA : public CSE_Spec{
    //body
}; 

// Derving an antother Class GT by taking CSE_Spec as Base class

class GT : public CSE_Spec{
    //body
};

// Derving an antother Class IT by taking CSE_Spec as Base class

class IT : public CSE_Spec{
    //body
};  

// Derving an antother Class BIOTECH by taking CSE_Spec as Base class

class BIOTECH : public CSE_Spec{
    //body
};




int main()
{
    
}