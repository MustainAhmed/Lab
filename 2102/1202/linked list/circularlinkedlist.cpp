#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

class linklist
{
private:
    node *h,*q,*p,*temp,*t;
    int n,y=0;
    int x;


public:
    linklist()
    {
        h=NULL;
        t=NULL;
    }
void create()
    {
        cout<<"Enter number of elements :"<<endl;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            p=new node;
            cout<<"Enter element : "<<endl;
            cin>>y;
            p->data=y;
            p->next=0;
            if(t==NULL)
            {
                t=p;
                t->next=p ;
            }
            else
            {

                p->next=t->next;
                t->next=p ;
                t=p;
            }
        }

    }
    void display()
    {
    q=t->next;
    while(q->next!=t->next)
            {
                cout<<q->data<<" ";
                q=q->next;
            }
            cout<<q->data<<endl;

        }


    void Insert()
    {

            int y;

            cout<<"\nWhere do you want to enter new value"<<endl;
    cout<<"Enter 1 to enter in the beginning"<<endl;
    cout<<"Enter 2 to enter in the middle"<<endl;
    cout<<"Enter 3 to enter in the end"<<endl;

            int qq;
            cin>>qq;

            cout<<"Enter new value"<<endl;
            cin>>y;
            p=new node;
            p->data=y;
            if(qq==1)
            {

                p->next=t->next;
                t->next=p;

                n++;
            }

            else if(qq==2)
            {
                temp=t->next;
                cout<<"after which value "<<endl;
                cin>>x;
                int k=search_value(x);
                if(k)
                {

                    for(int i=0; i<n; i++)
                    {
                        if(temp->data==x)
                        {
                            p->next=temp->next;
                            temp->next=p;

                        }
                        temp=temp->next;

                    }

                    n++;

                }

            }

            else if(qq==3)
            {
                p->next=t->next;
                t->next=p;
                t=p;

                n++;

            }
            else cout<<"value is not in the list"<<endl;

        }


    void dlt()
    {
        if(t==NULL)
        {

            cout<<"\tcreate link list first"<<endl;
        }
        cout<<"you have "<<n<<" nodes. ";
        cout<<"which node to be delated"<<endl;
        cin>>x;
        if(x>n) cout<<"\tinvalid node"<<endl;
        else if(x==1)//1st node
        {
            temp=t->next;
            t->next=t->next->next;
            delete temp;
            cout<<"\tdeleted"<<endl;
            n--;
        }
        else if(x==n)//last node
        {
            temp=t->next;
            for(int i=0; i<n; i++)
            {
                if(i==n-2)
                {
                    temp->next=t->next;
                    delete t;
                    t=temp;
                    break;

                }
                temp=temp->next;
            }
            cout<<"\tdeleted"<<endl;
            n--;
        }

        else
        {
            temp=t->next;
            q=t->next;
            int i=1;
            while(i<x-1)
            {

                temp=temp->next;
                i++;

            }
            q=temp->next;
            temp->next=temp->next->next;
            delete q;
            cout<<"\tdeleted"<<endl;
            n--;
        }

    }

    void update()
    {
        p=t->next;
        int y;
        cout<<"enter value you want to update?"<<endl;
        cin>>x;

        int k=search_value(x);
        if(k)
        {
            cout<<"enter new value?"<<endl;
            cin>>y;
            while(p->data!=x)
            {
                p=p->next;
            }
            p->data=y;
            cout<<"\tvalue updated!!!"<<endl;
        }
        else cout<<"\tvalue not found"<<endl;

    }

    int search_value(int a)
    {
        temp=t->next;
        for(int i=0; i<n; i++)
        {
            if(temp->data==a)
            {
                return 1;
            }
            temp=temp->next;
        }
        return 0;
    }


};
int main()
{
    linklist obj1;
    int choice,call;
    while(1)
    {
        cout<<endl<<"****Menu****"<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Insert"<<endl;
        cout<<"3. Delete"<<endl;
        cout<<"4. Update"<<endl;
        cout<<"5. Search"<<endl;
        cout<<"6. Display"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice==7) break;
        else
        {
            switch(choice)
            {
            case 1:
            {
                obj1.create();
            }
            break;
            case 2:
            {
                obj1.Insert();


            }
            break;
            case 3:
            {
                obj1.dlt();
            }
            break;
            case 4:
            {
                obj1.update();

            }
            break;
            case 5:
            {
                cout<<"which value you want to search?"<<endl;
                cin>>call;
                int k=obj1.search_value(call);
                if(k) cout<<"\tpresent in linked list"<<endl;
                else cout<<"\tdoesnt present in linked list"<<endl;
            }
            break;
            case 6:
            {
                obj1.display();

            }
            break;

            }
        }

    }


}
