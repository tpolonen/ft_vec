/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpolonen <tpolonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:27:29 by tpolonen          #+#    #+#             */
/*   Updated: 2022/04/01 17:27:47 by tpolonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H
# define VEC_H

#include "libft.h"
#define S_MAX (size_t)-1

typedef struct s_vec
{
    unsigned char   *memory;
    size_t          elem_size;
    size_t          alloc_size;
    size_t          len;
}   t_vec;

int     vec_new(t_vec *src, size_t init_len, size_t elem_size);
void    vec_free(t_vec *src);
int     vec_from(t_vec *dst, void *src, size_t len, size_t elem_size);
int     vec_resize(t_vec *src, size_t target_size);
int     vec_clear(t_vec *src);
int     vec_push(t_vec *src, void *elem);
int     vec_pop(void *dst, t_vec *src);
int     vec_copy(t_vec *dst, t_vec *src);
void    *vec_get(t_vec *src, size_t index);
int     vec_insert(t_vec *dst, void *elem, size_t index);
int     vec_remove(t_vec *src, size_t index);
int     vec_append(t_vec *dst, t_vec *src);
int     vec_prepend(t_vec *dst, t_vec *src);
void    vec_iter(t_vec *src, void (*f) (void *));
// bool changed to int here to preserve normi compliance
void    *vec_find(t_vec *src, int (*f) (void *));
int     vec_map(t_vec *dst, t_vec *src, void (*f) (void *));
// also here
int     vec_filter(t_vec *dst, t_vec *src, int (*f) (void *));
int     vec_reduce(void *dst, t_vec *src, void (*f) (void *, void *));
void    vec_sort(t_vec *src, int (*f)(void *, void *));

#endif
