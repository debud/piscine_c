/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbud <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:09:32 by dbud              #+#    #+#             */
/*   Updated: 2016/07/15 13:28:38 by dbud             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	write(1, "Tu tu tu tu ; Tu tu tu tu\n", 26);
}

int		main(void)
{
	ft_generic();
	return (0);
}
