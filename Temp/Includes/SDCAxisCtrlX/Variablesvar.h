/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1574080535_3_
#define _BUR_1574080535_3_

#include <bur/plctypes.h>

/* Constants */
#ifdef _REPLACE_CONST
#else
#endif


/* Variables */
_BUR_LOCAL plcbit enable;
_BUR_LOCAL unsigned short pwm_period;
_BUR_LOCAL struct FB_Regulator fb_controller;
_BUR_LOCAL signed short coil_pwm_value;
_BUR_LOCAL plcbit coil_powered;
_BUR_LOCAL struct FB_Axis axis_X;





__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/SDCAxisCtrlX/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/MotrContr/MotrContr.fun\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1574080535_3_ */

