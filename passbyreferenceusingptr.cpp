#include <iostream>
using namespace std;
void change(int *n ){
    *n = 20;
    cout<<*n<<endl;
}
int main() {
    int a = 10 ;
    cout<<a<<endl;
    change(&a);
    cout<<a;
}