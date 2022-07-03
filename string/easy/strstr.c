#include <stdlib.h>

int find(int i, char *s1, char *s2)
{
    int ans = i;
    
    while (*s2)
    {
        if (*s2 != s1[i])
            return (-1);
        s2++;
        i++;
    }
    
    return (ans);
}

int strStr(char * haystack, char * needle){
    
    int i = 0;
    
    if (needle == NULL)
            return (0);
    
    while (haystack[i])
    {
        if (haystack[i] == *needle)
        {
            int pans = find(i, haystack, needle);
            
            if (pans != -1)
                return (pans);
            if (pans == -1 && haystack[i + 1] == '\0')
                    return (pans);
        }
        
        i++;
    }
    
    return (-1);

}
