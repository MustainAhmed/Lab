#include<iostream>
#include<fstream>
using namespace std;








int main(){
ifstream file;
file.open("E:\\mytext.txt");
int x,i,j,ll[50],data[50],rl[50];
i=1;
while(file>>ll[i]){
file>>data[i];
file>>rl[i];
i++;
}
for(j=0;j<i;j++)
cout<<ll[j]<<" "<<data[j]<<" "<<rl[j]<<endl;
file.close();
}
