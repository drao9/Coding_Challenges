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

int number_needed(string a, string b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    vector <int> letters(26,0);
    int count = 0;
    char c;
    
    if(a.compare(b)==0) return 0;
    
    for(int i; i < a.size();i++){
        c = a[i];
        letters[c-97]+=1;
    }
    for(int i; i < b.size(); i++){
        c = b[i];
        letters[c-97]-=1;
    }
    for(int i =0; i< letters.size(); i++) {
       count += abs(letters[i]); 
    }
    return count;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}

