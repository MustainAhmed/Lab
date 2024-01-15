#include<iostream>
using namespace std;

void Move(int n,char src,char dest,char aux){
if(n==0){
        return ;}

    Move(n-1,src,aux, dest);
cout<<"Move disk "<<n<<" from disk "<<src<<" to disk "<<dest<<endl;
   // Move(1,src,dest,aux);
    Move(n-1,aux,dest,src);


}

int main(){
int n;

cin>>n;
Move(n,'a','b','c');



return 0;
}
