/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:00:14 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/16 17:14:18 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(int c);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);
void	ft_put_unsigned_n(unsigned int n);
void	ft_putupper_hexa(unsigned int n);
void	ft_putlower_hexa(unsigned int n);
void	ft_putaddr(void *addr);

#endif