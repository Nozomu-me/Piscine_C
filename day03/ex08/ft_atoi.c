/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 16:25:50 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/27 13:00:04 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		r;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (str[i] == '+')
	{
		s = 1;
		i++;
	}
	r = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - 48);
		i++;
	}
	r = r * s;
	return (r);
}

int		main(void)
{
	char chaine[] = " 		 \n +12234s14557";

	printf("%d\n", ft_atoi(chaine));
	printf("%d", atoi(chaine));
}
