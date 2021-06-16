/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000004280465942_1358352160_init();
    work_m_00000000003213199286_1976907615_init();
    work_m_00000000003462558809_2801533359_init();
    work_m_00000000000771775635_2214293662_init();
    work_m_00000000002482257984_1971530295_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002482257984_1971530295");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
