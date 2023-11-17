/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlower_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:16:39 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/16 15:18:14 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putlower_hexa(unsigned int n)
{
	char	*base;

	base = "0123456789abcdef";
	if (n >= 16)
		ft_putlower_hexa(n / 16);
	ft_putchar(base[n % 16]);
}
