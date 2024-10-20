/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 00:14:05 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 11:24:16 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
#include <stddef.h>

void * ft_memmove( void * dest, const void * src, size_t n )
{
    long unsigned int i;
    i = 0;
    unsigned char *d;
    const unsigned char *s;
    d = (unsigned char *)dest;
    s = (const unsigned char *)src;

    if (d < s)
    {
        while(n > i)
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
    return dest;
}
/*int main()
{
char src[] = "On met pas la charue avant les boeuf";
char dest[50]; 
memset (dest, '.',50);
printf("%s\n",(char *)ft_memmove(dest, src, 36));
return(0);
}*/