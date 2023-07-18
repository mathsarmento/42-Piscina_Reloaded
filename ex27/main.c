/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarment <msarment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:24:24 by msarment          #+#    #+#             */
/*   Updated: 2023/07/18 17:31:57 by msarment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_display(char *file)
{
	char	print[1];
	int		file_open;

	file_open = open(file, O_RDONLY);
	if (file_open == -1)
	{
		ft_putstr("O arquivo não existe. \n");
		return (-1);
	}
	while (read(file_open, print, 1) != 0)
	{
		ft_putchar(*print);
	}
	close(file_open);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc == 1)
		ft_putstr("File name missing.\n");
	else
		ft_display(argv[1]);
}
