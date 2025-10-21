#include <iostream>
using namespace std;

class Teacher{
private :
    double salary;

public:
   
    string name;
    int age;

void displayInfo(){
    cout<<"Name: "<<name<<", Age: "<<age<<endl;
}
//setter
void setSalary(double s){
    salary = s;
}
//getter
double getSalary(){
    return salary;
}
    
    

};

int main(){

    Teacher t1;
    t1.name = "Alice";
    t1.age = 30;
    t1.displayInfo();

    return 0;
}