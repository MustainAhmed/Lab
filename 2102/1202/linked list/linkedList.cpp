#include<iostream>
using namespace std;

class Node{

public:
int data;
Node *next;




};

class LinkedList{

Node *h=NULL,*p,*q=NULL , *nn;

int n,i;
public:


void create(){
    cout<<"How many node  ";
cin>>n;
for(i=0;i<n;i++){
    p=new Node();
    cout<<"Address "<<i<<": "<<p<<endl;
    int x;
    cout<<"Enter data #"<<i<<":";
    cin>>x;
    p->data=x;
    if(h==NULL)
   {

   h=p;
    q=p;

   }
    else
    {q->next=p;
    q=p;

}
}
q->next=NULL;

}



void display(){
p=h;
while(p!=NULL){
cout<<"-->"<<p->data;
p=p->next;}

}

void Insert()
{  nn=new Node;

    int y,x,o;

    cout<<"\nWhere do you want to enter new value"<<endl;
    cout<<"Enter 1 to enter in the beginning"<<endl;
    cout<<"Enter 2 to enter in the middle"<<endl;
    cout<<"Enter 3 to enter in the end"<<endl;
    cin>>o;

    if(o==1){
        cout<<"enter value of new node ";
        cin>>y;
        nn->data=y;
        nn->next=h;
        h=nn;

    }







    if(o==2)
    {
        p=h;
        cout<<"Enter value of new node:";
    cin>>y;cout<<endl;
    cout<<"After which value to insert:";
    cin>>x;
    nn->data=y;
    nn->next=NULL;
    int i=0;
    while(p->next!= NULL){



         if(p->data==x)
        {
           nn->next=p->next;
           p->next=nn;
        n++;
        cout<<" inserted"<<endl;
        i++;
        p=p->next;
        }

        else {
           if(p->next==NULL&&i==0)
           {
            cout<<"element not found"<<endl;
            break;}

            else{
                p=p->next;
            }
        }
    }

}

if(o==3)
    {
    cout<<"Enter value of new node : ";
    cin>>y;
    nn->data=y;
    p=h;
    while(p->next!=NULL){
        if((p->next)->next==NULL){
            (p->next)->next=nn;
            nn->next=NULL;
            break;
        }
        else{
            p=p->next;
        }

    }
   }
}

void update(){
int y,x;
cout<<"Enter which value you want to change : ";
cin>>y;
cout<<"Enter new value of the node : ";
cin>>x;
p=h;
while(p!=NULL){
    if(p->data==y){
        p->data=x;
    }

   p=p->next;
}


}

void Delete(){
int y,i;
cout<<"Enter the value you want to delete : ";
cin>>y;
p=h;
q=NULL;
while(p!=NULL){

  if(p->data==y){

    if(p==h){
        h=h->next;
        break;
    }

    else{
        q->next=p->next;
        break;
    }


  }

  else{
    q=p;
    p=p->next;

  }



}




}






};









int main()
{
    LinkedList a;

    for(;;){
        cout<<"\n*******Menu*******"<<endl<<endl;
        cout<<"1. Create "<<endl;
        cout<<"2. Insert "<<endl;
        cout<<"3. Delete "<<endl;
        cout<<"4. Update "<<endl;
        cout<<"5. Display "<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter your option[1-6]:";
        int option;
        cin>>option;
        if(option==6){
            break;
        }
        switch(option){
    case 1:
        a.create();
        break;
        case 2:
            a.Insert();
        break;
        case 3:a.Delete();
        break;
        case 4:a.update();

        break;
        case 5:
            a.display();
        break;




        }

    }



return 0;
}
