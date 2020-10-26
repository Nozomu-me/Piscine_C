/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 21:42:17 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/27 18:06:12 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		f;

	i = 0;
	f = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if(nb > 12)
		return 0;
	while (nb != 0)
	{
		f = f * nb;
		nb = nb - 1;
		i++;
	}
	return (f);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(13));
}
