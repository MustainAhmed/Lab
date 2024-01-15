#include<iostream>
using namespace std;

class A
{
private:
    int x;
public:

    A(){
    x=0;
    }

    void display(){
    cout<<x<<endl;
    }

    friend void Add(A &a);
    friend void IncX(A &a);
    friend void DecX(A &a);

};

void Add(A &a){
int y;
cin>>y;
a.x=y;
}

void IncX(A &a){
int m;
cin>>m;
a.x=a.x+m;

}

void DecX(A &a){
int n;
cin>>n;
a.x=a.x-n;

}




int main()
{
   A b;
   b.display();
   Add(b);
    b.display();
    IncX(b);
    b.display();
    DecX(b);
    b.display();
    return 0;
}
