#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor{
    private:
    string department;
    int experienceYears;
    public:
    Instructor(string department, int experienceYears){
        this.department=department;
        this.experienceYears=experienceYears;
    }
    display();
    void Instructor ::display(){
    cout<<"department:"<<department<<"experience years:"<<experienceYears<<endl;
    }
};
#endif 

//completed instructo class










#endif
