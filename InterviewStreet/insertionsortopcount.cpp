#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insertionSort(vector<int> ar)
{
    int temp, i = 1, j;
    int count = 0;
    int ar_size = ar.size();
    for(; i < ar_size; i++)
    {
        j = i - 1;
        temp = ar[i];
        while(j >= 0 && ar[j] > temp)
        {
            ar[j+1] = ar[j];
            count++;
            j--;
        }
        ++j;
        ar[j] = temp;
    }
    cout << count;
}

int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int> ar;
    int ar_size,ar_temp;
    cin >> ar_size;
    for (int i = 0; i < ar_size; i++)
    {
        cin >> ar_temp;
        ar.push_back(ar_temp);
    }
    insertionSort(ar);
    return 0;
}
