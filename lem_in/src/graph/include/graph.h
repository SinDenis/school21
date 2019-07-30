/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jblue-da <jblue-da@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:59:46 by jblue-da          #+#    #+#             */
/*   Updated: 2019/07/30 15:48:56 by jblue-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPH_H
# define GRAPH_H

# include <stdlib.h>
# include "../../pair/include/pair.h"
# include "../../vector/include/vector.h"

typedef struct		s_vertex
{
	char			*name;
	int				prev;
	int				dist;
	t_vector_pair	*adj;
}					t_vertex;

typedef struct		s_vert_vector
{
	t_vertex		*data;
	size_t			size;
	size_t			capacity;
}					t_vert_vector;

typedef struct		s_graph
{
	t_vert_vector	*nodes;
	int				start_idx;
	int				end_idx;
}					t_graph;

/* Functions t_vertex */
void				vertex_init(t_vertex *vertex, char *name, int prev, int dist);
void				vertex_destroy(t_vertex *vertex);
void				vertexes_init(t_vertex *vertex, size_t size);
void				vertexes_destroy(t_vertex **vertex, size_t size);


/* Functions t_vector */
t_vert_vector		*vert_vector_create(int size);
void				vert_vector_destroy(t_vert_vector **v);
void				vert_vector_push_back(t_vert_vector *v, char *name);
t_vertex			*vert_vector_at(t_vert_vector *v, size_t idx);
void				vert_vector_store(t_vert_vector *v, size_t idx, char *name);
size_t				vert_vector_size(t_vert_vector *v);
void				vert_vector_print(t_vert_vector *v);

/* Fucntions t_graph */
t_graph				*graph_create(void);
void				graph_destroy(t_graph **g);
void				graph_add_vert(t_graph *g, char *name);
void				graph_add_start_vert(t_graph *g, char *name);
void				graph_add_end_vert(t_graph *g, char *name);
void				graph_add_edge(t_graph *g, int id1, int id2);
void				graph_set_weight(t_graph *g, int id1, int id2, int weight);
t_vertex			*graph_get_vert(t_graph *g, int id);
void				graph_print(t_graph *g);

#endif
