#include<bits/stdc++.h>
 
using namespace std;
 
vector<string> intersection(vector<string> &a, vector<string> &b){
    vector<string> isect;
 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
 
    set_intersection(a.begin(),a.end(),
                          b.begin(),b.end(),
                          back_inserter(isect));
    return isect;
}
 
// This is just a utility funtion.
void print_vector(vector<string> v) {
    for (int i = 0; i < v.size(); i++) cout << v[i] << " ";
    cout << endl;
}
 
int main() {
    vector<string> a = {"apple", "banana", "orange", "pear", "pineapple"};
    vector<string> b = {"banana", "grapes", "lemon", "pineapple"};
 
    vector<string> c = intersection(a, b);
 
    print_vector(c); // banana pineapple
    print_vector(intersection(a, a)); // apple banana orange pear pineapple
    print_vector(intersection(b, c)); // banana pineapple
    a.pop_back();
    print_vector(intersection(a, b)); // banana
    print_vector(intersection(a, c)); // banana
    b.push_back("strawberry");
    print_vector(intersection(a, b)); // banana
    a.push_back("strawberry");
    print_vector(intersection(a, b)); // banana strawberry
    print_vector(intersection(b, c)); // banana pineapple
}
