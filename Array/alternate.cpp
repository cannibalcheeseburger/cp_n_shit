#include<bits/stdc++.h>

using namespace std;

void rearrange(vector<int> &arr){
    int n= arr.size();
    int i =0,j=n-1;
    for(;i<j;){
        if(arr[i]>0)
            i++;
        if(arr[j]<0)
            j--;
        if(i<j && arr[i]<0 && arr[j]>0)
            swap(arr[i],arr[j]);
    }
    for(int k = 1;k<n && i<n;){
        swap(arr[k],arr[i]);
        i++;
        k+=2;
    }
}

int main(){
    vector<int> arr;
    int n,l;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    rearrange(arr);
       for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}