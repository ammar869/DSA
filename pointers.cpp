// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout << "Try programiz.pro";
    int a = 10 ;
    int* ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    int ** pptr = &ptr;
    cout<<pptr;

    return 0;
}