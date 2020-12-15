#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#include <string>

//dervied classes are going to inherit from the base class(Person) and hence we declare the variables under protected
class Person {
    //These are under protected
    protected:
       int age;
       string name;
       
    //virtual methods inside of a base class -> override the methods inside of a dervied class
    public:
       Person() {}
           virtual void getdata() {}
           virtual void putdata() {}
           
        ~Person() {}   
          
};

//class Student inherits from base class Person 
class Professor : public Person {
    private:
    //usually member variables are private
      int publications, cur_id;
    //it is not going to be dependant on the instances, it's going to remain in the memory statically throughout the lifetime of the program  
      static int id; //automatically sets to zero
      
      public:
        Professor() {
            id++;
            cur_id = id;
        }
      
      void getdata() {
          cin >> name >> age >> publications;
      }
      
      void putdata() {
          cout << name << " " << age << " " << publications << " " << cur_id << endl;
      }
};
class Student : public Person {
    //1D array is a pointer
    private:
      const int MAX = 6;
      // *marks is a pointer which points to the array created by the new operator
      int *marks = new int[MAX];
      int cur_id;
      static int id;
    
    public: 
       Student() {
           id++;
           cur_id = id;
       }  
      
    void getdata() {
        cin >> name >> age;
        
        for(int i = 0; i < MAX; i++) {
            cin >> marks[i];
        }
    }
        
    void putdata() {
        cout << name << " " << age << " ";
        
        int sum = 0;
        for(int i = 0; i< MAX; i++) {
            sum += marks[i];
        }
        
        cout << sum << " " << cur_id << endl;
    }    
      
      ~Student() {
         delete[] marks;
     } 
      
};

//Initialize static variables
int Professor:: id = 0;
int Student:: id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
