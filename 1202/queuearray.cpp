#include<iostream>
using namespace std;
#define n 4

class queuee
{
    int arr[n];
    int frontt,rear;
public:
    queuee()
    {
        frontt=0;
        rear=0;
    }

    void enqueue(int a)
    {
        if(rear==n-1)
        {

            if(frontt==0)
            {
                cout<<"\tfull"<<endl;
            }
            else
            {
                rear=0;
                arr[rear]=a;
                cout<<"front "<<frontt<< " rear "<<rear<<endl;
            }
        }
        else
        {
            if(rear+1==frontt)  cout<<"\tfull"<<endl;
            else arr[++rear]=a;
            cout<<"front "<<frontt<< " rear "<<rear<<endl;
        }
    }
//front e kno value thake na
    void dequee()
    {
        if(rear==frontt) cout<<"\tempty"<<endl;
        else
        {
            if(frontt==n-1)
            {
                frontt=0;
                cout<<"dequed "<<arr[frontt]<<endl;
                cout<<"front "<<frontt<< " rear "<<rear<<endl;
            }
            else
            {
                frontt=frontt+1;
                cout<<"dequed "<<arr[frontt]<<endl;
                cout<<"front "<<frontt<< " rear "<<rear<<endl;
            }

        }
    }

    void displayy()
    {
          cout<<"front "<<frontt<< " rear "<<rear<<endl;
        if(frontt==rear) cout<<"\tempty"<<endl;
        else if(frontt==n-1)
        {
            int p=0;
            for(int i=p; i<=rear; i++)
            {
                cout<<arr[i]<<" ";
            }
        }
        else if(frontt>rear)
        {
            for(int i=frontt+1; i<=n-1; i++)
            {
                cout<<arr[i]<<" ";
            }
            int k=rear;
            for(int i=0; i<=k; i++)
            {
                cout<<arr[i]<<" ";
            }


        }
        else
        {
            for(int i=frontt+1; i<=rear; i++)
            {
                cout<<arr[i]<<" ";

            }
        }
    }

};

int main()
{
    int x;
    queuee qq;
    while(1)
    {
        int ch;
        cout<<"\n********* Menu ********"<<endl;
        cout<<"1. Enqueue \n2. Dequeue \n3. Display \n4. Exit\n";
        cout<<"enter your choise"<<endl;
        cin>>ch;
        if(ch==4) break;
        else
        {
            switch (ch)
            {
            case 1:
            {
                cout<<"enter value to enqueue"<<endl;
                cin>>x;
                qq.enqueue(x);
            }
            break;
            case 2:
                qq.dequee();
                break;
            case 3:
                qq.displayy();
                break;
            }


        }
    }
}

