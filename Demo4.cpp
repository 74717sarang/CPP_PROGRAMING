#include<iostream>
using namespace std;
//base class
class Person
{
    protected:
        string name;
        int age;
        string add;
    public:
        Person():name("Rohit"),age(23),add("Pune")
        {
            cout<<"Inside base class Person's constructor"<<endl;
        }

        void display()
        {
            cout<<"name"<<this->name<<endl;
            cout<<"age="<<this->age<<endl;
            cout<<"add="<<this->add<<endl;
        }

        ~Person()
        {
            cout<<"Inside destructor of base class i.e Person"<<endl;
        }

};
//derived class
class Employee:public Person    //Employee class is deriving from base class called Person class
{
    private:
        int id;
        string dept;
        double salary;
    public:
        Employee():id(100),dept("DMC"),salary(200000)
        {
            cout<<"Inside derived class Employee's constructor"<<endl;
        }        

        void print()
        {
            Person::name;
            Person::age;
            Person::add;
            Person::display();
            cout<<"id="<<this->id<<endl;
            cout<<"dept="<<this->dept<<endl;
            cout<<"salary="<<this->salary<<endl;
        }

        ~Employee()
        {
            cout<<"Inside derived class disstructor i.e Employee"<<endl;
        }
};

int main()
{
    Employee e1;
    e1.print();
    
}