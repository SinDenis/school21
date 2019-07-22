/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 11:12:02 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/22 11:16:19 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/vector_pair.h"

void	vector_pair_print(t_vector_pair *v)
{
	int i;

	i = -1;
	while (++i < v->size)
	{
		if (i + 1 == v->size)
			ft_printf("%d: %d\n", v->data[i].first, v->data[i].second);
		else
			ft_printf("%d: %d ", v->data[i].first, v->data[i].second);
	}
}
