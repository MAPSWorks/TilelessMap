/**********************************************************************
 *
 * TileLess
 *
 * TileLess is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * TileLess is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with TileLess.  If not, see <http://www.gnu.org/licenses/>.
 *
 **********************************************************************
 *
 * Copyright (C) 2016-2017 Nicklas Avén
 *
 ***********************************************************************/
#ifndef _mem_H
#define _mem_H

#include <stddef.h>

/**
 *Memory handling
 * Just a function handling allocation error on malloc
 */
void* st_malloc(size_t len);


/**
 *Memory handling
 * Just a function handling allocation error on realloc
 */
void* st_realloc(void *ptr, size_t len);

/**
 *Memory handling
 * Just a function handling allocation error on calloc
 */
void* st_calloc(int n, size_t s);

int st_free(void *s);

#endif
