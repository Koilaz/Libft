/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 22:52:43 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/21 20:33:26 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stddef.h>

void	ft_bzero(void *ptr, size_t n)
{
	long unsigned int	i;
	unsigned char		*ptrc;

	ptrc = (unsigned char *)ptr;
	i = 0;
	while (n > i)
	{
		ptrc[i] = '\0';
		i++;
	}
	return ;
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

    ft_bzero( array, size );

    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}*/
