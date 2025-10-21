#include <iostream>
using namespace std;

class Teacher{
//private 
    string name;
   int age;


void displayInfo(){
    cout<<"Name: "<<name<<", Age: "<<age<<endl;

};

int main(){

    Teacher t1;
    t1.name = "Alice";
    t1.age = 30;
    t1.displayInfo();

    return 0;
}