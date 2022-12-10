#include <iostream>
using namespace std;
 
// Write your function here.
bool is_prime(int n){
    if(n<=1){ return false;}
    for(int i=2;i<n;i++){
        if(n%i==0)
            return false;}
        return true;
    }
int main() {
    if (is_prime(1) || !is_prime(2)) cout << "I feel disturbance in the force" << endl;
    for (int n = 200; n <= 300; n++) {
        if (is_prime(n)) {
            cout << n << " is a prime" << endl;
        }
    }
}
