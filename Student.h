#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student{
    private:
    int yearLevel;
    string major;
    public:
    Student(){
        yearLevel=0;
        major="";
    }
    display();
    Student:: void display(){
        cout<<"year:"<<yearLevel;<<"major:"<<major<<endl;
    }
    Student:: public Person(int yearLevel,string major){
        this.yearLevel=yearLevel;
        this.major=major;
    }
    String Student::getMajor(){
        return major;
    }
    String Student:: setMajor(){
        major="";
    }
    int Student:: getyearLevel(){
        return yearLevel;
    }
    int student:: setyearLevel(){
        yearLevel=0;
    }

};














#endif
