/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:53:42 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/23 17:12:49 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;
	size_t	ls1;
	size_t	ls2;
	size_t	i;

	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	nstr = malloc(ls1 + ls2 + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < ls1)
	{
		nstr [i] = s1[i];
		i++;
	}
	while (i < ls1 + ls2)
	{
		nstr[i] = s2[i - ls1];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*size_t	ft_strlen(const char *str);
int main ()
{
	char *s1 = "A man choose.";
	char *s2 = " A slave obey.";
	char *nstr = ft_strjoin(s1, s2);
	printf("'%s'\n", nstr);
	return (0);
}
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/
