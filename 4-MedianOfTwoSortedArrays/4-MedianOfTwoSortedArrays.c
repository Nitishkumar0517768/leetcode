// Last updated: 3/7/2026, 10:03:03 PM
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int arr[nums1Size + nums2Size];
    int i=0;
    int j=0; 
    int k= 0;
    int n = nums1Size + nums2Size;
    float sum = 0;
    while(i<nums1Size && j<nums2Size){
        if(nums1[i] < nums2[j]){
            arr[k] = nums1[i];
            i++;
            k++;
        }
        else{
            arr[k] = nums2[j];
            j++;
            k++;
        }
    }
    
    while(i<nums1Size){
        arr[k] = nums1[i];
        i++;
        k++;
    }
    while(j<nums2Size){
        arr[k] = nums2[j];
        j++;
        k++;
    }
    
    if(n%2==0){
        sum = arr[n/2 -1] + arr[n/2];
        return sum/2;
    }
    else{
        return (arr[n/2]);
    }
}