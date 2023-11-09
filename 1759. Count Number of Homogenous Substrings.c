#define MOD ((int)1e9 + 7)

int countHomogenous(char * s){
    int count = 0;
    //2 ptr
    char lastCh = '\0';

    int ret = 0;
    for(int i = 0; s[i]!= '\0'; i++)
    {
        if(s[i] == lastCh)
        {
            count ++;
        }
        else
        {
            lastCh = s[i];
            count = 1;
        }
        ret = (count + ret) % MOD;
    }
    return ret;
}
