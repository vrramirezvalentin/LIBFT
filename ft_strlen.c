#include "libft.h"

size_t ft_strlen(const char *s){
    size_t i;
    i = 0;

    while(s[i])
        i++;
return i;
}

// int main(int argc, char **argv){
//     if(argc > 1){
//         printf("%ld \n", ft_strlen(argv[1]));
//     } else {
//         printf("eror");
//     }

//     return 0;
// }