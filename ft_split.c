/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:44:49 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/24 16:48:06 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_first_non_matching_position(char const *s1, int c);
static	int	get_first_matching_position(char const *s1, int c);

/*
Returns an index position of the pointer passed where the pointer points to the
first character found matching int c character. Can traverse through whole
string if we adjust the pointer position each time.
*/
// static	char *get_first_matching_position(char const *s1, int c)
// {
// 	int		i;

// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (s1[i] == c)
// 			return ((char *) s1 + i);
// 		i++;
// 	}
// 	return ((char *) s1);
// }

// /*
// Returns an index position of the pointer passed where the pointer points to the
// first character found NOT matching int c character.
// */
// static	char *get_first_non_matching_position(char const *s1, int c)
// {
// 	int		i;

// 	i = 0;
// 	while (s1[i])
// 	{
// 		if (s1[i] != c)
// 			return ((char *) s1 + i);
// 		i++;
// 	}
// 	return ((char *) s1);
// }


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

char	**ft_split(char const *s, char c)
{
	int	start;
	int	end;
	char	*ptr;

	start = get_first_non_matching_position(s, c);
	end = get_first_matching_position(s + start, c); // also length from start
	ptr = ft_substr(s, start, (size_t) end);

	printf("start:	[%d]\n\n", start);
	printf("end:	[%d]\n\n", end);
	printf("ptr:	[%s]\n\n", ptr);
}

int	main(void)
{
	char	*string = "      split       this for   me  !       ";
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


