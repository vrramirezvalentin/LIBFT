#include "libft.h"
char	*ft_strtrim(char const *s1, char const *set)
{ 
    int i;
    int len;
    int j;

    if(!s1 || !set)
        return NULL;

    i = 0;
    j = 0;
    len = ft_strlen(s1);

    while(s1[i] && ft_strchr(set, s1[i]))
        i++;
    while(len > 0 && ft_strchr(set, s1[len - 1]))
        len--;

    if(i >= len)
       return ft_strdup("");

    char *newstr = malloc(sizeof(char) * (len - i + 1));
        if(!newstr)
            return NULL;
    ft_bzero(newstr, len - i + 1);

    while(i < len)
        newstr[j++] = s1[i++];

    newstr[j] = '\0';

    return newstr;
}