#include<iostream>
using namespace std;

class A{
public:
    virtual void Print()=0;




};

class B:public A{
public:
    void Print(){

    cout<<"Inside Print() of class B"<<endl;

    }

};




int main()
{
   /* A a;
    a.Print();
*/

/*B b;
b.Print();
*/

/*A a;
A *p;
p=&a;
p->Print();
*/

B b;
A *p;
p=&b;
p->Print();



    return 0;
}
