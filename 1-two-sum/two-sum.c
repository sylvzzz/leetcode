#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* tab = (int*)malloc(sizeof(int) * 2);
    
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                tab[0] = i;
                tab[1] = j;
                *returnSize = 2;
                return tab;
            }
        }
    }
    
    *returnSize = 0;
    return NULL;
}