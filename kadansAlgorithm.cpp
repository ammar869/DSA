// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void twosum(int *arr , int n) {
    int maxSum = INT_MIN;
      int currSum = 0;
    for (int start = 0; start < n; start++) {
      
        currSum += arr[start];
        maxSum = max(currSum, maxSum);
      //  cout<<currSum<<endl;
        if(currSum < 0 ){
            currSum = 0;
        }
    }
    cout<<maxSum;
                                // curr sum = 3 then 0 , 4 , 11 , 19 , 18  
}                               // Max sum = 3, 4 , 11 , 19

int main() {

    int arr[] = {3,-3,4,7,8,-1};
    int n = sizeof(arr)/sizeof(int);
    twosum(arr,n);


}