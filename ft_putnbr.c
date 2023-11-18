/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:08:30 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 20:16:13 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static int	ft_count_digits(int n)
{
	int	count;
	long	nb;

	count = 1;
	nb = n;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

int	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
	return (ft_count_digits(n));
}

/*int	main(void)
{
	int	*a;

	*(&a) = NULL;
	printf("%d\n", *a);
	ft_putnbr(*a);
	return (0);
}*/
