#include<bits/stdc++.h>
/*
input 
9
1 5 8 4 7 6 5 3 1 
*/
using namespace std;

void reverse(vector<int> &arr,int i){
    int j = arr.size()-1;
    while(i<j){
        swap(arr[i++],arr[j--]);
    }
}

void nextperm(vector<int> &arr,int n){
    int i;
    for(i = n-2;i>=0 && arr[i+1]<=arr[i];i--);
    if(i>=0){
        int j=n-1;
        while(j>=0 && arr[j] <= arr[i])
            j--;
        swap(arr[i],arr[j]);
        }
    reverse(arr,i+1);
    }

    


int main(){
    vector<int> arr;
    int n,l;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>l;
        arr.push_back(l);
        }

    nextperm(arr,n);

    for(int i = 0;i<n;i++){
        cout<<arr[i]<<"\t";
        }
    return 0;
}