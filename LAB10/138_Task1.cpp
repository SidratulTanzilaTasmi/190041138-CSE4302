#include<bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;
    string dob;
    string adress;
    int phone;
public:
    Person()
    {
     name=" ";
     dob=" ";
     adress=" ";
     phone=-1;
    }
    void setValue()
    {
        cout<<"Enter your name:"<<endl;
        setName();
        cout<<"Enter your date of birth:"<<endl;
        setDob();
        cout<<"Enter  your adress :"<<endl;
        setAdress();
        cout<<"Enter Phone Number :"<<endl;
        setPhone();
    }
    void setName()
    {
        cin>>name;
    }
    void setDob()
    {
        cin>>dob;
    }
    void setAdress()
    {
        cin>>adress;
    }
    void setPhone()
    {
        cin>>phone;
    }
    virtual void getValue()
    {
        cout<<"Name :"<< name <<endl ;
        cout<<"Date Of Birth :"<< dob <<endl ;
        cout<<" Adress :"<<adress<<endl;
        cout<<"Phone No :"<<phone<<endl;
    }
    virtual void printName()=0;

};
class Student : public Person
{
protected:
    int id;
    string department;
    string cgpa;

public:
    Student()
    {
        id=-1;
        department=" ";
        cgpa=" ";
    }
    void setData()
    {

        cout<<"Enter your ID:"<<endl;
        cin>>id;
        cout<<"Enter Your department :"<<endl;
        cin>>department;
        cout<<"Enter CGPA: "<<endl;
        cin>>cgpa;
    }


    void getValue()
    {
        cout<<"ID :"<< id <<endl ;
        cout<<"Department :"<< department <<endl ;
        cout<<"CGPA :"<< cgpa <<endl ;
    }
    void printName()
    {
        cout<<"Name :"<<name<<endl;
    }


};


int main()
{
    /*Person p;
    p.setValue();
    p.getValue();
    p.printName();
    */
    Student s;
    Person *ptr;
    ptr= &s;
    s.setData();
    ptr->getValue();
    ptr->printName();
    return 0;
}
