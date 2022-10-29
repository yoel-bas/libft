/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoel-bas <yoel-bas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 09:11:24 by yoel-bas          #+#    #+#             */
/*   Updated: 2022/10/29 15:14:51 by yoel-bas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// }
//  char my_func(unsigned int i, char str)
//  { 
//  	return str - 32;
//  }

//  int main()
//  {
//  	char str[10] = "hello.";
//  	char *result = ft_strmapi(str, my_func);
//  	printf(" %s\n", result);
// 	return 0;
//  }