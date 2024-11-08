/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:20:58 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/23 16:02:04 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	s;
	size_t	i;
	char	*copy;

	s = ft_strlen(src);
	copy = malloc((s + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < s)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*size_t	ft_strlen(const char *str);
int main()
{
	char *src = "All work and no play makes Jack a dull boy";
	char *dest = ft_strdup(src);
	printf("%s\n",dest );
	free(dest);
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
