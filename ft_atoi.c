/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:42:20 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 12:03:50 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	neg;

	i = 0;
	result = 0;
	neg = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
		{
			neg *= -1;
		}
		i++;
	}
	while (nptr[i] != '\0' && (nptr[i] > 47 && nptr[i] < 58))
	{
		result = (result * 10) + nptr[i] - '0';
		i++;
	}
	return (result * neg);
}

// int main(){
// 	char a[] = "x";
// 	char b[] = "x"; 
// 	int resulta = ft_atoi(a);
// 	int resultb = atoi(b);
// 	printf("%d\n", resulta);
// 	printf("%d \n", resultb);
// }