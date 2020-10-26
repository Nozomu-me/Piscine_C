/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 13:03:27 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/26 13:15:46 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

int		main(void)
{
	int		a;
	int		b;

	a = 40;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("a=%d et b=%d", a, b);
}
