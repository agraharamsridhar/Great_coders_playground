int lengthOfLastWord(char* s) {
    char *temp = s;
    int i=strlen(s);
    printf("i value is %d\n",i);
    if(i==0)
    {
        return 0;
    }
    int it = i-1;
    if(i==1 && s[0] != ' ')
    {
        return 1;
    }
    int count =0;
    int final =0;
    for(;it>=0;it--)
    {
        if(s[it]!=' ' && it>count)
        {
            count = it;
            final = 1;
            
        }
        else if(s[it]==' ' && count >it)
        {
            final =  count - it;
            break;
        }
        else if(count==it && s[it] != ' ')
        {
            final = 1;
        }
        else
        {
            final++;
        }
    }
    return final;
}
