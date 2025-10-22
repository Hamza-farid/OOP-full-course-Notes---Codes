#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
public:
    int rollno;
};
class GradStudent : public Student{
public: string researchArea;

};
int main(){
    GradStudent s1;
    s1.name = "Hamza";
    s1.researchArea = "AI";
    cout<<s1.name;
}
