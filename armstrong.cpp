// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n = 153;
    int hun = n/100;
    int tens = (n%100)/10;
    int ones = (n%100)%10;
    cout<<hun<<endl<<tens<<endl<<ones<<endl;
    int arms =(hun*hun*hun)+(tens*tens*tens)+(ones*ones*ones);
    cout<<arms;
    if(arms == n ){
        cout<<"it is armstrong ";
        
        
    }
    else{
        cout<<"Not Armstrong";
    }
    return 0;
}