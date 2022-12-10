#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n,x[100],counter=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>x[i];}
 
for(int i=1;i<n;i++){
if(x[i]>x[i-1]){
counter++;
}}cout<<counter<<endl;
 
}
