/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 12:09:37 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/16 12:15:55 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/compara los primeros n bytes de dos áreas de memoria: s1 y s2

#include "libft."

int
	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char*)(s1 + i) != *(unsifned char*)(s2 + i))
			return (*(unsigned char)(s1 + i) - *(unsigned char*)(s2 + i));

		i++;
	}
	return (0);
}	
