#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i = 0;

    if(size == 0)
    {
        while(src[i])
            i++;
        return (i);
    }
    if(size > 0)
    {
    while(i < (size - 1) && src[i] != '\0'){   
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    }
    while(src[i] != '\0')
        i++;
    return i;
}

// int main(int argc, char **argv){
//     if(argc > 2){
//         char *buffer = malloc(strlen(argv[2]) + 1); // Allouer suffisamment de mémoire pour copier argv[2]
//         if (buffer == NULL) {
//             printf("Allocation failed\n");
//             return 1;
//         }
//         printf("%ld \n", ft_strlcpy(buffer, argv[2], strlen(argv[2]) + 1));
//         printf("size of buffer is %ld \n", strlen(buffer));

//         free(buffer);
//     } else {
//         printf("error");
//     }
//     return 0;
// }