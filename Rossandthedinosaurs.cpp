#include <iostream>
 
using namespace std;
 
int main() {
 
  int i, n;
  int arr[100];
 
  cin >> n;
 
  for(i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  int counter = 0;
  for(i = 0;i < n; ++i) {
    if(arr[i]%3==0)
      counter++;
  }
  cout << counter << endl;
 
    return 0;
}
