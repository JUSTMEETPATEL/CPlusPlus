#include <iostream>
using namespace std;
int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "Creating a object :" << count << endl;
    }

    ~num()
    {
        cout << "Destructing an object :" << count << endl;
        count--;
    }
};

int main()
{
    cout << "Entering the main block" << endl;
    num a;
    {
        cout << "Entering the block" << endl;
        num b, c;
        cout << "Exiting the block" << endl;
    }
    cout << "Exiting the main block" << endl;
}