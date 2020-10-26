/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:34:59 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/23 09:45:15 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if(n >= 0)
	{
		ft_putchar('P');
	}
	else 
		ft_putchar('N');
}

int		main(void)
{
	ft_is_negative(-4);
}
