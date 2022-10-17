#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = 0;
	while (s[i])
	{
		if(s[i] == c)
			return (ptr + i);
		i++;
	}
	if (c == '\0')
		return (ptr + i);

	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr1;
// 	char	*ptr2;

// 	ptr1 = ft_strchr("fdsf\0fdsf", '\0');
// 	ptr2 = strchr("fdsf\0fdsf", '\0');

// 	puts(ptr1);
// 	puts(ptr2);
// 	return (0);
// }
