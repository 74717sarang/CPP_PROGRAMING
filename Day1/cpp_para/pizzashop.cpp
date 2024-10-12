#include<iostream>
using namespace std;
int main(){
 int ch;
 int sum=0;
  int total=0;
  do{


cout<<"enter choice You Want Menu "<<endl;
cout<<"1:Coeffe 100RS 2:Black Tea 200Rs 3: Cold Coeffe 300rs 4:Cold drink 400rs  5: exit...";
  cin>>ch;
//  int total=0;
  int a;
 
  switch(ch){
  	case 1:
  		cout<<"how many Coeffe Cup you want "<<endl;
  		cin>>a;
  		total=total+(100*a);
  	break;
  		case 2:
  			cout<<"how many Black Tea Cup you want "<<endl;
  			cin>>a;
  			  		  total=total+(200*a);


  	break;
  	
  		case 3:
  			cout<<"how many Cold Coeffe you want "<<endl;
  			cin>>a;
  		total=total+(300*a);
  	break;
  	
  		case 4:
  			cout<<"how many Cold Drink you want "<<endl;
  			cin>>a;
  		total=total+(400*a);
  	break;
  	
  	
  	 default :
	   cout <<"enter The Correct Choice";	
  				
  }
 cout<<"total="<<total<<endl;

 

}while(ch!=5);	
 sum=sum+total;
 //sum+=total;
cout<<"sum="<<sum<<endl;
}
