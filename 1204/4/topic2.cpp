#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

class Circuit{
float real;
float img;

public:
Circuit(){}
Circuit(float real,float img){
    this->real=real;
    this->img=img;
}



void display(){
    cout<<real<<(img>=0?" + j":" - j")<<abs(img)<<endl;
}

Circuit operator * ( Circuit const &obj){
    Circuit temp;
    temp.real= (real * obj.real) - (img * obj.img);
    temp.img = (real * obj.img)  + (img * obj.real);

    return temp;
}

Circuit operator - ( Circuit const &obj){
    Circuit temp;
    temp.real=real - obj.real;
    temp.img = img - obj.img;

    return temp;
}

Circuit operator + ( Circuit const &obj){
    Circuit temp;

    temp.real=real + obj.real;
    temp.img = img + obj.img;

    return temp;
}

Circuit operator / ( Circuit const &obj){
    Circuit temp;
     float sq = (obj.real*obj.real) + (obj.img*obj.img);
    temp.real= ((real*obj.real)+(img*obj.img))/sq;
    temp.img = ((img*obj.real)-(real* obj.img))/sq;

    return temp;
}

};

int main(){

cout<<setprecision(2)<<fixed;
Circuit t(3,4);


Circuit b(4,-3);
Circuit c(0,6) ;

Circuit sumOfImpedance;
sumOfImpedance = ((t*b*c)/((t*b)+(b*c)+(c*t)));
sumOfImpedance.display();
Circuit voltage(100,50);

Circuit current;
current = voltage/sumOfImpedance;
current.display();




    return 0;
}
