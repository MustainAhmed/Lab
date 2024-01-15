#include<iostream>

using namespace std;

int main()
{
    int a,n,u,d,s=0;

    cout<<"a="<<endl;
    cin>>a;
    cout<<"n="<<endl;
    cin>>n;
    cout<<"u="<<endl;
    cin>>u;
    cout<<"d="<<endl;
    cin>>d;

    while(n<=u){
      s=s+a+n*d;
      n++;
    }

    cout<<endl<<s;

}
