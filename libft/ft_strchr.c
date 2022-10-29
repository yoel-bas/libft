/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 23:47:11 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/26 13:03:09 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (*str != '\0' && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c)
		return ((char *)str);
	return (0);
}
