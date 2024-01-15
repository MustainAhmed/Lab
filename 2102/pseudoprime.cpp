#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n,r,b,s,t=1;
    cin>>b>>n;

    vector<long long>v;

    while(n!=1){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            n=n/i;
            break;
        }
    }
}

    for(auto a:v){
        cout<<a<<endl;
    }

    for(int i=0;i<v.size();i++){
    if((n-1)%(v[i]-1)==0){
        s=1;
    }
    else{
        r=(n-1)%(v[i]-1);

        for(int i=1;i<=r;i++){
            t=t*b;
        }

        if((t%v[i])!=1){
            s=0;
        }
        else{
            s=1;
        }
    }

    }


    if(s==0){
        cout<<"Not Pseudo"<<endl;
    }
    else{
        cout<<"Pseudo"<<endl;
    }

return 0;
}
