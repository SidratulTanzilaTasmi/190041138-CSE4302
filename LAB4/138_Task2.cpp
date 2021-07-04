#include<bits/stdc++.h>
using namespace std;
class info
{
private:
    string EmpName;
    int id;
    int age;
    float salary;
    string status;
public:
    getStatus()
    {
        if(age<=25)
        {
            if(salary<=20000)
            {
                status="Low";
            }
            else
            {
                status="Moderate";
            }

        }
        else
        {

            if(salary<=21000)
            {
                status="Low";
            }
            else if(salary>2100 && salary<=60000)
            {
                status="Moderate";
            }
            else
            {
                status="High";
            }
        }
    }
    FeedInfo(string EmpName, int id, int salary)
    {
        this->EmpName=EmpName;
        this->id=id;
        this->salary=salary;
        getStatus();
    }
    ShowInfo()
    {
        cout<<EmpName<<endl;
        cout<<"ID"<<id<<endl;
        cout<<"Age"<<age<<endl;
        cout<<"Salary"<<salary<<endl;
        cout<<status<<" Salaried person"<<endl;
    }

};
int main()
{
    info a;
    a.FeedInfo("Tasmi",21,253278);
    a.ShowInfo();
}
