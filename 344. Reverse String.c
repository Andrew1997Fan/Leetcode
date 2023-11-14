void reverseString(char* s, int sSize) {
    int front = 0, back = sSize-1;
    char tmp;
    while(front < back)
    {
        tmp = s[front];
        s[front] = s[back];
        s[back] = tmp;
        front++;
        back--;
    }
}
