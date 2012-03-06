/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $
 *
 * $Id:$
 */
#ifndef NV_CTRL_TABLE_DATA_ACCESS_H
#define NV_CTRL_TABLE_DATA_ACCESS_H

#ifdef __cplusplus
extern "C" {
#endif


/* *********************************************************************
 * function declarations
 */

/* *********************************************************************
 * Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table nvCtrlTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * NV-CTRL-MIB::nvCtrlTable is subid 2 of nvCtrl.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.2021.13.42.2, length: 10
*/


    int nvCtrlTable_init_data(nvCtrlTable_registration * nvCtrlTable_reg);


    /*
     * TODO:180:o: Review nvCtrlTable cache timeout.
     * The number of seconds before the cache times out
     */
#ifndef NV_CTRL_TABLE_CACHE_TIMEOUT
#define NV_CTRL_TABLE_CACHE_TIMEOUT   5
#endif

void nvCtrlTable_container_init(netsnmp_container **container_ptr_ptr,
                             netsnmp_cache *cache);
void nvCtrlTable_container_shutdown(netsnmp_container *container_ptr);

int nvCtrlTable_container_load(netsnmp_container *container);
void nvCtrlTable_container_free(netsnmp_container *container);

int nvCtrlTable_cache_load(netsnmp_container *container);
void nvCtrlTable_cache_free(netsnmp_container *container);

    /*
    ***************************************************
    ***             START EXAMPLE CODE              ***
    ***---------------------------------------------***/
/* *********************************************************************
 * Since we have no idea how you really access your data, we'll go with
 * a worst case example: a flat text file.
 */
#define MAX_LINE_SIZE 256
    /*
    ***---------------------------------------------***
    ***              END  EXAMPLE CODE              ***
    ***************************************************/
    int nvCtrlTable_row_prep( nvCtrlTable_rowreq_ctx *rowreq_ctx);



#ifdef __cplusplus
}
#endif

#endif /* NV_CTRL_TABLE_DATA_ACCESS_H */
