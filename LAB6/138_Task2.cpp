#include <bits/stdc++.h>
using namespace std;

class Matrix3D
{
private:
    double arr[3][3];

public:
    Matrix3D()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<"Enter the value of your matrix: ";
                int v;
                cin>>v;
                arr[i][j]=v;
            }
        }
    }

    double det()
    {
        double a=arr[0][0] * (arr[1][1] * arr[2][2] - arr[1][2] * arr[2][1]);
        double b=arr[0][1] * (arr[1][0] * arr[2][2] - arr[1][2] * arr[2][0]);
        double c=arr[0][2] * (arr[1][0] * arr[2][1] - arr[1][1] * arr[2][0]);
        return a+b+c;
    }

    void view()
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << arr[i][j] << "  ";
            }
            cout << endl;
        }
    }

    void inverse()
    {
        double temp[3][3]= {0};
        double det= this->det();
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                {
temp[i][j] = (arr[(j + 1) % 3][(i + 1) % 3]* arr[(j + 2) % 3][(i + 2) % 3]- arr[(j + 1) % 3][(i + 2) % 3]* arr[(j + 2) % 3][(i + 1) % 3]);
temp[i][j]=temp[i][j]/det;
               }
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<temp[i][j]<<" ";
            }
            cout<<endl;
        }
    }


    Matrix3D operator + (Matrix3D m)
    {
        Matrix3D temp;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                temp.arr[i][j] = arr[i][j] + m.arr[i][j];

        return temp;
    }
    Matrix3D operator - (Matrix3D m)
    {
        Matrix3D temp;
        for (int i = 0; i < 3; i++)
            {for (int j = 0; j < 3; j++)
                temp.arr[i][j] = arr[i][j] - m.arr[i][j];
            }
        return temp;
    }
    Matrix3D operator * (Matrix3D m2)

    {
        Matrix3D temp;
        for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                temp.arr[i][j] = arr[i][j] * m2.arr[i][j];
            }
        return temp;
    }
    ~Matrix3D()
    { }
};

int main()
{

    Matrix3D m1;
    m1.view();
    cout << m1.det() << endl;
    cout << endl << endl;
    Matrix3D m2;
    m1.inverse();
    m2.view();

    m1 = m1 * m2;


    cout << endl << endl;
    m1.view();

    return 0;
}
