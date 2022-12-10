#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
string x;
cin>>x;
int i=0;
while(i<x.size() && x.substr(i, 3) != "adv"){
i++;}
if(i<x.size()){
cout<<"yes";
}else{
cout<<"no";
}
cout<<endl;
}
