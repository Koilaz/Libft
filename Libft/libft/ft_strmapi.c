/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:30:55 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/25 12:31:20 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//char f(unsigned int i, char si);
//size_t	ft_strlen(const char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*char f(unsigned int i, char si)
{
	(void)i;
	if (si >= 'a' && si <= 'z')
		return ((si - 'a' + 13) % 26 + 'a');
	else if (si >= 'A' && si <= 'Z')
		return ((si - 'A' + 13) % 26 + 'A');
	return si;
}


int main()
{
	char *s = "Ynetr pbjf trarebfvgl pbzrf jvgu punegf
	naq sbhe oybaqr ungf gb qrsl hccre tenivgl ureb";
	printf("%s\n", ft_strmapi(s, f));
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
