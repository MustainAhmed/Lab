#include<iostream>

using namespace std;

int main()
{
  int n,r;
  cout<<"Enter size of sets:"<<endl;
  cin>>n>>r;
  int a[n],b[r];
  cout<<"Enter elements:"<<endl;

for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int i=0;i<r;i++){
    cin>>b[i];
}
//for union

int t[n+r];

for(int i=0;i<n;i++){
    t[i]=a[i];
}

for(int i=0;i<r;i++){
    t[n+i]=b[i];
}

cout<<"Union set:";

for(int i=0;i<n+r;i++){
        int f=0;
    for(int j=i+1;j<n+r;j++){
        if(t[i]==t[j]){
            f++;
        }
    }
    if(f==0){
        cout<<t[i]<<" ";
    }
}


//for intersect

int c=0;

for(int i=0;i<n+r;i++){
    for(int j=i+1;j<n+r;j++){
        if(t[i]==t[j]){
            c++;
        }
    }
}

int I[c];
int o=0;

for(int i=0;i<n+r;i++){
        int f=0;
    for(int j=i+1;j<n+r;j++){
        if(t[i]==t[j]){
            f++;
        }
    }
    if(f>0){
        I[o]=t[i];
        o++;
    }
}

cout<<endl<<"Intersect set:";

for(int i=0;i<o;i++){
    int f=0;
    for(int j=i+1;j<o;j++){
        if(I[i]==I[j]){
            f++;
        }
    }
    if(f==0){
        cout<<I[i]<<" ";
    }
}

//for difference

cout<<endl<<"Difference :";
for(int i=0;i<n;i++){
    int f=0;
    for(int j=0;j<r;j++){
        if(a[i]==b[j]){
            f++;
        }
    }
    if(f==0){
        cout<<a[i]<<" ";
    }
}

//for size

cout<<endl<<"Size of set1 :";
for(int i=0;i<n;i++){
        int f=0;
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            f++;
        }
    }
    if(f==0){
        cout<<a[i]<<" ";
    }
}

cout<<endl<<"Size of set2 :";
for(int i=0;i<r;i++){
        int f=0;
    for(int j=i+1;j<r;j++){
        if(b[i]==b[j]){
            f++;
        }
    }
    if(f==0){
        cout<<b[i]<<" ";
    }
}

}
