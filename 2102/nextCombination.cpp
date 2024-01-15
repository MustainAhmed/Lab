#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,t;
    cin>>n>>r;

    int a[n],b[r];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<r;i++){
        cin>>b[i];
    }

    for(int i=r-1;i>=0;i--){
       for(int j=n-1;;j--){
       if(b[i]==a[j]){
        j--;
        continue;
       }

    else if(b[i]!=a[j]){
        t=i;
        break;
       }

    }}


    for(int i=0;i<n;i++){
        if(a[i]==b[t]){
            for(;i<r;i++,t++){
                b[t]=a[i+1];
            }
        }
    }

    for(int i=0;i<r;i++){
        cout<<b[i]<<" ";
    }
}
