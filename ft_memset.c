/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 19:41:42 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/16 19:55:36 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void
	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char	*temp_b;

	temp_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		temp_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}