#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll n; cin>>n;
ofstream file;
file.open("C:\\Users\\HP\\Desktop\\New folder\\DijkstraData.txt");
file<<n<<endl;
ll source; cin>>source;
file<<source<<endl;
for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        ll w=0;
        if(i!=j){
            while(w==0)
            w=rand()%20;
        }
        file<<w<<" ";
    }
    file<<endl;
}
file.close();
return 0;
}

