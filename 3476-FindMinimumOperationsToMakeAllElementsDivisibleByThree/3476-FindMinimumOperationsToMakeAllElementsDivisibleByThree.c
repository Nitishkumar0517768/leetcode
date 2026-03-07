// Last updated: 3/7/2026, 10:01:56 PM
int minimumOperations(int* nums, int numsSize) {
    int count = 0;

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] % 3 == 1) {
            nums[i] = nums[i] - 1;
            count++;
        } else if (nums[i] % 3 == 2) {
            nums[i] = nums[i] + 1;
            count++;
        }
    }
    return count;
}