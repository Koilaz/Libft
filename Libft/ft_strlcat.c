/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:44:19 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/22 22:27:38 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	j;

	dl = ft_strlen(dest);
	sl = ft_strlen((char *)src);
	if (size == 0)
		return (sl);
	if (size <= dl)
		return (sl + size);
	j = 0;
	while (j < (size - dl - 1) && src[j] != '\0')
	{
		dest[j + dl] = src[j];
		j++;
	}
	dest[j + dl] = '\0';
	return (dl + sl);
}
// **TESTER** strlcat original n'est pas disponible
/*size_t	strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	dest_length;
	size_t	source_length;

	if (dstsize == 0)
		return (0);
	j = 0;
	dest_length = ft_strlen(dest);
	source_length = ft_strlen((char *)src);
	if (dstsize <= dest_length)
		return (source_length + dstsize);
	while (src[j] && dstsize - 1 > dest_length + j)
	{
		dest[dest_length + j] = src[j];
		j++;
	}
	dest[dest_length + j] = '\0';
	return (dest_length + source_length);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main ()
{
	unsigned int size = 55;
	char dest[] = "Comment est votre blanquette ?";
	const char src[] = " La blanquette est bonne.";
	char bufo[55];
	char bufft[55];
	size_t ro;
	size_t rft;

	strcpy (bufo, dest);
	strcpy (bufft, dest);
	ro = strlcat(bufo, src, size);
	rft = ft_strlcat(bufft, src, size);
	printf("original strlcat result:\n%ld\n%s\n", ro, bufo);
	printf("ft_strlcat result:\n%ld\n%s\n", rft, bufft);

	return(0);
}*/
