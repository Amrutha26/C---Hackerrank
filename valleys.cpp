#include <bits/stdc++.h>
using namespace std;

int countValleys(int steps, string path) {
    int N = path.length();
   
    int level = 0;
    int valley = 0;
    for(int i=0; i<N; i++) {
        
        if(path[i] == 'U') {
           level++;
           if(level == 0) {
           valley++;
           }
           }
        else {
        level--;
        }
    }

    return valley;
}

int main() {
    int steps;
    string path; 
    cin >> steps >> path;
    

    cout << countValleys(steps,path);
    return 0;
}
        


