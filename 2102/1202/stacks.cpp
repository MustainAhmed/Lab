#include<iostream>
using namespace std;
class stacks
{
   private:

   int a[10];
   int top;






   public:

       stacks(){
       top=-1;

       }


   void push(){
   if(top==9){
    cout<<"Stack is full"<<endl;
   }
   else{
    int x;
    cout<<"Enter element:";
    cin>>x;
    top++;
    a[top]=x;

   }

   }
   int pop(){

   if(top==-1){
    cout<<"Stack is empty"<<endl;
   }
   else{
    int x;
    x=a[top];
    cout<<"Top="<<x<<endl;
    top--;

    return x;
   }




   }

   void display(){
   int i;
   for(i=top;i>=0;i--){
    cout<<a[i]<<endl;




   }






   }

};



int main()
{
     stacks s;

     for(;;){
        cout<<"\n*******Menu*******"<<endl<<endl;
        cout<<"1. Push "<<endl;
        cout<<"2. Pop "<<endl;
        cout<<"3. Display "<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your option[1-4]:";
        int option;
        cin>>option;
        if(option==4){
            break;
        }
        switch(option){
    case 1:
        s.push();
        break;
        case 2:
          s.pop();
        break;
        case 3:
            s.display();
        break;




        }
     }




 return 0;
}
