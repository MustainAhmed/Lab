#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(;;){
    if(n%2==0){
        n=n/2;
    }
    else{
        n=3*n+1;
    }

    if(n==1){
        cout<<"reaches 1"<<endl;
        break;
    }
}
}
