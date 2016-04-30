#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int curPos=0;
    int moves=0;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    while(curPos<n-1){
        if(curPos+2<=n-1){ //make sure we have the room for double
            if(c[curPos+2]==0) { //check double jump
                curPos+=2;
            } else { //single jump must work then
                curPos++;
            }
            moves++;
        } else {
            curPos++;
            moves++;
        }
    }
    cout << moves;
    
    
    return 0;
}

