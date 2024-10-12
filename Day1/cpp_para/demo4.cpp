#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter a no"<<endl;
cin>>a>>b;

 int ch;


  do{
 
cout<<"enter choice"<<endl;
cout<<"1:add 2:sub 3: multi  4:division 5:mod 6: exit...";
  cin>>ch;
  switch(ch){
  	case 1:
  		cout<<"add="<<a+b<<endl;
  		break;
  	
  		case 2:
  			cout<<"sub="<<a-b<<endl;
  		break;
  	
  		case 3:
  			cout<<"multi="<<a*b<<endl;
  	break;
  	
  		case 4:
  			cout<<"div="<<a/b<<endl;
  	break;
  	
  		case 5:
  			cout<<"mod="<<a%b<<endl;
  	break;
  	
  	   
  	 default :
	   cout <<"enter The Correct Choice";	
  	
  }

}while(ch!=6);

}
