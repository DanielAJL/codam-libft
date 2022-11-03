/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:03:56 by dlynch            #+#    #+#             */
/*   Updated: 2022/11/03 17:32:11 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	is_character_in_set(char character, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (character == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	int	find_position_index(char const *s1, char const *set, int ltr)
{
	int	index;

	if (!ltr)
	{
		index = ft_strlen(s1);
		while (is_character_in_set((char) s1[--index], set))
		{
			if (index == 0)
				break ;
		}
	}
	else
	{
		index = 0;
		while (is_character_in_set((char) s1[index], set))
			index++;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		length;
	char	*ptr;

	if (!s1)
		return (NULL);
	i = find_position_index(s1, set, 1);
	j = find_position_index(s1, set, 0);
	length = ((int) ft_strlen(s1) - i) - ((int) ft_strlen(s1) - j) + 2;
	if (length < 1)
		length = 1;
	ptr = ft_calloc(length, sizeof(char));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, length);
	return (ptr);
}

// int	main(void)
// {
// 	char *s1 = ft_strtrim("   xxxtripouille", " x");
// 	char *s2 = ft_strtrim("tripouille ee x eee  xxx", " x");
// 	char *s3 = ft_strtrim("   xxx   xxx", " x");
// 	char *s4 = ft_strtrim("", "");

// 	printf("s1:	[%s]\n", s1);
// 	printf("s2:	[%s]\n", s2);
// 	printf("s3:	[%s]\n", s3);
// 	printf("s4:	[%s]\n", s4);
// 	return (0);
// }
