/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:40:59 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/25 14:06:38 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putabs( long int ln, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = n;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	putabs(ln, fd);
}

void	putabs( long int ln, int fd)
{
	int	tab[10];
	int	i;

	i = 9;
	while (ln != 0 && i >= 0)
	{
		tab[i] = (ln % 10) + '0';
		ln = ln / 10;
		i--;
	}
	i++;
	while (i <= 9)
	{
		ft_putchar_fd(tab[i], fd);
		i++;
	}
}

/*void	ft_putchar_fd(char c, int fd);
int main()
{
	int i = -118712;
	int fd = 1;
	ft_putnbr_fd(i, fd);
	return(0);
}
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}*/
