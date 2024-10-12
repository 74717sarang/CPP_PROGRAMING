#include<iostream>
using namespace std;
int main(){

int n;int fact=1;
cout<<"no:"<<endl;
cin>>n;
for(int i=0;i<=n;++i)
{
    fact*=i;
  //fact=fact*i;

}
cout<<"Factorial= "<<fact;

}