/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:17:31 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/23 09:34:17 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = 48;
	while (i >= 57)
	{
		ft_putchar(i);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
}
