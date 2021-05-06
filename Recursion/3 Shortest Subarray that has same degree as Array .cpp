#include<bits/stdc++.h>
using namespace std;

/*  
Given a non-empty array of non-neg integers nums, the degree of this array is defined as the 
maximum frequency of any one of its elements. Your task is to find the smallest possible length of
a (contiguous) subarray of nums, that has the same degree as nums.

Ex: 1
    Input nums : [1,2,2,3,1]
    Output : 2
    The input array has a degree of 2 bcoz both elements 1 & 2 appear twice.
    Of the subarrays that have the same degree :
    [1,2,2,3,1], [1,2,2,3], [2,2,3,1], [1,2,2], [2,2,3], [2,2]
    The shortest length is 2. So return 2.

Ex: 2
    Input nums : [1,2,2,3,1,4,2]
    Output : 6
    The degree is 6 bcoz the element 2 is repeated 3 times.
    So, [2,2,3,1,4,2] is the shortest Subarray , therefore returning 6.

*/
