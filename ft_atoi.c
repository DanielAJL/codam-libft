/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:13:24 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/18 17:56:37 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

// Ignore all leading spaces.
// Ignore all leadng tabs.
// Ignore ALL leading whitespace characters.

/*
Space, tab, line feed (newline), carriage return, form feed,
and vertical tab characters are called "white-space characters"
because they serve the same purpose as the spaces between words and
lines on a printed page — they make reading easier.
*/

// 9 HT, 10 LF, 11 VT, 12 FF, 13 CR, 32 SPACE [WHITESPACE CHARS]
// 43 + , 45 -

// int	ft_atoi(const char *str)
// {
// 	int		*ptr_int;
// 	// char	*ptr_char;
// 	size_t	i;
// 	int	found;

// 	// ptr_char = (char *) str;
// 	i = 0;
// 	found = 0;
// 	// Loop for every char that is NOT a-z && A-Z
// 	while (str[i])
// 	{
// 		if(ft_isdigit(str[i]))
// 		{
// 			ptr_int[found] = str[i] - '0';
// 			found++;
// 		}
// 		if(((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
// 		{
// 			if(found)
// 			{
// 				return (*ptr_int - found);
// 			}
// 			// found whitespace char and we have not yet encountered a digit
// 		}
// 		i++;
// 	}
// 	return (0);
// }

int	ft_atoi(const char *str)
{
	int		number;
	int		pos_or_neg;
	size_t	i;

	number = 0;
	pos_or_neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			pos_or_neg = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number *= 10;
		number += str[i] - '0';
		i++;
	}
	return (number * pos_or_neg);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;
// 	int		j;

// 	// str = "fsf98 9f93 489"; //	0
// 	str = "    --989f93 489"; //	989
// 	// str = "	-98993 489"; //		989
// 	// str = " +1 21";

// 	i = atoi(str);
// 	j = ft_atoi(str);
// 	printf("%d\n", i);
// 	printf("%d\n", j);
// 	return (0);
// }
