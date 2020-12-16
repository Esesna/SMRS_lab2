
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void FB_Regulator(struct FB_Regulator* inst)
{
	inst->integrator.in=inst->e * inst->k_i * inst->dt + inst->iyOld; FB_Integrator(&(inst->integrator)); inst->e_kp=inst->e*inst->k_p;
	inst->e_kp=(inst->e_kp > inst->max_abs_value || inst->e_kp < - inst->max_abs_value)?((inst->e_kp>0)?inst->max_abs_value:-inst->max_abs_value):inst->e_kp; inst->e_kp+=inst->integrator.out;
	inst->u=(inst->e_kp > inst->max_abs_value || inst->e_kp < - inst->max_abs_value)?((inst->e_kp>0)?inst->max_abs_value:-inst->max_abs_value):inst->e_kp; inst->iyOld=inst->u-inst->e_kp;
}
