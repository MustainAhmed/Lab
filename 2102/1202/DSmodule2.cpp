#include<iostream>
using namespace std;

class  Array
{
private:
    int a[100];
    int n;

public:
   int i,j;

    void create()
    {
        cout<<"Enter How Many Elements You Want:";
        cin>>n;

        for(i=0;i<n;i++){
            cout<<"Enter Element #"<<i<<":";
            cin>>a[i];
        }
    }
        void linearSearch()
        {
            int m,f=0;
            cout<<"Enter To Search:";
            cin>>m;
            for(i=0;i<n;i++){
                if(a[i]==m){
                    f++;
                    break;
                }}
                if(f>0){
                    cout<<"Element is in index no "<<i<<endl;
                }
                else{
                    cout<<"Element is not in the array"<<endl;
                }


        }

        void binarySearch()
        {
            int m,h=n-1,l=0,t,mid;
            cout<<"Enter To Search:";
            cin>>m;
            for(i=0;i<n;i++){
                for(j=0;j<n-i;j++){
                    if(a[j]>a[j+1]){
                        t=a[j];
                        a[j]=a[j+1];
                        a[j+1]=t;
                    }
                }
            }

           while(l<=h){
                mid=(l+h)/2;
                if(a[mid]==m){
                    cout<<"Element is in index no "<<mid<<endl;
                    break;
                }

                else if(a[mid]>m){
                    h=mid-1;
                }

                else if(a[mid]<m){
                    l=mid+1;
                }


                }

            }





        void display()
        {
            for(i=0;i<n;i++){
                cout<<" "<<a[i];
            }
        }







};




int main()
{
  Array obj;
  for(;;){
    cout<<"\n*****Menu*****"<<endl<<endl;
    cout<<"1. Create"<<endl;
    cout<<"2. Linear Search"<<endl;
    cout<<"3. Binary Search"<<endl;
    cout<<"4. Display"<<endl;
    cout<<"5. Exit"<<endl;
    int option;
    cout<<"Enter your option:";
    cin>>option;
if(option==5){
    break;
}
    switch(option){
    case 1:obj.create();
    break;
    case 2:obj.linearSearch();
    break;
    case 3:obj.binarySearch();
        break;
    case 4:obj.display();
        break;




    }

  }


  return 0;
}
