/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:06:23 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/22 21:45:54 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (n == i)
		return (0);
	return (str1[i] - str2[i]);
}
/*int main ()
{
	int n = 6;
	char *s1 = "test\200";
	char *s2 = "test\0";

	printf("ft_strcmp:\n%d\n",ft_strncmp(s1, s2, n));
	printf("strcmp:\n%d\n",strncmp(s1, s2, n));
	return(0);
}*/
