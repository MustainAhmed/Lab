#include<iostream>
using namespace std;

class A{
private :
int x;
protected :
int y;
public :
int z;
void init(int a,int b,int c){
x=a;
y=b;
z=c;
}

 };

class B: virtual public A{};
class C: virtual public A{};

 class D: public B, public C{
 public:
 void print(){

    cout<<y<<" "<<z<<endl;
 }
 };

 int main(){
D d;
d.init(1,2,3);
d.print();
    return 0;
 }
