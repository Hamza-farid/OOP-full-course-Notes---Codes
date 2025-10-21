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

~Student(){
    cout<<"Destructor called for "<<endl;
    delete age;//memory leak so del it 
}

void displayInfo(){
        cout<<"Name: "<<name<<", Age: "<<*age<<endl;
    }


};

int main(){
    Student s1("hamza", 21);
    s1.displayInfo();
}