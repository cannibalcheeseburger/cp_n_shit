#include<bits/stdc++.h>
/*
Input:
5 3
1 2 3 4 5
1 2 3
*/
using namespace std;

int doUnion(vector <int> &uni,vector <int> &arr1,vector <int> &arr2,int m, int n){

    if(m<n){
        sort(arr1.begin(),arr1.end());
        uni = arr1;

        for(auto i = arr2.begin();i!= arr2.end();i++){
            if(find(arr1.begin(),arr1.end(),*i) == arr1.end())
                uni.push_back(*i);
            }
        }    
    else{
        sort(arr2.begin(),arr2.end());
        uni = arr2;
        for(auto i = arr1.begin();i != arr1.end();i++){
            if(find(arr2.begin(),arr2.end(),*i) == arr2.end())
                uni.push_back(*i);
        }
    }
    return uni.size();
}

int main(){
    int n,m;
    cin>>m>>n;
    vector <int>arr1;
    vector <int>arr2;
    vector <int>uni;
    int l;
    for(int i = 0;i<m;i++){
        cin>>l;
        arr1.push_back(l);
    }
    for(int i = 0;i<n;i++) {
        cin>>l;
        arr2.push_back(l);
    }
    cout<<doUnion(uni,arr1,arr2,m,n);
    
    return 0;
}