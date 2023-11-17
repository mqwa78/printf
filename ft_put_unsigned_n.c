/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_n.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:29:40 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/16 15:10:15 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_put_unsigned_n(unsigned int n)
{
	unsigned long	nb;

	nb = n;
	if (nb >= 10)
		ft_put_unsigned_n(nb / 10);
	ft_putchar(nb % 10 + '0');
}
