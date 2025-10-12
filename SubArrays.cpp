#include <iostream>
using namespace std;

void subArrays(int *arr , int n ){
   for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // print subarray arr[start..end]
            cout << "[ ";
            for (int k = start; k <= end; k++) {
                cout << arr[k] << " ";
            }
            cout << "]" << endl;
        }
    }
   
}
void maxSubArrays(int *arr , int n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            int currSum = 0;

            // calculate sum of subarray arr[start..end]
            for (int k = start; k <= end; k++) {
                currSum += arr[k];
            }

            cout << "Subarray (" << start << "," << end << ") Sum = " << currSum << endl;

            // track max
            if (currSum > maxSum) {
                maxSum = currSum;
            }
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;
}

void maxSubArraysoptimized(int *arr , int n) {
    int maxSum = INT_MIN;

    for (int start = 0; start < n; start++) {
        int currSum = 0;
        for (int end = start; end < n; end++) {
            currSum = currSum + arr[end];

             if (currSum > maxSum) {
                maxSum = currSum;
            }
        
           cout << "Subarray (" << start << "," << end << ") Sum = " << currSum << endl;

            // track max
           
    }
}
    cout << "Maximum Subarray Sum = " << maxSum << endl;
}



int main() {

    int arr[] = { 5,6,7,2,9};
    int n = sizeof(arr)/sizeof(int);
    //subArrays(arr,n);
    // maxSubArrays(arr,n);
    maxSubArraysoptimized(arr, n);
}

// Max sum of the sub array 

