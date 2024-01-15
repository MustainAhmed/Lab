#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file;
file.open("E:\\mytext.txt");
int i=10;
file<<i;
file.close();
}
