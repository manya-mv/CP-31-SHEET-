#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t ;
    while (t--)
    {
        int n;
        int sum = 0;
        cin >> n;
        for(int i = 0 ; i <n ; i++){
            int a;
            cin >> a;
            sum = sum + a;
        }
        if(sum%2==0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;

        }
    }
    return 0;
    
}