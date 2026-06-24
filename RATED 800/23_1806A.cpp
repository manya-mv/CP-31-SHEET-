#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a , b, c , d;
        cin >> a >> b >> c >> d;
        int count = 0;
        if(a==c && b==d){
            cout << 0 << endl;
        }
        // 0 , 0 , 4, 5
        else{
            if(b>d){
                cout << -1 << endl;
                continue;
            }
            else{
                while(b<d){
                    b++;
                    a++;
                    count++;
                }
                if(c>a){
                    cout << -1 << endl;
                    continue;
                }
                else{
                    while(c<a){
                        a--;
                        count++;
                    }
                }
                cout << count << endl;
            }

        }
    
    }
}