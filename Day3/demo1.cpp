#include<iostream>
using namespace std;
  class student{
     private :
         int roll;
         int mark1;
         int mark2;
         int mark3;

   public:
      student(){
         this->roll=0;
         this->mark1=0;
         this->mark2=0;
         this->mark3=0;
      }

        student (int roll,int mark1,int mark2,int mark3)
     {
         this->roll=roll;
         this->mark1=mark1;
         this->mark2=mark2;
         this->mark3=mark3;
     }
     
         void accept(int mark1,int mark2,int mark3){
             cout<<"Enter value..."<<endl;
             cout<<"mark1,mark2,mark3..."<<endl;
             this->mark1=mark1;
             this->mark2=mark2;
             this->mark3=mark3;


         }


          void display(){
         
         cout<<"With constuctor"<<endl;
         cout<<"roll= "<<this->roll<<endl;
        cout<<"mark1= "<<this->mark1<<endl;
        cout<<"mark2= "<<this->mark2<<endl;
        cout<<"mark3= "<<this->mark3<<endl;
       

     }
     void claTotal(){
    int total=mark1+mark2+mark3;
    cout<<"Total mark= "<<total<<endl;
   }
    void calPercentege(){
       int total=mark1+mark2+mark3;
        int per= total/3;
        cout<<"Percentage="<<per<<"%"<<endl;
   }
  
    void calGreade(){
     int total=mark1+mark2+mark3;
        int per= total/3;
        if(per>90)
        cout<<"Excellent..."<<endl;
        
        else if(per>75&&per<90)
         cout<<"Good..."<<endl;
   
        else if(per>50&&per<75)
         cout<<"Average..."<<endl;
       
        else
        cout<<"THANK YOU!!!";
    }
  };


  int main(){

    student* s=new student(21,22,23,24);
           s->display();




  //****************

  //student s1(1,95,94,93);
  //s1.display();
  //student s2(2,98,97,95);
    // s2.display();
     //s2.claTotal();
     //s2.calPercentege();
      //s2.calGreade();
  //********************

  // int roll,m1,m2,m3;
  // cout<<"enter a roll no and marks::::";
  //  cin>>roll>>m1>>m2>>m3;
  //  student s3(roll,m1,m2,m3);
  // //s3.accept(95,96,94);
  // s3.display();
  // s3.calPercentege();
  // s3.claTotal();
  // s3.calGreade();
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
