/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:03:56 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/24 14:37:42 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ptr_after_match_front(char const *s1, char const *set);
static	int	ptr_before_match_back(char const *s1, char const *set);

/*
Return index to first non-matching occurrence AFTER match found from front.
If none are found, index will be matching strlen(s1)
*/
static	int	ptr_after_match_front(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
		{
			j++;
			if (j == (int) ft_strlen(set))
				return (i);
		}
		i++;
	}
	return (i);
}

/*
Return index to first non-matching occurrence BEFORE match found from back.
If none are found, index will be matching strlen(s1)
*/
static	int	ptr_before_match_back(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (s1[i] && i)
	{
		j = 0;
		while (set[j] && s1[i] != set[j])
		{
			j++;
			if (j == (int) ft_strlen(set))
				return (i);
		}
		i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		start;
	int		end;
	int		i;

	if (!s1)
		return (NULL);
	start = ptr_after_match_front(s1, set);
	end = ptr_before_match_back(s1, set);
	i = 0;
	if ((int) ft_strlen(s1) != end)
		end = end + 1;
	ptr = malloc((end - start) + 1);
	if (!ptr)
		return (ft_strdup("\0"));
	ft_strlcpy(ptr, &s1[start], (end - start) + 1);
	return (ptr);
}

// int main(void)
// {
// 	// char set1[] = "ab";
// 	// char str1[] = "cccacabccaba";

// 	char set1[] = "\n\t";
// 	char str1[] = "\t\t\n\n\n\n\t";

// 	printf("%s\n", ft_strtrim(str1, set1));
// 	return (0);
// }
