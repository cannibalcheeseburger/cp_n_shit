#include<bits/stdc++.h>
/*
input 
6 6 
1 10 14 14 14 15
*/
using namespace std;

int miniheight(vector<int> &arr,int n,int k){
    sort(arr.begin(),arr.end());
    int big = arr[n-1]-k;
    int small = arr[0]+k;
    if(small>big)
        swap(small,big);
    int add,sub;
    for(int i = 1;i<n-1;i++){
        add = arr[i]+k;
        sub = arr[i]-k;
        if(add<=big || sub >= small)
            continue;
        if(add-big> small-sub)
            small = sub;
        else 
            big = add;
    }
    return big-small;
}

int main(){
    vector <int> arr;
    int n,l,k;
    cin>>n>>k;
    for(int i = 0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    cout<<miniheight(arr,n,k);
    return 0;
}