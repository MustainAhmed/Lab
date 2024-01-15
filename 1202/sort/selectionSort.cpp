#include<iostream>
using namespace std;

class select
{
    private:
    int n=0;
    int a[100];


    public:
    void create(){
    cout<<"Enter number of element: ";
        cin>>n;
        cout<<"Enter element of array: "<<endl;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

    }
    void Sort(){
    int i,j,t,c;
    for(i=1;i<n;i++){
        c=i;
        for(j=i+1;j<=n;j++){

            if(a[j]<a[i]){

                c=j;
            }
        }
        t=a[i];
        a[i]=a[c];
        a[c]=t;
    }
    }


    void display(){
    cout<<"Sorted array:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    }




};


int main()
{

    select a;
    a.create();
    a.Sort();
    a.display();

}
