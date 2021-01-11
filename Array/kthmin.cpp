#include<bits/stdc++.h>

using namespace std;

int kth(int arr[],int n,int k){

    sort(arr,arr+n);
    return arr[k-1];
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++)
            cin>>arr[i];
        int k;
        cin>>k;
        cout<<"Kth smallest element is = "<<kth(arr,n,k);
    }
    
    return 0;
    
}