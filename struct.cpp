#include<iostream>
using namespace std;


int main(){
    struct{
    string name;
    int rollno;
    string branch;
    int age;
}s,c;
st
cout<<"Select ";
cin>>n;


switch(n){
    case s:
cout<<"Enter the name of the student: ";
cin>>s.name;
cout<<"Enter the roll number of the student: ";
cin>>s.rollno;
cout<<"Enter the branch of the student: ";
cin>>s.branch;
cout<<"Enter the age of the student: ";
cin>>s.age;
cout<<"The name of the student is : "<<s.name<<"\n\n";
cout<<"The roll number of the student is : "<<s.rollno<<"\n\n";   
cout<<"The branch of the student is : "<<s.branch<<"\n\n";
cout<<"The age of the student is : "<<s.age<<"\n\n";
break;
case c:
cout<<"Enter the name of the student: ";
cin>>c.name;            
cout<<"Enter the roll number of the student: ";
cin>>c.rollno;
cout<<"Enter the branch of the student: ";
cin>>c.branch;


cout<<"Enter the age of the student: ";
cin>>c.age;
cout<<"The name of the student is : "<<c.name<<"\n\n";
cout<<"The roll number of the student is : "<<c.rollno<<"\n\n";
cout<<"The branch of the student is : "<<c.branch<<"\n\n";
cout<<"The age of the student is : "<<c.age<<"\n\n";
break;
default:
cout<<"Invalid choice";
}

return 0;
}