#include <iostream>
using namespace std;

int binarySearch(int array[], int n ,int k){
    int st = 0 ;
    int end = n-1 ;
    while(st<=end){
        int mid = (st+end)/2;
        if(array[mid]==k){
            return mid;
        }
        else if(array[mid]<k){
            st = mid+1;
        }
        else{
            end=mid-1;
        }
       
}
 return -1;
}
int main() {
    int array[]  = {1 , 2 , 3 , 4 , 5 , 6 , 7};
    int k = 7;
    int n = sizeof(array)/sizeof(int);
    
    cout<<binarySearch(array,n,k);
}