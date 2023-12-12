/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:39:16 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 10:53:01 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static char	*ft_reverse_str(int i, char *str)
{
	char	temp;
	int		start;
	int		end;

	start = 0;
	end = i - 1;
	while (start < end)
	{
		temp = str[start];
		str[start++] = str[end];
		str[end--] = temp;
	}
	return (str);
}

static void	ft_convert_to_string(int n, char *numstr, int *i)
{
	bool			is_negative;
	unsigned int	num;

	is_negative = false;
	num = n;
	if (n < 0)
	{
		is_negative = true;
		num = -n;
	}
	while (num != 0)
	{
		numstr[(*i)++] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
	{
		numstr[(*i)++] = '-';
	}
	numstr[(*i)] = '\0';
	ft_reverse_str(*i, numstr);
}

static int	count_digits(int n)
{
	unsigned int	number;
	int				num_digits;

	number = n;
	num_digits = 0;
	if (n < 0)
		number *= -1;
	else if (n == 0)
		num_digits = 1;
	while (number > 0)
	{
		num_digits++;
		number /= 10;
	}
	return (num_digits);
}

char	*ft_itoa(int n)
{
	char	*numstr;
	int		num_digits;
	int		i;

	numstr = NULL;
	num_digits = 0;
	i = 0;
	num_digits = count_digits(n);
	if (n < 0)
	{
		num_digits++;
	}
	numstr = malloc(num_digits + 1);
	if (numstr == NULL)
		return (NULL);
	if (n == 0)
		numstr[i++] = '0';
	ft_convert_to_string(n, numstr, &i);
	return (numstr);
}
// int main(){
//     int i = -2147483648;
//     printf("%s",ft_itoa(i));
// }
