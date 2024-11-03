/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:16:08 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/24 13:15:24 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start + 1)));
}

/*size_t	ft_strlen(const char *str);
char	*ft_strchr( const char *string, int searchedChar );
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);

int main ()
{
	char *s1 = "123-Vous avez des rapports privillegiez avec ce buisson ?!-123";
	char *set = "-213";
	printf("'%s'\n", ft_strtrim(s1, set));
	return(0);
}

char	*ft_strchr( const char *string, int searchedChar )
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if (searchedChar == '\0')
		return ((char *)&string[i]);
	return (NULL);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			slen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (start + len > slen)
		len = slen - start;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
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
}
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
*/
