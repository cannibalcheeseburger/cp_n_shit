#include<bits/stdc++.h>

using namespace std;

/*
input
7
1 4 -2 -2 5 -4 3
*/

bool zerosum(vector<int>&arr){
    unordered_map<int,bool> map;
    int sum = 0;

    for(int i =0;i<arr.size();i++){
        sum += arr[i];
        if(sum == 0 || map[sum] == true)
            return true;
        map[sum] = true;
    }
    
    return false;
}

int main(){
    vector<int> arr;
    int n,l;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    if(zerosum(arr))
        cout<<"0 Sum exits";
    else
        cout<<"0 Sum doesn't exist";
    return 0;
}