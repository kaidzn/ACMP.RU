#include <iostream>
#include <vector>
using namespace std;
int main(){
  int a[3], max = 0, min = 100001;
  for(int i = 0; i < 3; i++){
   cin>>a[i];
  }
  for(int i = 0; i < 3; i++){
    if(a[i] > max){
      max = a[i];
    }
  }
  for(int j = 0; j < 3; j++){
    if(a[j] < min){
      min = a[j];
    }
  }
  int sum;
  sum = max - min;
  cout<<sum;



}
