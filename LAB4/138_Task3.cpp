#include<bits/stdc++.h>
using namespace std;
class StudentResult
{
private:
    static int passing_mark;
    int subject_mark[6];
    bool willpass;
public:
    static int pass_mark()
    {

        cout<<"Passing mark is "<<passing_mark<<endl;
    }
public:
    void displaymark()
    {
        for(int i=0; i<6; i++)
        {
            cout<<subject_mark[i]<<endl;
        }
    }
    void set_mark(int a,int b,int c,int d,int e,int f)
    {
        subject_mark[0]=a;
        subject_mark[1]=b;
        subject_mark[2]=c;
        subject_mark[3]=d;
        subject_mark[4]=e;
        subject_mark[5]=f;
        willpass=true;
    }
    void check_passing()
    {
        for(int i=0; i<6; i++)
        {
            if(subject_mark[i]<passing_mark)
            {
                willpass=false;
            }
        }
        if(willpass)
        {
            cout<<"Student will pass"<<endl;
        }
        else
        {
            cout<<"Student will fail"<<endl;
        }
    }
};
int StudentResult::passing_mark = 1;
int main()
{
    StudentResult a;

    a.set_mark(0,2,3,4,5,6);
    a.displaymark();
    a.pass_mark();
    a.check_passing();
}
