#include <iostream>
#include<string>
#include <vector>
#include <cmath>
using namespace std;
int main() {
 1, n2, b1, b2, b3;
 cin >> n;
 n1 = n / 1000;
 n2 = n % 1000;
 b1 = n1 / 100;  
 b2 = n1 / 10 % 10;  
 b3 = n1 % 10; ;
 int b;
 b = b1 + b2 + b3;
 int q1, q2, q3;
 q1 = n2 / 100; 
 q2 = n2 / 10 % 10;  
 q3 = n2 % 10; ;
 int q;
 q = q1 + q2 + q3;
 if(b == q){
   cout <<"YES";
 }
 else{
   cout <<"NO";
 }


} 
