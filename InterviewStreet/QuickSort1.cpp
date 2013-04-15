#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

void printArray(vector<int> ar)
{
    vector<int>::iterator it = ar.begin();
    while(it != ar.end())
    {
        cout << *it << ' ';
        it++;
    }
}

void partition(vector <int>  ar) {
    
    int ar_size = ar.size();
    int pivotval = ar[0];
    
    vector<int> left, right, final;
    
    vector<int>::iterator it = ar.begin();
    it++;
    while(it != ar.end())
    {
        if(*it < pivotval)
            left.push_back(*it);
        else
            right.push_back(*it);
        it++;
    }
    it = final.begin();
    final.insert(it, left.begin(), left.end());
    final.push_back(pivotval);
    final.insert(final.end(), right.begin(), right.end());
    printArray(final);
}

/* Tail starts here */
int main() {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

partition(_ar);
   return 0;
}