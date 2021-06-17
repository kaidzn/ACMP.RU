#include <iostream>
#include <cmath>
using namespace std;
int main() {

  int a, b;
  int flag = true;
  while(flag){
  cout << "Enter thr numbers : ";
  cin >> a >> b;
  if(a>pow(10, 9) || b > pow(10, 9)){
    cout << "Error !" ;
   
  }
  else{
    cout << a << " + "<<b<<" = " << a + b<< endl;
  }
    }
}
