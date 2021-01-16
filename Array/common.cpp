#include<bits/stdc++.h>

/*
input 
6 5 8
1 5 10 20 40 80
6 7 20 80 100
3 4 15 20 30 70 80 120
*/

using namespace std;

void common(vector<int> &arr1,vector<int> &arr2,vector<int> &arr3){
    
    for(int i  = 0,j=0,k=0;i<arr1.size() && j<arr2.size() && k <arr3.size();){
        if(arr1[i] == arr2[j] && arr2[j] == arr3[k] ){
            cout<<arr1[i]<<" ";
            i++;
            k++;
            j++;
            }
        if(arr3[k]< arr1[i] || arr3[k]< arr2[j])
            k++;
        if(arr2[j]< arr1[i] || arr2[j]< arr3[k])
            j++;
        if(arr1[i]< arr3[k] || arr1[i]< arr2[j])
            i++;
                
    }
    
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    int m,n,l,p;
    cin>>m>>n>>l;

    for(int i =0;i<m;i++){
        cin>>p;
        arr1.push_back(p);
    }
    for(int i =0;i<n;i++){
        cin>>p;
        arr2.push_back(p);
    }
    for(int i =0;i<l;i++){
        cin>>p;
        arr3.push_back(p);
    }

    common(arr1,arr2,arr3);
    return 0;
}