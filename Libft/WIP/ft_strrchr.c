/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:46:39 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 13:51:40 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char * ft_strrchr( const char * string, int searchedChar )
{
    int i;
    i = 0;
    while (string[i] != '\0')
    i++;
    while (i)
    {
        if (string[i] == (char)searchedChar)
            return (char *)&string[i];
        i--;
    }
    return NULL;
}
/*int main()
{
    char * str = "Que La Force de Peter Mac Calloway soit avec moi";
    char tofind = 'l';
    printf ("%s\n", ft_strrchr(str, tofind));
    return 0;
}*/