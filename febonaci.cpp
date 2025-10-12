// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro";
    int f = 0;
    int s = 1;
    // int t ;
      cout<<f<<" " << s<<" " ;
    for(int i = 1 ; i<= 10 ; i++ ){
      
        int t = f + s ;
        f = s ;
        s = t ;
        cout<<t<<" ";
        
    }
    

    return 0;
}