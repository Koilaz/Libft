/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 23:27:56 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 00:01:45 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <stddef.h>

void * ft_memcpy( void * dest, const void * src, size_t n )
{
    long unsigned int i;
    i = 0;
    unsigned char *d;
    unsigned char *s;
    d = (unsigned char *)dest;
    s = (unsigned char *)src;

    while(n > i)
    {
        d[i] = s[i];
        i++;
    }
    return dest;
}
/*int main()
{
char src[] = "Quand on l'a trouve il etait deja mort";
char dest[50]; 
memset (dest, '.',50);
printf("%s\n",(char *)ft_memcpy(dest, src, 33));
return(0);
}*/
