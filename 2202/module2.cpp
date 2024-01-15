#include<bits/stdc++.h>

using namespace std;

    long long MAX,MIN,n,Count=0;
    void input(){
    cout<<"Enter number : "<<endl;
    cin>>n;
    }

    long long A[20000];



void straight(long long n)
{
   long long max,min,i=0,count=0;
   max=A[i];
   min=A[i];
   for(long long i=1;i<n;i++)
   {
      if(max<A[i]){
            max=A[i];
      }
      else if(min>A[i]){
        min=A[i];
      }
      count++;
   }

   cout<<"Max is "<<max<<"\n"<<"Min is "<<min<<endl;
   cout<<"Total steps in normal method :"<<count<<endl;

}

bool  DandC(long long b,long long e,long long  &max,long long  &min)
{
    long long max1,min1,max2,min2;

    if(b==e){
        max=A[e];
        min=A[b];
    }
    else if(b==e-1){
        if(A[b]<A[e]){
            max=A[e];
            min=A[b];
            Count++;
        }
        else{
            max=A[b];
            min=A[e];
            Count++;
        }
    }

    else{
        long long mid=(b+e)/2;
        DandC(b,mid,max1,min1);
        DandC(mid+1,e,max2,min2);

        if(max1<max2){
            max=max2;
            Count++;
        }
        else{
            max=max1;
            Count++;
        }

         if(min1>min2){
            min=min1;
            Count++;
        }
        else{
            min=min2;
            Count++;
        }

    }

    return true;
}

int main()
{
    fstream file;
    file.open("C:\\Users\\HP\\Desktop\\search.txt");

    input();


    srand(time(0));

     for(long long i=0;i<n;i++){
        file<<rand();
    }


    for(long long i=0;i<n;i++){
        file>>A[i];
    }

    file.close();

    straight(n);


    if(DandC(0,n-1,MAX,MIN)){
         cout<<"Max is "<<MAX<<"\n"<<"Min is "<<MIN<<endl;
         cout<<"Total steps in DandC method :"<<Count<<endl;
    }

    return 0;
}
