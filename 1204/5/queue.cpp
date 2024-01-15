#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>qu;
    qu.push(10);
    qu.push(20);
     qu.push(30);
    cout<<"queue status "<<qu.empty()<<endl;
     cout<<"front element:"<<qu.front()<<endl;
    cout<<"rear element:"<<qu.back()<<endl;
    qu.pop();
    qu.pop();
    qu.pop();
     cout<<"quack quatus "<<qu.empty()<<endl;
}
