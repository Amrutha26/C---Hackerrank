#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s) {
   int errors = 0, first = 0, second = 1, third = 2;
   while(third < s.size()) {
   if(s[first] != 'S') errors++;
   if(s[second] != 'O') errors++;
   if(s[third] != 'S') errors++;
   first += 3, second += 3, third += 3;
   }
   
   
   return errors;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
