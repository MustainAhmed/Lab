#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n1,n2,l,s,gcd=1,lcm;
    cin>>n1;
    cin>>n2;

    if(n1>n2){
        s=n2;
        l=n1;
    }
    else{
        s=n1;
        l=n2;
    }

    while(s!=1){
    for(int i=2;i<=s;i++){
        if(s%i==0){
            if(l%i==0){
            gcd=gcd*i;


            l=l/i;
            }
            s=s/i;
            break;
        }
    }
}

lcm=n1*n2/gcd;

cout<<gcd<<" "<<lcm;
}
