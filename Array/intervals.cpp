#include<bits/stdc++.h>
/*
input 
6 
1 10 14 14 14 15
*/
using namespace std;

void intervals(vector<vector<int>> &arr,vector<vector<int>> &merge,int n){
    
    sort(arr[0].begin(),arr[0].end());
    
    for(int i =0;i<n;i++){
        vector<int> temp;
        int end = arr[i][1];
        temp.push_back(arr[i][0]);
        while(i<n-1 && end>=arr[i+1][0]){
            i++;
            if(end<arr[i][1]) end = arr[i][1];
        }

        temp.push_back(end);
        merge.push_back(temp);
    }
}

int main(){
    vector <vector<int>> arr;
    vector<vector<int>> merge;
    int n,l;
    cin>>n;
    for(int i = 0;i<n;i++){
        vector <int> v;
        for(int j=0;j<2;j++){
            cin>>l;
            v.push_back(l);
        }
    arr.push_back(v);
    }

    intervals(arr,merge,n);

    for(int i = 0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<merge[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}