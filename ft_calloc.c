#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size){

    if(size != 0 && nmemb * size / size != nmemb)
        return NULL;

    void *array = (void *)malloc(nmemb * size);
    if(array == NULL)
        return NULL;

    ft_bzero(array, (nmemb * size));

    return array;
}