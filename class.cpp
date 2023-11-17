#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string a;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary ::read()
{
    cout << "Enter a binary no :" << endl;
    cin >> a;
}

void binary ::chk_bin()
{
    for (char i : a)
    {
        if (i != '0' && i != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    for (char & i : a)
    {
        if (i == '0')
        {
            i = '1';
        }
        else
        {
            i = '0';
        }
    }
}

void binary :: display()
{
    cout << a << endl;
}

int main()
{
    binary objb;
    objb.read();
    objb.chk_bin();
    cout << "Binary Before :";
    objb.display();
    objb.ones_compliment();
    cout << "Binary After  :";
    objb.display();
    return 0;
}