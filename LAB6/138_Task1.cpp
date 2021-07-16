#include<bits/stdc++.h>
using namespace std;
class Counter
{
private:
    int count;
    int increament_step;
    public:
     int val;
public:
    Counter()
    {
        increament_step=1;
        count=0;
        val=1;
    }
    void setIncrementStep(int step_val)
    {
        increament_step=step_val;
    }
    void setVal(int val)
    {
        this->val=val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=increament_step;
    }
    void resetCount()
    {
        count=0;
    }
    Counter operator +(Counter C)
    {
        Counter temp;
        temp.count=temp.count+C.count;
        temp.increament_step=min(temp.increament_step,C.increament_step);
        return temp;
    }
    Counter operator +(int )
    {
        Counter temp;
        temp.count=temp.count+val;
        return temp;
    }
    Counter operator +=(Counter C)
    {
        Counter temp;
        temp.count+=C.count;
        temp.increament_step+=C.increament_step;
        return temp;
    }

    Counter operator ++ ()
    {
        ++count;
        Counter temp;
        temp.count = count;
        return temp;
    }
    Counter operator ++(int)
    {
        count++;
        Counter temp;
        temp.count=count;
        return temp;
    }
};
int main()
{
 Counter c;
    cout<<c.getCount()<<"\n";
    c.setIncrementStep(3);
    c.increment();
    cout<<c.getCount()<<"\n";
    c.resetCount();
    cout<<c.getCount()<<"\n";
    Counter c1;
    c1.setIncrementStep(5);
    Counter c2;
    c2.setIncrementStep(6);
    Counter c3;
    c3.setIncrementStep(7);
    c1 = c2+c3;
    cout<<c1.getCount()<<"\n";
    c1.increment();
    cout<<c1.getCount()<<"\n";
    int var = 10;
    c1 = c2+var;
    cout<<c1.getCount()<<"\n";
    c1.increment();
    cout<<c1.getCount()<<"\n";
    c1 = c2+var;
    cout<<c1.getCount()<<"\n";
    c1.increment();
    cout<<c1.getCount()<<"\n";
    c1+=c2;
    cout<<c1.getCount()<<"\n";
}
