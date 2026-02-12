int lengthOfLastWord(char* s) {
    int i = 0;
    int len = strlen(s) - 1;

    while(s[len] == ' ' && len > 0)
        len--;
    i = len;
    while(i >= 0)
    {
        if(s[i] == ' ')
            return len - i;
        i--;
    }
    return len + 1;
}
