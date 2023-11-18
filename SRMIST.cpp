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
    //body
};

//Derived Class from Base Class SRMIST - 1: Students

class Students : public SRMIST {
    //body
};

//Derived Class from Base Class SRMIST - 2: Teachers

class Teachers : public SRMIST{
    //body
};

//Derived Class from Base Class SRMIST - 3: Admin

class Admin : public SRMIST{
    //body 
};

// Hybrid Class of Class Students and Teachers named BTECH

class BTECH : public Students, public Teachers{
    //body
};

// Deriving Class by taking hybrid class BTECH as Base Class named CSE

class CSE : public BTECH{
    //body
};

// Deriving an another Class by taking hybrid class BTECH as Base Class named CSE_Spec

class CSE_Spec : public BTECH{
    //body
};

// Derving Class CS by taking CSE_Spec as Base class

class CS : public CSE_Spec{
    //body
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