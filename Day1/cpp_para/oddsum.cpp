#include<iostream>
using namespace std;

int main(){
int n;
int sum=0;
int total=0;
cout<<"enter a end no:";
cin>>n;
  for(int i=1;i<=n;i++)
  {
    if(i%2!=0){
  sum=sum+i;
    }
  }
cout<<"Sum="<<sum<<endl;
int e;

cout<<"Enter a no for sum of even:";
cin>>e;
for(int j=0;j<n;j++){
if(j%2==0){
  
  total=total+j;

}
}
cout<<"sum of even:"<<endl;
cout<<"total="<<total;

}