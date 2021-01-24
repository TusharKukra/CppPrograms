#include <bits/stdc++.h>
using namespace std;

// Sum of all Submatrix from a given Matrix (Efficient Method)

// each element will be a part of more than 1 submatrix
// so, in each Submatrix the element will be contributing for the Sum

// so we have to find the contribution of each element in the Final Sum
// (Just find out: Sum of the Contribution of all elements)

// contribution = value of the element x no. of sybmatrices, this element will be part of
// Contriution = arr[i][j] * no. of submatrices
