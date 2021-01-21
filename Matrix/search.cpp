#include<bits/stdc++.h>

using namespace std;

int search(int m,int n,vector<vector<int>> &mat,int element){

    int index = -1;

    for(int i = 0;i<m;i++){
        if(mat[i][n-1]<element)
            continue;
        else{
            for(int  j = 0;j<n;j++){
                if(mat[i][j]==element)
                    index = (i)*m + j;    
            }
        }
    }

    return index;
}


int main(){
    int m = 4,n = 4;
    vector<vector<int>> mat{ {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
    int element;
    cin>>element;

    int index = search(m,n,mat,element);
    
    if(index<0)
        cout<<"Element not found";
    
    else
        cout<<"Element is at index "<<index;
    
    return 0;
}