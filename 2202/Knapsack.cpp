#include<bits/stdc++.h>

using namespace std;

int main(){

    ifstream infile("C:\\Users\\HP\\Desktop\\knapsack.txt");
    if (!infile) {
        cerr << "Unable to open file";
        return 1;
    }

    int n,maxW;
    float profit=0;
    infile >> n;

    cout<<"Enter Max Weight : ";
    cin>>maxW;
    cout<<endl;

    vector<int> weights(n);
    vector<int> profits(n);
    vector<float> ratios(n);
    fill(ratios.begin() , ratios.end() - 1, 0);
    float PperW[n],sorted1[n];

    for (int i = 0; i < n; ++i) {
        infile >> weights[i];
    }

    for (int i = 0; i < n; ++i) {
        infile >> profits[i];
    }

    infile.close();



    for (int i = 0; i < n; ++i) {
        PperW[i]=((float)profits[i]/(float)weights[i]);
        sorted1[i]=((float)profits[i]/(float)weights[i]);
    }
    cout << endl;

    sort(sorted1,sorted1+n);
    reverse(sorted1,sorted1+n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(maxW!=0){
                if(sorted1[i]==PperW[j]){
                if(weights[j]<=maxW){
                    maxW=maxW-weights[j];
                    ratios[j]=1.0;
                    profit=(float)profits[j]+profit;
                }
                else{
                    ratios[j]=((float)maxW/(float)weights[j]);
                    profit=profit+(ratios[j]*(float)profits[j]);
                    maxW=0;
                }
            }
            }

            else{
                break;
            }

        }
    }

    cout<<"Max Profit = "<<profit<<endl;

     for (int i = 0; i < n; ++i) {
        cout<< ratios[i]<<" ";
    }
    cout<<endl;

    return 0;
}
