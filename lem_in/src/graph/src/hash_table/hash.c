/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hash.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sindenis <sindenis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:14:38 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/17 08:05:20 by sindenis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/graph.h"

size_t	hash(char *key, int m, int k)
{
    int i;
    int a;
    size_t hash_val;
    size_t len;

    i = -1;
    a = 17;
    hash_val = 0;
    len = ft_strlen(key);
    while (++i < len)
    {
        hash_val *= a;
        hash_val += key[i]; 
    }
    hash_val %= m;
    hash_val += k;
    return (hash_val);
}