#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Time
{
    private:
    int hr, min, sec;
    public:

    Time()
    {
        hr=0, min=0; sec=0;
    }
    Time(int h, int m, int s)
    {
        hr=h, min=m; sec=s;
    }
    int hour()
    {
        return hr;
    }
     int minute()
    {
        return min;
    }
     int second()
    {
        return sec;
    }
    void reset()
    {
        if(hr>=24)
        {
            hr=0;
            min=0;
            sec=0;
        }
    }
void advance(int h,int m, int s)
{
   sec+= s;
            if (sec > 59)
            {
                min++;
                sec-= 60;
            }

            min+= m;
            if (min > 59)
            {
                hr++;
                min -= 60;
            }

            hr += h;

            if (hr >= 24)
                hr %= 24;
        }

   void print()
        {
            cout <<hr<< ":" << min<< ":" << sec << "\n";
}
};


int main()
{
    class Time tm(7,15,59);
    tm.print();

    tm.advance(2, 19, 25);

    tm.print();
}
