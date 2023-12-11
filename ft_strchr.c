/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:48 by yassine           #+#    #+#             */
/*   Updated: 2023/12/10 18:12:20 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *string, int caractere)
{
	int	i;

	i = 0;
	while (string[i] != '\0' && (unsigned char)caractere != string[i])
	{
		i++;
	}
	if (string[i] == (unsigned char)caractere)
	{
		return ((char *)string + i);
	}
	return (NULL);
}
