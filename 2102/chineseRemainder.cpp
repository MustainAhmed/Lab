#include<bits/stdc++.h>

using namespace std;

int inverseMod(int M,int m){
    for(int i=1;i<m;i++){
        if(M*i%m==1){
            return i;
        }
    }

    return 0;
}

int main ()
{
    int n,Mt=1,x=0;

    cin>>n;

    int a[n],m[n],M[n],y[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>m[i];
        Mt=m[i]*Mt;
    }

    for(int i=0;i<n;i++){
        M[i]=Mt/m[i];
        y[i]=inverseMod(M[i],m[i]);
    }

    for(int i=0;i<n;i++){
        x=x+a[i]*M[i]*y[i];
    }

    cout<<x<<" "<<Mt;
}
