#include<iostream>

using namespace std;

int factorial(int n){

if(n==0){
    return 1;
}

else
    return n*factorial(n-1);


}





int main()
{

   int j;
    cin>>j;

    cout<<"factorial = "<<factorial(j);

    return 0;
}
