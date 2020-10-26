/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 17:26:31 by amouassi          #+#    #+#             */
/*   Updated: 2019/08/29 18:26:18 by amouassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 A.M. AND 01.00 A.M.");
	else if (hour >= 1 && hour < 11)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND ",hour);
		printf("%d.00 A.M.",hour + 1);
	}
	else if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 A.M. AND 12.00 P.M.");
	else if ( hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 12.00 P.M. AND 01.00 P.M.");
	else if (hour >= 13 && hour <= 22)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND ",hour - 12);
		printf("%d.00 P.M.",hour - 11);
	}
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN 11.00 P.M. AND 12.00 A.M.");
	printf("\n");
}

int		main(void)
{
	int i;
	i = 0;
	while(i <= 23)
	{
		printf("hour = %d\n",i);
		ft_takes_place(i);
		i++;
	}
}
