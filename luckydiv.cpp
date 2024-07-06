#include <bits/stdc++.h>
using namespace std;

int main() {
    bool lucky = true;
    vector<int> luckynums = {4, 7, 44, 77, 47, 74, 444, 777, 447, 477, 474, 774, 747, 744};
    int num;
    cin >> num;

    auto p = find(luckynums.begin(), luckynums.end(), num);
    if (p == luckynums.end()) {
        lucky = false;
        for(int i = 0; i < luckynums.size();i++){
            if(num % luckynums[i] == 0){
                lucky = true;
                break;
            }
        }
    }

    if(lucky == true){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}