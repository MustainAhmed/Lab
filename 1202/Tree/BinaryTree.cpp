#include<iostream>
#include<fstream>

using namespace std;

struct Node{
struct Node *ll;
int d;
struct Node *rl;
};

Node *ax[50];
Node *h;

int main(){
ifstream file;
file.open("E:\\mytext.txt");
int n,x,i,j,ll[50],data[50],rl[50];

i=1;

while(file>>ll[i]){
file>>data[i];
file>>rl[i];
i++;
}

n=i-1;

for(j=0;j<=n;j++)
{
    cout<<ll[j]<<" "<<data[j]<<" "<<rl[j]<<endl;
}
file.close();

for(i=1;i<=n;i++){
ax[i]=new Node();
cout<<i<<" "<<ax[i]<<endl;
}

h=ax[1];
ax[0]=0;


for(i=1;i<=n;i++){
ax[i]->d=data[i];
ax[i]->ll=ax[ll[i]];
ax[i]->rl=ax[rl[i]];
}

for(i=1;i<=n;i++){
cout<<ax[i]->ll<<" "<<char(ax[i]->d)<<" "<<ax[i]->rl<<endl;
}
}
