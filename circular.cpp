#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,q,m,j;
    cin >> n >> k >> q;
    k %= n;
    int *A = new int[n];
    for(int i=0; i<n; i++) {
        cin >> A[i];
    }
    for(int i=0; i<q; i++) {
        cin >> m;
        j = m - k;
        if(j<0) {
            cout << A[n+j] << endl;
        } else {
            cout << A[j] << endl;
        }
    }

    return 0;
}