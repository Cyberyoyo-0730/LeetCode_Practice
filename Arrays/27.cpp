int removeElement(int* nums, int numsSize, int val) {

}int removeElement(int* nums, int numsSize, int val) {
    int slow = 0;
    int count = 0;
    for (int fast = 0; fast < numsSize; fast++) {
        if (nums[fast] != val) {
            nums[slow] = nums[fast];
            slow++;
            count++;
        }
    }
    return count;
}