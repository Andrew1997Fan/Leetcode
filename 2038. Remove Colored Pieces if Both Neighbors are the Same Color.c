bool winnerOfGame(char * colors){
    int count_a = 0, count_b = 0;
    int n = strlen(colors);
    for(int i = 0; i< n-2; i++)
    {
        if((colors[i] == colors[i+1])&&(colors[i+1] == colors[i+2]) && colors[i] == 'A')
        {
            count_a++;
        }
        else if((colors[i]== colors[i+1])&&(colors[i+1] == colors[i+2]) &&colors[i] == 'B')
        {
            count_b++;
        }
    }
    return count_a > count_b;
}
