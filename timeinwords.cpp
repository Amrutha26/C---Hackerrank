#include <bits/stdc++.h>

using namespace std;

// Complete the timeInWords function below.
string timeInWords(int h, int m) {
   string answer;
   map<int,string> words = {
       {1, "one"},
       {2, "two"},
       {3, "three"},
       {4, "four"},
       {5, "five"},
       {6, "six"},
       {7, "seven"},
       {8, "eight"},
       {9, "nine"},
       {10, "ten"},
       {11, "eleven"},
       {12, "twelve"},
       {13, "thirteen"},
       {14, "fourteen"},
       {15, "quarter"},
       {16, "sixteen"},
       {17, "seventeen"},
       {18, "eighteen"},
       {19, "nineteen"},
       {20, "twenty"},
       {21, "twenty one"},
       {22, "twenty two"},
       {23, "twenty three"},
       {24, "twenty four"},
       {25, "twenty five"},
       {26, "twenty six"},
       {27, "twenty seven"},
       {28, "twenty eight"},
       {29, "twenty nine"},
       {30, "half"}
   };
   if(m == 00) {
       answer = words[h] + " o' clock";
   } else if(m == 1) {
       answer = words[m] + " minute past " + words[h];
   } else if((m >=2 && m < 15) || (m > 15 && m < 30) ) {
       answer = words[m] + " minutes past " + words[h];
   } else if(m == 15 || m == 30) {
       answer = words[m] + " past " + words[h];
   } else if((m > 30 && m < 45) || (m > 45 && m < 60)) {
       answer = words[60-m] + " minutes to " + words[h+1];
   } else if(m == 45) {
       answer = words[60-m] + " to " + words[h+1];
   }
   
   
   return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();

    return 0;
}
