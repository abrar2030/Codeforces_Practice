#include <iostream>
 
using namespace std;
 
int main() {
 
  int i, n;
  int arr[101];
 
  cin >> n;
 
  for(i = 1; i <= n; ++i) {
    cin >> arr[i];
  }
  int maxi = 1;
  for(i = 2;i <= n; ++i) {
    if(arr[i] > arr[maxi])
      maxi = i;
  }
  cout << maxi << endl;
 
    return 0;
}
