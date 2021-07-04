#include<bits/stdc++.h>

using namespace std;

class Medicine
{
    private:
        string name;
        string genericName;
        double discountPercent;
        double unitPrice;


    public:
        void assignName(char name[], char genericName[])
        {
            this->name = name;
            this->genericName = genericName;
        }
        void assigndiscountprince()
        {
            discountPercent=0.05;
            unitPrice=0;
        }

        void assingnPrice(double price)
        {
            if (price > -1) unitPrice = price;
            else cout << "Price must be non-negative.\n";
        }

        void setDiscountPercent(double percent)
        {
            if (percent >= 0 && percent <=0.45) discountPercent = percent;
            else cout << "Discount percentage must be between 0 to 45%\n";
        }

        double getSellingPrice(int nos)
        {
            int dis=unitPrice*discountPercent/100;
            unitPrice=unitPrice-dis;
            return unitPrice*nos;
        }

        void print()
        {
    cout << name << " (" << genericName << ") has a unit price of BDT " << unitPrice<< ". Current discount " << discountPercent << '\n';
        }
};

int main()
{
    class Medicine a;
    char str[100]="Paracetamol";
    char str2[100]="Napa";
    a.assignName(str,str2);
    a.assingnPrice(0.80);
    a.setDiscountPercent(0.30);
    cout << a.getSellingPrice(1) << '\n';
    a.print();

    return 0;
}
