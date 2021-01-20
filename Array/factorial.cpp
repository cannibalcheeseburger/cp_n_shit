#include<bits/stdc++.h>
using namespace std;

void multiply(int num,vector<int>&arr){
    int carry = 0;

    for(int i =0;i<arr.size();i++){
        int prod = arr[i] * num + carry;
        arr[i] = prod % 10 ;
        carry = prod / 10;
    }
    
    while(carry){
        arr.push_back(carry%10);
        carry = carry/10;
    }
}
 
void factorial(int n){

    vector<int> arr;
    arr.push_back(1);
    //fact
    for(int i =2;i<=n;i++){
        multiply(i,arr);
    }

    for(int i = arr.size()-1;i>=0;i--)
        cout<<arr[i];
}

int main(){

    int n;
    cin>>n;
    factorial(n);
    return 0;

}