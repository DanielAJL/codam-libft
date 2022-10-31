/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlynch <dlynch@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:55:12 by dlynch            #+#    #+#             */
/*   Updated: 2022/10/31 14:19:00 by dlynch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	li_num;

	li_num = n;
	if (li_num < 0)
	{
		write(fd, "-", 1);
		li_num *= -1;
	}
	if (li_num >= 10)
	{
		ft_putnbr_fd((li_num / 10), fd);
		ft_putchar_fd(li_num % 10 + '0', fd);
	}
	else
		ft_putchar_fd(li_num + '0', fd);
}

// int	main(void)
// {
// 	int	num1 = INT_MAX;
// 	int	num2 = INT_MIN;

// 	ft_putnbr_fd(num1, 1);
// 	printf("\n");
// 	ft_putnbr_fd(num2, 1);
// 	printf("\n");
// 	return (0);
// }
