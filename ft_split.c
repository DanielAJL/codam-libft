/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:44:49 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/30 11:49:46 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Get count of words separated by a delimiter character.
static	int	get_word_count(char const *s1, int c);
static	int	get_word_len(char const *s1, int c, int current_i);
static	char	**copy_into_array(char **arr, const char *s, char c, int w_c);
static	void	ft_free(char **strs, int j);

static	int	get_word_count(char const *s1, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] && s1[i] != c)
		{
			if (s1[i] != '\0')
				count ++;
			while (s1[i + 1] && s1[i] != c)
				i++;
		}
		i ++;
	}
	return (count);
}

static	int	get_word_len(char const *s1, int c, int current_i)
{
	int	word_len;

	word_len = 0;
	while (s1[current_i] && s1[current_i] != c)
	{
		word_len++;
		current_i++;
	}
	return (word_len);
}

static void	ft_free(char **arr, int i)
{
	while (i)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static	char	**copy_into_array(char **arr, const char *s, char c, int w_c)
{
	int	i;
	int	j;
	int	word_size;

	i = 0;
	j = -1;
	while (++j < w_c)
	{
		while (s[i] == c)
			i++;
		word_size = get_word_len(s, c, i);
		arr[j] = ft_substr(s, i, word_size);
		if (!arr[j])
		{
			ft_free(arr, j);
			return (NULL);
		}
		i = i + word_size;
	}
	arr[j] = (char *) '\0';
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		word_count;
	char	**arr;

	if (!s)
		return (NULL);
	word_count = get_word_count(s, c);
	arr = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!arr)
		return (NULL);
	arr = copy_into_array(arr, s, c, word_count);
	return (arr);
}

// int	main(void)
// {
// 	char	*string = "split       this for   me  ! ";
// 	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
// 	ft_split(string, ' ');
// 	return (0);
// }
