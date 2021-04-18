#include <bits/stdc++.h>
using namespace std;

string encryption(string s) 
{
    string t = "";
    for(int i = 0; i < s.length(); i++)
        if(s[i] != ' ')  t += s[i];

    int l = t.length();
    int rows = sqrt(l);
    int cols = rows;

    if(rows*cols < l)
        cols += 1;

    string res = "";

    for(int i = 0; i < cols; i++)
    {
        for(int j = i; j < l; j += cols) res += t[j];
        res += ' ';
    }
    res.pop_back();  // To remove one last extra space
    return res;
}

int main()
{
    string s;
    getline(cin, s);
    cout << encryption(s) << endl;
    return 0;
}