#include<iostream>
using namespace std;
class Father
{
private:
    int money=1;
protected:
    int gold=2;
public:
    int land=3;

};

class Son:private Father
{
   public:
  /* void getmoney()
    {
        cout<<"Money="<<money;
    }*/
    void getgold()
    {
        cout<<"Son Gold="<<gold<<endl;
    }

    void getland()
    {
        cout<<"Son Land="<<land<<endl;
    }



};

class GrandSon:private Son
{

    public:
    /* void getmoney()
    {
        cout<<"Money="<<money;
    }*/

    void getgold()
    {
        cout<<"GrandSon Gold="<<gold<<endl;
    }

    void getland()
    {
        cout<<"GrandSon Land="<<land<<endl;
    }




};












int main()
{
    Son a;
    //a.getmoney();
    a.getgold();
    a.getland();

    GrandSon b;
    a.getmoney();
    b.getgold();
    b.getland();

    return 0;
}
