
#include <iostream>
using namespace std;

void swape(int &a , int &b) {
    int x = b;
    b = a;
    a = x;
    cout << a<<" " << b;
}

int main() {
    int a = 10;
    int b = 5;
    swape(a, b);
}
