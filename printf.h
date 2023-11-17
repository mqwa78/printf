/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahtal <mamahtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:00:14 by mqwa              #+#    #+#             */
/*   Updated: 2023/11/17 14:29:02 by mamahtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_strlen(const char *s);
void	ft_putstr(const char *s);
void	ft_putupper_hexa(unsigned int n);
void	ft_putlower_hexa(unsigned int n);
int		ft_putaddr(void *addr);
int		ft_putnbr(int n);
int		ft_put_unsigned_n(unsigned int n);
int		ft_printf(const char *format, ...);

#endif
