
#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>

using namespace std;
int main()
{
 int t;
 cin >> t;
 while(t--){
   int n , k;
   cin >> n >> k;
   vector<int> temp;
   int s;
   for(int i = 0 ; i < n ; i++){
       cin >> s;
       temp.push_back(s);
   }
   
   
   if(k>1){
       cout << "YES" << endl;
   }
   else if(k==1){
       if(is_sorted(temp.begin(), temp.end())){
           cout << "YES" << endl;
       }
       else{
           cout << "NO" << endl;
       }
   }
 }
}