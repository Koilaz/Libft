/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:44:19 by lmarck            #+#    #+#             */
/*   Updated: 2024/08/08 13:44:21 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	r;

	r = len(dest) + len(src);
	i = len(dest);
	j = 0;
	if (src == NULL || dest == NULL)
		return (0);
	if (size <= i)
		return (r);
	while (i < size - 1 && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (r);
}
/*int main ()
{
	unsigned int size = 60;
	char dest[100] = "comment est votre blanquette ?";
	char *src = " La blanquette est bonne.";
	ft_strlcat(dest, src, size);
	printf("%s\n", dest );
	return(0);
}*/