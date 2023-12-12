/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:42:31 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 14:35:20 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = nmemb * size;
	if (size != 0 && total_size / size != nmemb)
	{
		return (NULL);
	}
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, total_size);
	return (ptr);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	int *p = calloc(90, 90);
// 	int *q = ft_calloc(90, 90);
// 	printf("OG: %p\nOP: %p\n", p, q);
// 	printf("OG: %d", malloc_usable_size(q));
// 	printf("\nOP: %d", malloc_usable_size(p));	
// }
