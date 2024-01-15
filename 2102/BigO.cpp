#include<iostream>
#include<fstream>
#include <cstdlib>
#include<ctime>
#include<cmath>
#include<bits/stdc++.h>

using namespace std;

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

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    end=clock();

    cout<<(float)(end-start)/CLOCKS_PER_SEC;
    return 0;
}
