/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:27:56 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/22 23:17:12 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>*/

void	*ft_memcpy( void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (n && d == NULL && s == NULL)
		return (NULL);
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*int main()
{
const char *src = "Be you, be proud of you because
 you can be do what we want to do";
char dest[70];

memset (dest, '\0',70);
printf("memcpy result:\n%s\n",(char *)memcpy(dest, src, 70));
memset (dest, '\0',70);
printf("ft_memcpy result:\n%s\n",(char *)ft_memcpy(dest, src, 70));
return(0);
}*/
