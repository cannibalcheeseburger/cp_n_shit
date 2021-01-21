#include<bits/stdc++.h>

using namespace std;

void sortmat(vector<vector<int>>&mat,int m,int n){
    
    vector<int> arr;
    
    for(int i =0;i<m;i++)
        for(int j =0;j<n;j++)
            arr.push_back(mat[i][j]);
    
    sort(arr.begin(),arr.end());
    
    for(int i =0;i<m;i++)
        for(int j =0;j<n;j++)
            mat[i][j] = arr[i*m+j];
}

int main(){

    int m =4,n=4;
    vector<vector<int>> mat = { {10, 20, 30, 40}, 
                                {15, 25, 35, 45}, 
                                {27, 29, 37, 48}, 
                                {32, 33, 39, 50}, 
                            }; 
    sortmat(mat,m,n);
    for(int i =0;i<m;i++){
        cout<<"\n";
        for(int j =0;j<n;j++)
            cout<<mat[i][j]<<" ";
    }
    return 0;
}