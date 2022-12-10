#include <iostream>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int calls[101][101];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= d; j++) {
            cin >> calls[i][j];
        }
    }
    int cnt = 0;
    int output[101];
    for (int i = 1; i <= n; i++) {
    bool suspicous=false;
    for (int j = 2; j <= d; j++) {
    if(abs(calls[i][j] - calls[i][j -1]) >= 10){
suspicous = true;
}}
if (suspicous) {
cnt++;
output[cnt]=i;
}
}cout<<cnt<<endl;
for(int i=1;i<=cnt;i++){
cout<<output[i]<<" ";
}cout<<endl;
return 0;
}
