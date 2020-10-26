/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 12:44:22 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/26 13:02:49 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int		a;
	int		b;
	int		div;
	int		mod;

	a = 44;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("div=%d et mod=%d", div, mod);
}
