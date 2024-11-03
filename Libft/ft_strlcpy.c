/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:15:35 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/22 22:28:00 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n;

	n = 0;
	while (src[n] != '\0')
	{
		n++;
	}
	if (size == 0)
		return (n);
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (n);
}
/*int main()
{
	unsigned int n = 22;
	char *src = "mais qui est la bellette ?";
	char dest[22];
	ft_strlcpy(dest,src,n);
	printf("%s\n",dest);
	return(0);
}*/
