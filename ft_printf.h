/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanelas <acanelas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:29:03 by acanelas          #+#    #+#             */
/*   Updated: 2022/12/08 20:16:48 by acanelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putunsigned(unsigned int n);
int	ft_putnumb(int n);
int	ft_putstr_ret_len(char *str);
int	ft_putchar_ret_len(char i);
int	ft_putadress(unsigned long long n);
int	ft_puthex(unsigned int n, const char type);
int	ft_printf(const char *str, ...);

#endif