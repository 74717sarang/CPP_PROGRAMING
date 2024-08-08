#include<iostream>
using namespace std;

class Point
{
        private:
            int x;
            int y;
        public:
            Point():x(10),y(20)
            {
                cout<<"inside point class constructor"<<endl;
            }
            void display()
            {
                cout<<"x="<<this->x<<endl;
                cout<<"y="<<this->y<<endl;
            }
            //declaring global function as a friend function
            friend void print(Point p1);
};

void print(Point p1)
{
    cout<<"Inside friend function Print()"<<endl;
    cout<<"x="<<p1.x<<endl;//accessing the private properties of a Point class
    cout<<"y="<<p1.y<<endl;
}

int main()
{
    Point p1;
    print(p1);
}