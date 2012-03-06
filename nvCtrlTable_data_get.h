/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file nvCtrlTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef NV_CTRL_TABLE_DATA_GET_H
#define NV_CTRL_TABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
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
    /*
     * indexes
     */

    int nvCtrlProductName_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, char **nvCtrlProductName_val_ptr_ptr, size_t *nvCtrlProductName_val_ptr_len_ptr );
    int nvCtrlVBiosVersion_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, char **nvCtrlVBiosVersion_val_ptr_ptr, size_t *nvCtrlVBiosVersion_val_ptr_len_ptr );
    int nvCtrlNvidiaDriverVersion_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, char **nvCtrlNvidiaDriverVersion_val_ptr_ptr, size_t *nvCtrlNvidiaDriverVersion_val_ptr_len_ptr );
    int nvCtrlVersion_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, char **nvCtrlVersion_val_ptr_ptr, size_t *nvCtrlVersion_val_ptr_len_ptr );
    int nvCtrlBusType_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlBusType_val_ptr );
    int nvCtrlBusRate_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlBusRate_val_ptr );
    int nvCtrlVideoRam_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlVideoRam_val_ptr );
    int nvCtrlIrq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlIrq_val_ptr );
    int nvCtrlGPUCoreTemp_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUCoreTemp_val_ptr );
    int nvCtrlGPUCoreThreshold_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUCoreThreshold_val_ptr );
    int nvCtrlGPUDefaultCoreThreshold_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUDefaultCoreThreshold_val_ptr );
    int nvCtrlGPUMaxCoreThreshold_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUMaxCoreThreshold_val_ptr );
    int nvCtrlGPUAmbientTemp_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUAmbientTemp_val_ptr );
    int nvCtrlGPUOverclockingState_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUOverclockingState_val_ptr );
    int nvCtrlGPU2DGPUClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPU2DGPUClockFreq_val_ptr );
    int nvCtrlGPU2DMemClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPU2DMemClockFreq_val_ptr );
    int nvCtrlGPU3DGPUClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPU3DGPUClockFreq_val_ptr );
    int nvCtrlGPU3DMemClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPU3DMemClockFreq_val_ptr );
    int nvCtrlGPUDefault2DGPUClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUDefault2DGPUClockFreq_val_ptr );
    int nvCtrlGPUDefault2DMemClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUDefault2DMemClockFreq_val_ptr );
    int nvCtrlGPUDefault3DGPUClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUDefault3DGPUClockFreq_val_ptr );
    int nvCtrlGPUDefault3DMemClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUDefault3DMemClockFreq_val_ptr );
    int nvCtrlGPUCurrentGPUClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUCurrentGPUClockFreq_val_ptr );
    int nvCtrlGPUCurrentMemClockFreq_get( nvCtrlTable_rowreq_ctx *rowreq_ctx, long * nvCtrlGPUCurrentMemClockFreq_val_ptr );


int nvCtrlTable_indexes_set_tbl_idx(nvCtrlTable_mib_index *tbl_idx, long nvCtrlGPU_val);
int nvCtrlTable_indexes_set(nvCtrlTable_rowreq_ctx *rowreq_ctx, long nvCtrlGPU_val);




#ifdef __cplusplus
}
#endif

#endif /* NV_CTRL_TABLE_DATA_GET_H */
/** @} */