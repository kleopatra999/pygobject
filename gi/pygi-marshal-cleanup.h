/* -*- Mode: C; c-basic-offset: 4 -*-
 * vim: tabstop=4 shiftwidth=4 expandtab
 *
 * Copyright (C) 2011 John (J5) Palmieri <johnp@redhat.com>, Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 * USA
 */

#ifndef __PYGI_MARSHAL_CLEANUP_H__
#define __PYGI_MARSHAL_CLEANUP_H__

#include "pygi-private.h"

G_BEGIN_DECLS

void pygi_marshal_cleanup_args            (PyGIInvokeState   *state,
                                           PyGICallableCache *cache,
                                           gboolean           invoke_failure);

void _pygi_marshal_cleanup_utf8           (PyGIInvokeState *state,
                                           PyGIArgCache    *arg_cache,
                                           gpointer         data);
void _pygi_marshal_cleanup_gvalue         (PyGIInvokeState *state,
                                           PyGIArgCache    *arg_cache,
                                           gpointer         data);
void _pygi_marshal_cleanup_closure_unref  (PyGIInvokeState *state,
                                           PyGIArgCache    *arg_cache,
                                           gpointer         data);
void _pygi_marshal_cleanup_object   (PyGIInvokeState *state,
                                     PyGIArgCache    *arg_cache,
                                     gpointer         data);
G_END_DECLS

#endif /* __PYGI_MARSHAL_CLEANUP_H__ */