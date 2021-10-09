#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class Shape
{
private:
   string name;
   static int n;
   static Shape* arrap[];
   public:
    virtual void setValue()
    {
        cout << " Enter Shape Name: ";
        cin >> name ;
    }
    virtual void getValue()
    {
        cout<<"I am "<<name<<endl;
    }
    virtual string type()
    {
        return name;
    }

     static void add();
    static void display();
    static void read();
    static void write();
};
class Circle: public Shape
{
private:
    double radius;
public:
    void setValue()
    {
        Shape::setValue();
        cout << " Enter radius: ";
        cin >> radius;
    }
    void getValue()
    {
        Shape::getValue();
        cout << "Radius: " << radius;
    }
};

class Square: public Shape
{
private:
    int length;
public:
    void setValue()
    {
        Shape::setValue();
        cout << " Enter Length: ";
        cin >> length;
    }
    void getValue()
    {
        Shape::getValue();
        cout << "\n Length: " << length;
    }
};
int Shape::n;
Shape* Shape::arrap[100];
void Shape::add()
{
    char ch;
    cout << "'1.add a circle\n2.add a square"
         "\nEnter selection: ";
 int option;
 cin>>option;
    if(option==1)
    {
        arrap[n] = new Circle;
    }
    else if(option==2)
    {
        arrap[n] = new Square;
    }
    else
    {
        cout<<"Not applicable";
        return;
    }
    arrap[n++]->setValue();
}

void Shape::display()
{
    for(int j=0; j<n; j++)
    {
        cout << (j+1);

        arrap[j]->getValue();
        cout << endl;
    }
}

void Shape::write()
{
    int size;
    ofstream filepointer;
    filepointer.open("Shapes.txt", ios::trunc | ios::binary);
    if(!filepointer)
    {
        cout << "\nCan't open file\n";
        return;
    }
    else
    {for(int j=0; j<n; j++)
    {
        string temp= arrap[j]->type();

        if(temp=="Circle")
            size=sizeof(Circle);

        else if (temp=="Square")
            size=sizeof(Square);

    filepointer.write( (char*)(arrap[j]), size );
    if(!filepointer)
    {
        cout << "\nCan't write to file\n";
        return;
    }
    }
    }

}


void Shape::read()
{
    int size;
    ifstream filepointer;
    filepointer.open("Children.txt", ios::binary);
    if(!filepointer)
    {
        cout << "\nCan't open file\n";
        return;
    }
    n = 0;
    while(1)
    {
        if( filepointer.eof() )
            break;
        if(!filepointer) //error reading type
        {
            cout << "\nCan't read type from file\n";
            return;
        }
        string temp= arrap[n]->type();
            if(temp=="Circle")
            {
                arrap[n]=new Circle;
                size=sizeof(Circle);
            }
            else if (temp=="Square")
            {
                arrap[n]=new Square;
                size=sizeof(Square);
            }
            else
            {
                cout << "\nUnknown type in file\n";
                return;
            }



    filepointer.read( (char*)arrap[n], size );
    if(!filepointer) //error but not eof
    {
        cout << "\nCan't read data from file\n";
        return;
    }
    n++;
}

}

int main()
{
    int option;
    while(1)
    {
        cout << "'1.Add value\n2.Display Value\n3.Write Data\n4.Read from file"<<endl;
        int option;
        cin>>option;
        if(option==1)
        {
            Shape::add();
        }
        else if(option==2)
        {
            Shape::display();
        }
        else if(option==3)
        {
            Shape::read();
        }
        else if(option==4)
        {
            Shape::write();
        }

        else{
            break;
        }

    }
}
