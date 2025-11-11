#ifndef COURSE_H
#define COURSE_H
#include "Course.h"
#include <string>
#include "Student.h"
using namespace std;
//#wrlass Course{
    private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    public:
    addStudent(const Student& s){
    Student* students++;
    }
    displayCourseInfo(){
        cout<<"course:"<<name<<"year:"<<yearLevel<<"major:"<<"department:"<<department<<"experience years:"<< experienceYears<<endl;
        cout<<"code:"<<courseCode<<"course name:"<<courseName<<"max students:"<<maxStudents<<"current:"<<currentStudents<<endl;
    };

}
#endif 














#endif
