#include <bits/stdc++.h>
using namespace std;

int main() {
    // step 1 is deducing how many diagnols are in the given board: DONE
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int size, chips;
        cin >> size >> chips;
        int counter = 0;

        int diagnols = (2 * size) - 1;
        if(chips < 1){
            cout << 0 << endl;
        }
        else{
            while(chips > 0  && size >= 0){

                chips -= size; //3 - 2 = 1, 1 - 2 = -1
                if(counter % 2 == 0){
                    size--;
                }
                counter++; // 1, 2
            }
            cout << counter << endl;
            
        }
        

    }
    

    //Step 2 figure out how many cells are in each diagnol, should be a pattern DONE

}