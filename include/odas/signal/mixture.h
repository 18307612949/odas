#ifndef __ODAS_SIGNAL_MIXTURE
#define __ODAS_SIGNAL_MIXTURE

    /**
    * \file     mixture.h
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
    #include <string.h>
    #include <stdio.h>

    #include "../signal/assignation.h"
    #include "../init/combining.h"

    typedef struct mixture_obj {
       
        unsigned int nPots;
        unsigned int nTracks;
        unsigned int nTracksNewFalse;
        unsigned int nCombinations;

        assignations_obj * assignations;

        float * p_Ez_AICD;
        float * p_Eszs_phics;
        float * p_phics;
        float * p_Ez_phic;
        float * p_phic;
        float * p_phic_Ez;

    } mixture_obj;

    mixture_obj * mixture_construct_zero(const unsigned int nPots, const unsigned int nTracks);

    void mixture_destroy(mixture_obj * obj);

    void mixture_printf(const mixture_obj * obj);

#endif