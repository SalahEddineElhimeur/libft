/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-hime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 14:20:36 by sel-hime          #+#    #+#             */
/*   Updated: 2024/11/02 10:41:29 by sel-hime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(long n)
{
	int	count;

	count = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)

{
	int		count;
	char	*p;
	long	nb;

	nb = (long)n;
	count = ft_count(n);
	if (n < 0)
		count++;
	p = malloc(count + 1);
	if (!p)
		return (NULL);
	if (n < 0)
	{
		p[0] = '-';
		nb = -nb;
	}
	p[count] = '\0';
	while (--count >= 0 && p[count] != '-')
	{
		p[count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (p);
}
