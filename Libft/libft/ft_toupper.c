/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 11:26:00 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/19 12:50:53 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int ft_toupper( int character )
{
    if (character >= 97 && character <= 122)
        character = character - 32;
    return character;
}
/*int main()
{
    int i = 0;
    char *str = "wololololo !! \0";
    while (str[i])
    {
        printf("%c" , ft_toupper (str[i]));
        i++;
    }
    printf("\n");
    return 0;
}*/