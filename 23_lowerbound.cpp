#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n, temp, q, query;
    cin >> n;
    vector<long> v;
    
    for(int i=0; i<n; i++) {
        cin >> temp;
        v.push_back(temp);
    }  
    
    cin >> q;
    
    for(int i=0; i<q; i++) {
        cin >> query;
        //using lower bound function -> pass in v.begin(), v.end() and the query
        vector<long> :: iterator itr = lower_bound(v.begin(), v.end(), query);
        if(query != *itr) {
            //subtracting 2 iterators to return the index of the query
            //adding one because the index is one-based
            cout << "No " << (itr - v.begin() + 1) << endl;
        } else {
            cout << "Yes " << (itr - v.begin() + 1) << endl;
        }
    }
    return 0;
}
