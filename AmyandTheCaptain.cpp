#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int N=0,M=0,cnt=0;
cin>>N>>M;
int arr[N][M];
for(int i =0; i<N; i++){
for(int j=0; j<M; j++){
cin>>arr[i][j];}}
for(int i=0; i<M; i++){
for(int j= 0 ; j< N ; j++){
if(arr[j][i] == 1){
cnt++;
}}
if(cnt == N){
cout<<i+1<<endl;
break;
}
cnt=0;
}
if(cnt != N){
cout<<"0"<<endl;
}
 
return 0;
}
