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
    for(;it != ar.end() ; it++)
        cout << *it << ' ' ;
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    int i = ar.size();
    int temp = ar[i-1];
    if(temp < ar[i-2])
    {
        int j = i-2;
        while( ar[j] > temp && j >= 0)
        {
            ar[j+1] = ar[j];
            printArray(ar);
			j--;
        }
		++j;
		ar[j] = temp;
		printArray(ar);
    }
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

insertionSort(_ar);
   
   return 0;
}