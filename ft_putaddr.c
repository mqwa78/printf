/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <mamahtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:57 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 13:24:21 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

static int	ft_count_long_digits(unsigned long long n)
{
	int	count;

	count = 1;
	while (n >= 16)
	{
		count++;
		n /= 16;
	}
	return (count);
}

static void	ft_putaddr_hexa(unsigned long long nb)
{
	const char	*basehexa;

	basehexa = "0123456789abcdef";
	if (nb >= 16)
		ft_putaddr_hexa(nb / 16);
	ft_putchar(basehexa[nb % 16]);
}

int	ft_putaddr(void *addr)
{
	if (!addr)
	{
		write(1, "(nil)", 5);
		return (0);
	}
	write(1, "0x", 2);
	ft_putaddr_hexa((unsigned long long)addr);
	return (ft_count_long_digits((unsigned long long)addr) + 2);
}

int	main(void)
{
	char	*s;
	char	*str;

	s = "yo";
	str = NULL;
	printf("%p\n", s);
	printf("%p\n", str);
	printf("%d\n", ft_putaddr(s));
	printf("%d\n", ft_putaddr(str));
	return (0);
}
