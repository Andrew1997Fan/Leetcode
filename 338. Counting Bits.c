/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int bitcount(int data){
    int numcount = 0;
    while(data)
    {
        data = data & (data-1);
        numcount++;
    }
    return numcount;
}

int* countBits(int n, int* returnSize) {
    int* ans = (int*)malloc(sizeof(int)*(n+1));
    for(int i = 0; i <= n; i++){
        ans[i] = bitcount(i);
    }
    *returnSize = n+1;
    return ans;
}
