#include<bits/stdc++.h>
using namespace std;
class Rationalnumber
{

private:
    int num;
    int denom;
    double decim;
    int checkDenom(int denom)
    {
        if(denom==0)
        {
            cout<<"The denominator cannot be 0"<<endl;
            return 0;
        }
        else
        {
            return 1;
        }

    }

public:
    void setVal(int num, int denom)
    {

        int s=checkDenom(denom);
        if(s)
        {
            this->num= num;
            this->denom=denom;
        }
    }

    double getFraction()
    {
        double r=num/denom;
        decim=r;
    }

    void getResult()
    {
        //cout<<"The Rational Number is "<<num<<" / "<<denom<<endl<<"And their equivalent decimal fraction is "<<decim<<endl;
        cout<<"Equivalent number is: "<<decim<<endl;
    }
    Rationalnumber operator +(Rationalnumber c)
    {
        Rationalnumber temp;
        temp.decim=temp.decim+c.decim;
        return temp;
    }
    Rationalnumber operator -(Rationalnumber c)
    {
        Rationalnumber temp;
        temp.decim=temp.decim-c.decim;
        return temp;
    }
    Rationalnumber operator *(Rationalnumber c)
    {
        Rationalnumber temp;
        temp.decim=temp.decim*c.decim;
        return temp;
    }
    Rationalnumber operator /(Rationalnumber c)
    {
        Rationalnumber temp;
        temp.decim=temp.decim/c.decim;
        return temp;
    }
};
int main()
{
    Rationalnumber a;
    a.setVal(3,0);
    Rationalnumber  b;
    b.setVal(3,4);
    Rationalnumber c;
    c.setVal(7,8);
    b.getResult();
    Rationalnumber d;
    d=b+c;
    d.getResult();
    d=b-c;
    d.getResult();
    d=b*c;
    d.getResult();
    d=b/c;
    d.getResult();

}

