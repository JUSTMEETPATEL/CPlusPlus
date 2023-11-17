#include <iostream>
using namespace std;

class Complex{
    int a,b;
    friend Complex complexSum(Complex o1,Complex o2);
    public:
         void setNum(int v1,int v2){
            a = v1;
            b = v2;
         }
         void printNum(){
            cout<<a<<" + "<<b<<"i"<<endl;
         }
};

Complex complexSum(Complex o1,Complex o2){
    Complex o3;

    o3.setNum((o1.a + o2.a),(o1.b + o2.b));
    o3.printNum();
}

int main(){
    Complex c1,c2;
    
    c1.setNum(4,5);
    c1.printNum();
    
    c2.setNum(2,3);
    c2.printNum();

    complexSum(c1,c2);

}