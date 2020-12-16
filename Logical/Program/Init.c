
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	fb_motor.dt=0.01; fb_motor.Ke=0.2; fb_motor.Tm=0.4; fb_motor.integrator.dt=0.01;
	fb_motor2.dt=0.01; fb_motor2.Ke=0.2; fb_motor2.Tm=0.4; fb_motor2.integrator.dt=0.01;

	fb_regulator.dt=0.01; fb_regulator.k_p=0.0064; fb_regulator.k_i=0.16; fb_regulator.max_abs_value=24; fb_regulator.integrator.dt=0.01;

	enable=1; count=0;
}