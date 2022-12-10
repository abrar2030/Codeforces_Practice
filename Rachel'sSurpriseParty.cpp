#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n, m, a[100], b[180],counter=0;
cin>>n>>m;
for(int i=0;i<n;i++){
cin>>a[i]>>b[i];
if(m>=a[i] && m<=b[i]){
counter++;}}
cout<<counter<<endl;
 
}
