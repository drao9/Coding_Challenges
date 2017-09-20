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
#include <deque>

using namespace std;

vector<int> array_left_rotation(vector<int> a, int n, int k) {
    deque<int> ans;
    int i =0;
    for(i = 0; i< a.size(); i++){
       ans.push_back(a[i]); 
    }
    for(i = 0; i< k; i++){
        int temp = ans.front();
        ans.pop_front();
        ans.push_back(temp);
    }
    vector<int> v(ans.begin(), ans.end());
    return v;
    
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
    vector<int> output = array_left_rotation(a, n, k);
    for(int i = 0; i < n;i++)
        cout << output[i] << " ";
    cout << endl;
    return 0;
}

