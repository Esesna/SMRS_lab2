
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void FB_Motor(struct FB_Motor* inst)
{
	REAL a = inst->u / inst->Ke - inst->phi;
	REAL w = a / inst ->Tm;
	inst ->integrator.in = w;
	FB_Integrator(&inst->integrator);
	inst ->phi = inst->integrator.out;
	
	
/*	inst->integrator.in=(inst->u/inst->Ke-inst->w)*inst->dt/inst->Tm;
	inst->integrator.out=inst->w;
	FB_Integrator(&(inst->integrator));
	inst->w=inst->integrator.out;
	inst->integrator.in=inst->w*inst->dt;
	inst->integrator.out=inst->phi;
	FB_Integrator(&(inst->integrator));
	inst->phi=inst->integrator.out;*/
}