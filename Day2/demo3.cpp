#include<iostream>
using namespace std;
int main(){
 int i,j,row;
 cout<<"Enter A Row ";
 cin>>row;
  for(i=0;i<row;i++)
  {
     for(j=0;j<i;j++)
     {
        printf("*");
     }

     cout<<endl;

  }




}