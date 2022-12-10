#include <iostream>
 
using namespace std;
 
int main()
{
 
  int n, arr[101];
 
  cin >> n;
 
  for(int i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  int pressure = 1;
  for(int i = 2;i <= n; ++i)
    while(pressure <= n && arr[pressure]>=100) {
      pressure++;
    }
  if (pressure > n) pressure = 0;
  cout << pressure << endl;
 
    return 0;
}
