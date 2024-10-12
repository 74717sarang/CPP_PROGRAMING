#include<iostream>
using namespace std;
int main()
{
int sal;
int tax;
cout<<"enter a sal:";
cin>>sal;
  if(sal<150000)
  {
    sal=sal;
    cout<<"income tax ="<<sal<<endl;
  }
  
  else if(sal<=150000||sal>=300000)
   {
     tax=(20/100)*sal;
    cout<<tax;

   }
  else if(sal<=300000)
  {
     tax=(30/100)*sal;
     cout<<tax;
  }
  else 
  cout<<"Enter Correct value:";
  
  




}