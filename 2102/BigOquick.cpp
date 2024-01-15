#include<bits/stdc++.h>

using namespace std;

long long int Partition(long long int ax[],long long int lb,long long int ub)
{
    long long int pivot=ax[lb];
    long long int start=lb;
    long long int endd=ub;
    while(start<endd)
    {
        while(ax[start]<=pivot) start++;
        while(ax[endd]>pivot) endd--;
        if(start<endd) swap(ax[start],ax[endd]);

    }
    swap(ax[endd],ax[lb]);
    return endd;



}

void Quick_Sort(long long int ax[],long long int lb,long long int ub)
{
    if(lb<ub)
    {
        int loc=Partition(ax,lb,ub);
        Quick_Sort(ax,lb,loc-1);
        Quick_Sort(ax,loc+1,ub);
    }

}

int main()
{
     fstream randf;
    randf.open("C:\\Users\\HP\\Desktop\\test.txt");

    for(int i=0;i<200000;i++){
        randf<<rand();
    }

    long long int n;
    cin>>n;
    long long int a[n];

    for(int i=0;i<n;i++){
        randf>>a[i];
    }

    randf.close();

    clock_t  start;
    clock_t end;
    start=clock();

    Quick_Sort(a,0,n-1);

    end=clock();

    cout<<(float)(end-start)/CLOCKS_PER_SEC;
    return 0;

}
