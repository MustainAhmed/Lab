#include<iostream>

using namespace std;
static int N=0;
int transfr;

class Account {
private:
  int Account_No;
  string name;
  int Age;
  float Balance;

public:
    void setData(){
    cout<<"Enter Account:";
    cin>>Account_No;
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Age:";
    cin>>Age;
    cout<<"Enter Balance:";
    cin>>Balance;
     cout<<"Successfully Opened Account."<<endl;
}

    void closeAcc(){

    if(Balance!=0)
        {cout<<"You can not close account because you have balance in this account."<<endl; }
    else
        cout<<"Account successfully closed."<<endl;

    }
    void deposit(){
    float depo;

    cout<<"Enter Amount of Deposit:";
    cin>>depo;
    Balance=depo+Balance;
    cout<<"Successfully Deposited."<<endl;


    }

    void withdraw(){
    float wd;
    cout<<"Enter Amount:";
    cin>>wd;
    Balance=Balance-wd;
    cout<<"Successfully Withdrawed."<<endl;

    }

    void checkAcc(){

    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<Age<<endl;
    cout<<"Balance:"<<Balance<<endl;
    }

    int Search(int acno){
     int   flag=0;
    if(acno==Account_No){
        flag=1;
    }
    return flag;
    }

    void transferUser(){

    cout<<"Enter Amount:";
    cin>>transfr;
    Balance=Balance-transfr;

    }

    void transferReceiver(){

    Balance=Balance+transfr;

    cout<<"Transfer is Successful"<<endl;

    }





};


int main()
{
    Account A[100];
    int n=0,acin,i;



    for(;;){
    cout<<"\n\n*****Main Menu*****" <<endl;
    cout<<"  1.Open New Account" <<endl;
    cout<<"  2.Close Old Account"<<endl;
    cout<<"  3.Deposit Money"<<endl;
    cout<<"  4.Withdraw Money"<<endl;
    cout<<"  5.Check Balance"<<endl;
    cout<<"  6.Transfer"<<endl;
    cout<<"  7.Exit"<<endl;

    int Option;
    cout<<"Enter Your Option (1-6):"<<endl;

    cin>>Option;
    if(Option==7){
        cout<<"Thank You."<<endl;
        break;
    }
    if(Option>6)
    {
        cout<<"Please Enter Appropriate Number"<<endl;
    }
    switch (Option)
    {
        case 1:A[N].setData();
        N++;
        break;
        case 2:
            cout<<"Enter Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].closeAcc();
                }
            }

        N--;
        break;
        case 3:
            cout<<"Enter Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].deposit();
                }
            }


        break;
        case 4:
            cout<<"Enter Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].withdraw();
                }
            }

        break;
        case 5:
            cout<<"Enter Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].checkAcc();
                }
            }

        break;
        case 6:
        cout<<"Enter Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].transferUser();
                }
            }
            cout<<"Enter Receiver's Account Number:";
            cin>>acin;
            for(i=0;i<N;i++){
                if(A[i].Search(acin)){
                    A[i].transferReceiver();
                }
            }



    }

    }


    return 0;
}
