#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;


    for(int i = 0; i < t; i++){
        int flowers, coins;
        cin >> flowers >> coins;
        vector<int> petals;
        int maximum = 0;

        // fill in flowers array with each flowers amt of petals
        for(int i = 0; i < flowers; i++){

            int petal;
            cin >> petal;
            petals.push_back(petal);
        }
        sort(petals.begin(), petals.end(), greater<int>());
        
        
        
        for(int i = 0; i < flowers; i++){// outside iterator, will go through each petals 
            int maxpets = petals[i];
            if(petals.size() < 2 && petals[i] > coins){
                maxpets = 0;
            }
            
            for(int j = i + 1; j < flowers; j++){// nested iterator, will go through the following petals
                
                if(abs(petals[i] - petals[j]) <= 1){
                    if(maxpets + petals[j] <= coins){
                        maxpets += petals[j];
                    }
                    
                }
               //cout << maxpets << endl;
            }
            maximum = max(maxpets, maximum);
        }
        cout <<maximum << endl;        
    }

}