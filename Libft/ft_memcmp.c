/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 16:01:39 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/21 20:32:54 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>

int	ft_memcmp( const void *ptr1, const void *ptr2, size_t size )
{
	size_t				i;
	const unsigned char	*ptrc1;
	const unsigned char	*ptrc2;

	i = 0;
	ptrc1 = (const unsigned char *)ptr1;
	ptrc2 = (const unsigned char *)ptr2;
	while (i < size)
	{
		if (ptrc1[i] != ptrc2[i])
			return ((ptrc1[i] - ptrc2[i]));
		i++;
	}
	return (0);
}

/*/ int main()
{
    size_t size = 11;
    char * ptr1 = "tea for you";
    char * ptr2 = "tea for me";
    printf ("%d\n", ft_memcmp((const void *)ptr1,(const void *)ptr2, size));
    return 0;
}*/
