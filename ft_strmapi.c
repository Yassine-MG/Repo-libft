/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <ymghazli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:44:23 by yassine           #+#    #+#             */
/*   Updated: 2023/12/12 10:57:07 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*result;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[len] = '\0';
	return (result);
}

// char addOne(unsigned int index, char c) {
//     return (c - 32);
// }

// int main() {
//     char input[] = "hello";
//     char *result = ft_strmapi(input, &addOne);
//     printf("Original string: %s\n", input);
//     printf("Transformed string: %s\n", result);
//     return (0);
// }
