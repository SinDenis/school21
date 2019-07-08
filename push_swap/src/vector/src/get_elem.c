/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 09:39:32 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/08 10:29:35 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/vector.h"

t_vector_type	vector_get_elem(t_vector *v, int idx)
{
	return (v->data[idx]);
}
