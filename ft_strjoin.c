/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:08:46 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/20 18:02:13 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	if (!s1)
		return (NULL);
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
