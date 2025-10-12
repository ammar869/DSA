
#include<iostream>
using namespace std;

void maxSubArraysoptimized(int *arr , int n) {
    int rightMax[1000];
    rightMax[n-1] = INT_MIN;
    int leftMax[10000];
    leftMax[0] = INT_MIN;
    for(int i = 1 ; i<n ; i++){
        leftMax[i] = max(leftMax[i-1],arr[i-1]);
        cout<<leftMax[i];
    }
    cout<<endl;
    for(int i = n-2 ; i>=0 ; i--){
        rightMax[i] = max(rightMax[i+1],arr[i+1]);
        cout<<rightMax[i];
    }
    

    
}
// Main solution
void watertrapped(int *arr , int n) {
    int rightMax[1000];
    rightMax[n-1] = arr[n-1];
    int leftMax[10000];
    leftMax[0] = arr[0];
    for(int i = 1 ; i<n ; i++){
        leftMax[i] = max(leftMax[i-1],arr[i-1]);
        
    }
    cout<<endl;
    for(int i = n-2 ; i>=0 ; i--){
        rightMax[i] = max(rightMax[i+1],arr[i+1]);
       
    }
    int trappedwater = 0;
    for(int i = 0 ; i<n ; i++){
        int currWater =min(rightMax[i],leftMax[i]) - arr[i];
        if(currWater >0){
            trappedwater+=currWater;
           
        }

    }
     cout<<trappedwater;

    
}



int main() {

    int arr[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(arr)/sizeof(int);
   
    //maxSubArraysoptimized(arr, n);
    watertrapped(arr,n);
}
