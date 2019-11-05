/*
 *  Copyright (c) 2019 Intel Corporation. All rights reserved.
 *  This software is available to you under the BSD license below:
 *
 *      Redistribution and use in source and binary forms, with or
 *      without modification, are permitted provided that the following
 *      conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <stdio.h>
#include <shmem.h>
#include <shmemx.h>


int main(void)
{
    int i, me, npes;
    int ret = 0;
    int r = 0;
    int team_count = 0;
    int team_idx = 0;

    shmem_init();

    me = shmem_my_pe();
    npes = shmem_n_pes();

    if (me == 0)
        printf("test to find max no of teams:\n");

    shmemx_team_t new_team[64];

    for (i = 0; i < 3; i++) {
        team_idx = (me*3)+i;
        ret = shmemx_team_split_strided(SHMEMX_TEAM_WORLD, i, 1, npes-i, NULL, 0, &new_team[team_idx]);
        if(new_team[team_idx] == SHMEMX_TEAM_INVALID && ret != 0){
        	printf("WARNING: Max teams limit reached!!!\n");
            printf("Try to destroy some teams...\n");
            ret = 0;
        } else {
            team_count++;
        }

    }
    printf("The number of teams created for PE %d is : %d\n", me, team_count);

    shmem_finalize();

    return 0;
}
