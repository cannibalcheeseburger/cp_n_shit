#include<bits/stdc++.h>
/*
10
1 2 3 4 5 6 7 7 8 9 
*/
using namespace std;

int duplicate(vector<int> &arr,int n){
    int sum = accumulate(arr.begin(),arr.end(),-((n-1)*n)/2);
    return sum;
}

int main(){
    vector <int> arr;
    int n,l;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    cout<<duplicate(arr,n);

}