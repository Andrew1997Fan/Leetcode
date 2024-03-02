/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    for(int i = 0; i < numsSize; i++){
        nums[i] = nums[i]*nums[i];
    }
   qsort(nums, numsSize, sizeof(int), cmpfunc);
   *returnSize = numsSize; 
   return nums;
}
