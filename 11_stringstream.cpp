#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter an integer value: "<<endl;
    int input;
    cin >> input;
//You should create an object of the stringstream class
    stringstream sso;
//Inserts formatted data    
    sso << input;
    string strinput;
//Extracts formatted data
    sso >> strinput;

    cout << "Integer number "<<input+2<<endl;
    cout << "The String form of integer number "<<strinput + "2"<<endl;

    return 0;

}
