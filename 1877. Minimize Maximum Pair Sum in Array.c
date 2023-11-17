int compare( const void *arg1, const void *arg2 )
{
	int ret = *(int*)(arg1)-*(int*)(arg2);
	if (ret>0) return 1;
	if (ret<0) return -1;
	return 0;
}
int minPairSum(int* nums, int numsSize){
	qsort(nums,numsSize,sizeof(int),compare);
    int* tmp = (int*)malloc(numsSize / 2 * sizeof(int));
    int last = numsSize-1;
    int len = numsSize;
    for(int i =0; i< len/2; i++)
    {
        tmp[i] = nums[i]+nums[last];
        last--;
    }
	qsort(tmp,numsSize/2,sizeof(int),compare);
    return tmp[(numsSize/2)-1];
}
