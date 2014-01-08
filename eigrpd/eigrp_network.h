/*
 * EIGRP network related functions.
 *   Copyright (C) 1999 Toshiaki Takada
 *
 * This file is part of GNU Zebra.
 *
 * GNU Zebra is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Zebra; see the file COPYING.  If not, write to the Free
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef _ZEBRA_EIGRP_NETWORK_H
#define _ZEBRA_EIGRP_NETWORK_H

/* Prototypes */

extern int eigrp_sock_init (void);
extern int eigrp_if_ipmulticast (struct eigrp *, struct prefix *, unsigned int);
extern int eigrp_network_set (struct eigrp *, struct prefix_ipv4 *);
extern int eigrp_network_unset (struct eigrp *eigrp, struct prefix_ipv4 *p);

extern int eigrp_hello_timer (struct thread *);
extern void eigrp_if_update (struct eigrp *, struct interface *);
extern int eigrp_if_add_allspfrouters (struct eigrp *, struct prefix *,
                                       unsigned int);
extern int eigrp_if_drop_allspfrouters (struct eigrp *top, struct prefix *p,
                                        unsigned int ifindex);
extern void eigrp_adjust_sndbuflen (struct eigrp *, unsigned int);

extern u_int32_t eigrp_calculate_metrics (struct eigrp_metrics *);

#endif /* EIGRP_NETWORK_H_ */
