#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

//Necessary optimizations for i/o speed - incase there are many test cases
//Added space to our input and output
struct Optimizer {
    Optimizer() {
        //disables the synchronization between the c++ and c standard streams
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};

//Creating an instance
Optimizer opt;

template <class T> class AddElements {
    public:
        T element;
        AddElements(T i) {
            element = i;
        }
        T add(T i) {
            return element+i;
        }
        T concatenate(T i) {
            return element+i;
        }
};


int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
