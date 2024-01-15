#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,r,i;
    cout<<"Enter size of 2 set:"<<endl;
    cin>>n>>r;

    if(n!=r){
        cout<<"Not Onto"<<endl;
        cout<<"Not Onto"<<endl;
        cout<<"Not Onto"<<endl;
        return 0;
    }
    int a[n],b[n],a1[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cin>>b[i];
    }


   //for 1
    int c=0;
    for(i=0;i<n;i++){
    a1[i]=pow(a[i],2);
    }

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(a1[i]==b[j]){
            c++;
           }
        }
    }
     if(c==n){
        cout<<"OnTo"<<endl;
     }
    else{
        cout<<"Not Onto"<<endl;
    }

    //for 2
      c=0;
    for(i=0;i<n;i++){
    a1[i]=pow(a[i],2)+1;
    }

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(a1[i]==b[j]){
            c++;
           }
        }
    }
     if(c==n){
        cout<<"OnTo"<<endl;
     }
    else{
        cout<<"Not Onto"<<endl;
    }

    //for 3

      c=0;
    for(i=0;i<n;i++){
    a1[i]=pow(a[i],3)+pow(a[i],2)-a[i]-1;
    }

    for(i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(a1[i]==b[j]){
            c++;
           }
        }
    }
     if(c==n){
        cout<<"OnTo"<<endl;
     }
    else{
        cout<<"Not Onto"<<endl;
    }

}
