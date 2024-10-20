/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 12:52:26 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 12:56:43 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int ft_tolower( int character )
{
    if (character >= 65 && character <= 90)
        character = character + 32;
    return character;
}
/*int main()
{
    int i = 0;
    char *str = "WOLOLOLO !! \0";
    while (str[i])
    {
        printf("%c" , ft_tolower (str[i]));
        i++;
    }
    printf("\n");
    return 0;
}*/