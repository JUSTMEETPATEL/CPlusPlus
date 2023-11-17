#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
};

class Derived : public Base
{
    int data3;

public:
    void process()
    {
        data3 = data2 * getdata1();
    }
    void display()
    {
        cout << "Data1 is : " << getdata1() << endl;
        cout << "Data2 is : " << data2 << endl;
        cout << "Data3 is : " << data3 << endl;
    }
};

int main()
{
    Derived d1;
    d1.setdata();
    d1.process();
    d1.display();
}