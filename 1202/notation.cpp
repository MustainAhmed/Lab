#include<iostream>
using namespace std;

class Stack
{

public:
    stack< char >arr;
    int top;
    Stack()
    {

        top=-1;
    }
    void push_char(char *aa)
    {

        top++;
        arr.push(*aa);
    }

    char pop_char()
    {
        return arr.pop();
        top--;
    }
    int priority(char *aa)
    {
        if(*aa=='+' || *aa=='-') return 1;
        else if(*aa=='*' || *aa=='/') return 2;
        else return 0;
    }
};



int main()
{
    Stack obj;
    int n=-1;
    string s;
    cin>>s;
    string a="";
    char x;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
        {
            obj.push_char(s[i]);
            n++;
        }
        else  if(isalnum(s[i])) a+=s[i];
        else if(s[i]==')')
        {
//            while((x=obj.pop())!='(')
//            {
//                a+=x;
//                n--;
//            }
while(obj.)
        }
        else
        {
            while(obj.priority(obj.arr[n])>=obj.priority(s[i]))
            {
                a+=obj.pop();
                n--;

            }
            obj.push_char(s[i]);
            n++;
        }

    }
    while(n!=-1) {
        a+=obj.pop();
        n--;
    }
    cout<<a<<endl;
}

