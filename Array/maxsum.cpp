#include<bits/stdc++.h>
/*input
8
-2 -3 4 -1 -2 1 5 -3
*/
using namespace std;

int maxsumsubarray(vector<int> &arr,int n){
    
    int total=0;
    int till_now = 0;

    for(int i = 0;i<n;i++){
        till_now = till_now+arr[i];
        if(total<till_now) 
            total = till_now;
        if(till_now<0)
            till_now = 0;
    }
    return total;
}

int main(){
    
    vector <int> arr;
    int n;
    cin>>n;
    int l;
    for(int i =0;i<n;i++){
        cin>>l;
        arr.push_back(l);
    }
    cout<<maxsumsubarray(arr,n);
    return 0;
}