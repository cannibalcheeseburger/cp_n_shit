#include<bits/stdc++.h>

using namespace std;

int median(vector<vector<int>> &mat,int m ,int n)
{
    vector<int> arr;
    for(int i =0;i<m;i++)
        for(int j = 0;j<n;j++)
            arr.push_back(mat[i][j]);
    sort(arr.begin(),arr.end());
    return arr[(m*n)/2];
}
int main(){
    int m =3,n = 3;
    vector<vector<int>> mat = {{1, 3, 7}, 
                                {2, 6, 9}, 
                                {3, 6, 9}};
    cout<<"Median is "<<median(mat,m,n);
    return 0;
}