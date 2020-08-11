#include <iostream>
#include <vector>

#include "merge_sort.h"
using namespace std;

// function that just tests whether my merge sort is working
int main() {
    vector<int> arr = {3, 3, 4, 6, 42, 6, 2};
    merge_sort(arr);
    for (int i : arr) {
        cout << i << " ";
    }
    return 0;
}