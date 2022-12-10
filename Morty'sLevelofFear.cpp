#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int n,x[10000],k[100],counter=0;
cin>>n;
for(int i=0;i<n;i++){
cin>>x[i];
}
bool y=false;
for(int i=0;i<n;i++){
if(x[i]<x[i-1]){
counter++;
k[counter]=i+1;
y=true;
}}
if(y){
for(int i=1;i<=counter;i++){
cout<<k[i]<<endl;
break;}
}else{
cout<<"0"<<endl;
}}
