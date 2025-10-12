#include <iostream>
using namespace std;

int main() {
    for(int i = 2; i <= 100; i++) {
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

    return 0;
}
