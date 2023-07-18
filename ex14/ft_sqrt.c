/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:31:35 by msarment          #+#    #+#             */
/*   Updated: 2023/07/11 20:41:00 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = i * i;
	while (result <= nb)
	{
		if (result == nb)
			return (i);
		else
		{
			i++;
			result = i * i;
		}
	}
	return (0);
}
