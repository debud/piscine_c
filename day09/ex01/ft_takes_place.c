/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:22:15 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 11:58:01 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n",
				11, 12);
	else if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n",
				11, 12);
	else if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n",
				12, 1);
	else if (hour < 12)
		if (hour == 0)
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" 12.00 A.M. AND 1.00 A.M.\n");
		}
		else
		{
			printf("THE FOLLOWING TAKES PLACE BETWEEN");
			printf(" %d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
		}
	else if (hour > 12)
	{
		printf("THE FOLLOWING TAKES PLACE BETWEEN");
		printf(" %d.00 P.M. AND %d.00 P.M.\n", hour % 12, (hour + 1) % 12);
	}
}
