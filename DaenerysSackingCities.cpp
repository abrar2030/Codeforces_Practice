#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n, x, a[1000000], counter=0;
 
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
if(x>999){
counter++;
a[counter]=i+1;}}
cout<<counter<<endl;
for(int i=1;i<=counter;i++)
cout<<a[i]<<" ";
cout<<endl;
 
}
