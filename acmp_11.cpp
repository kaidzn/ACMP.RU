#include <iostream>
using namespace std;
int main(){

   int n;
   cout << "Enter the digits of workers: ";
   cin >> n;
   int a[n];
   
   cout << "Enter the salaries of the workers: ";
   
    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
     int max = a[0];
     int min = a[0];
     for(int i = 0; i < n ; i++)
     {
      if(max<a[i])
      {
         max = a[i];
      }
      if(min>a[i]){
        min = a[i];
      }
     }
     cout << max << endl ;
     cout << min << endl ;
     cout << "_____________________"<< endl<< endl ;
     cout << max - min ;
   

}
