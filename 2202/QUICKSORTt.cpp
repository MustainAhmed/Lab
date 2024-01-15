#include <bits/stdc++.h>
using namespace std;
int n;
void QuickSort(int a[],int p,int r);
int Partition(int a[],int p,int r);

void QuickSort(int a[],int p,int r){
int i,q;
 if(p<r){
 q=Partition(a,p,r);
 QuickSort(a,p,q-1);
 QuickSort(a,q+1,r);
 }
}
void display(int *a){
cout<<"updated array is..\n";
for(int i=0;i<n;i++){
        cout<<a[i]<<" "; cout<<endl;
        }
}

int Partition(int *a,int p,int r){
int x,j,t,i;
x=a[r];
i=p-1;
for(j=p;j<=r-1;j++){

 if(a[j]<=x){
 i++;

 t=a[i];
 a[i]=a[j];
 a[j]=t;

 }
}
t=a[i+1];
a[i+1]=a[r];
a[r]=t;
return(i+1);
}


int main()
{
 ofstream file;
 file.open("C:\\Users\\HP\\Desktop\\sort.txt");
 int a[100000];
 cin>>n;
 srand(time(0));

 for(int i=0;i<n;i++){
     int random=rand()%1000+1;
    file<<random<<"\n";
    a[i]=random;
 }
 file.close();

 cout<<"The unsorted array is:\n";
 for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
      //  cout<<endl;
        }

 int p,r,i;
 p=0;r=n-1;
 QuickSort(a,p,r);

 cout<<"\nThe sorted array is:\n";
 for(i=p;i<=r;i++)
 {
    printf("%d ",a[i]);
 }

 return 0;
}


