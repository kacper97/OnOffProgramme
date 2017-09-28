/*
 * main.c
 *
 *  Created on: 2017 Jan 23 09:35:35
 *  Author: kacpe
 */




#include <DAVE.h>                 //Declarations from DAVE Code Generation (includes SFR declaration)

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. It is responsible for
 * invoking the APP initialization dispatcher routine - DAVE_Init() and hosting the place-holder for user application
 * code.
 */
int x=0;
int y=0;

int main(void)
{
  DAVE_STATUS_t status;

  status = DAVE_Init();           /* Initialization of DAVE APPs  */

  if(status != DAVE_STATUS_SUCCESS)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");

    while(1U)
    {

    }
  }

  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
		if (x==1)
		{
			y++;
	  DIGITAL_IO_SetOutputHigh(&LED1);
		DIGITAL_IO_SetOutputHigh(&LED2);		
		}
		else{
			y++;
		DIGITAL_IO_SetOutputLow(&LED1);
		DIGITAL_IO_SetOutputLow(&LED2);
		}
  }
}
