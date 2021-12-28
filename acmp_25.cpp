#include <iostream>
using namespace std;
int main(){

   int a, b;
   bool flag = true;
   while(flag){ 
   cout << "Enter two numbers: ";
   cin >> a>> b;
    if(a > b) cout<<" > "<< endl;
    if(a < b) cout<<" < "<< endl;
    if(a == b) cout<<" = "<< endl ;
   }

}
