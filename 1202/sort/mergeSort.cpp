#include<iostream>

using namespace std;

class MergeSort
{
public:

   void mergeSort(int a[],int low,int high)
    {
        int mid;
    cout<<"in merge low= "<<low<<"high = "<<high<<endl;
    if(low<high){
        mid=(low+high)/2;
        cout<<"mid = "<<mid<<endl;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);

Merge(a,low ,mid,high);
    }

    }
void Merge(int a[], int low,int mid,int high)
{

    int i,j,k,b[7];
    i=low;
    j=mid+1;
    k=low;

    while((i<=mid)&&(j<=high))
    {
        if(a[i]>a[j])
        {
            b[k]=a[j];
            j++;
            k++;
        }
        else
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    while(i<=mid)
    {
        b[k]=a[i];
        i++;
        k++;
    }

    while(j<=high)
    {
        b[k]=a[j];
        j++;
        k++;
    }
    for(i=low; i<=high; i++)
        a[i]=b[i];

}


    void display(int a[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        {
        cout<<" "<<a[i];
    }


    }

};


int main()
{
    int a[7]={10,78,32,90,20,19,25};
    int n=7;

    MergeSort obj;

    obj.mergeSort(a,0,7);

    obj.display(a,n);


    return 0;
}
