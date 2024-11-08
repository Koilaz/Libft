/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:48:58 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/23 14:43:53 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stddef.h>

void	*ft_memset( void *pointer, int value, size_t count)
{
	long unsigned int	i;
	unsigned char		*ptr;
	unsigned char		val;

	val = (unsigned char) value;
	ptr = (unsigned char *)pointer;
	i = 0;
	while (count > i)
	{
		ptr[i] = val;
		i++;
	}
	return (pointer);
}

/*int main()
{

    int array [] = { 4, 8, 15, 16, 23, 42 };
    size_t size = sizeof( int ) * 6;
    int length;

    for( length=0; length<6; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    ft_memset( array, '0', size );

    for( length=0; length<5; length++) {
        printf( "%c ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}*/
