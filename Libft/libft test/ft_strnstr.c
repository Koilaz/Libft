/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:15:33 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/21 20:32:17 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (lit[0] == '\0')
		return ((char *)big);
	while (big[j] != '\0' && j < len)
	{
		i = 0;
		while (i + j < len && big[i + j] == lit[i])
		{
			if (lit[i + 1] == '\0')
				return ((char *) &big[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
/*int main()
{
    char *big ="il faut pas chercher midi a 14h";
    char *lit = "midi";
    size_t len = 30;
    char *result = ft_strnstr(big, lit, len);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");
    return 0;
}*/
