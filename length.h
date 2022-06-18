int length(char *str)
{
    int i=0;
    char ch=' ';
    while(ch!='\0')
    {
        ch=str[i];
        i++;
    }
    return (i-1);
}