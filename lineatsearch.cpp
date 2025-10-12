#include <iostream>
using namespace std;
int  lsearch( int arr[] , int n , int k ){
    for(int i = 0 ; i< n ; i++){
        if(arr[i]==k){
            return i;
        }
        
    }
    return -1;
}
int main() {
    int array[] ={1 , 3 , 5 , 7 , 8};
    int n = sizeof(array) / sizeof(array[0]);
    int k = 5;
     int ans=lsearch(array , n , k);
    cout<<ans;
}