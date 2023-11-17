#include <iostream>
using namespace std;

class Indian
{
public:
    string name;
    string born;

    Indian() {}

    Indian(string n)
    {
        name = n;
    }

    dataout()
    {
        cout<<"I am from "<< born<<endl;
    }
};

class Gujrat : public Indian
{
public:
    Gujrat()
    {
        born = "Gujrat";
    }
    // dataout()
    // {
    //     cout << "I am from " << born << " like --> Meet" << endl;
    // }

    void garba()
    {
        cout<<"Gujjus can do garba"<<endl;
    }
};

class Bengal : public Indian
{
public:
    Bengal()
    {
        born = "Bengal";
    }

    void kala_jaadu()
    {
        cout<<"They are some special breed who can perform some ritual called KALA JAADU and those are bengalis"<<endl;
    }
    
    // dataout()
    // { 
    //     cout << "I am from " << born << " like --> Rishit" << endl;
    // }
};

class Marthi: public Indian
{
    public:
        Marthi()
        {
            born = "Maharashtra";
        }

        void rep_love()
        {
            cout<<"They are the reptile lovers, there is a streotype which says marathi people loves reptile"<<endl;
        }

        // dataout()
        // {
        //     cout<<"I am from "<< born << " like --> Soham"<<endl;
        // }
};

class Pinaki : public Gujrat, public Bengal
{
public:
    Pinaki()
    {
        cout << "Pinaki is the perfect example of hybrid, he is born in Bengal but lives in Gujrat" << endl;
    }
};

int main()
{
    Gujrat gujju;
    gujju.dataout();
    gujju.garba();

    Bengal bengali;
    bengali.dataout();
    bengali.kala_jaadu();

    Marthi mathu;
    mathu.dataout();
    mathu.rep_love();

    Pinaki pinaki;

    return 0;
}