#include<bits/stdc++.h>

using namespace std;
/*sample input
9
-12 11 -13 -5 6 -7 5 -3 -6
*/

void nega(int arr[],int n){

    int j;
    for(int i= 0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
}

int main(){
   
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
        cin>>arr[i];
    nega(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
    
}