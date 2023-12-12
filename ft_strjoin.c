/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:03 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 10:54:38 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	*ft_strcpy(const char *src, char *dst)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static char	*ft_strcat(const char *src, char *dst)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (dst);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	result = (char *)malloc(len1 + len2 + 1);
	if (result == NULL)
	{
		return (NULL);
	}
	ft_strcpy(s1, result);
	ft_strcat(s2, result);
	return (result);
}

// int main(){
//     char a[] = "Yassine";
//     char b[] = " Is The Best";
//     ft_strjoin(a, b);
// }
