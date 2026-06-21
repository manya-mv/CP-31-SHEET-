#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// 𝑎𝑖−1<𝑎𝑖 and 𝑎𝑖>𝑎𝑖+1
// Swap 𝑎𝑖 and 𝑎𝑖+1

int main(){
    int t;
    cin >>t ;
    while(t--){
        int n;
        cin >> n;
        vector<int> temp;
        for(int i = 0; i < n ; i++){
            int num;
            cin >> num;
            temp.push_back(num);
        }
        vector<int> temp2 = temp;
        sort(temp2.begin() , temp2.end());
        for(int j = 1 ; j < n-1 ; j++){
            if(temp[j-1]<temp[j] && temp[j]>temp[j+1] ){
                swap(temp[j] , temp[j+1]);
            }
        }
        if(temp==temp2){
            cout<<"Yes"<<endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}