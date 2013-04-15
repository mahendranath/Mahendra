#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void printArray(vector<int> ar)
{
    vector<int>::iterator it = ar.begin();
	for(; it != ar.end(); it++)
        cout << *it << ' ';
    cout << endl;
}

void insertionSort(vector<int> ar)
{
    int temp, i, j;
    int _size_ar = ar.size();
    i = 0;
    for(; i < _size_ar - 1; i++)
    {
        j = i;
        temp = ar[j + 1];
        while(ar[j] > temp && j >= 0)
        {
            ar[j+1] = ar[j];
            j--;
        }
        j++;
        ar[j] = temp;
        printArray(ar);
    }
}

int main() {
    vector<int> ar;
    int ar_size;
    cin >> ar_size;
    int ar_temp;
    for(int i =0; i < ar_size; i++)
    {
        cin >> ar_temp;
        ar.push_back(ar_temp);
    }
    insertionSort(ar);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
