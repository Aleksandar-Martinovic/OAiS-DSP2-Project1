#include "processing.h"
#include "iir.h"

#define INT16 32767
#define INT16N -32768
#define INT16H 16383
#define INT16NH -16384

void calculateShelvingCoeff(float c_alpha, Int16* output)
{
	/* Your code here */

    output[0] = c_alpha * INT16;                        //alpha             //zeros
    output[1] = INT16N;                                 //-1                //zeros
    output[2] = INT16;                                  //1                 //poles
    output[3] = c_alpha * INT16N;                       //-alpha            //poles
}

void calculatePeekCoeff(float c_alpha, float c_beta, Int16* output)
{
	/* Your code here */

    output[0] = c_alpha * INT16;                        //alpha             //zeros
    output[1] = (-c_beta) * INT16H * (1 + c_alpha); 	//-beta/2*(1+alpha) //zeros
    output[2] = INT16;                                  //1                 //zeros
    output[3] = INT16;                                  //1                 //poles
    output[4] = c_beta * INT16NH * (1 + c_alpha); 		//-beta/2*(1+alpha) //poles
    output[5] = c_alpha * INT16;		                //alpha             //poles

}

Int16 shelvingHP(Int16 input, Int16* coeff, Int16* x_history, Int16* y_history, Int16 k)
{
	/* Your code here */

	Int16 staro = input;
	Int16 filter, mnozenje, final_clip;
	Int32 plus1, plus2, final;

	filter = first_order_IIR(input, coeff, x_history, y_history);

	plus1 = (Int32)staro + filter;
	plus2 = (Int32)staro - filter;

	plus1 = plus1 >> 1;
	plus2 = plus2 >> 1;

	mnozenje = _smpy(plus1, k);

	final = (Int32)mnozenje + plus2;

	if(final > 32767) {
		final_clip = 32767;
	}
	else if(final < -32768) {
		final_clip = -32768;
	}
	else {
		final_clip = (Int16)final;
	}

	return final_clip;
}

Int16 shelvingLP(Int16 input, Int16* coeff, Int16* x_history, Int16* y_history, Int16 k)
{
	/* Your code here */
	Int16 staro = input;
	Int16 filter, mnozenje, final_clip;
	Int32 plus1, plus2, final;

	filter = first_order_IIR(input, coeff, x_history, y_history);

	plus1 = (Int32)staro + filter;
	plus2 = (Int32)staro - filter;

	plus1 = plus1 >> 1;
	plus2 = plus2 >> 1;

	mnozenje = _smpy(plus2, k);
	final = (Int32) mnozenje + plus1;

	if(final > 32767) {
		final_clip = 32767;
	}
	else if(final < -32768) {
		final_clip = -32768;
	}
	else {
		final_clip = (Int16)final;
	}

	return final_clip;
}

Int16 shelvingPeek(Int16 input, Int16* coeff, Int16* x_history, Int16* y_history, Int16 k)
{
	/* Your code here */

	Int16 staro = input;
	Int16 filter, mnozenje, final_clip;
	Int32 plus1, plus2, final;

	filter = second_order_IIR(input, coeff, x_history, y_history);

	plus1 = (Int32)staro + filter;
	plus2 = (Int32)staro - filter;

	plus1 = plus1 >> 1;
	plus2 = plus2 >> 1;

	mnozenje = _smpy(plus2, k);

	final = (Int32)mnozenje + plus1;

	if(final > 32767) {
		final_clip = 32767;
	}
	else if(final < -32768) {
		final_clip = -32768;
	}
	else {
		final_clip = (Int16)final;
	}

	return final_clip;
}
