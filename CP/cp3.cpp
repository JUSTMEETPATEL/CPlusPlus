#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count = 0;
    for(int i = 0;i<t;i++){
        int p,v,t;
        cin>>p>>v>>t;
        if ((p == v && p == 1) || (p == t)&& p == 1){
            count++;
        }
        else if((p ==(v || t) && p ==1) || (v == (p || t)&& v == 1) || (t == (p || v) && t == 1)){
            count++;
        }
        else{
            continue;
        }
    }
    cout<<count;
}