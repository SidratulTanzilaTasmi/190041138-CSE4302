#include<bits/stdc++.h>
using namespace std;
//Animal is the base class which will be inherited by the three other classes
class Animal
{
private:
    string nameOfAnimal;
    string habitat_area;
    string sound;
    int weight;
    int height;
    int age;
    int birthyear;
public:
    //parametrised constructor
    Animal(string sound)
    {
        this->sound=sound;
    }
    //constructor to initialise the values
    Animal()
    {
        nameOfAnimal=" ";
        habitat_area=" ";
        sound=" ";
        weight=0;
        height=0;
        age=0;
        birthyear=2021;
    }
    //setter functions to set the value to the data members
    void setBirthYear(int birthyear)
    {
        if(birthyear>2021)
        {
            cout<<"The birth year is invalid"<<endl;
            birthyear=2021;
        }
        else
        {
            this->birthyear=birthyear;
        }
    }
    void setInformation()
    {
        cout<<"Enter the name of Animal: "<<endl;
        cout.flush();
        setnameOfAnimal();
        cout<<"Enter the Habitat area of animal: "<<endl;
        cout.flush();
        set_habitat_area();
        cout<<"Enter Animal Sound :"<<endl;
        cout.flush();
        setsound();
        cout<<"Enter Weight: "<<endl;
        cout.flush();
        setweight();
        cout<<"Enter Height: "<<endl;
        cout.flush();
        setheight();

    }
    void setnameOfAnimal()
    {
        cin>>nameOfAnimal;
    }
    string getnameOfAnimal()
    {
        return nameOfAnimal;
    }
    void set_habitat_area()
    {
        cin>>habitat_area;
    }
    string gethabitat_area()
    {
        return habitat_area;
    }
    void setweight()
    {
        cin>>weight;
    }
    int getweight()
    {
        return weight;
    }
    void setheight()
    {
        cin>>height;
    }
    int getheight()
    {
        return height;
    }
    void setsound()

    {

        cin>>sound;
    }
    string getsound()
    {
        return sound;
    }
    void setAge()
    {
        age=2021-birthyear;

    }
    int getAge()
    {
        return age;

    }
    changeWeight(int pounds)
    {
        weight=pounds;
    }

    void vocalise()
    {
        cout<<sound;
    }
    void getInformation()
    {
        cout<<"Animal Name: "<<getnameOfAnimal()<<endl;
        cout<<"Habitat Area: "<<gethabitat_area()<<endl;
        cout<<"Weight: "<<getweight()<<endl;
        cout<<"Height: "<<getheight()<<endl;
        cout<<"Age :"<<getAge()<<endl;
        cout<<"Sound :"<<endl;
        vocalise();

    }
    ~Animal()
    {

    }
};
class Cow:public Animal
{
public:
    string snd;
    setSound()
    {
        snd="moo";
    }
    Cow():Animal(snd)
    {

    }
};
class Chicken:public Animal
{
public:
    string snd;
    setSound()
    {
        snd="buckbuck";
    }
    Chicken():Animal(snd)
    {

    }
};
class Cat:public Animal
{
public:
    string snd;
    void setSound()
    {

        snd="meow";
    }
    Cat():Animal(snd)
    {

    }
};
int main()
{
    Cow cow;
    Cat cat;
    Chicken chicken;

    cow.setInformation();
    cow.setsound();
    cow.getInformation();
    /*ptr=&cow;
    ptr->setInformation();
    cow.setSound();
    ptr->changeWeight(123);
    ptr->getInformation();
    chicken.setSound();
    chicken.setInformation();
    chicken.setBirthYear(2023);
    chicken.getInformation();
    cat.setSound();
    cat.setInformation();
    cat.setBirthYear(2010);
    cat.getInformation();
    */
}
