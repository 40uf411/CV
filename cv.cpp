#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main()
{
    system("color f0");
    ofstream out("cv.doc");
    string name,lname,city,country,school,university,job,e;
    int age;
    cout<<endl;
    cout<<"first name: "; getline(cin,name);cout<<endl;
    cout<<"last name: "; getline(cin,lname);cout<<endl;
    cout<<"country: ";getline(cin,country);cout<<endl;
    cout<<"city: ";getline(cin,city);cout<<endl;
    cout<<"school: ";getline(cin,school);cout<<endl;
    cout<<"university: ";getline(cin,university);cout<<endl;
    cout<<"job: ";getline(cin,job);cout<<endl;
    cout<<"experiansses: ";getline(cin,e);
    cout<<"age: "; scanf("%d",&age);cout<<endl;

    out<<endl<<"first name: ";                       out<<name;
    out<<endl<<"last name: ";                        out<<lname;
    out<<endl<<"age: ";                          out<<age;
    out<<endl<<"country: ";                          out<<country;
    out<<endl<<"city: ";                             out<<city;
    out<<endl<<"school: ";                           out<<school;
    out<<endl<<"university: ";                       out<<university;
    out<<endl<<"job: ";                              out<<job;
    out<<endl<<"experiansses: ";                     out<<e;
out.close();
cout<<endl<<"done!";

    return 0;
}
