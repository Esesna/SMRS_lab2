
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void FB_Integrator(struct FB_Integrator* inst)
{
	inst->out = inst->dt * inst ->in + inst ->state; 
	inst ->state = inst ->out;
}