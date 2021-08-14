#include <iostream>
using namespace std;

int main()
{

    int  n, odd, even;
   
    cout << "Enter size of the scores: ";
    cin >> n ;
    int a[n];
     for( int i = 0; i < n; i++)
       cin >> a[i] ;
  int count;
  cout<<"____________________"<< endl << endl ;
 
     for( int i = 0; i < n; i++){
       
         if(a[i]%2!=0){
           cout << a[i] << " ";
         }
        
      }
      cout << endl ;
     
     for( int i = 0; i < n; i++){
          if(a[i]%2==0){
           cout << a[i] << " ";
         }
        
      }
      cout << endl ;
     odd = 0, even = 0;
     for(int i = 0 ; i < n ; i++){
       if(a[i]%2==0){
         even++;
       }
       else{
         odd++;
       }
      }
       if(odd==even) cout<<"YES!";
       if(odd<even)  cout<<"YES!";
       if(odd>even)  cout <<"No!"; 
      //   if(even>odd){
      //     cout << "YES!";
      //   }
      //   else{
      //     cout <<"NO!";
      //   }
      // }
}
