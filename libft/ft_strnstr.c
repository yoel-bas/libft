/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:51:54 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/25 15:42:11 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (to_find == 0 && n == 0 && str == 0)
		return (NULL);
	if (!(*to_find))
		return ((char *)str);
	while (str[i] && i < n)
	{
		while (str[i + j] && str[i + j] == to_find[j] && (i + j) < n)
			j++;
		if (to_find[j] == '\0')
			return ((char *)str + i);
		j = 0;
		i++;
	}
	return (0);
}
