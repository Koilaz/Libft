/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 21:15:35 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/29 21:15:39 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;

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