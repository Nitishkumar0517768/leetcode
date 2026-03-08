// Last updated: 3/8/2026, 12:39:43 PM
1#include <limits.h>
2int minimumIndex(int* capacity, int capacitySize, int itemSize) {
3    int min = INT_MAX;
4    int m = 0;
5    int n = 0;
6
7    for(int i=0; i<capacitySize; i++){
8        if(min > capacity[i] && capacity[i] >= itemSize){
9            min = capacity[i];
10            n = i;
11            m = 1;
12        }
13    }
14
15    if (m==0){
16        return -1;
17    }
18    return n;
19}