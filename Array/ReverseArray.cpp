#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[],int n){
    int s=0,l=n-1;
    while(s<l){
        int temp = arr[s];
        arr[s] = arr[l];
        arr[l] = temp;
        s++;
        l--;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>> arr[i];
    reverse_array(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i];
    return 0;

}