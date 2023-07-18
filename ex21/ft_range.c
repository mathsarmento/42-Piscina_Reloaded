/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:42:38 by msarment          #+#    #+#             */
/*   Updated: 2023/07/13 18:07:30 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	cont;
	int	*ptr;
	int	i;

	cont = max - min;
	if (cont <= 0)
		return (NULL);
	ptr = malloc(cont * sizeof(int));
	i = 0;
	while (i < cont)
	{
		ptr[i] = min + i;
		i++;
	}
	return (ptr);
}
