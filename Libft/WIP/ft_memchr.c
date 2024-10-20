/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:59:56 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 14:59:16 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stddef.h>

 void * ft_memchr( const void * mblk, int sdchr, size_t size )
 {
    size_t i;
    i = 0;
    const unsigned char *str;
    str = (const unsigned char *) mblk;
    while (i < size)
    {
        if (str[i] == (unsigned char) sdchr)
        return (void *)&str[i];
        i++;
    }
    return NULL;
 }

/* int main()
{
    size_t size = 45;
    char * str = "Je suis une racaille, une racaille de shangai";
    char tofind = ',';
    printf ("%s\n", (char *)ft_memchr((const void *)str, (int)tofind, size));
    return 0;
}*/