#include<iostream>

using namespace std;

int main()
{
    int n,r,c=0,cnt=0,t=0;
    cin>>n>>r;
    int x[n],y[r];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }
    for(int i=0; i<r; i++)
    {
        cin>>y[i];
    }
    //for all x & all y
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(x[i]*x[i]-y[j]<3)
            {
                c++;
            }
        }
        if(c==r)
        {
            cnt++;
        }
        t=t+c;
        c=0;
    }

    if(cnt==n&&t==n*r)
    {
        cout<<"1 is true"<<endl;
    }
    else
    {
        cout<<"1 is false"<<endl;
    }

    //for all x & some y
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(x[i]*x[i]-y[j]<3)
            {
                c++;
            }
        }
        if(c>0)
        {
            cnt++;
        }
        else
        {
            cout<<"2 is false"<<endl;
            break;
        }
        c=0;
    }
    if(cnt==n)
    {
        cout<<"2 is true"<<endl;
    }
    else
    {
        cout<<"2 is false"<<endl;
    }
//for some x & all y
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(x[i]*x[i]-y[j]<3)
            {
                c++;
            }
        }
        if(c==r)
        {
            cnt++;
        }
        c=0;
    }

    if(cnt>0)
    {
        cout<<"3 is true"<<endl;
    }
    else
    {
        cout<<"3 is false"<<endl;
    }

//for some x & all y
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(x[i]*x[i]-y[j]<3)
            {
                c++;
            }
        }
        if(c>0)
        {
            cnt++;
        }
        c=0;
    }

    if(cnt>0)
    {
        cout<<"4 is true"<<endl;
    }
    else
    {
        cout<<"4 is false"<<endl;
    }

    return 0;
}
