#include<iostream>
using namespace std;
int main(){
int m,n;
cout<<"Enter base no";
cin>>m;
 cout<<"Entervpower  no";
cin>>n;
int ans=1;
for(int i=0;n>=1;i++)
{
    ans=ans*m;
    n--;
    
}
cout<<"ans="<<ans;



}