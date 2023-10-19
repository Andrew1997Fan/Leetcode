char* afterBlank(char *c)
{
    int i = 0,j = 0;
    while(c[i])
    {
        if(c[i]=='#')
        {
            if(j>0) j--;
            else j=0;
        }
        else c[j++] = c[i];
        i++;
    }
    c[j]='\0';
    return c;
}

bool backspaceCompare(char * s, char * t){
    return strcmp(afterBlank(s),afterBlank(t))==0;
}
