#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector <int> arr;
    int size;
    cin >> size;
    int a;
    for(int i = 0; i < size; i++) {
        cin >> a;
        arr.push_back(a);
    }
    int x,y,z;
    cin >> x >> y >> z;
    arr.erase(arr.begin() + (x-1));
    arr.erase(arr.begin() + (y-1), arr.begin() + (z-1));
    cout << arr.size() << endl;
    for(int i = 0; i< arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
