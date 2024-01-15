#include<iostream>
#include<array>
#include<utility>
using namespace std;
int main()
{
    array<int,6>ax={10,60,30,70,20};
    array<int,6>bx={1,6,3,7,2}   ; //ax.fill(7);
    cout<<"Element in array :"<<ax.at(2)<<endl;
    cout<<"Element in array :"<<ax[3]<<endl;
    cout<<"Front Element:"<<ax.front()<<endl;
    cout<<"Back Element:"<<ax.back()<<endl;
    cout<<"Size of ax:"<<ax.size()<<endl;
    cout<<"Size of ax:"<<ax.max_size()<<endl;
    cout<<"First element :"<<ax.begin()<<endl;
    cout<<"Last element :"<<ax.end()<<endl;

    cout<<ax.empty();
swap(ax,bx);







 for(int *i=ax.begin();i<ax.end();i++){
    cout<<" "<<*i;
 }
   //cout<<"Element in array :"<<ax.at(6)<<endl;

   pair<int,string>px;
   pair<int,string>qx;
   px=make_pair(10,"Rajshahi");
   qx=make_pair(30,"Dhaka");
   px.first=20;
   cout<<px.first<<endl;
   cout<<px.second<<endl;


   return 0;
}
