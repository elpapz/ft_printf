/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanelas <acanelas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 03:10:56 by acanelas          #+#    #+#             */
/*   Updated: 2022/12/08 19:03:30 by acanelas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_printf.h"

static int	neg_num(char *str, int n, int len)
{
	if (n < 0)
	{
		str[0] = '-';
		if (n == (-2147483648))
		{
		len--;
			while (len > 0)
			{
			str[len] = (n % 10 * (-1)) + 48;
			n = n / 10;
			len--;
			}
			return (0);
		}
		else
		n = n * (-1);
	}
	return (n);
}

static int	int_len(int n)
{
	int		a;

	a = 0;
	if (n <= 0)
	{
		n = n * (-1);
		++a;
	}
	while (n)
	{
		a++;
		n = n / 10;
	}
	return (a);
}

static char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = int_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		if (neg_num(str, n, len) == 0)
			return (str);
		else
			n = neg_num(str, n, len);
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}

int	ft_putnumb(int n)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	len = int_len(n);
	str = ft_itoa(n);
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	free(str);
	return (len);
}
