/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:10:55 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/21 20:33:16 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha( int character )
{
	if (!((character >= 'a' && character <= 'z')
			|| (character >= 'A' && character <= 'Z')))
		return (0);
	return (1);
}

/*int main()
{
	char c = '4';
	printf("%d\n",ft_isalpha(c));
	return(0);
}*/
