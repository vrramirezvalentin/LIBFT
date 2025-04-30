#include "libft.h"

void *ft_memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    unsigned int i = 0;            // utilisation de unsigned int pour que ca fonctionne avec size_t lors de i < n
    while(i < n) {
        p[i] = (unsigned char)c;
        i++;
    }
    return s;
}

// int main() {
//     char buffer[50];
//     ft_memset(buffer, 'A', sizeof(buffer));
//     buffer[sizeof(buffer) - 1] = '\0'; 
//     printf("%s\n", buffer);
//     return 0;
// }
