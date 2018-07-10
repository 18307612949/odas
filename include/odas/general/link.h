#ifndef __ODAS_GENERAL_LINK
#define __ODAS_GENERAL_LINK

    /**
    * \file     link.h
    * \author   Francois Grondin <fgrondin@mit.edu>
    * \version  3.0
    * \date     2018-07-02
    * \copyright
    *
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    *
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * You should have received a copy of the GNU General Public License
    * along with this program.  If not, see <http://www.gnu.org/licenses/>.
    *
    */

    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    typedef struct links_obj {

        unsigned int * array;
        unsigned int nLinks;

    } links_obj;

    links_obj * links_construct_zero(const unsigned int nLinks);

    links_obj * links_clone(const links_obj * obj);

    void links_destroy(links_obj * obj);

    void links_printf(const links_obj * obj);

#endif