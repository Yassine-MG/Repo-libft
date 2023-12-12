/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:43:14 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 15:31:59 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*source;

	dst = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dst == source)
		return (dest);
	if (dst > source)
	{
		while (n--)
			dst[n] = source[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
