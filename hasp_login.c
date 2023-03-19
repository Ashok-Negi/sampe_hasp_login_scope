/****************************************************************************
*
* Demo program for Sentinel LDK licensing services
*
*
* Copyright (C) 2022 THALES. All Rights Reserved.
*
*
* Sentinel LDK DEMOMA key with features required
*
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "hasp_api.h"
#include "hasp_vcode.h"       /* contains HASP DEMOMA vendor code */
#include "scope.h"		/*contains the scope*/


int main(void)
{
    hasp_status_t   status;
    hasp_handle_t   handle;
    
    printf("A simple demo program for the Sentinel LDK licensing functions\n");
    printf("Copyright (C) THALES. All Rights Reserved.\n\n");

    /************************************************************************
     * hasp_login
     * establishes a context for HASP services
     */

    printf("login to feature 5");

    /* login to the feature 5                 */
    /* this feature needs to be programmed/burned on license key */

    status = hasp_login_scope(5, scope, vendor_code, &handle);

/* check if operation was successful */
	if (status != HASP_STATUS_OK)
	{	
		printf("\nerror\n,%d",status);	
		return(status);
	    switch (status)
    		{
	        case HASP_FEATURE_NOT_FOUND:
        	   	 break;
     	 	case HASP_HASP_NOT_FOUND:
  		    	break;
        	case HASP_OLD_DRIVER:
            		break;
        	case HASP_NO_DRIVER:
            		break;
        	case HASP_INV_VCODE:
            		break;
        	case HASP_FEATURE_TYPE_NOT_IMPL:
            		break;
        	case HASP_TMOF:
           		 break;
       		case HASP_TS_DETECTED:
            		break;
        	default:
           		 break;
   		 }
	}
	else
	{
		printf("login success");
		return(status);
	}
	
	

  
    hasp_logout(handle);

} /* main */

