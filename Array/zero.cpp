#include<bits/stdc++.h>
using namespace std;
/*
sample input 
5
0 2 1 2 0
*/
void sort_array(int arr[],int n){
    int freq[3]={0,0,0};
    int i= 0;
    for(;i<n;i++)
        freq[arr[i]]++;
    i=0;
    
    while(freq[0]>0){
        arr[i++]=0;
        freq[0]--;
    }

    while(freq[1]>0){
        arr[i++]=1;
        freq[1]--;
    }
    
    while(freq[2]>0){
        arr[i++]=2;
        freq[2]--;
    }


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++) cin>> arr[i];

    sort_array(arr,n);

    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;

}