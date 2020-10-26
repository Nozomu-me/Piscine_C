/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 20:08:26 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/24 23:19:02 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int		i;

	i = 122;
	while (i >= 97)
	{
		ft_putchar(i);
		i--;
	}
}

int		main(void)
{
	ft_print_reverse_alphabet();
}
