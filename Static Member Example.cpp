#include<iostream>
using namespace std;

class Student{
public:
    int roll;
    string name;
    static int addNo;
    Student(string n){
        addNo++;
        roll=addNo;
        name=n;
    }
    void display(){
        cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;

    }
};

int Student::addNo;

int main(){
    Student s1("John");
    Student s2("Raj");
    Student s3("Khan");
    Student s4("Aalok");
    Student s5("Shah");
    Student s6("Parikh");

    s1.display();
    s4.display();

    cout<<"Number of Admissions "<<Student::addNo<<endl;
}
