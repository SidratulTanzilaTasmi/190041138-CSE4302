#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Example1
{
private:
    int data;
    char *s;
public:
    Example1()
    {
        cout<<"I am an object declared"<<endl;
        data=-1;
        strcpy(s," ");
    }
    Example1(Example1 shape)
    {
        //data=shape.data;
        s=new char[500];
        strcpy(s,shape.s);
    }
    void setData(int data)
    {
        this->data=data;
    }
    int getData()
    {
        return data;
    }

    Example1 & operator = (const Example1& shape)
    {
        //int newallocate;
        //newallocate=shape.data;
        data=shape.data*2;
        return *this;
    }
    void showData()
    {
        cout<<"Data: "<< data<<endl;
    }

};

class Example2
{
private:
    int data;
    //data hding stops copy initialisation
    Example2 operator = (Example2 & shape)
    {  }
    Example2(Example2 & shape)
    {
        data=shape.data;
    }
public:
    Example2()
    {
        data=-1;
    }
    void setData()
    {
        cin>>data;
    }
    int getData()
    {
        return data;
    }
};

int main()
{
    Example1 e1;
    Example1 e2;
    e1.setData(5);
    e2.setData(10);
//e1.getData();
//e2.getData();
//copy constructor called because new object is created and an existing object is copied to it
    Example1 e3=e1;
    cout<<"Value after initializing copy constructor: "<<endl;
    e3.showData();
    Example1 e4;
    cout<<"Value after initializing assignment operator: "<<endl;
    //the object has already been initialized, assignment operator used here
    e4=e1;
    e4.showData();
    cout<<"Similar process of object copying using pointer: "<<endl;
    Example1 *e;
    e=&e3;
    e->showData();
    e=&e4;
    e->showData();
    Example2 e5;
    e5.setData();
    cout<<"Data: "<<e5.getData()<<endl;
//Example2 e6=e5;

}
