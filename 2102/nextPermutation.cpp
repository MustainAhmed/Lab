#include<bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    int j;

    cin>>n;

    j=n.length()-2;

    while(j>=0){
        if(n[j]>n[j+1]){
            j--;
        }

        else{
            for(int i=n.length();i>j;i--){
                if(n[j]<n[i]){
                    swap(n[j],n[i]);
                    break;
                }

            }
            break;
        }
    }

    reverse(n.begin()+j+1,n.end());


for(int i=0;i<n.length();i++){
    cout<<n[i];
}

   /* int n,m,j,t;
    vector<int >v;

    cin>>n;

    while(n!=0){
        v.push_back(n%10);
        n=n/10;

    }

    reverse(v.begin(),v.end());

    m=v.size();
    j=m-2;

    while(j>=0){
        if(v.at(j)>v.at(j+1)){
            j--;
        }

        else{
            for(;m>j;m--){
                if(v.at(j)<v.at(m)){
                  t=v.at(j);
                  v.at(j)=v.at(m);
                  v.at(m)=t;
                  break;
                }
            }
            break;
        }
    }
    t=v.size();
    reverse(v.at(j+1),t);

    for(auto d:v){
        cout<<d;
    }
*/
}

