/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 15:51:18 by lmarck            #+#    #+#             */
/*   Updated: 2024/07/31 15:51:21 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
//#include<stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	nb;

	i = 0;
	nb = 0;
	j = 0;
	while ((str[i] <= '\r' && str[i] >= '\t') || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb + str[i] - '0';
		i ++;
		if (str[i] >= '0' && str[i] <= '9')
			nb = 10 * nb;
	}
	if (j % 2)
		return (-nb);
	return (nb);
}
/*int main ()
{
char *str = "---15457dfhf645ghfd";
printf("%d\n", atoi(str));
printf("%d\n", ft_atoi(str));
return(0);
}*/
