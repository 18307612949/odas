#ifndef __ODAS_GENERAL_THREAD
#define __ODAS_GENERAL_THREAD

    /**
    * \file     thread.h
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
    #include <pthread.h>

    typedef struct thread_obj {

        pthread_mutex_t use;
        char stop;
        pthread_t thread;   
        void * (* start_routine) (void *);
        void * arg;     

    } thread_obj;

    thread_obj * thread_construct(void * (* start_routine) (void *), void * arg);

    void thread_destroy(thread_obj * obj);

    void thread_start(thread_obj * obj);

    void thread_stop(thread_obj * obj);

    char thread_askedToStop(thread_obj * obj);

    void thread_join(thread_obj * obj); 

#endif