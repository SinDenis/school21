/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:43:38 by jblue-da          #+#    #+#             */
/*   Updated: 2018/11/22 16:54:25 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	d;

	d = 2;
	while (d * d < nb)
	{
		d++;
	}
	if (d * d == nb)
	{
		return (d);
	}
	return (0);
}
