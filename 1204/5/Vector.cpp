#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

void Display(vector<int> &p){
for(int i=0;i<p.size();i++)
cout<<p[i]<<" ";
cout<<endl;
}
int main()
{
   int i,j;

   vector<int>ax;
   vector<int>::iterator ptr;
   vector<int>::iterator it;

    ax.push_back(10);
    ax.push_back(20);
    ax.push_back(30);
    ax.pop_back();
    i=ax.front();j=ax.back();
    cout<<i<<" "<<j<<endl;


    it=ax.begin();
    ax.insert(it,566);
    ax.insert(it+2,5,15);

    ax.resize(5);
    Display(ax);
    return 0;
}

