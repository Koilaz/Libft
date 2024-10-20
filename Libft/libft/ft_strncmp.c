/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:06:23 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/30 14:06:30 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (n == i)
		return (0);
	return (s1[i] - s2[i]);
}
/*int main ()
{
	int n = 5;
	char *s1 = "jusqu'ici tout vas bien";
	char *s2 = "jusqu'ici tout allais bien";
	char *s3 = "jusqu'ici tout vas bien";
	char *s4 = "jusqu'ici tout allais bien";
	printf("ft_strcmp:%d\n",ft_strncmp(s1, s2, n));
	printf("strcmp:%d\n",strncmp(s3,s4, n));
	return(0);
}*/
