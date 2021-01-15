#include<bits/stdc++.h>
/*
input 
4 5 
1 3 5 7
0 2 6 8 9
*/
using namespace std;

void merge(vector<int> &arr1,vector<int> &arr2,int m,int n){
    for(int i = n-1;i>=0;i--){
        int last_el = arr1[m-1];
        int j;
        for(j = m-2 ;j>=0 && arr1[j]>arr2[i];j--){
            arr1[j+1] = arr1[j];
        }
        if(j!= m-2 || last_el > arr2[i]){
            arr1[j+1] = arr2[i];
            arr2[i] = last_el;
        }
    }

}

int main(){
    vector <int> arr1;
    vector <int> arr2;
    int m,n,l;
    cin>>m>>n;
    for(int i = 0;i<m;i++){
        cin>>l;
        arr1.push_back(l);
    }
    for(int i = 0;i<n;i++){
        cin>>l;
        arr2.push_back(l);
    }
    merge(arr1,arr2,m,n);

    for(int i = 0;i<m;i++)
        cout<<arr1[i]<<" ";
    
    for(int i = 0;i<n;i++)
        cout<<arr2[i]<<" ";
        
    return 0;
}