/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:47 by yassine           #+#    #+#             */
/*   Updated: 2023/12/10 18:17:22 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlength(char const *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_cpy(size_t len, char *substring, unsigned int start, char const *s)
{
	size_t	j;

	j = 0;
	while (j < len)
	{
		substring[j] = s[start + j];
		j++;
	}
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	i = ft_strlength(s);
	if (start >= i)
	{
		substring = malloc(1);
		if (substring != NULL)
			substring[0] = '\0';
		return (substring);
	}
	if (len > i - start)
		len = i - start;
	substring = malloc(sizeof(char) * (len + 1));
	if (substring == NULL)
		return (NULL);
	ft_cpy(len, substring, start, s);
	substring[len] = '\0';
	return (substring);
}
