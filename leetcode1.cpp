// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void twosum(int *arr , int n, int target ) {

    for (int start = 0; start < n; start++) {
        int currSum = 0;
        for (int end = start; end < n; end++) {
            currSum = currSum + arr[end];
            if(currSum==target){
           cout  << start << "," << end <<endl ;
            }
           
    }
}   
}

int main() {

    int arr[] = {3,3};
    int n = sizeof(arr)/sizeof(int);
    int target = 6 ;
    twosum(arr,n,target);


}