#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,r;

    cin>>n>>r;

    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
            int a,b;
    cin>>a>>b;
        v.push_back(make_pair(a,b));
    }

    set<int>s;

    for(int i=0;i<n;i++){
        int c=v[i].first;
        for(int j=0;j<n;j++){
            if(c==v[j].first){
                s.insert(v[j].second);
            }
            else   if(c==v[j].second){
                s.insert(v[j].first);
            }
        }

        cout<<"Adj to "<<c<<" is :"<<endl;
        for(auto d:s){
            cout<<d;
        }

        s.clear();
    }





return 0;
}
