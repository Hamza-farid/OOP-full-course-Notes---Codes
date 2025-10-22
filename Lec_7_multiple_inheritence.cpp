#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
};

class Teacher{
public:
    int salary;
    string subject;
};

class TA : public Student,public Teacher{

};
int main(){
TA t1;
t1.name = "Hamza";
cout<<t1.name;
}
