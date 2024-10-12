#include<iostream>
using namespace std;
int main(){
 int ch;
 int sum=0;
  int total=0;
  do{


cout<<"enter choice "<<endl;
cout<<"1:pen 10RS 2:notebook 20Rs 3:rubber 40rs 4:pencile 50rs  5: exit...";
  cin>>ch;
//  int total=0;
  int a;
 
  switch(ch){
  	case 1:
  		cout<<"how many pens you want "<<endl;
  		cin>>a;
  		total=total+(10*a);
//  	sum+=total;
//  		cout<<sum;
cout<<total;
  	break;
  		case 2:
  			cout<<"how many notebook you want "<<endl;
  			cin>>a;
  			  		  total=total+(20*a);
//  			  		sum+=total;
//  			  		cout<<sum;

  		break;
  	
  		case 3:
  			cout<<"how many rubber you want "<<endl;
  			cin>>a;
  		total=total+(40*a);
  	break;
  	
  		case 4:
  			cout<<"how many pencile you want "<<endl;
  			cin>>a;
  		total=total+(50*a);
  	break;
  	
  	
  	 default :
	   cout <<"enter The Correct Choice";	
  				
  }
 cout<<"total="<<total<<endl;
//  //sum+=total;
 

}while(ch!=5);	
 sum=sum+total;
cout<<"sum="<<sum<<endl;
}
