/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:54:01 by msarment          #+#    #+#             */
/*   Updated: 2023/07/13 20:14:38 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb != 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
