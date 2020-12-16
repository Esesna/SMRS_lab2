
FUNCTION_BLOCK FB_Integrator
	VAR_INPUT
		in : REAL; (*Вход*)
	END_VAR
	VAR_OUTPUT
		out : REAL; (*Выход*)
	END_VAR
	VAR
		dt : REAL; (*Частота дискретизации*)
		state : REAL; (*Предыдущее состояние двигателя*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK FB_Motor
	VAR_INPUT
		u : REAL; (*Вход Напряжение*)
	END_VAR
	VAR_OUTPUT
		w : REAL; (*Выход Обороты*)
	END_VAR
	VAR
		phi : REAL;
		integrator : FB_Integrator; (*ФБ интегратора*)
		Tm : REAL;
		Ke : REAL;
		dt : REAL;
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK FB_Regulator
	VAR_INPUT
		e : REAL;
	END_VAR
	VAR_OUTPUT
		u : REAL;
	END_VAR
	VAR
		k_p : REAL;
		k_i : REAL;
		integrator : FB_Integrator;
		iyOld : REAL;
		max_abs_value : REAL;
		dt : REAL;
		e_kp : REAL;
	END_VAR
END_FUNCTION_BLOCK
