#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    


    for(int i = 0; i < cases; i++){
        bool cooldown = true;
        int gigcounter = 1;
        int seconds = 1;
        int n;
        int k;
        cin >> n;
        cin >> k;
        while(gigcounter < n){
            seconds++;
            if(seconds % k == 1||k % seconds == 0){
                gigcounter++;
            }
        }
        cout << seconds << endl;
    }

    
}








    //prints out array
    for (int tuition : maxtuitions) {
        cout << tuition << " ";
    }
}