/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:16:31 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 13:45:10 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char * ft_strchr( const char * string, int searchedChar )
{
    int i;
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == (char)searchedChar)
            return (char *)&string[i];
        i++;
    }
    if (searchedChar == '\0')
        return (char *)&string[i];
    return NULL;
}
/*int main()
{
    char * str = "Je suis une racaille, une racaille de shangai";
    char tofind = ',';
    printf ("%s\n", ft_strchr(str, tofind));
    return 0;
}*/