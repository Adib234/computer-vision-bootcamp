/**
 * @file merge_sort.h
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
#include <vector>
using namespace std;

/**
     * @brief function's contract: expect it to merge two arrays 
     *
     * @param left the left side that has been split up and ready to be merged
     * @param right the right side that has been split up and ready to be merged 
     * @param arr the merged array
     */
void merge(vector<int>& left, vector<int>& right, vector<int>& arr);

/**
     * @brief function's contract: expect a sorted array
     *
     * @param arr an array that we want to perform a merge sort
     * @returns a sorted array
     */
vector<int> merge_sort(vector<int>& arr);