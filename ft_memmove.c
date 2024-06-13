/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:12:23 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/09 18:55:43 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

void
	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	if (dst > src)
	{
		i = (int)len -1;
		while (i >= 0)
		{
			*(char *)(dst + i) = *(char)(Src + i);
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < (int)len)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}
