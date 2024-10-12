#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"enter angle of triangle:";
cin>>a>>b>>c;
 
 if(a<=90||b<=90||c<=90)
   {
     if(a<=90&&b<=60&&c<=30)
      cout<<"triangle.."<<endl;
     else 
     {
        cout<<"Input Worng Angle!!!"; 

     }
    
   }



}