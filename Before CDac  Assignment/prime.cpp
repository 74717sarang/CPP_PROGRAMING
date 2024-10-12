#include<iostream>
using namespace std;    
int  main(int argc, char const *argv[])
{
    int num,i;
printf("enter no:");
    cin>>num;
   for( i=2;i<num;i++)
   {
      if(num%i==0){
      printf("no is not prime");
      break;}
   }
     if(num==i)
   printf("num is prime no");
    return 0;
}
