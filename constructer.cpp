#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(); // Constructor


    void addNumbers(){
        int sum = a+ b;
        cout << "The sum is: " << sum << endl;
    }

    void printData()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex() // Constructor definition
{
    cout << "Enter the real part: " << endl;
    cin >> a;
    cout << "Enter the imaginary part: " << endl;
    cin >> b;
}

int main()
{
    Complex c1,c2;
    c1.printData();
    c2.printData();
    c1.addNumbers();
    c2.addNumbers();
    

    return 0;
}
