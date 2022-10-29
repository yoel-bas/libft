/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 19:47:39 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/29 18:24:30 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	klmat(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c && str[i])
			i++;
		if (str[i] != c && str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

int	tol_lklma(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		i++;
	}
	return (i);
}

static char	**freetab(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free (str[i]);
		i++;
	}
	free (str);
	return (str);
}

char	**ft_split(char *s, char c)
{
	int		i;
	char	**str;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc((klmat(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			str[i] = ft_substr(s, 0, tol_lklma(s, c));
			if (!str[i])
				return (freetab(str));
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	str[i] = 0;
	return (str);
}
