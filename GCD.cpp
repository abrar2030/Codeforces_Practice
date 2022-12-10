#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
        if (a == 0)
        return b;
        if (b == 0)
        return a;
        if (a == b)
                return a;
        if (a > b)
        return gcd(a-b, b);
        return gcd(a, b-a);
}
int main()
{
        int a = 98, b = 56;
    cout << gcd(38, 57) << endl;
    cout << gcd(10000, gcd(990, 810)) << endl;
    cout << gcd(2*2*3*3*5, 7*7*13) << endl;
    cout << gcd(7*23*191, 2*7*29*191) << endl;
    cout << gcd(283746, 283747) << endl;
}
