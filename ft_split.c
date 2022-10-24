/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:44:49 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/24 17:34:13 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_first_non_matching_position(char const *s1, int c);
static	int	get_first_matching_position(char const *s1, int c);

static	int	get_first_matching_position(char const *s1, int c)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			return (i);
		i++;
	}
	return (i);
}

/*
Returns an index position of the pointer passed where the pointer points to the
first character found NOT matching int c character.
*/
static	int	get_first_non_matching_position(char const *s1, int c)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != c)
			return (i);
		i++;
	}
	return (i);
}

static	int	get_total_substring_count(char const *s1, int c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s1[i])
	{
		if (s1[i] && s1[i] != c)
		{
			if(s1[i] != '\0')
				count ++;
			while (s1[i + 1] && s1[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	start;
	int	end;
	int	str_count;
	char	*ptr;

	start = get_first_non_matching_position(s, c);
	end = get_first_matching_position(s + start, c); // also length from start
	ptr = ft_substr(s, start, (size_t) end);
	str_count = get_total_substring_count(s, c);

	printf("start:		[%d]\n\n", start);
	printf("end:		[%d]\n\n", end);
	printf("ptr:		[%s]\n\n", ptr);
	printf("str_count:	[%d]\n\n", str_count);
}


int	main(void)
{
	char	*string = "split       this for   me  ! ";
	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
	ft_split(string, ' ');
	while (*expected)
		printf( "%s\n", *expected++ );
	return (0);
}

// char **dub_arr;
// dub_arr = malloc(aantal woorden)

// while
// {
// 	iets met zoek woord en lengte
// 	dub_arr[i] = substr (of andere functie)
// 	if !dub-arr
// 	{
// 		free_functie(&dubarr[0])
// 		free(dub_arr);
// 	}

// 	i++
// }


