#include <iostream>
#include <vector>
using namespace std;
int main() {
 
 vector<int> a;
 int n, w;
 cin >> n;
 for(int i = 0; i < n ;i++){
   cin >> w;
   a.push_back(w);
 }
 for(auto k = a.rbegin(); k != a.rend(); k++){
   cout << *k <<" ";
 }


} 
