#include <iostream>
#include <string>
using namespace std;
#include <vector> 
int main()
{
 int t;
 cin >> t;
 while(t--){
     int n;
     cin >> n;
     vector <int> temp;
     int k;
     for(int i = 0 ; i < n ; i++){
         cin >> k;
         temp.push_back(k);
     }
     int ans = 0;
     int count = 0 ;
     for(int j = 0  ; j < n ; j++){
         if(temp[j]==0){
             count++;
         }
         else{
             count = 0;
         }
         if(count > ans){
             ans = count;
         }
     }
     cout << ans << endl;
 }
}