#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n,counter=0, c[100];
float a[100], b[100];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i]>>b[i];
if(a[i]/b[i]<=2.0){
counter++;
c[counter]=i+1;}}
cout<<counter<<endl;
for(int i=1;i<=counter;i++)
cout<<c[i]<<" ";
}
