/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 00:14:05 by lmarck            #+#    #+#             */
/*   Updated: 2024/11/04 12:56:00 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void test_ft_memmove(char dest[50], char* src, size_t s);
void	*ft_memmove( void *dest, const void *src, size_t n)
{
	long unsigned int	i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (n > i)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (d > s)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	return (dest);
}