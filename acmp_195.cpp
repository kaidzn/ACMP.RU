#include <iostream>
#include <vector>
using namespace std;
int main() {
  int  w, total = 1;
    vector<int> a;
    for(int i = 0; i < 3; i++){
      cin >> w;
      a.push_back(w);
    }
    for(auto k = a.begin(); k != a.end(); k++){
         total = total * (*k);
    }
    cout << total * 2;


} 
