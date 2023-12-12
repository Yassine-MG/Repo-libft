/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:42:26 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 15:21:50 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

// int main(){
// 	char a[] = "chaine de caractere";
// 	int i = 0;
// 	ft_bzero(a, sizeof(a));
// 	while (i < sizeof(a))
// 	{
// 		printf("%d", a[i]) ;
// 		i++;
// 	}
// }