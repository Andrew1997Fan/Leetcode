bool isPowerOfFour(int n){
    long a = 1;
    while(a<n)
    {
        a <<= 2;
    }
    return n == a;
}
