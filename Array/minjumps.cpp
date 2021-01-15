#include<bits/stdc++.h>
/*
input
10
1 3 5 8 9 2 6 7 6 8 9
*/
using namespace std;

int minjumps(vector <int> &arr,int n){
    int jumps[n],min;
    jumps[n-1] = 0;
    for(int i = n-2;i >=0;i--){
        
        if(arr[i]==0){
            jumps[i] = INT_MAX;
            continue;
        }
        
        else if( n - 1<= arr[i]+i){
            jumps[i] = 1;

        }
        
        else{
            min = INT_MAX;
            for(int j = i+1;j<n && j<=arr[i]+i;j++){
                if(min>jumps[j]){
                    min = jumps[j];
                }
            if(min!=INT_MAX)
                jumps[i] = min+1;
            else
                jumps[i] = INT_MAX;
            }
            
        }
        
    }

    return jumps[0];
}

int main(){
    vector <int> arr;
    int n,l;
    cin>>n;
    for(int i = 0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    cout<<minjumps(arr,n);
    return 0;
}