/**
 * @file merge_sort.cpp
 * @author WARG
 *
 * @section LICENSE
 *
 * Copyright (c) 2015-2016, Waterloo Aerial Robotics Group (WARG)
 * All rights reserved.
 *
 * This software is licensed under a modified version of the BSD 3 clause license
 * that should have been included with this software in a file called COPYING.txt
 * Otherwise it is available at:
 * https://raw.githubusercontent.com/UWARG/computer-vision/master/COPYING.txt
 */

#include "merge_sort.h"

#include <iostream>
#include <vector>
using namespace std;

// function that merges two arrays and returns a sorted array
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

// function performs the actual merge sort through splitting the array that we want to sort
vector<int> merge_sort(vector<int>& arr) {
    int n = arr.size();  //size of array
    if (n < 2) {
        return arr;
    }
    int mid = n / 2;  // the middle of the array

    vector<int> left = vector<int>(arr.begin(), arr.begin() + mid);  //the first half of the array

    vector<int> right = vector<int>(arr.begin() + mid, arr.end());  // the second half of the array

    merge_sort(left);
    merge_sort(right);
    merge(left, right, arr);
    return arr;
}
