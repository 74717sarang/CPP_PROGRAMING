#include<iostream>
using namespace std;
int main(){
int choice;
int area;
int a,b,r;

do{
cout<<endl<<"1:Rectangle 2: circle 3: triangle 4: Exit... "<<endl;
cout<<"Enter a Choice: ";
cin>>choice;

  switch(choice)
{
   case 1:
   cout<<"a  b:";
   cin>>a>>b;
    area=a*b;
   cout<<"Area= "<<area;
   break;
case 2:
   cout<<"r:";
   cin>>r;
    area=3.14*r*r;
   cout<<"Area= "<<area;
  break;
   case 3:
   cout<<"a  b:";
   cin>>a>>b;
    area=0.5*a*b;
   cout<<"Area= "<<area;
   break;
}

} while(choice!=4);






}