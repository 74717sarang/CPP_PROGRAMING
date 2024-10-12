#include<iostream>
using namespace std;
  class student{
     private :int roll;
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

      public :student (int roll,int mark1,int mark2,int mark3)
     {
         this->roll=roll;
         this->mark1=mark1;
         this->mark2=mark2;
         this->mark3=mark3;

     }
     
     public :void display(){

         cout<<"With constuctor"<<endl;
         cout<<"roll= "<<this->roll<<endl;
        cout<<"mark1= "<<this->mark1<<endl;
        cout<<"mark2= "<<this->mark2<<endl;
        cout<<"mark3= "<<this->mark3<<endl;
       

     }

  };


  int main(){
  
  student s1(1,10,20,30);
 
   //s1.accept();
  s1.display();
  }