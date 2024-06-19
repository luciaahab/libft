/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:09:37 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/19 22:07:17 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*compara los primeros n bytes de dos áreas de memoria: s1 y s2*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char *str;
	unsigned char *str2;
	str = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str[i] != str2[i])
			return (str[i] - str2[i]);
		i++;
	}
	return (0);
}