/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:46:26 by lmarck            #+#    #+#             */
/*   Updated: 2024/10/22 22:53:07 by lmarck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>
# include <bsd/bitstring.h>

//Part1

void			ft_bzero(void *ptr, size_t n);
int				ft_atoi(const char *str);
int				ft_toupper( int character );
int				ft_tolower( int character );

//memory block
void			*ft_memcpy( void *dest, const void *src, size_t n);
void			*ft_memset( void *pointer, int value, size_t count);
void			*ft_memmove( void *dest, const void *src, size_t n);
int				ft_memcmp( const void *ptr1, const void *ptr2, size_t size );
void			*ft_memchr( const void *mblk, int sdchr, size_t size );
//is
int				ft_isdigit(int character);
int				ft_isascii(int character);
int				ft_isalpha( int character );
int				ft_isalnum(int character);
//String
char			*ft_strchr(const char *string, int searchedChar );
size_t			ft_strlcat(char *dest, const char *src, size_t size );
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
size_t			ft_strlen(const char *theString);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *lit, size_t len);
char			*ft_strrchr( const char *string, int searchedChar);

#endif