/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lengths.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-los- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/17 22:44:26 by fde-los-          #+#    #+#             */
/*   Updated: 2016/10/17 22:47:28 by fde-los-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}
