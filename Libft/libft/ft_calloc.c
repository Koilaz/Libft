/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:35:55 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/23 13:43:48 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (!nmemb || !size)
		return (malloc(1));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*int main ()
{
	void *ptr;
	void *cptr;
	size_t size = sizeof(int);
	size_t nmemb = 10;
	size_t i = 0;
	ptr = ft_calloc(nmemb, size);
	cptr = calloc(nmemb, size);
	int *iptr = (int *)ptr;
	int *icptr = (int *)cptr;
	if (ptr == NULL)
		printf("ft_calloc renvoie pointeur NULL");
	else
	{
		printf ("Result ft_calloc:\n");
		for (i = 0; i < (nmemb); i++)
		printf("%d ", iptr[i]);
		printf("\n");
	}
	if (cptr ==  NULL)
	printf("Calloc renvoie pointeur NULL");
	else
	{
		printf ("Result calloc:\n");
		for (i = 0; i < (nmemb); i++)
		printf("%d ", icptr[i]);
		printf("\n");
	}
	free(ptr);
	free(cptr);
	return 0;
}*/
