#include<iostream>
using namespace std;
class Test{
public:


  int  sum(int a){
    cout<<a<<endl;
    }

   int sum(int a,int b){
    cout<<(a+b)<<endl;
    }


   double sum(int a,double b){
double t;
t=a+b;
   cout<<t<<endl;
   }

 double sum(double a,double b){
double t;
t=a+b;
   cout<<t<<endl;
   }

 double sum(double a,int b){
double t;
t=a+b;
   cout<<t<<endl;
   }



};





int main()
{

    Test t;
    t.sum(10);
    t.sum(10,20);
    t.sum(5.7,20);
    t.sum(10,2.6);
    t.sum(10.5,20.7);
    return 0;
}
