#include <iostream>
using namespace std;
int main(){

  int n, max = 0, min = 101;
  int sum = 0, maxindex = 0, minindex = 0;
  cin >> n;
  int *pa=new int[n];
  for(int i = 0; i < n; i++){
    cin>>pa[i];
  }
  for(int i = 0; i < n; i++){
    if(pa[i] > 0){
      sum+=pa[i];
    }
  }
  cout<<sum;
  for(int i = 0; i < n; i++){
  if(pa[i] > max){
    max = pa[i];
    maxindex = i;
  }
  if(pa[i] < min){
    min = pa[i];
    minindex = i;
  }

  }
  int total = 1;
if(maxindex < minindex){  
  for(int i = maxindex+1; i < minindex; i++){
     total *= pa[i];
  }
}
else if(maxindex > minindex){
  for(int i = minindex+1; i < maxindex; i++){
    total*=pa[i];
  }
}
cout<<" "<<total;


}
