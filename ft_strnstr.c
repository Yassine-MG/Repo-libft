/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:32 by yassine           #+#    #+#             */
/*   Updated: 2023/12/10 18:13:05 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	int		j;
	size_t	a;

	i = 0;
	j = 0;
	if (*find == '\0')
		return ((char *)s);
	while (i <= slen && s[i] != '\0')
	{
		a = i;
		while (s[a] == find[j] && find[j] != '\0' && a < slen)
		{
			a++;
			j++;
		}
		if (find[j] == '\0')
		{
			return ((char *)(s + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
