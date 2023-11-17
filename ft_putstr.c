/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <mamahtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:21:30 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 15:04:34 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

void	ft_putstr(const char *s)
{
	int	size;

	size = ft_strlen(s);
	while (*s)
		write(1, s++, 1);
	return (size);
}

/*int	main(void)
{
	char	*str;

	str = NULL;
	printf("%s\n", str);
	ft_putstr(str);
	return (0);
}*/
