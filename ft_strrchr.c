#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	int		i;

	ptr = (char *) s;
	i = ft_strlen(s);
	if (c == '\0')
		return (ptr + i);
	i--;
	while (s[i] && i > -1)
	{
		if(s[i] == c)
			return (ptr + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*ptr1;
// 	char	*ptr2;

// 	ptr1 = ft_strrchr("ABCEABCZE\0", 'Z');
// 	ptr2 = strrchr("ABCEABCZE\0", 'Z');
// 	// Check if ptr1 && ptr2 - 1 = Z and not C (to target last occurance).

// 	ptr1 = ft_strrchr("ABCEABCZE\0", '5');
// 	ptr2 = strrchr("ABCEABCZE\0", '5');


// 	puts(ptr1 - 1);
// 	puts(ptr2 - 1);
// 	return (0);
// }
