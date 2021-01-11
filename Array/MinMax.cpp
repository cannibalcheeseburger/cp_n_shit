#include<bits/stdc++.h>

using namespace std;

void PrintMinMax(int arr[],int n){
    int Min,Max;
    Min = Max = arr[0];
    for(int i = 0;i<n;i++){
        if(Min>arr[i])
            Min = arr[i];
        if(Max<arr[i])
            Max = arr[i];
    }
    cout<<"Min = "<<Min<<", Max = "<<Max;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    PrintMinMax(arr,n);
    return 0;
}