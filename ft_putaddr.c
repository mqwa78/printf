/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:47:57 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/16 17:13:42 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void	ft_putaddr_hexa(unsigned long long nb)
{	
	const char	*basehexa;

	basehexa = "0123456789abcdef";
	if (nb >= 16)
		ft_putaddr_hexa(nb / 16);
	ft_putchar(basehexa[nb % 16]);
}

void	ft_putaddr(void *addr)
{
	if (!addr)
	{
		write(1, "(nil)", 5);
		return ;
	}
	write(1, "0x", 2);
	ft_putaddr_hexa((unsigned long long)addr);
}
