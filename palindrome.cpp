#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(int num) {
    string str_num = to_string(num);
    int len = str_num.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str_num[i] != str_num[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

char who_wins_game(int S) {
    if (is_palindrome(S)) {
        return 'B';
    } else {
        return 'E';
    }
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int S;
        cin >> S;

        char result = who_wins_game(S);
        cout << result << endl;
    }

    return 0;
}