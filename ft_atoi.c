/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmartin3 <lmartin3@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:47:49 by lmartin3          #+#    #+#             */
/*   Updated: 2024/06/16 19:43:50 by lmartin3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//transforma una str enn un integer
//Asume que la función está bien construida, 
//por lo que no maneja inputs incorrectos o de más

#include "libft.h"

int
	ft_atoi(const char *str) //input:un puntero a una estring null-terminated

{
	int	i; //índice para navegar por la string
	int	is_neg; //es una flag que determina si el int debe ser negativo
	int	res;
	
	if (!str)
		return (0);
	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str 
			[i] == '\f' || str [i] == '\r' || str [i] == ' ') //busca los espacios
		i++;
	is_neg = (str[i] == '-' ? -1 : 1);
	if (is_neg == -1 || str[i] == '+') //salta el signo
		i++;
	res = 0; // convierte la string en un int
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * is_neg);
}
