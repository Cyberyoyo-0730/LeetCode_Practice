void moveZeroes(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            // 把i后面所有元素向前移动一位
            for (int j = i; j < numsSize - 1; j++) {
                nums[j] = nums[j + 1];
            }
            nums[numsSize - 1] = 0;
        }
    }
}
//第一种做法无法满足检测连续零的情况，如[0,0,1,0]




void moveZeroes(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1;) {              //n-1
        if (nums[i] == 0) {                           
            for (int j = i; j < numsSize - 1; j ++ ) {       //
                nums[j] = nums[j + 1];
            }
            nums[numsSize-1]=0;
            numsSize -= 1;
        }
        else {
            i += 1;
        }
    }
}
//第二种做法有效解决了这个问题，但是其时间复杂度为O(n2),类似于冒泡排序，属于暴力移位法




void moveZeroes(int* nums, int numsSize) {
    int slow = 0;
    for (int fast = 0; fast < numsSize; fast++) {
        if (nums[fast] != 0) {
            nums[slow] = nums[fast];
            slow++;
        }
        for (int i = slow; i < numsSize; i++) {
            nums[i] = 0;
        }
    }
}
//第三种做法在时间复杂度上更好，O(n)，属于双指针法