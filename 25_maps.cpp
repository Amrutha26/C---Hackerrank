#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> m={};
    string s;
    int a, b;
    cin>>a;
    while(a--)
    {
        cin>>b;
        cin>>s;
        switch(b)
        {   
            //To get the value stored of the key "MAPS" we can do m["MAPS"]
            case 1: cin>>b; m[s]+=b; break;
            case 2: m.erase(s); break;
            case 3: cout<<m[s]<<"\n";
        }
    }
    return 0;
}

