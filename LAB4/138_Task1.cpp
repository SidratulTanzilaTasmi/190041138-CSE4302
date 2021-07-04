#include<bits/stdc++.h>
using namespace std;
class Bank
{
private:
    int acc_no;
    string acc_name;
    int balance;
    int min_balance;
    string acc_type;
public:

    Bank(int acc_no, string acc_name, string acc_type, int balance = 0)
    {
        this->acc_no=acc_no;
        this->acc_name = acc_name;
        this->acc_type=acc_type;
        if (acc_type=="Current")
        {
            min_balance = 500;
        }
        else
        {
            min_balance = 1000;
        }

        if (balance > 0)
        {
            if (balance >= min_balance)
            {
                this->balance =balance;
            }
            else

            {
                cout << "you need to deposit " << (balance - min_balance)<< "amount of money more"<< endl;
            }
        }
    }
    void showInfo()
    {
        cout << "Name: " <<acc_name;
        if (acc_type=="Savings")
            cout << "Savings ";
        else
            cout << "Current ";
        cout << "Account Number: " << acc_no<< endl;
        showBalance();
    }
    void showBalance()
    {
        cout << "Current Balance: " << balance << " Tk"<<endl;
    }
    void deposit(int amount)
    {
        balance += amount;
        cout << amount << " deposited successfully"<<endl;
        showBalance();
    }
    void withdraw(int amount)
    {
        if (balance - amount < min_balance)
            cout << "Cant withdraw below the minimum required balance"<<endl;
        else
        {
            balance -= amount;
            cout << amount << "TK withdrawn successfully"<<endl;
        }
        showBalance();
    }
    void giveInterest(float rate = 2.5f)
    {

        float interest=(float)balance*rate/100;
        float tax = interest / 10;
        balance += (int)interest -(int)tax;
        showBalance();
    }
    ~Bank()
    {
        cout << "Account of " << acc_name << " with account no: " << acc_no<< " is destroyed with a balance BDT " << balance<<endl;
    }
};

int main()
{

    Bank a1(38,"Tasmi","Current",0);
}
