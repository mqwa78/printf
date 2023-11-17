/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupper_hexa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:14:08 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/16 15:16:23 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putupper_hexa(unsigned int n)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n >= 16)
		ft_putupper_hexa(n / 16);
	ft_putchar(base[n % 16]);
}
