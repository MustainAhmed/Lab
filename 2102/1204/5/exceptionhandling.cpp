#include <iostream>
using namespace std;
int main()
{


int i;
int ax[5]={10,20,60,40,30};
cout<<"enter index:";
cin>>i;
try{
if(i>=5){
    throw "Out of range ";
}

else if(i>=0||i<5){
    throw 1;}

 else{
    throw ;
 }

}

catch(int a){
cout<<"ax["<<i<<"]="<<ax[i]<<endl;
}

catch(char const*b){

cout<<b<<endl;
}

catch(...){
cout<<"Enter valid number"<<endl;
}



return 0;
}
