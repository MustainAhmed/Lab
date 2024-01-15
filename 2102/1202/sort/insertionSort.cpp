#include<iostream>
using namespace std;

class Insertion
{
    private:
    int n=0;
    int a[100];


    public:
    void create(){
    cout<<"Enter number of element: ";
        cin>>n;
        cout<<"Enter element of array: "<<endl;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

    }

    void display()
    {
        cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    }


    void Sort(){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=a[i];
        while(j>=0&&a[j]>temp){
            a[j+1]=a[j];
            j--;

        }
        a[j+1]=temp;
    }

    }

};



int main()
{
   Insertion o;
    o.create();
    o.Sort();
    o.display();
}
