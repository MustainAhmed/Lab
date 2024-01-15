#include<bits/stdc++.h>
using namespace std;

template<typename t , typename u>
class A{
private :
 t x;
 u y;
 public:
 void setData(t x,u y){
    this->x=x;
    this->y=y;
 }
template<typename s>
s sum(){
    s summ;
    summ=x+y;
    return summ;
}
};

int main(){
A <int,int > a;
a.setData(10,20);
cout<<a.sum<int>()<<endl;

A <int,double> b;
b.setData(12,23.5);
cout<<b.sum<double>()<<endl;

A <double,int> c;
c.setData(.5,23);
cout<<c.sum<double>()<<endl;

A <double,double> d;
d.setData(10.77,23.5);
cout<<d.sum<double>()<<endl;

    return 0;
}
