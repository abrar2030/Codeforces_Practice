#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n ;
cin>>n;
string x[101];
string y = "yes";
int indx=0;
for (int i =1; i<=n ; i++){
cin>>x[i];
}
int i =1;
while (i <=n&&indx ==0){
if(x[i].find(y) != string::npos) {
indx =1;
}
else i++;
}
if (i<=n) cout<<i;
else cout<<0;
cout<<endl;
    return 0;
}
