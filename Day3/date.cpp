#include <iostream>
using namespace std;

class date
{

private:
   int day;
   int month;
   int year;

public:
   date()
   {
      day = 1;
      month = 1;
      year = 1111;
   }

   date(int d, int m, int y)
   {
      day = d;
      month = m;
      year = y;
   }

   void display()
   {
      cout << day << "/" << month << "/" << year << endl;
   }

   bool isleap()
   {
      if (year%4== 0)
         return true;
      else
         return false;
   }
};

int main()
{
// check for year is leap or non leap year
    date dd(19,6,2000);
   // bool leap=dd.isleap();;
      if( dd.isleap())
      cout<<"Year Is Leap...."<<endl;
      else
      cout<<"Year Is Non Leap......"<<endl;

//*****************
   //   date d1;
   //   //d1.display();

   //   date d3(7,7,1777);
   //   // d3.display();
   //**********************
   //   cout<<"Enter a date::"<<endl;
   //   int d,m,y;
   //   cin>>d>>m>>y;

   //    date d2(d,m,y);
   //    d2.display();

   //-*************
   // using new operator

   //  date*ptr=new date(11,11,11);
   //    ptr->display();
   //  delete ptr;

   //  date*obj=new date;
   //  obj->display();
   //**********

   // date*d1[]=new date();
}