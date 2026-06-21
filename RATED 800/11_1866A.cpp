#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> temp;
    int k;
    for(int i = 0 ; i < n ; i++){
        cin >> k;
        if(k<0){
            k = k * -1;
        }
        temp.push_back(k);
    }
    sort(temp.begin() , temp.end());
    if(temp[0]==0){
        cout << 0 << endl;
    }
    else{
        cout << temp[0] << endl;
    }
    
}
    