#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//ascii vales of lowercase latin letters: 97-122
int consec(string password){
    for(int i = 1; i < password.length(); i++){
        if (password[i] == password[i-1]){
            return i;
        };
    }
    return -1;
}


int main(){ 
    int t;
    cin >> t;

    for(int i = 0; i < t; i++){
        string pass;
        cin >> pass;
        int con = consec(pass);
        if(con > -1){
            int ascval = (int)pass[con];
            if(ascval == 97){
                pass.insert(con, 1, (char)ascval+1);
            }
            else{
                pass.insert(con, 1, (char)ascval-1);
            }
        }
        else{
            int val = 122;
            while(val == (int)pass[0] || val == (int)pass[1]){
                val--;
            }
            pass.insert(1, 1, (char)val);
        }
        cout << pass << endl;
        } 
        
        
        
        
    }
