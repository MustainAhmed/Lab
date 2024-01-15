#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    cout<<"stack status "<<st.empty()<<endl;
     cout<<"TOP:"<<st.top()<<endl;
    st.pop();
    cout<<"TOP:"<<st.top()<<endl;
    st.pop();
     cout<<"stack status "<<st.empty()<<endl;
}
