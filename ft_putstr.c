/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:21:30 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 20:12:38 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr(const char *s)
{
	int	size;

	size = 0;
	while (s[size])
	{
		write(1, &s[size], 1);
		size++;
	}
	return (size);
}

/*int	main(void)
{
	char	*str;

	str = NULL;
	//printf("%s\n", str);
	printf("%d\n", ft_putstr(str));
	return (0);
}*/
