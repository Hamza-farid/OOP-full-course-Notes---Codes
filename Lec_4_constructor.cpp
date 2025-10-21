#include <iostream>
using namespace std;

class Teacher{
private :
    double salary;//data hiding private or protected

public:
   Teacher(){
    depth = "CSE";
   }
    
   Teacher(string n, int a, double s){
    name = n;
    age = a;
    salary = s;
    cout<<"Parameterized Constructor called!"<<endl;
   }
   Teacher(string name, int age){
    this->name = name;//this pointer
    this->age = age;
    cout<<"Constructor with 2 params called!"<<endl;
   }

   string name;
    int age;
    string depth;

void changeDepartment(string d){
    depth = d;
}
void setSalary(double s){
    salary = s;
}
double getSalary(){
    return salary;
}

void displayInfo(){
    cout<<"Name: "<<name<<", Age: "<<age<<", Department: "<<depth<<", Salary: "<<salary<<endl;
}

};

int main(){
//constructor overloading
//also example of polymorphism

    Teacher t1("Alice", 30, 50000);//multi constructor by type by diff params 

    t1.displayInfo();
    return 0;
}