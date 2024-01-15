#include<iostream>
using namespace std;

class Test{
private:
 int x;
 int y;
static int z;

public:
    Test()
    {
        x=0;
        y=0;
        z++;
    }
    Test(int m,int n)
    {
    x=m;
    y=n;
    z++;
    }

    Test(Test &r)
    {
        x=r.x;
        y=r.y;
        z++;
    }

    void setData(int m,int n)
    {
        x=m;
        y=n;

    }




    static void showData()
    {
        cout<<"z="<<z<<endl;
        z++;
    }

     void getData()
    {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;

    }
    int getX()
    {
        return x;

    }

    int getY()
    {
        return y;
    }

};

int Test::z=0;

int main()
{
    Test a(5,10),b(6,11),c(7,12),d(8,13),e(9,14);
   cout<<"Sum="<<a.getX()+b.getX()+c.getX()+d.getX()+e.getX()<<endl;
    a.showData();

    int Max=a.getY();
    int p=1;

    if(Max<b.getY()){
        Max=b.getY();
        p++;
    }
    if(Max<c.getY()){
        Max=c.getY();
        p++;
    }
    if(Max<d.getY()){
        Max=d.getY();
        p++;
    }
    if(Max<e.getY()){
        Max=e.getY();
        p++;
    }


    cout<<"Maximum value is in object no:"<<p<<" which is "<<Max<<endl;


    return 0;
}
