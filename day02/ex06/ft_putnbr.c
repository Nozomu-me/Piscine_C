/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 14:58:25 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/25 14:16:56 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_negative(int nb)
{
	int		nb2;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
			nb2 = 214748364;
		else
			nb2 = nb * -1;
	}
	else
		nb2 = nb;
	return (nb2);
}

void	ft_putnbr(int nb)
{
	long	r;
	long	s;
	long	nb2;

	r = 0;
	nb2 = ft_negative(nb);
	while (nb2 != 0)
	{
		r = r * 10 + nb2 % 10;
		nb2 = nb2 / 10;
	}
	while (r != 0)
	{
		s = r % 10 + '0';
		ft_putchar(s);
		r = r / 10;
	}
	if (nb == -2147483648)
		ft_putchar('8');
}

int		main(void)
{
	int nb;

	nb = 2147483647;
	ft_putnbr(nb);
}
