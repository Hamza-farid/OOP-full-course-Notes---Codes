#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int* age;

Student(string name , int age){
        cout<<"Inside Student Copy Constructor"<<endl;
        this->name = s.name;
        age = new int;
        *age = age;//address and then see val in that address
       
    }
    Student(Student &s){
        cout<<"Inside Student Copy Constructor"<<endl;
        this->name = s.name;
        age = new int;//dynamically new val assigned
        *age = *(s.age);
        cout<<"Student Copy Constructor called!"<<endl;
    }

void displayInfo(){
        cout<<"Name: "<<name<<", Age: "<<*age<<endl;
    }


};
// age pointer points to int memory in heap
// prevention from shallow copy 
//used deep copy
// as address are different now for both objects 
//in order to counter same name and age problem
// we cannot use by default copy constructor here to tackle shallow copy problem
// have to write our own deep copy constructor 
int main(){
    Student s1("hamza", 21);
    Student s2(s1);//copy constructor
    //s2.displayInfo();
    s1.displayInfo();
    *(s2.age) = 25;//changing s2 age

    s2.displayInfo();

}