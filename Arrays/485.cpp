int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int maxCount = 0;
    int curCount = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            curCount += 1;
            if (curCount > maxCount) {
                maxCount = curCount;
            }
        }
        else {
            curCount = 0;
        }
    }
    return maxCount;
}
