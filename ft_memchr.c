#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	puts((char *) ptr);
	while (ptr[i] && (i < n))
	{
		if (ptr[i] == (unsigned char) c)
			return (ptr + i);
		i++;
	}
	if(c == '\0' && (i < n))
		return (ptr + i);
	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr;

// 	ptr = ft_memchr("est", 't', 4);
// 	printf("%s\n", ptr);
// 	return (0);
// }
