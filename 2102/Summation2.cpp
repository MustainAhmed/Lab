#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,j,u,r,s=0;

    cout<<"a="<<endl;
    cin>>a;
    cout<<"j="<<endl;
    cin>>j;
    cout<<"u="<<endl;
    cin>>u;
    cout<<"r="<<endl;
    cin>>r;

    while(j<=u){
      s=s+a*pow(r,j);
      j++;
    }

    cout<<endl<<s;

}
