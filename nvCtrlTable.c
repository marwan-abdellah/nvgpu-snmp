/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for nvCtrlTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "nvCtrlTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "nvCtrlTable_interface.h"

oid nvCtrlTable_oid[] = { NV_CTRL_TABLE_OID };
int nvCtrlTable_oid_size = OID_LENGTH(nvCtrlTable_oid);

    nvCtrlTable_registration  nvCtrlTable_user_context;

void initialize_table_nvCtrlTable(void);
void shutdown_table_nvCtrlTable(void);


/**
 * Initializes the nvCtrlTable module
 */
void
init_nvCtrlTable(void)
{
    DEBUGMSGTL(("verbose:nvCtrlTable:init_nvCtrlTable","called\n"));

    /*
     * TODO:300:o: Perform nvCtrlTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("nvCtrlTable"))
        initialize_table_nvCtrlTable();

} /* init_nvCtrlTable */

/**
 * Shut-down the nvCtrlTable module (agent is exiting)
 */
void
shutdown_nvCtrlTable(void)
{
    if (should_init("nvCtrlTable"))
        shutdown_table_nvCtrlTable();

}

/**
 * Initialize the table nvCtrlTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_nvCtrlTable(void)
{
    nvCtrlTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:nvCtrlTable:initialize_table_nvCtrlTable","called\n"));

    /*
     * TODO:301:o: Perform nvCtrlTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize nvCtrlTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("nvCtrlTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
    
    /*
     * call interface initialization code
     */
    _nvCtrlTable_initialize_interface(user_context, flags);
} /* initialize_table_nvCtrlTable */

/**
 * Shutdown the table nvCtrlTable 
 */
void
shutdown_table_nvCtrlTable(void)
{
    /*
     * call interface shutdown code
     */
    _nvCtrlTable_shutdown_interface(&nvCtrlTable_user_context);
}

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
nvCtrlTable_pre_request(nvCtrlTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:nvCtrlTable:nvCtrlTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform nvCtrlTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* nvCtrlTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
nvCtrlTable_post_request(nvCtrlTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:nvCtrlTable:nvCtrlTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform nvCtrlTable post-request actions.
     */

    return MFD_SUCCESS;
} /* nvCtrlTable_post_request */


/** @{ */
