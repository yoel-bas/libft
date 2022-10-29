/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:15:32 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/26 13:06:13 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_of_num(long c)
{
	int	i;

	i = 0;
	if (c == 0)
		i++;
	if (c < 0)
	{
		c *= -1;
		i++;
	}
	while (c > 0)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*res;

	len = len_of_num(n);
	res = malloc(len + 1 * sizeof(char));
	if (n == -2147483648)
	{
		ft_strlcpy(res, "-2147483648", 12);
		return (res);
	}
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (n == 0)
	{
		res[0] = 48;
		return (res);
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		res[len] = (n % 10) + 48;
		n = n / 10;
		len--;
	}
	return (res);
}
