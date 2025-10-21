#include <iostream>
using namespace std;
//inherotence base class vals also in child one
// base class contructor alwasy called first
class Person{
    public:
    string name;
    int age;

    // Person(string name , int age){
    //     this->name = name;
    //     this->age = age;
    // }
Person(){}
};
class Student : public Person{
//name age---    rollno.
public:
    int rollno;

    void displayInfo(){
        cout<<"Name: "<<name<<", Age: "<<age<<", Roll No: "<<rollno<<endl;
    }

};
int main(){
    Student st;
    s1.name = "Hamza";
    s1.age = 21;
    s1.rollno = 101;
    s1.displayInfo();
}