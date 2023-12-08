#include <iostream>
using namespace std;

class Complex{
    int real , imaginary;
    public:
        void get_data(){
            cout<<"The real part of the eq is "<<real<<endl;
            cout<<"The imaginary part of the eq is "<<imaginary<<endl;
        }

        void set_data(int a , int b){
            real = a;
            imaginary = b;
        }
};

int main(){
    Complex* ptr = new Complex;
    ptr->set_data(1,4);
    ptr->get_data();

}