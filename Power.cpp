#include <iostream>
using namespace std;
 
long long power(long long base, long long exponent) {
    // Write your code here. Make sure to use long long type for the result.
    long long result=1;
    for(int i=0;i<exponent;i++)
    result = result*base;
 
return result;
}
 
int main() {
    cout << power(6, 3) << endl; // 216
    cout << power(2, 12) << endl; // 4096
    cout << power(1, 100) << endl; // 1
    cout << power(2020, 1) << endl; // 2020
    cout << power(101, 3) << endl; // 1030301
    cout << power(5, 20) << endl; // 95367431640625
    cout << power(99, 9) << endl; // 913517247483640899
}
