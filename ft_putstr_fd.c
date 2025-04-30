#include <unistd.h>
#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	int i;
	i = 0;
	if(!s)
		return;
	while(s[i])
		i++;
	write(fd, s, i);
}




// int main()
// {
// 	char *str = "Hello, world!";
// 	int fd = 1; // Utilise le descripteur de fichier 1 pour écrire sur la sortie standard (stdout)
	
// 	ft_putstr_fd(str, fd);
	
// 	return 0;
// }
