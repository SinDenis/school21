/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 11:27:05 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/22 11:18:46 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph.h"

void        Vert_vector_destroy(t_Vert_vector **v)
{
    size_t  i;

    i = 0;
    while (i < (*v)->size)
    {
        if ((*v)->data[i].adj != NULL)
            vector_pair_destroy(&(*v)->data[i].adj);
        ++i;
    }
    free((*v)->data);
    free((*v));
    *v = NULL;
}
