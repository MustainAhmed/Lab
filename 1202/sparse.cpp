#include<iostream>
using namespace std;

class matrix
{
private:
    int n,m,k=0;
    int b[100][3];
    int a[100][100];
public:
    void create()
    {
        cout<<"Enter value of row and col :"<<endl;
        cin>>n>>m;

        cout<<"Enter array elements :"<<endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
    }

    void sparse()
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]!=0)
                {
                    k++;
                    b[k][0]=i;
                    b[k][1]=j;
                    b[k][2]=a[i][j];

                }

            }
        }
    }

    void display()
    {
        cout<<"row"<<"  "<<"col"<<"   "<<"value"<<endl;
        cout<<n<<"     "<<m<<"     "<<k<<endl;
        for(int i=1; i<=k; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<b[i][j]<<"     ";
            }
            cout<<endl;
        }
    }


};

int main()
{
    matrix o;
    o.create();
    o.sparse();
    o.display();
    return 0;
}
