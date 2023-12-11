/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:36 by yassine           #+#    #+#             */
/*   Updated: 2023/12/10 18:13:09 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *string, int caractere)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	while (string[i] != (unsigned char)caractere && i >= 0)
	{
		i--;
	}
	if (string[i] == (unsigned char)caractere)
	{
		return ((char *)string + i);
	}
	return (NULL);
}
