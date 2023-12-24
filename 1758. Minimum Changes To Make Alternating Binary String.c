int minOperations(char* s) {
   int len = strlen(s);
    int count1 = 0, count2 = 0;
    for(int i =0; i<len; i++){
        if(s[i] != ('0' + i%2)) count1++; //0,1,0,1
        if(s[i] != ('1' - i%2)) count2++; //1,0,1,0
    }
    count1 = count1 <= count2? count1 : count2;
   return count1;
}
