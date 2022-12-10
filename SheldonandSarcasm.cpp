#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n,x[100],y[100];
cin>>n;
for(int i=0;i<n;i++){
cin>>x[i]>>y[i];}
int k= x[0]-y[0];
for(int i=0;i<n;i++){
if(x[i]-y[i]<k){
k=x[i]-y[i];
}}cout<<k<<endl;
 
}
