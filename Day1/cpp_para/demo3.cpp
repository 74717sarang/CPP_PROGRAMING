#include<iostream>
using namespace std;
int main(){
	int aa=1;
	char ch='a';
	short int sa=1;
	long int q=4;
	float d=3.321;
	double w=102.301;
	bool a= true;
	bool b=false;
	auto ab=101;
//    auto bc =3.21;
//    auto xy='d';
	cout<<sizeof(aa)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(sa)<<endl;
    cout<<sizeof(q)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(w)<<endl;
    
    cout<<" a="<<sizeof(a)<<endl;
    cout<<" b="<<sizeof(b)<<endl;
	cout<<" ab="<<sizeof(ab)<<endl;
//    cout<<" a="<<a<<endl;
//    cout<<" b="<<b<<endl;
//
//
//    cout<<" ab="<<bbb<<endl;
//    cout<<" bc="<<nnn<<endl;

//
//   	cout<<"bc="<<sizeof(bc)<<endl;
//    cout<<"ab="<<sizeof(ab)<<endl;
//  
}
