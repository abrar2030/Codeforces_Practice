#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n,a[50];
cin>>n;
for(int i=0;i<n;i++){
cin>>a[i];}
int min=a[0];
for(int i=0;i<n;i++){
if(a[i]>min && a[i]<=10){
min=a[i];
}}
cout<<min<<endl;
}
