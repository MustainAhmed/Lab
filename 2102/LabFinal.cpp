#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r,c=0,m=0;

    cin>>n>>r;

    int a[n],b[r];

    for(int i=0;i<n;i++){

        cin>>a[i];
    }

    for(int i=0;i<r;i++){

        cin>>b[i];

    }


    for(int i=0;i<n;i++){
        int d=pow(a[i],-3)+pow(a[i],-1)+1;
    for(int j=0;j<r;j++){

        if(d==b[j]){
            c++;
        }

    }

    }

    if(c==r){
        cout<<"bijection"<<endl;
    }

    else{
        cout<<"not bijection"<<endl;
    }




    return 0;

}
