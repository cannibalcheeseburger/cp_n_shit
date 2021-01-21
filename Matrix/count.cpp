#include<bits/stdc++.h>

using namespace std;

int binary(vector<int> &arr,int n){

    int low =0,high = n;
    while(high>=low){
        int mid = low + (high-low)/2;
        if((arr[mid-1]==0 || mid == 0) && arr[mid]==1){
            return mid;}
        if(arr[mid]==0)
            low = mid+1;
        else
            high = mid -1;
        
    }
    
    return -1;
}

int count(vector<vector<int>> &mat,int m,int n){

    int index = -1;
    int max = -1;
    for(int i =0;i<m;i++){
        int num = binary(mat[i],n);
        if(num<0)
            continue;
        else{
            int con = n - num;
            if(con>max){
                max =con;
                index = i;
            }
        }
    }
    return index;
}

int main(){
    vector<vector<int>> mat={{0 ,1 ,1, 1},
                             {0 ,0, 0, 1},
                             {1 ,1, 1, 1},
                             {0 ,0 ,0, 0}};
    int m=4,n = 4;

    cout<<count(mat,m,n);
    return 0;
}