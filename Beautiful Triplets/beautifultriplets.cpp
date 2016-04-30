#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct dpair {
    int ind1;
    int ind2;
};

int main() {
    int n;
    int d;
    cin >> n;
    cin >> d;
    vector<int> c(n);
    vector<dpair> dPairs;
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    //this can easily be brute forced with n^3 but il aim for better
    
    //find all possible pairs to get value d
    for(int x=0; x<n-1; x++){
        for(int y=x+1; y<n; y++){
            if(c[y]-c[x]==d){
                dPairs.push_back({x, y});
            }
        }
    }
    
    int count =0;
    //now check if our pairs fit our def'n of beautiful triplets
    for(int x =0; x<dPairs.size() -1; x++){
        for(int y=x+1; y<dPairs.size(); y++){
            if(dPairs[x].ind2 == dPairs[y].ind1){
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
//Algorithm is not quite fast enough, optimize original N^2 section