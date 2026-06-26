#include <iostream>
#include <vector>
using namespace std;
bool odd(int n){
    return n%2!=0;
}
bool even(int n){
    return n%2==0;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            arr[i] = x;
        }
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0; 
        int i = 0;
        while (i < arr.size() - 1){
            if(odd(arr[i]) && odd(arr[i+1])) 
            {
                arr[i+1] = arr[i]*arr[i+1];
                arr.erase(arr.begin() + i); 
                cnt++;
            }
            else if(even(arr[i]) && even(arr[i+1]))
            {
                arr[i+1] = arr[i]*arr[i+1];
                arr.erase(arr.begin() + i);
                cnt++;
            }
            else{
                i++;
            }
        }
        cout << cnt << endl;
    }
}
