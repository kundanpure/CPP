#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"enter name of the employlee"<<endl;
    cin>>name;
    string company;
    cout<<"enter name of the company"<<endl;
    cin>>company;
    int year;
    cout<<"enter the working year"<<endl;
    cin>>year;
    int salary;
    cout<<"enter the salary"<<endl;
    cin>>salary;
    getline(cin,name);
    cout<<"the name of the employee is"<<name<<endl;
    cout<<"the name of the company is"<<company<<endl;
    cout<<"the working year is"<<year<<endl;
    cout<<"salary"<<salary<<"lakh per month"<<endl;
    return 0;
}