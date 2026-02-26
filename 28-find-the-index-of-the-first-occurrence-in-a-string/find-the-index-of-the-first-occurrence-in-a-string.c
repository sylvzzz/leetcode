int strStr(char* haystack, char* needle) {
    int i = 0;
    
    if (needle[0] == '\0')
        return 0;
    
    while (haystack[i]) {
        int j = 0;
        int k = i;
        
        while (haystack[k] == needle[j] && needle[j] != '\0') {
            k++;
            j++;
        }
        
        if (needle[j] == '\0')
            return i;
        
        i++;
    }
    return -1;
}