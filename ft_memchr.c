/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:02:53 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/16 12:06:07 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	if(!s)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s + 1) == (unsigned char)c)
			return((void*)(s + i));
		i++;
	}
	return (NULL);
}
