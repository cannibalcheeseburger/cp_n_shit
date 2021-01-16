#include<bits/stdc++.h>
/* input
6 
7 1 5 3 6 4
*/
using namespace std;

int profit(vector<int> &prices){
    int i,profits = 0;
    int small = INT_MAX;
    for(i = 0;i<prices.size();i++){
        if(small>prices[i])
            small = prices[i];
        else if (profits<prices[i]-small)
            profits = prices[i] - small; 
    }
    return profits;
}

int main(){
    vector<int> prices;
    int n,l;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>l;
        prices.push_back(l);
    }
    cout<<profit(prices);
    return 0;
}