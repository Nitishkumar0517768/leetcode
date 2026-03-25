// Last updated: 3/25/2026, 3:17:27 PM
#include <limits.h>
int minimumIndex(int* capacity, int capacitySize, int itemSize) {
    int min = INT_MAX;
    int m = 0;
    int n = 0;

    for(int i=0; i<capacitySize; i++){
        if(min > capacity[i] && capacity[i] >= itemSize){
            min = capacity[i];
            n = i;
            m = 1;
        }
    }

    if (m==0){
        return -1;
    }
    return n;
}