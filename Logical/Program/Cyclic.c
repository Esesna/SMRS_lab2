
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _CYCLIC ProgramCyclic(void)
{
	if(enable)
	{
		count+=1; if(count<=50)
		{

		speed=50;
		}
		else
		{
			speed=0;




			 if(count>=100)
			{
				count=0;
			}
		}
	}
	fb_regulator.e=speed - fb_motor.w; fb_motor2.u=speed; FB_Regulator(&fb_regulator); fb_motor.u=fb_regulator.u; FB_Motor(&fb_motor); FB_Motor(&fb_motor2);
}