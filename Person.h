#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person{
private:
    string name;
    int id;
public:
display();
Person();
Person(string name, int id);

Person(string n, int i){
   name=n;
   id=i;
}
Person:: void display(){
    cout<<"name:"<<name;<<"id:"<<id<<endl;
}
string Person:: getName(){
    return name;
}
string person:: setName(){
    name="";
}
int Person::getID(){
    return id;
}
int Person:: setID(){
    id=0;
}
};
#endif






//completed class person






#endif
