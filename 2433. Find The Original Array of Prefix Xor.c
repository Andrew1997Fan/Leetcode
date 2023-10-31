int* findArray(int* pref, int prefSize, int* returnSize){
    int* arr = (int*)malloc(sizeof(int)*prefSize);
    *returnSize = prefSize;
    arr[0] = pref[0];
    for(int i = 1; i<prefSize; i++)
    {
        arr[i] = pref[i-1]^pref[i];
    }
    return arr;
}
