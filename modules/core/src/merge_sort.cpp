#include <iostream>
#include <vector>

#include "merge_sort.h"
using namespace std;

void merge(vector<int>& left, vector<int>& right, vector<int>& arr) {
    int j = 0;
    int k = 0;
    int l = 0;

    while (j < left.size() && k < right.size()) {
        if (left[j] >= right[k]) {
            arr[l++] = right[k++];
        } else {
            arr[l++] = left[j++];
        }
    }
    if (j < left.size()) {
        for (int i = j + k; i < arr.size(); i++) {
            arr[i] = left[j++];
        }
    }
    if (k < right.size()) {
        for (int i = j + k; i < arr.size(); i++) {
            arr[i] = right[k++];
        }
    }
}

vector<int> merge_sort(vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        return arr;
    }
    int mid = n / 2;

    vector<int> left = vector<int>(arr.begin(), arr.begin() + mid);

    vector<int> right = vector<int>(arr.begin() + mid, arr.end());

    merge_sort(left);
    merge_sort(right);
    merge(left, right, arr);
    return arr;
}
