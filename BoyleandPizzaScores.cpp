#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
int m,n, matrix[101][101];
float avr[101];
float sum;
cin>>m>>n;
 
for(int i = 1; i <=m; i++){
        sum=0;
for(int j = 1; j<=n; j++){
cin>>matrix[i][j];
sum = sum + matrix[i][j];
}
avr[i]=sum/m;
}
int p=1;
float maxi=avr[1];
for(int i=2;i<=m;i++){
if(avr[i]>maxi){
maxi=avr[i];
p=i;
}}cout<<p<<endl;
}
