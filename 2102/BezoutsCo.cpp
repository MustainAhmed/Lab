#include<bits/stdc++.h>

using namespace std;

void Display(auto v){
for(int i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}

}
int main()
{
    int a,b,s=1,t=0,s1,t1,r;

    cin>>a>>b;

    vector<pair<int,int >>v;

    while(b!=0){
        v.push_back(make_pair(a,b));
        r=a%b;
        a=b;
        b=r;
    }

    Display(v);


   /* vector<int>v;

    cin>>a>>b;

    while(r!=0){
        t1=(-1)*a/b;
        v.push_back(t1);
        r=a%b;
        a=b;
        b=r;

    cout<<t1<<endl;
    }

    v.pop_back();

    t1=*v.end();
    cout<<t1<<endl;
    s=1;
    t=t1;
    cout<<t<<endl;
    v.pop_back();

    while(!v.empty()){
        int temp=0;
        s1=1;
        t1=*(v.end());
        cout<<t1<<endl;
        temp=s;
       s=s1*t;
        t=temp+t*t1;
        v.pop_back();
         cout<<s<<" "<<t<<endl;
    }

*/

    return 0;
}
