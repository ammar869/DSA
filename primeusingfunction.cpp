#include <iostream>
using namespace std;


 void prime(int n){
          for(int i = 2; i <= n; i++) {
        int count = 0;
        for(int j = 1; j <= i; j++) { // should go till i, not 9
            if(i % j == 0) {
                count++;
            }
        }
        if(count == 2) {
            cout << i << endl;
        }
    }
 }

int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    prime(n);
    
}
