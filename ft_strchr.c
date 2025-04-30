#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i = 0;
    unsigned char uc = (unsigned char) c;

    while(s[i]){
        if(s[i] == uc)
            return (char *)&s[i];
        i++;
    }

    if(s[i] == uc){
        return (char *)&s[i];
    }

    return NULL;
}

// int main(int argc, char **argv){

//     if(argc > 2){
//         int final =  argv[2][0];
//         printf("%s \n", ft_strchr(argv[1],final));
//     } else {
//         printf("error");
//     }
//     return 0;
// }