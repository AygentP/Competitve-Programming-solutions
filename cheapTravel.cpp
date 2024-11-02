#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int special_maxxingPrice(int n ,int m,int b){
    return (n % m == 0) ? (n/m) * b : ((n / m) + 1 ) * b;
}

int single_maxxingPrice(int n, int a){
    return n * a;
}

int mix_maxxingPrice(int n, int m, int a, int b){
    int specprice = n / m * b;
    int remprice = (n%m) * a;

    return remprice + specprice;
}


int main(){ 
    int n, m, a, b;
    // n: the amount of rides ann has planned
    // m: the amount of rides covered by the special ticket
    // a: the price of one ride ticket
    // b: the price of the m ride ticket
    cin >> n >> m >> a >> b;
    int cost = 0;
    //condition to check the amount of rides needed
    //frick this, if i get the three possible prices, only buying special tickets, only buying single ride tickets, and then a mix of both, then get the min, its prob faster
    cout << min({special_maxxingPrice(n, m, b), single_maxxingPrice(n, a), mix_maxxingPrice(n, m, a, b)});
    

    
    
}