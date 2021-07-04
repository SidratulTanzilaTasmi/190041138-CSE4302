#include<bits/stdc++.h>
using namespace std;
class Rationalnumber
{

  private:
        int num;
        int denom;

    public:
        void assign(int num, int denom)
        {
            this->num= num;
            if (denom) this->denom = denom;
            else cout << "Denominator can't be 0"<<endl;
        }

double convert()
{
    double r=num/denom;
    return r;
}
double invert()
{
    if (num)
    {
       swap(denom,num);
    }
    else cout << "Numerator is 0 which is invalid as a denominator.\n";
}
void print()
{
    cout<<"The Rational Number is "<<num<<" / "<<denom<<endl;
}
};
int main()
{
    class Rationalnumber a;
    a.assign(3,4);
    a.print();
    a.invert();
    a.print();

}
