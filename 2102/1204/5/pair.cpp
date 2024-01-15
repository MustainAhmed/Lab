#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, string> px;
    px.first = 10;
    px.second = "Rajshahi";
    cout << px.first << endl;
    cout << px.second << endl;
    get<int>(px) = 20;
    pair<int, string> bx;
    bx = {50, "Dhaka"};
    swap(px, bx);
    cout << px.first << " " << px.second << endl;
    cout << bx.first << " " << bx.second << endl;
}
