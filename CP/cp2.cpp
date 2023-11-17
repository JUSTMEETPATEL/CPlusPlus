#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 0 ; i < n; i++)
    {
        string str;
        string res = "";
        cin >> str;
        int len = str.length();

        if (len > 10)
        {
            res = str[0] + to_string(len - 2) + str[len - 1];
            cout << res<<endl;
        }

        else
        {
            cout << str<<endl;
        }
    }
    
}
