// Last updated: 3/7/2026, 10:02:51 PM
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i=0;
    int j=0;
    int arr[m+n];
    int k = 0;

    while(i<m && j<n){
        if(nums1[i] <= nums2[j]){
            arr[k] = nums1[i];
            i++;
        }
        else{
            arr[k] = nums2[j];
            j++;
        }
        k++;
    }

     if (j < n){
        while (j < n){
            arr[k] = nums2[j];
            j++;
            k++;
        }
    }

    else if(i<m){
        while(i<m){
            arr[k] = nums1[i];
            i++;
            k++;
        }
    }

    for(int n=0; n<k; n++){
        nums1[n] = arr[n];
    }

}