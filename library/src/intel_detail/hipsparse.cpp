#include "hipsparse.h"

#include <hip/hip_complex.h>
#include <hip/hip_runtime_api.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#define hipsparseVersionMajor 1
#define hipsparseVersionMinor 1
#define hipsparseVersionPatch 1

hipsparseStatus_t hipsparseCreate(hipsparseHandle_t* handle)
{
    // Check if handle is valid
    if(handle == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }
    handle = nullptr;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroy(hipsparseHandle_t handle)
{
        return HIPSPARSE_STATUS_SUCCESS;
}

const char* hipsparseGetErrorName(hipsparseStatus_t status)
{
    return NULL;
    //return rocsparse_get_status_name(hipsparse::hipSPARSEStatusToRocSPARSEStatus(status));
}

const char* hipsparseGetErrorString(hipsparseStatus_t status)
{
    return NULL;
    //return rocsparse_get_status_description(hipsparse::hipSPARSEStatusToRocSPARSEStatus(status));
}

hipsparseStatus_t hipsparseGetVersion(hipsparseHandle_t handle, int* version)
{
    if(handle == nullptr)
    {
        return HIPSPARSE_STATUS_NOT_INITIALIZED;
    }

    *version = hipsparseVersionMajor * 100000 + hipsparseVersionMinor * 100 + hipsparseVersionPatch;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseGetGitRevision(hipsparseHandle_t handle, char* rev)
{
    // Get hipSPARSE revision
    if(handle == nullptr)
    {
        return HIPSPARSE_STATUS_NOT_INITIALIZED;
    }
    return HIPSPARSE_STATUS_SUCCESS;

}

hipsparseStatus_t hipsparseSetStream(hipsparseHandle_t handle, hipStream_t streamId)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseGetStream(hipsparseHandle_t handle, hipStream_t* streamId)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSetPointerMode(hipsparseHandle_t handle, hipsparsePointerMode_t mode)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseGetPointerMode(hipsparseHandle_t handle, hipsparsePointerMode_t* mode)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateMatDescr(hipsparseMatDescr_t* descrA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyMatDescr(hipsparseMatDescr_t descrA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCopyMatDescr(hipsparseMatDescr_t dest, const hipsparseMatDescr_t src)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSetMatType(hipsparseMatDescr_t descrA, hipsparseMatrixType_t type)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseMatrixType_t hipsparseGetMatType(const hipsparseMatDescr_t descrA)
{
    return (hipsparseMatrixType_t)0;//hipsparse::HCCMatTypeToHIPMatType(rocsparse_get_mat_type((rocsparse_mat_descr)descrA));
}

hipsparseStatus_t hipsparseSetMatFillMode(hipsparseMatDescr_t descrA, hipsparseFillMode_t fillMode)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseFillMode_t hipsparseGetMatFillMode(const hipsparseMatDescr_t descrA)
{
    return (hipsparseFillMode_t)0;// HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSetMatDiagType(hipsparseMatDescr_t descrA, hipsparseDiagType_t diagType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseDiagType_t hipsparseGetMatDiagType(const hipsparseMatDescr_t descrA)
{
    return (hipsparseDiagType_t)0; //HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSetMatIndexBase(hipsparseMatDescr_t descrA, hipsparseIndexBase_t base)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseIndexBase_t hipsparseGetMatIndexBase(const hipsparseMatDescr_t descrA)
{
    return (hipsparseIndexBase_t)0; //HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateHybMat(hipsparseHybMat_t* hybA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyHybMat(hipsparseHybMat_t hybA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateBsrsv2Info(bsrsv2Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyBsrsv2Info(bsrsv2Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateBsrsm2Info(bsrsm2Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyBsrsm2Info(bsrsm2Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsrsv2Info(csrsv2Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsrsv2Info(csrsv2Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateColorInfo(hipsparseColorInfo_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyColorInfo(hipsparseColorInfo_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;;
}

hipsparseStatus_t hipsparseCreateCsrsm2Info(csrsm2Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsrsm2Info(csrsm2Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateBsrilu02Info(bsrilu02Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyBsrilu02Info(bsrilu02Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsrilu02Info(csrilu02Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsrilu02Info(csrilu02Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateBsric02Info(bsric02Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyBsric02Info(bsric02Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsric02Info(csric02Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsric02Info(csric02Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsrgemm2Info(csrgemm2Info_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsrgemm2Info(csrgemm2Info_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreatePruneInfo(pruneInfo_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyPruneInfo(pruneInfo_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsru2csrInfo(csru2csrInfo_t* info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyCsru2csrInfo(csru2csrInfo_t info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSaxpyi(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  const float*         alpha,
                                  const float*         xVal,
                                  const int*           xInd,
                                  float*               y,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDaxpyi(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  const double*        alpha,
                                  const double*        xVal,
                                  const int*           xInd,
                                  double*              y,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCaxpyi(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  const hipComplex*    alpha,
                                  const hipComplex*    xVal,
                                  const int*           xInd,
                                  hipComplex*          y,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZaxpyi(hipsparseHandle_t       handle,
                                  int                     nnz,
                                  const hipDoubleComplex* alpha,
                                  const hipDoubleComplex* xVal,
                                  const int*              xInd,
                                  hipDoubleComplex*       y,
                                  hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSdoti(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const float*         xVal,
                                 const int*           xInd,
                                 const float*         y,
                                 float*               result,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDdoti(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const double*        xVal,
                                 const int*           xInd,
                                 const double*        y,
                                 double*              result,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCdoti(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const hipComplex*    xVal,
                                 const int*           xInd,
                                 const hipComplex*    y,
                                 hipComplex*          result,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZdoti(hipsparseHandle_t       handle,
                                 int                     nnz,
                                 const hipDoubleComplex* xVal,
                                 const int*              xInd,
                                 const hipDoubleComplex* y,
                                 hipDoubleComplex*       result,
                                 hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCdotci(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  const hipComplex*    xVal,
                                  const int*           xInd,
                                  const hipComplex*    y,
                                  hipComplex*          result,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZdotci(hipsparseHandle_t       handle,
                                  int                     nnz,
                                  const hipDoubleComplex* xVal,
                                  const int*              xInd,
                                  const hipDoubleComplex* y,
                                  hipDoubleComplex*       result,
                                  hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgthr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const float*         y,
                                 float*               xVal,
                                 const int*           xInd,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgthr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const double*        y,
                                 double*              xVal,
                                 const int*           xInd,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgthr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const hipComplex*    y,
                                 hipComplex*          xVal,
                                 const int*           xInd,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgthr(hipsparseHandle_t       handle,
                                 int                     nnz,
                                 const hipDoubleComplex* y,
                                 hipDoubleComplex*       xVal,
                                 const int*              xInd,
                                 hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgthrz(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  float*               y,
                                  float*               xVal,
                                  const int*           xInd,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgthrz(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  double*              y,
                                  double*              xVal,
                                  const int*           xInd,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgthrz(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  hipComplex*          y,
                                  hipComplex*          xVal,
                                  const int*           xInd,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgthrz(hipsparseHandle_t    handle,
                                  int                  nnz,
                                  hipDoubleComplex*    y,
                                  hipDoubleComplex*    xVal,
                                  const int*           xInd,
                                  hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSroti(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 float*               xVal,
                                 const int*           xInd,
                                 float*               y,
                                 const float*         c,
                                 const float*         s,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDroti(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 double*              xVal,
                                 const int*           xInd,
                                 double*              y,
                                 const double*        c,
                                 const double*        s,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSsctr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const float*         xVal,
                                 const int*           xInd,
                                 float*               y,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDsctr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const double*        xVal,
                                 const int*           xInd,
                                 double*              y,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsctr(hipsparseHandle_t    handle,
                                 int                  nnz,
                                 const hipComplex*    xVal,
                                 const int*           xInd,
                                 hipComplex*          y,
                                 hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZsctr(hipsparseHandle_t       handle,
                                 int                     nnz,
                                 const hipDoubleComplex* xVal,
                                 const int*              xInd,
                                 hipDoubleComplex*       y,
                                 hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       nnz,
                                  const float*              alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const float*              csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const float*              x,
                                  const float*              beta,
                                  float*                    y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       nnz,
                                  const double*             alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const double*             csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const double*             x,
                                  const double*             beta,
                                  double*                   y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       nnz,
                                  const hipComplex*         alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipComplex*         csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const hipComplex*         x,
                                  const hipComplex*         beta,
                                  hipComplex*               y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       nnz,
                                  const hipDoubleComplex*   alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipDoubleComplex*   csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const hipDoubleComplex*   x,
                                  const hipDoubleComplex*   beta,
                                  hipDoubleComplex*         y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXcsrsv2_zeroPivot(hipsparseHandle_t handle, csrsv2Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseOperation_t      transA,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              float*                    csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseOperation_t      transA,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              double*                   csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseOperation_t      transA,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              hipComplex*               csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseOperation_t      transA,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              hipDoubleComplex*         csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseOperation_t      transA,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 float*                    csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseOperation_t      transA,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 double*                   csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseOperation_t      transA,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 hipComplex*               csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseOperation_t      transA,
                                                 int                       m,
                                                 int                       nnz,
                                                 const hipsparseMatDescr_t descrA,
                                                 hipDoubleComplex*         csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 csrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseOperation_t      transA,
                                            int                       m,
                                            int                       nnz,
                                            const hipsparseMatDescr_t descrA,
                                            const float*              csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            csrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseOperation_t      transA,
                                            int                       m,
                                            int                       nnz,
                                            const hipsparseMatDescr_t descrA,
                                            const double*             csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            csrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseOperation_t      transA,
                                            int                       m,
                                            int                       nnz,
                                            const hipsparseMatDescr_t descrA,
                                            const hipComplex*         csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            csrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseOperation_t      transA,
                                            int                       m,
                                            int                       nnz,
                                            const hipsparseMatDescr_t descrA,
                                            const hipDoubleComplex*   csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            csrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseOperation_t      transA,
                                         int                       m,
                                         int                       nnz,
                                         const float*              alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         csrsv2Info_t              info,
                                         const float*              f,
                                         float*                    x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseOperation_t      transA,
                                         int                       m,
                                         int                       nnz,
                                         const double*             alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         csrsv2Info_t              info,
                                         const double*             f,
                                         double*                   x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseOperation_t      transA,
                                         int                       m,
                                         int                       nnz,
                                         const hipComplex*         alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipComplex*         csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         csrsv2Info_t              info,
                                         const hipComplex*         f,
                                         hipComplex*               x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseOperation_t      transA,
                                         int                       m,
                                         int                       nnz,
                                         const hipDoubleComplex*   alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipDoubleComplex*   csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         csrsv2Info_t              info,
                                         const hipDoubleComplex*   f,
                                         hipDoubleComplex*         x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseShybmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  const float*              alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipsparseHybMat_t   hybA,
                                  const float*              x,
                                  const float*              beta,
                                  float*                    y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDhybmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  const double*             alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipsparseHybMat_t   hybA,
                                  const double*             x,
                                  const double*             beta,
                                  double*                   y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseChybmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  const hipComplex*         alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipsparseHybMat_t   hybA,
                                  const hipComplex*         x,
                                  const hipComplex*         beta,
                                  hipComplex*               y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZhybmv(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  const hipDoubleComplex*   alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipsparseHybMat_t   hybA,
                                  const hipDoubleComplex*   x,
                                  const hipDoubleComplex*   beta,
                                  hipDoubleComplex*         y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrmv(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  int                       mb,
                                  int                       nb,
                                  int                       nnzb,
                                  const float*              alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const float*              bsrSortedValA,
                                  const int*                bsrSortedRowPtrA,
                                  const int*                bsrSortedColIndA,
                                  int                       blockDim,
                                  const float*              x,
                                  const float*              beta,
                                  float*                    y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrmv(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  int                       mb,
                                  int                       nb,
                                  int                       nnzb,
                                  const double*             alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const double*             bsrSortedValA,
                                  const int*                bsrSortedRowPtrA,
                                  const int*                bsrSortedColIndA,
                                  int                       blockDim,
                                  const double*             x,
                                  const double*             beta,
                                  double*                   y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrmv(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  int                       mb,
                                  int                       nb,
                                  int                       nnzb,
                                  const hipComplex*         alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipComplex*         bsrSortedValA,
                                  const int*                bsrSortedRowPtrA,
                                  const int*                bsrSortedColIndA,
                                  int                       blockDim,
                                  const hipComplex*         x,
                                  const hipComplex*         beta,
                                  hipComplex*               y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrmv(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  int                       mb,
                                  int                       nb,
                                  int                       nnzb,
                                  const hipDoubleComplex*   alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipDoubleComplex*   bsrSortedValA,
                                  const int*                bsrSortedRowPtrA,
                                  const int*                bsrSortedColIndA,
                                  int                       blockDim,
                                  const hipDoubleComplex*   x,
                                  const hipDoubleComplex*   beta,
                                  hipDoubleComplex*         y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrxmv(hipsparseHandle_t         handle,
                                   hipsparseDirection_t      dir,
                                   hipsparseOperation_t      trans,
                                   int                       sizeOfMask,
                                   int                       mb,
                                   int                       nb,
                                   int                       nnzb,
                                   const float*              alpha,
                                   const hipsparseMatDescr_t descr,
                                   const float*              bsrVal,
                                   const int*                bsrMaskPtr,
                                   const int*                bsrRowPtr,
                                   const int*                bsrEndPtr,
                                   const int*                bsrColInd,
                                   int                       blockDim,
                                   const float*              x,
                                   const float*              beta,
                                   float*                    y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrxmv(hipsparseHandle_t         handle,
                                   hipsparseDirection_t      dir,
                                   hipsparseOperation_t      trans,
                                   int                       sizeOfMask,
                                   int                       mb,
                                   int                       nb,
                                   int                       nnzb,
                                   const double*             alpha,
                                   const hipsparseMatDescr_t descr,
                                   const double*             bsrVal,
                                   const int*                bsrMaskPtr,
                                   const int*                bsrRowPtr,
                                   const int*                bsrEndPtr,
                                   const int*                bsrColInd,
                                   int                       blockDim,
                                   const double*             x,
                                   const double*             beta,
                                   double*                   y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrxmv(hipsparseHandle_t         handle,
                                   hipsparseDirection_t      dir,
                                   hipsparseOperation_t      trans,
                                   int                       sizeOfMask,
                                   int                       mb,
                                   int                       nb,
                                   int                       nnzb,
                                   const hipComplex*         alpha,
                                   const hipsparseMatDescr_t descr,
                                   const hipComplex*         bsrVal,
                                   const int*                bsrMaskPtr,
                                   const int*                bsrRowPtr,
                                   const int*                bsrEndPtr,
                                   const int*                bsrColInd,
                                   int                       blockDim,
                                   const hipComplex*         x,
                                   const hipComplex*         beta,
                                   hipComplex*               y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrxmv(hipsparseHandle_t         handle,
                                   hipsparseDirection_t      dir,
                                   hipsparseOperation_t      trans,
                                   int                       sizeOfMask,
                                   int                       mb,
                                   int                       nb,
                                   int                       nnzb,
                                   const hipDoubleComplex*   alpha,
                                   const hipsparseMatDescr_t descr,
                                   const hipDoubleComplex*   bsrVal,
                                   const int*                bsrMaskPtr,
                                   const int*                bsrRowPtr,
                                   const int*                bsrEndPtr,
                                   const int*                bsrColInd,
                                   int                       blockDim,
                                   const hipDoubleComplex*   x,
                                   const hipDoubleComplex*   beta,
                                   hipDoubleComplex*         y)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXbsrsv2_zeroPivot(hipsparseHandle_t handle, bsrsv2Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dir,
                                              hipsparseOperation_t      transA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              float*                    bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dir,
                                              hipsparseOperation_t      transA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              double*                   bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dir,
                                              hipsparseOperation_t      transA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipComplex*               bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsv2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dir,
                                              hipsparseOperation_t      transA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipDoubleComplex*         bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsv2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 hipsparseOperation_t      transA,
                                                 int                       mb,
                                                 int                       nnzb,
                                                 const hipsparseMatDescr_t descrA,
                                                 float*                    bsrSortedValA,
                                                 const int*                bsrSortedRowPtrA,
                                                 const int*                bsrSortedColIndA,
                                                 int                       blockDim,
                                                 bsrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 hipsparseOperation_t      transA,
                                                 int                       mb,
                                                 int                       nnzb,
                                                 const hipsparseMatDescr_t descrA,
                                                 double*                   bsrSortedValA,
                                                 const int*                bsrSortedRowPtrA,
                                                 const int*                bsrSortedColIndA,
                                                 int                       blockDim,
                                                 bsrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 hipsparseOperation_t      transA,
                                                 int                       mb,
                                                 int                       nnzb,
                                                 const hipsparseMatDescr_t descrA,
                                                 hipComplex*               bsrSortedValA,
                                                 const int*                bsrSortedRowPtrA,
                                                 const int*                bsrSortedColIndA,
                                                 int                       blockDim,
                                                 bsrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsv2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 hipsparseOperation_t      transA,
                                                 int                       mb,
                                                 int                       nnzb,
                                                 const hipsparseMatDescr_t descrA,
                                                 hipDoubleComplex*         bsrSortedValA,
                                                 const int*                bsrSortedRowPtrA,
                                                 const int*                bsrSortedColIndA,
                                                 int                       blockDim,
                                                 bsrsv2Info_t              info,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dir,
                                            hipsparseOperation_t      transA,
                                            int                       mb,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const float*              bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dir,
                                            hipsparseOperation_t      transA,
                                            int                       mb,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const double*             bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dir,
                                            hipsparseOperation_t      transA,
                                            int                       mb,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const hipComplex*         bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsv2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dir,
                                            hipsparseOperation_t      transA,
                                            int                       mb,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const hipDoubleComplex*   bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsv2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dir,
                                         hipsparseOperation_t      transA,
                                         int                       mb,
                                         int                       nnzb,
                                         const float*              alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsv2Info_t              info,
                                         const float*              f,
                                         float*                    x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dir,
                                         hipsparseOperation_t      transA,
                                         int                       mb,
                                         int                       nnzb,
                                         const double*             alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsv2Info_t              info,
                                         const double*             f,
                                         double*                   x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dir,
                                         hipsparseOperation_t      transA,
                                         int                       mb,
                                         int                       nnzb,
                                         const hipComplex*         alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipComplex*         bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsv2Info_t              info,
                                         const hipComplex*         f,
                                         hipComplex*               x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsv2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dir,
                                         hipsparseOperation_t      transA,
                                         int                       mb,
                                         int                       nnzb,
                                         const hipDoubleComplex*   alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipDoubleComplex*   bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsv2Info_t              info,
                                         const hipDoubleComplex*   f,
                                         hipDoubleComplex*         x,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgemvi_bufferSize(hipsparseHandle_t    handle,
                                             hipsparseOperation_t transA,
                                             int                  m,
                                             int                  n,
                                             int                  nnz,
                                             int*                 pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgemvi_bufferSize(hipsparseHandle_t    handle,
                                             hipsparseOperation_t transA,
                                             int                  m,
                                             int                  n,
                                             int                  nnz,
                                             int*                 pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgemvi_bufferSize(hipsparseHandle_t    handle,
                                             hipsparseOperation_t transA,
                                             int                  m,
                                             int                  n,
                                             int                  nnz,
                                             int*                 pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgemvi_bufferSize(hipsparseHandle_t    handle,
                                             hipsparseOperation_t transA,
                                             int                  m,
                                             int                  n,
                                             int                  nnz,
                                             int*                 pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgemvi(hipsparseHandle_t    handle,
                                  hipsparseOperation_t transA,
                                  int                  m,
                                  int                  n,
                                  const float*         alpha,
                                  const float*         A,
                                  int                  lda,
                                  int                  nnz,
                                  const float*         x,
                                  const int*           xInd,
                                  const float*         beta,
                                  float*               y,
                                  hipsparseIndexBase_t idxBase,
                                  void*                pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgemvi(hipsparseHandle_t    handle,
                                  hipsparseOperation_t transA,
                                  int                  m,
                                  int                  n,
                                  const double*        alpha,
                                  const double*        A,
                                  int                  lda,
                                  int                  nnz,
                                  const double*        x,
                                  const int*           xInd,
                                  const double*        beta,
                                  double*              y,
                                  hipsparseIndexBase_t idxBase,
                                  void*                pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgemvi(hipsparseHandle_t    handle,
                                  hipsparseOperation_t transA,
                                  int                  m,
                                  int                  n,
                                  const hipComplex*    alpha,
                                  const hipComplex*    A,
                                  int                  lda,
                                  int                  nnz,
                                  const hipComplex*    x,
                                  const int*           xInd,
                                  const hipComplex*    beta,
                                  hipComplex*          y,
                                  hipsparseIndexBase_t idxBase,
                                  void*                pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgemvi(hipsparseHandle_t       handle,
                                  hipsparseOperation_t    transA,
                                  int                     m,
                                  int                     n,
                                  const hipDoubleComplex* alpha,
                                  const hipDoubleComplex* A,
                                  int                     lda,
                                  int                     nnz,
                                  const hipDoubleComplex* x,
                                  const int*              xInd,
                                  const hipDoubleComplex* beta,
                                  hipDoubleComplex*       y,
                                  hipsparseIndexBase_t    idxBase,
                                  void*                   pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrmm(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  hipsparseOperation_t      transB,
                                  int                       mb,
                                  int                       n,
                                  int                       kb,
                                  int                       nnzb,
                                  const float*              alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const float*              bsrValA,
                                  const int*                bsrRowPtrA,
                                  const int*                bsrColIndA,
                                  int                       blockDim,
                                  const float*              B,
                                  int                       ldb,
                                  const float*              beta,
                                  float*                    C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrmm(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  hipsparseOperation_t      transB,
                                  int                       mb,
                                  int                       n,
                                  int                       kb,
                                  int                       nnzb,
                                  const double*             alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const double*             bsrValA,
                                  const int*                bsrRowPtrA,
                                  const int*                bsrColIndA,
                                  int                       blockDim,
                                  const double*             B,
                                  int                       ldb,
                                  const double*             beta,
                                  double*                   C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrmm(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  hipsparseOperation_t      transB,
                                  int                       mb,
                                  int                       n,
                                  int                       kb,
                                  int                       nnzb,
                                  const hipComplex*         alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipComplex*         bsrValA,
                                  const int*                bsrRowPtrA,
                                  const int*                bsrColIndA,
                                  int                       blockDim,
                                  const hipComplex*         B,
                                  int                       ldb,
                                  const hipComplex*         beta,
                                  hipComplex*               C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrmm(hipsparseHandle_t         handle,
                                  hipsparseDirection_t      dirA,
                                  hipsparseOperation_t      transA,
                                  hipsparseOperation_t      transB,
                                  int                       mb,
                                  int                       n,
                                  int                       kb,
                                  int                       nnzb,
                                  const hipDoubleComplex*   alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipDoubleComplex*   bsrValA,
                                  const int*                bsrRowPtrA,
                                  const int*                bsrColIndA,
                                  int                       blockDim,
                                  const hipDoubleComplex*   B,
                                  int                       ldb,
                                  const hipDoubleComplex*   beta,
                                  hipDoubleComplex*         C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrmm(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       k,
                                  int                       nnz,
                                  const float*              alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const float*              csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const float*              B,
                                  int                       ldb,
                                  const float*              beta,
                                  float*                    C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrmm(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       k,
                                  int                       nnz,
                                  const double*             alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const double*             csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const double*             B,
                                  int                       ldb,
                                  const double*             beta,
                                  double*                   C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrmm(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       k,
                                  int                       nnz,
                                  const hipComplex*         alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipComplex*         csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const hipComplex*         B,
                                  int                       ldb,
                                  const hipComplex*         beta,
                                  hipComplex*               C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrmm(hipsparseHandle_t         handle,
                                  hipsparseOperation_t      transA,
                                  int                       m,
                                  int                       n,
                                  int                       k,
                                  int                       nnz,
                                  const hipDoubleComplex*   alpha,
                                  const hipsparseMatDescr_t descrA,
                                  const hipDoubleComplex*   csrSortedValA,
                                  const int*                csrSortedRowPtrA,
                                  const int*                csrSortedColIndA,
                                  const hipDoubleComplex*   B,
                                  int                       ldb,
                                  const hipDoubleComplex*   beta,
                                  hipDoubleComplex*         C,
                                  int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrmm2(hipsparseHandle_t         handle,
                                   hipsparseOperation_t      transA,
                                   hipsparseOperation_t      transB,
                                   int                       m,
                                   int                       n,
                                   int                       k,
                                   int                       nnz,
                                   const float*              alpha,
                                   const hipsparseMatDescr_t descrA,
                                   const float*              csrSortedValA,
                                   const int*                csrSortedRowPtrA,
                                   const int*                csrSortedColIndA,
                                   const float*              B,
                                   int                       ldb,
                                   const float*              beta,
                                   float*                    C,
                                   int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrmm2(hipsparseHandle_t         handle,
                                   hipsparseOperation_t      transA,
                                   hipsparseOperation_t      transB,
                                   int                       m,
                                   int                       n,
                                   int                       k,
                                   int                       nnz,
                                   const double*             alpha,
                                   const hipsparseMatDescr_t descrA,
                                   const double*             csrSortedValA,
                                   const int*                csrSortedRowPtrA,
                                   const int*                csrSortedColIndA,
                                   const double*             B,
                                   int                       ldb,
                                   const double*             beta,
                                   double*                   C,
                                   int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrmm2(hipsparseHandle_t         handle,
                                   hipsparseOperation_t      transA,
                                   hipsparseOperation_t      transB,
                                   int                       m,
                                   int                       n,
                                   int                       k,
                                   int                       nnz,
                                   const hipComplex*         alpha,
                                   const hipsparseMatDescr_t descrA,
                                   const hipComplex*         csrSortedValA,
                                   const int*                csrSortedRowPtrA,
                                   const int*                csrSortedColIndA,
                                   const hipComplex*         B,
                                   int                       ldb,
                                   const hipComplex*         beta,
                                   hipComplex*               C,
                                   int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrmm2(hipsparseHandle_t         handle,
                                   hipsparseOperation_t      transA,
                                   hipsparseOperation_t      transB,
                                   int                       m,
                                   int                       n,
                                   int                       k,
                                   int                       nnz,
                                   const hipDoubleComplex*   alpha,
                                   const hipsparseMatDescr_t descrA,
                                   const hipDoubleComplex*   csrSortedValA,
                                   const int*                csrSortedRowPtrA,
                                   const int*                csrSortedColIndA,
                                   const hipDoubleComplex*   B,
                                   int                       ldb,
                                   const hipDoubleComplex*   beta,
                                   hipDoubleComplex*         C,
                                   int                       ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXbsrsm2_zeroPivot(hipsparseHandle_t handle, bsrsm2Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsm2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              hipsparseOperation_t      transA,
                                              hipsparseOperation_t      transX,
                                              int                       mb,
                                              int                       nrhs,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              float*                    bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsm2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsm2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              hipsparseOperation_t      transA,
                                              hipsparseOperation_t      transX,
                                              int                       mb,
                                              int                       nrhs,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              double*                   bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsm2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsm2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              hipsparseOperation_t      transA,
                                              hipsparseOperation_t      transX,
                                              int                       mb,
                                              int                       nrhs,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipComplex*               bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsm2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsm2_bufferSize(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              hipsparseOperation_t      transA,
                                              hipsparseOperation_t      transX,
                                              int                       mb,
                                              int                       nrhs,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipDoubleComplex*         bsrSortedValA,
                                              const int*                bsrSortedRowPtrA,
                                              const int*                bsrSortedColIndA,
                                              int                       blockDim,
                                              bsrsm2Info_t              info,
                                              int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsm2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dirA,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transX,
                                            int                       mb,
                                            int                       nrhs,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const float*              bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsm2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dirA,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transX,
                                            int                       mb,
                                            int                       nrhs,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const double*             bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsm2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dirA,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transX,
                                            int                       mb,
                                            int                       nrhs,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const hipComplex*         bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsm2_analysis(hipsparseHandle_t         handle,
                                            hipsparseDirection_t      dirA,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transX,
                                            int                       mb,
                                            int                       nrhs,
                                            int                       nnzb,
                                            const hipsparseMatDescr_t descrA,
                                            const hipDoubleComplex*   bsrSortedValA,
                                            const int*                bsrSortedRowPtrA,
                                            const int*                bsrSortedColIndA,
                                            int                       blockDim,
                                            bsrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrsm2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dirA,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transX,
                                         int                       mb,
                                         int                       nrhs,
                                         int                       nnzb,
                                         const float*              alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsm2Info_t              info,
                                         const float*              B,
                                         int                       ldb,
                                         float*                    X,
                                         int                       ldx,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrsm2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dirA,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transX,
                                         int                       mb,
                                         int                       nrhs,
                                         int                       nnzb,
                                         const double*             alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsm2Info_t              info,
                                         const double*             B,
                                         int                       ldb,
                                         double*                   X,
                                         int                       ldx,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrsm2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dirA,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transX,
                                         int                       mb,
                                         int                       nrhs,
                                         int                       nnzb,
                                         const hipComplex*         alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipComplex*         bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsm2Info_t              info,
                                         const hipComplex*         B,
                                         int                       ldb,
                                         hipComplex*               X,
                                         int                       ldx,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrsm2_solve(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dirA,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transX,
                                         int                       mb,
                                         int                       nrhs,
                                         int                       nnzb,
                                         const hipDoubleComplex*   alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipDoubleComplex*   bsrSortedValA,
                                         const int*                bsrSortedRowPtrA,
                                         const int*                bsrSortedColIndA,
                                         int                       blockDim,
                                         bsrsm2Info_t              info,
                                         const hipDoubleComplex*   B,
                                         int                       ldb,
                                         hipDoubleComplex*         X,
                                         int                       ldx,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXcsrsm2_zeroPivot(hipsparseHandle_t handle, csrsm2Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 int                       algo,
                                                 hipsparseOperation_t      transA,
                                                 hipsparseOperation_t      transB,
                                                 int                       m,
                                                 int                       nrhs,
                                                 int                       nnz,
                                                 const float*              alpha,
                                                 const hipsparseMatDescr_t descrA,
                                                 const float*              csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 const float*              B,
                                                 int                       ldb,
                                                 csrsm2Info_t              info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 int                       algo,
                                                 hipsparseOperation_t      transA,
                                                 hipsparseOperation_t      transB,
                                                 int                       m,
                                                 int                       nrhs,
                                                 int                       nnz,
                                                 const double*             alpha,
                                                 const hipsparseMatDescr_t descrA,
                                                 const double*             csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 const double*             B,
                                                 int                       ldb,
                                                 csrsm2Info_t              info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 int                       algo,
                                                 hipsparseOperation_t      transA,
                                                 hipsparseOperation_t      transB,
                                                 int                       m,
                                                 int                       nrhs,
                                                 int                       nnz,
                                                 const hipComplex*         alpha,
                                                 const hipsparseMatDescr_t descrA,
                                                 const hipComplex*         csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 const hipComplex*         B,
                                                 int                       ldb,
                                                 csrsm2Info_t              info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                 int                       algo,
                                                 hipsparseOperation_t      transA,
                                                 hipsparseOperation_t      transB,
                                                 int                       m,
                                                 int                       nrhs,
                                                 int                       nnz,
                                                 const hipDoubleComplex*   alpha,
                                                 const hipsparseMatDescr_t descrA,
                                                 const hipDoubleComplex*   csrSortedValA,
                                                 const int*                csrSortedRowPtrA,
                                                 const int*                csrSortedColIndA,
                                                 const hipDoubleComplex*   B,
                                                 int                       ldb,
                                                 csrsm2Info_t              info,
                                                 hipsparseSolvePolicy_t    policy,
                                                 size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsm2_analysis(hipsparseHandle_t         handle,
                                            int                       algo,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transB,
                                            int                       m,
                                            int                       nrhs,
                                            int                       nnz,
                                            const float*              alpha,
                                            const hipsparseMatDescr_t descrA,
                                            const float*              csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            const float*              B,
                                            int                       ldb,
                                            csrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsm2_analysis(hipsparseHandle_t         handle,
                                            int                       algo,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transB,
                                            int                       m,
                                            int                       nrhs,
                                            int                       nnz,
                                            const double*             alpha,
                                            const hipsparseMatDescr_t descrA,
                                            const double*             csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            const double*             B,
                                            int                       ldb,
                                            csrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsm2_analysis(hipsparseHandle_t         handle,
                                            int                       algo,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transB,
                                            int                       m,
                                            int                       nrhs,
                                            int                       nnz,
                                            const hipComplex*         alpha,
                                            const hipsparseMatDescr_t descrA,
                                            const hipComplex*         csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            const hipComplex*         B,
                                            int                       ldb,
                                            csrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsm2_analysis(hipsparseHandle_t         handle,
                                            int                       algo,
                                            hipsparseOperation_t      transA,
                                            hipsparseOperation_t      transB,
                                            int                       m,
                                            int                       nrhs,
                                            int                       nnz,
                                            const hipDoubleComplex*   alpha,
                                            const hipsparseMatDescr_t descrA,
                                            const hipDoubleComplex*   csrSortedValA,
                                            const int*                csrSortedRowPtrA,
                                            const int*                csrSortedColIndA,
                                            const hipDoubleComplex*   B,
                                            int                       ldb,
                                            csrsm2Info_t              info,
                                            hipsparseSolvePolicy_t    policy,
                                            void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrsm2_solve(hipsparseHandle_t         handle,
                                         int                       algo,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transB,
                                         int                       m,
                                         int                       nrhs,
                                         int                       nnz,
                                         const float*              alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         float*                    B,
                                         int                       ldb,
                                         csrsm2Info_t              info,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrsm2_solve(hipsparseHandle_t         handle,
                                         int                       algo,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transB,
                                         int                       m,
                                         int                       nrhs,
                                         int                       nnz,
                                         const double*             alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         double*                   B,
                                         int                       ldb,
                                         csrsm2Info_t              info,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrsm2_solve(hipsparseHandle_t         handle,
                                         int                       algo,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transB,
                                         int                       m,
                                         int                       nrhs,
                                         int                       nnz,
                                         const hipComplex*         alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipComplex*         csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         hipComplex*               B,
                                         int                       ldb,
                                         csrsm2Info_t              info,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrsm2_solve(hipsparseHandle_t         handle,
                                         int                       algo,
                                         hipsparseOperation_t      transA,
                                         hipsparseOperation_t      transB,
                                         int                       m,
                                         int                       nrhs,
                                         int                       nnz,
                                         const hipDoubleComplex*   alpha,
                                         const hipsparseMatDescr_t descrA,
                                         const hipDoubleComplex*   csrSortedValA,
                                         const int*                csrSortedRowPtrA,
                                         const int*                csrSortedColIndA,
                                         hipDoubleComplex*         B,
                                         int                       ldb,
                                         csrsm2Info_t              info,
                                         hipsparseSolvePolicy_t    policy,
                                         void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgemmi(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  int               k,
                                  int               nnz,
                                  const float*      alpha,
                                  const float*      A,
                                  int               lda,
                                  const float*      cscValB,
                                  const int*        cscColPtrB,
                                  const int*        cscRowIndB,
                                  const float*      beta,
                                  float*            C,
                                  int               ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgemmi(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  int               k,
                                  int               nnz,
                                  const double*     alpha,
                                  const double*     A,
                                  int               lda,
                                  const double*     cscValB,
                                  const int*        cscColPtrB,
                                  const int*        cscRowIndB,
                                  const double*     beta,
                                  double*           C,
                                  int               ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgemmi(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  int               k,
                                  int               nnz,
                                  const hipComplex* alpha,
                                  const hipComplex* A,
                                  int               lda,
                                  const hipComplex* cscValB,
                                  const int*        cscColPtrB,
                                  const int*        cscRowIndB,
                                  const hipComplex* beta,
                                  hipComplex*       C,
                                  int               ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgemmi(hipsparseHandle_t       handle,
                                  int                     m,
                                  int                     n,
                                  int                     k,
                                  int                     nnz,
                                  const hipDoubleComplex* alpha,
                                  const hipDoubleComplex* A,
                                  int                     lda,
                                  const hipDoubleComplex* cscValB,
                                  const int*              cscColPtrB,
                                  const int*              cscRowIndB,
                                  const hipDoubleComplex* beta,
                                  hipDoubleComplex*       C,
                                  int                     ldc)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrgeamNnz(hipsparseHandle_t         handle,
                                       int                       m,
                                       int                       n,
                                       const hipsparseMatDescr_t descrA,
                                       int                       nnzA,
                                       const int*                csrRowPtrA,
                                       const int*                csrColIndA,
                                       const hipsparseMatDescr_t descrB,
                                       int                       nnzB,
                                       const int*                csrRowPtrB,
                                       const int*                csrColIndB,
                                       const hipsparseMatDescr_t descrC,
                                       int*                      csrRowPtrC,
                                       int*                      nnzTotalDevHostPtr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgeam(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const float*              alpha,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const float*              csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const float*              beta,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const float*              csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    float*                    csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgeam(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const double*             alpha,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const double*             csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const double*             beta,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const double*             csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    double*                   csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgeam(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipComplex*         alpha,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const hipComplex*         csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipComplex*         beta,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const hipComplex*         csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    hipComplex*               csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgeam(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipDoubleComplex*   alpha,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const hipDoubleComplex*   csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipDoubleComplex*   beta,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const hipDoubleComplex*   csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    hipDoubleComplex*         csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgeam2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   const float*              alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const float*              csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   const float*              beta,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const float*              csrSortedValB,
                                                   const int*                csrSortedRowPtrB,
                                                   const int*                csrSortedColIndB,
                                                   const hipsparseMatDescr_t descrC,
                                                   const float*              csrSortedValC,
                                                   const int*                csrSortedRowPtrC,
                                                   const int*                csrSortedColIndC,
                                                   size_t*                   pBufferSizeInBytes)
{
    *pBufferSizeInBytes = 4;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgeam2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   const double*             alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const double*             csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   const double*             beta,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const double*             csrSortedValB,
                                                   const int*                csrSortedRowPtrB,
                                                   const int*                csrSortedColIndB,
                                                   const hipsparseMatDescr_t descrC,
                                                   const double*             csrSortedValC,
                                                   const int*                csrSortedRowPtrC,
                                                   const int*                csrSortedColIndC,
                                                   size_t*                   pBufferSizeInBytes)
{
    *pBufferSizeInBytes = 4;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgeam2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   const hipComplex*         alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const hipComplex*         csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   const hipComplex*         beta,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const hipComplex*         csrSortedValB,
                                                   const int*                csrSortedRowPtrB,
                                                   const int*                csrSortedColIndB,
                                                   const hipsparseMatDescr_t descrC,
                                                   const hipComplex*         csrSortedValC,
                                                   const int*                csrSortedRowPtrC,
                                                   const int*                csrSortedColIndC,
                                                   size_t*                   pBufferSizeInBytes)
{
    *pBufferSizeInBytes = 4;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgeam2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   const hipDoubleComplex*   alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const hipDoubleComplex*   csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   const hipDoubleComplex*   beta,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const hipDoubleComplex*   csrSortedValB,
                                                   const int*                csrSortedRowPtrB,
                                                   const int*                csrSortedColIndB,
                                                   const hipsparseMatDescr_t descrC,
                                                   const hipDoubleComplex*   csrSortedValC,
                                                   const int*                csrSortedRowPtrC,
                                                   const int*                csrSortedColIndC,
                                                   size_t*                   pBufferSizeInBytes)
{
    *pBufferSizeInBytes = 4;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrgeam2Nnz(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const int*                csrSortedRowPtrA,
                                        const int*                csrSortedColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const int*                csrSortedRowPtrB,
                                        const int*                csrSortedColIndB,
                                        const hipsparseMatDescr_t descrC,
                                        int*                      csrSortedRowPtrC,
                                        int*                      nnzTotalDevHostPtr,
                                        void*                     workspace)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgeam2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     const float*              alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const float*              csrSortedValA,
                                     const int*                csrSortedRowPtrA,
                                     const int*                csrSortedColIndA,
                                     const float*              beta,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const float*              csrSortedValB,
                                     const int*                csrSortedRowPtrB,
                                     const int*                csrSortedColIndB,
                                     const hipsparseMatDescr_t descrC,
                                     float*                    csrSortedValC,
                                     int*                      csrSortedRowPtrC,
                                     int*                      csrSortedColIndC,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgeam2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     const double*             alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const double*             csrSortedValA,
                                     const int*                csrSortedRowPtrA,
                                     const int*                csrSortedColIndA,
                                     const double*             beta,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const double*             csrSortedValB,
                                     const int*                csrSortedRowPtrB,
                                     const int*                csrSortedColIndB,
                                     const hipsparseMatDescr_t descrC,
                                     double*                   csrSortedValC,
                                     int*                      csrSortedRowPtrC,
                                     int*                      csrSortedColIndC,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgeam2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     const hipComplex*         alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const hipComplex*         csrSortedValA,
                                     const int*                csrSortedRowPtrA,
                                     const int*                csrSortedColIndA,
                                     const hipComplex*         beta,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const hipComplex*         csrSortedValB,
                                     const int*                csrSortedRowPtrB,
                                     const int*                csrSortedColIndB,
                                     const hipsparseMatDescr_t descrC,
                                     hipComplex*               csrSortedValC,
                                     int*                      csrSortedRowPtrC,
                                     int*                      csrSortedColIndC,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgeam2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     const hipDoubleComplex*   alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const hipDoubleComplex*   csrSortedValA,
                                     const int*                csrSortedRowPtrA,
                                     const int*                csrSortedColIndA,
                                     const hipDoubleComplex*   beta,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const hipDoubleComplex*   csrSortedValB,
                                     const int*                csrSortedRowPtrB,
                                     const int*                csrSortedColIndB,
                                     const hipsparseMatDescr_t descrC,
                                     hipDoubleComplex*         csrSortedValC,
                                     int*                      csrSortedRowPtrC,
                                     int*                      csrSortedColIndC,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrgemmNnz(hipsparseHandle_t         handle,
                                       hipsparseOperation_t      transA,
                                       hipsparseOperation_t      transB,
                                       int                       m,
                                       int                       n,
                                       int                       k,
                                       const hipsparseMatDescr_t descrA,
                                       int                       nnzA,
                                       const int*                csrRowPtrA,
                                       const int*                csrColIndA,
                                       const hipsparseMatDescr_t descrB,
                                       int                       nnzB,
                                       const int*                csrRowPtrB,
                                       const int*                csrColIndB,
                                       const hipsparseMatDescr_t descrC,
                                       int*                      csrRowPtrC,
                                       int*                      nnzTotalDevHostPtr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgemm(hipsparseHandle_t         handle,
                                    hipsparseOperation_t      transA,
                                    hipsparseOperation_t      transB,
                                    int                       m,
                                    int                       n,
                                    int                       k,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const float*              csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const float*              csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    float*                    csrValC,
                                    const int*                csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgemm(hipsparseHandle_t         handle,
                                    hipsparseOperation_t      transA,
                                    hipsparseOperation_t      transB,
                                    int                       m,
                                    int                       n,
                                    int                       k,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const double*             csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const double*             csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    double*                   csrValC,
                                    const int*                csrRowPtrC,
                                    int*                      csrColIndC)
{
     return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgemm(hipsparseHandle_t         handle,
                                    hipsparseOperation_t      transA,
                                    hipsparseOperation_t      transB,
                                    int                       m,
                                    int                       n,
                                    int                       k,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const hipComplex*         csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const hipComplex*         csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    hipComplex*               csrValC,
                                    const int*                csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgemm(hipsparseHandle_t         handle,
                                    hipsparseOperation_t      transA,
                                    hipsparseOperation_t      transB,
                                    int                       m,
                                    int                       n,
                                    int                       k,
                                    const hipsparseMatDescr_t descrA,
                                    int                       nnzA,
                                    const hipDoubleComplex*   csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    const hipsparseMatDescr_t descrB,
                                    int                       nnzB,
                                    const hipDoubleComplex*   csrValB,
                                    const int*                csrRowPtrB,
                                    const int*                csrColIndB,
                                    const hipsparseMatDescr_t descrC,
                                    hipDoubleComplex*         csrValC,
                                    const int*                csrRowPtrC,
                                    int*                      csrColIndC)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   int                       k,
                                                   const float*              alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const int*                csrRowPtrA,
                                                   const int*                csrColIndA,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const int*                csrRowPtrB,
                                                   const int*                csrColIndB,
                                                   const float*              beta,
                                                   const hipsparseMatDescr_t descrD,
                                                   int                       nnzD,
                                                   const int*                csrRowPtrD,
                                                   const int*                csrColIndD,
                                                   csrgemm2Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   int                       k,
                                                   const double*             alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const int*                csrRowPtrA,
                                                   const int*                csrColIndA,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const int*                csrRowPtrB,
                                                   const int*                csrColIndB,
                                                   const double*             beta,
                                                   const hipsparseMatDescr_t descrD,
                                                   int                       nnzD,
                                                   const int*                csrRowPtrD,
                                                   const int*                csrColIndD,
                                                   csrgemm2Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   int                       k,
                                                   const hipComplex*         alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const int*                csrRowPtrA,
                                                   const int*                csrColIndA,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const int*                csrRowPtrB,
                                                   const int*                csrColIndB,
                                                   const hipComplex*         beta,
                                                   const hipsparseMatDescr_t descrD,
                                                   int                       nnzD,
                                                   const int*                csrRowPtrD,
                                                   const int*                csrColIndD,
                                                   csrgemm2Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgemm2_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       n,
                                                   int                       k,
                                                   const hipDoubleComplex*   alpha,
                                                   const hipsparseMatDescr_t descrA,
                                                   int                       nnzA,
                                                   const int*                csrRowPtrA,
                                                   const int*                csrColIndA,
                                                   const hipsparseMatDescr_t descrB,
                                                   int                       nnzB,
                                                   const int*                csrRowPtrB,
                                                   const int*                csrColIndB,
                                                   const hipDoubleComplex*   beta,
                                                   const hipsparseMatDescr_t descrD,
                                                   int                       nnzD,
                                                   const int*                csrRowPtrD,
                                                   const int*                csrColIndD,
                                                   csrgemm2Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrgemm2Nnz(hipsparseHandle_t         handle,
                                        int                       m,
                                        int                       n,
                                        int                       k,
                                        const hipsparseMatDescr_t descrA,
                                        int                       nnzA,
                                        const int*                csrRowPtrA,
                                        const int*                csrColIndA,
                                        const hipsparseMatDescr_t descrB,
                                        int                       nnzB,
                                        const int*                csrRowPtrB,
                                        const int*                csrColIndB,
                                        const hipsparseMatDescr_t descrD,
                                        int                       nnzD,
                                        const int*                csrRowPtrD,
                                        const int*                csrColIndD,
                                        const hipsparseMatDescr_t descrC,
                                        int*                      csrRowPtrC,
                                        int*                      nnzTotalDevHostPtr,
                                        const csrgemm2Info_t      info,
                                        void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrgemm2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       k,
                                     const float*              alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const float*              csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const float*              csrValB,
                                     const int*                csrRowPtrB,
                                     const int*                csrColIndB,
                                     const float*              beta,
                                     const hipsparseMatDescr_t descrD,
                                     int                       nnzD,
                                     const float*              csrValD,
                                     const int*                csrRowPtrD,
                                     const int*                csrColIndD,
                                     const hipsparseMatDescr_t descrC,
                                     float*                    csrValC,
                                     const int*                csrRowPtrC,
                                     int*                      csrColIndC,
                                     const csrgemm2Info_t      info,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrgemm2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       k,
                                     const double*             alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const double*             csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const double*             csrValB,
                                     const int*                csrRowPtrB,
                                     const int*                csrColIndB,
                                     const double*             beta,
                                     const hipsparseMatDescr_t descrD,
                                     int                       nnzD,
                                     const double*             csrValD,
                                     const int*                csrRowPtrD,
                                     const int*                csrColIndD,
                                     const hipsparseMatDescr_t descrC,
                                     double*                   csrValC,
                                     const int*                csrRowPtrC,
                                     int*                      csrColIndC,
                                     const csrgemm2Info_t      info,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrgemm2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       k,
                                     const hipComplex*         alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const hipComplex*         csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const hipComplex*         csrValB,
                                     const int*                csrRowPtrB,
                                     const int*                csrColIndB,
                                     const hipComplex*         beta,
                                     const hipsparseMatDescr_t descrD,
                                     int                       nnzD,
                                     const hipComplex*         csrValD,
                                     const int*                csrRowPtrD,
                                     const int*                csrColIndD,
                                     const hipsparseMatDescr_t descrC,
                                     hipComplex*               csrValC,
                                     const int*                csrRowPtrC,
                                     int*                      csrColIndC,
                                     const csrgemm2Info_t      info,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrgemm2(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       k,
                                     const hipDoubleComplex*   alpha,
                                     const hipsparseMatDescr_t descrA,
                                     int                       nnzA,
                                     const hipDoubleComplex*   csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const hipsparseMatDescr_t descrB,
                                     int                       nnzB,
                                     const hipDoubleComplex*   csrValB,
                                     const int*                csrRowPtrB,
                                     const int*                csrColIndB,
                                     const hipDoubleComplex*   beta,
                                     const hipsparseMatDescr_t descrD,
                                     int                       nnzD,
                                     const hipDoubleComplex*   csrValD,
                                     const int*                csrRowPtrD,
                                     const int*                csrColIndD,
                                     const hipsparseMatDescr_t descrC,
                                     hipDoubleComplex*         csrValC,
                                     const int*                csrRowPtrC,
                                     int*                      csrColIndC,
                                     const csrgemm2Info_t      info,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXbsrilu02_zeroPivot(hipsparseHandle_t handle, bsrilu02Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrilu02_numericBoost(
    hipsparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, float* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrilu02_numericBoost(
    hipsparseHandle_t handle, bsrilu02Info_t info, int enable_boost, double* tol, double* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrilu02_numericBoost(hipsparseHandle_t handle,
                                                  bsrilu02Info_t    info,
                                                  int               enable_boost,
                                                  double*           tol,
                                                  hipComplex*       boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrilu02_numericBoost(hipsparseHandle_t handle,
                                                  bsrilu02Info_t    info,
                                                  int               enable_boost,
                                                  double*           tol,
                                                  hipDoubleComplex* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                hipsparseDirection_t      dirA,
                                                int                       mb,
                                                int                       nnzb,
                                                const hipsparseMatDescr_t descrA,
                                                float*                    bsrValA,
                                                const int*                bsrRowPtrA,
                                                const int*                bsrColIndA,
                                                int                       blockDim,
                                                bsrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                hipsparseDirection_t      dirA,
                                                int                       mb,
                                                int                       nnzb,
                                                const hipsparseMatDescr_t descrA,
                                                double*                   bsrValA,
                                                const int*                bsrRowPtrA,
                                                const int*                bsrColIndA,
                                                int                       blockDim,
                                                bsrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                hipsparseDirection_t      dirA,
                                                int                       mb,
                                                int                       nnzb,
                                                const hipsparseMatDescr_t descrA,
                                                hipComplex*               bsrValA,
                                                const int*                bsrRowPtrA,
                                                const int*                bsrColIndA,
                                                int                       blockDim,
                                                bsrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                hipsparseDirection_t      dirA,
                                                int                       mb,
                                                int                       nnzb,
                                                const hipsparseMatDescr_t descrA,
                                                hipDoubleComplex*         bsrValA,
                                                const int*                bsrRowPtrA,
                                                const int*                bsrColIndA,
                                                int                       blockDim,
                                                bsrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrilu02_analysis(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              float*                    bsrValA,
                                              const int*                bsrRowPtrA,
                                              const int*                bsrColIndA,
                                              int                       blockDim,
                                              bsrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    // Obtain stream, to explicitly sync (cusparse bsrilu02_analysis is blocking)
     return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrilu02_analysis(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              double*                   bsrValA,
                                              const int*                bsrRowPtrA,
                                              const int*                bsrColIndA,
                                              int                       blockDim,
                                              bsrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrilu02_analysis(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipComplex*               bsrValA,
                                              const int*                bsrRowPtrA,
                                              const int*                bsrColIndA,
                                              int                       blockDim,
                                              bsrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrilu02_analysis(hipsparseHandle_t         handle,
                                              hipsparseDirection_t      dirA,
                                              int                       mb,
                                              int                       nnzb,
                                              const hipsparseMatDescr_t descrA,
                                              hipDoubleComplex*         bsrValA,
                                              const int*                bsrRowPtrA,
                                              const int*                bsrColIndA,
                                              int                       blockDim,
                                              bsrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsrilu02(hipsparseHandle_t         handle,
                                     hipsparseDirection_t      dirA,
                                     int                       mb,
                                     int                       nnzb,
                                     const hipsparseMatDescr_t descrA,
                                     float*                    bsrValA,
                                     const int*                bsrRowPtrA,
                                     const int*                bsrColIndA,
                                     int                       blockDim,
                                     bsrilu02Info_t            info,
                                     hipsparseSolvePolicy_t    policy,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsrilu02(hipsparseHandle_t         handle,
                                     hipsparseDirection_t      dirA,
                                     int                       mb,
                                     int                       nnzb,
                                     const hipsparseMatDescr_t descrA,
                                     double*                   bsrValA,
                                     const int*                bsrRowPtrA,
                                     const int*                bsrColIndA,
                                     int                       blockDim,
                                     bsrilu02Info_t            info,
                                     hipsparseSolvePolicy_t    policy,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsrilu02(hipsparseHandle_t         handle,
                                     hipsparseDirection_t      dirA,
                                     int                       mb,
                                     int                       nnzb,
                                     const hipsparseMatDescr_t descrA,
                                     hipComplex*               bsrValA,
                                     const int*                bsrRowPtrA,
                                     const int*                bsrColIndA,
                                     int                       blockDim,
                                     bsrilu02Info_t            info,
                                     hipsparseSolvePolicy_t    policy,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsrilu02(hipsparseHandle_t         handle,
                                     hipsparseDirection_t      dirA,
                                     int                       mb,
                                     int                       nnzb,
                                     const hipsparseMatDescr_t descrA,
                                     hipDoubleComplex*         bsrValA,
                                     const int*                bsrRowPtrA,
                                     const int*                bsrColIndA,
                                     int                       blockDim,
                                     bsrilu02Info_t            info,
                                     hipsparseSolvePolicy_t    policy,
                                     void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXcsrilu02_zeroPivot(hipsparseHandle_t handle, csrilu02Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrilu02_numericBoost(
    hipsparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, float* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrilu02_numericBoost(
    hipsparseHandle_t handle, csrilu02Info_t info, int enable_boost, double* tol, double* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrilu02_numericBoost(hipsparseHandle_t handle,
                                                  csrilu02Info_t    info,
                                                  int               enable_boost,
                                                  double*           tol,
                                                  hipComplex*       boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrilu02_numericBoost(hipsparseHandle_t handle,
                                                  csrilu02Info_t    info,
                                                  int               enable_boost,
                                                  double*           tol,
                                                  hipDoubleComplex* boost_val)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                float*                    csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                double*                   csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                hipComplex*               csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrilu02_bufferSize(hipsparseHandle_t         handle,
                                                int                       m,
                                                int                       nnz,
                                                const hipsparseMatDescr_t descrA,
                                                hipDoubleComplex*         csrSortedValA,
                                                const int*                csrSortedRowPtrA,
                                                const int*                csrSortedColIndA,
                                                csrilu02Info_t            info,
                                                int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   float*                    csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csrilu02Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   double*                   csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csrilu02Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   hipComplex*               csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csrilu02Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrilu02_bufferSizeExt(hipsparseHandle_t         handle,
                                                   int                       m,
                                                   int                       nnz,
                                                   const hipsparseMatDescr_t descrA,
                                                   hipDoubleComplex*         csrSortedValA,
                                                   const int*                csrSortedRowPtrA,
                                                   const int*                csrSortedColIndA,
                                                   csrilu02Info_t            info,
                                                   size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrilu02_analysis(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              const float*              csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrilu02_analysis(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              const double*             csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrilu02_analysis(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              const hipComplex*         csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrilu02_analysis(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       nnz,
                                              const hipsparseMatDescr_t descrA,
                                              const hipDoubleComplex*   csrSortedValA,
                                              const int*                csrSortedRowPtrA,
                                              const int*                csrSortedColIndA,
                                              csrilu02Info_t            info,
                                              hipsparseSolvePolicy_t    policy,
                                              void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrilu02(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     float*                    csrSortedValA_valM,
                                     /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                     const int*             csrSortedRowPtrA,
                                     const int*             csrSortedColIndA,
                                     csrilu02Info_t         info,
                                     hipsparseSolvePolicy_t policy,
                                     void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrilu02(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     double*                   csrSortedValA_valM,
                                     /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                     const int*             csrSortedRowPtrA,
                                     const int*             csrSortedColIndA,
                                     csrilu02Info_t         info,
                                     hipsparseSolvePolicy_t policy,
                                     void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrilu02(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipComplex*               csrSortedValA_valM,
                                     /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                     const int*             csrSortedRowPtrA,
                                     const int*             csrSortedColIndA,
                                     csrilu02Info_t         info,
                                     hipsparseSolvePolicy_t policy,
                                     void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrilu02(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipDoubleComplex*         csrSortedValA_valM,
                                     /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                     const int*             csrSortedRowPtrA,
                                     const int*             csrSortedColIndA,
                                     csrilu02Info_t         info,
                                     hipsparseSolvePolicy_t policy,
                                     void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXbsric02_zeroPivot(hipsparseHandle_t handle, bsric02Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsric02_bufferSize(hipsparseHandle_t         handle,
                                               hipsparseDirection_t      dirA,
                                               int                       mb,
                                               int                       nnzb,
                                               const hipsparseMatDescr_t descrA,
                                               float*                    bsrValA,
                                               const int*                bsrRowPtrA,
                                               const int*                bsrColIndA,
                                               int                       blockDim,
                                               bsric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsric02_bufferSize(hipsparseHandle_t         handle,
                                               hipsparseDirection_t      dirA,
                                               int                       mb,
                                               int                       nnzb,
                                               const hipsparseMatDescr_t descrA,
                                               double*                   bsrValA,
                                               const int*                bsrRowPtrA,
                                               const int*                bsrColIndA,
                                               int                       blockDim,
                                               bsric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsric02_bufferSize(hipsparseHandle_t         handle,
                                               hipsparseDirection_t      dirA,
                                               int                       mb,
                                               int                       nnzb,
                                               const hipsparseMatDescr_t descrA,
                                               hipComplex*               bsrValA,
                                               const int*                bsrRowPtrA,
                                               const int*                bsrColIndA,
                                               int                       blockDim,
                                               bsric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsric02_bufferSize(hipsparseHandle_t         handle,
                                               hipsparseDirection_t      dirA,
                                               int                       mb,
                                               int                       nnzb,
                                               const hipsparseMatDescr_t descrA,
                                               hipDoubleComplex*         bsrValA,
                                               const int*                bsrRowPtrA,
                                               const int*                bsrColIndA,
                                               int                       blockDim,
                                               bsric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsric02_analysis(hipsparseHandle_t         handle,
                                             hipsparseDirection_t      dirA,
                                             int                       mb,
                                             int                       nnzb,
                                             const hipsparseMatDescr_t descrA,
                                             const float*              bsrValA,
                                             const int*                bsrRowPtrA,
                                             const int*                bsrColIndA,
                                             int                       blockDim,
                                             bsric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsric02_analysis(hipsparseHandle_t         handle,
                                             hipsparseDirection_t      dirA,
                                             int                       mb,
                                             int                       nnzb,
                                             const hipsparseMatDescr_t descrA,
                                             const double*             bsrValA,
                                             const int*                bsrRowPtrA,
                                             const int*                bsrColIndA,
                                             int                       blockDim,
                                             bsric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsric02_analysis(hipsparseHandle_t         handle,
                                             hipsparseDirection_t      dirA,
                                             int                       mb,
                                             int                       nnzb,
                                             const hipsparseMatDescr_t descrA,
                                             const hipComplex*         bsrValA,
                                             const int*                bsrRowPtrA,
                                             const int*                bsrColIndA,
                                             int                       blockDim,
                                             bsric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsric02_analysis(hipsparseHandle_t         handle,
                                             hipsparseDirection_t      dirA,
                                             int                       mb,
                                             int                       nnzb,
                                             const hipsparseMatDescr_t descrA,
                                             const hipDoubleComplex*   bsrValA,
                                             const int*                bsrRowPtrA,
                                             const int*                bsrColIndA,
                                             int                       blockDim,
                                             bsric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsric02(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nnzb,
                                    const hipsparseMatDescr_t descrA,
                                    float*                    bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    bsric02Info_t             info,
                                    hipsparseSolvePolicy_t    policy,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsric02(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nnzb,
                                    const hipsparseMatDescr_t descrA,
                                    double*                   bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    bsric02Info_t             info,
                                    hipsparseSolvePolicy_t    policy,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsric02(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nnzb,
                                    const hipsparseMatDescr_t descrA,
                                    hipComplex*               bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    bsric02Info_t             info,
                                    hipsparseSolvePolicy_t    policy,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsric02(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nnzb,
                                    const hipsparseMatDescr_t descrA,
                                    hipDoubleComplex*         bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    bsric02Info_t             info,
                                    hipsparseSolvePolicy_t    policy,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseXcsric02_zeroPivot(hipsparseHandle_t handle, csric02Info_t info, int* position)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsric02_bufferSize(hipsparseHandle_t         handle,
                                               int                       m,
                                               int                       nnz,
                                               const hipsparseMatDescr_t descrA,
                                               float*                    csrSortedValA,
                                               const int*                csrSortedRowPtrA,
                                               const int*                csrSortedColIndA,
                                               csric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsric02_bufferSize(hipsparseHandle_t         handle,
                                               int                       m,
                                               int                       nnz,
                                               const hipsparseMatDescr_t descrA,
                                               double*                   csrSortedValA,
                                               const int*                csrSortedRowPtrA,
                                               const int*                csrSortedColIndA,
                                               csric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsric02_bufferSize(hipsparseHandle_t         handle,
                                               int                       m,
                                               int                       nnz,
                                               const hipsparseMatDescr_t descrA,
                                               hipComplex*               csrSortedValA,
                                               const int*                csrSortedRowPtrA,
                                               const int*                csrSortedColIndA,
                                               csric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsric02_bufferSize(hipsparseHandle_t         handle,
                                               int                       m,
                                               int                       nnz,
                                               const hipsparseMatDescr_t descrA,
                                               hipDoubleComplex*         csrSortedValA,
                                               const int*                csrSortedRowPtrA,
                                               const int*                csrSortedColIndA,
                                               csric02Info_t             info,
                                               int*                      pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  float*                    csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csric02Info_t             info,
                                                  size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  double*                   csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csric02Info_t             info,
                                                  size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  hipComplex*               csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csric02Info_t             info,
                                                  size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsric02_bufferSizeExt(hipsparseHandle_t         handle,
                                                  int                       m,
                                                  int                       nnz,
                                                  const hipsparseMatDescr_t descrA,
                                                  hipDoubleComplex*         csrSortedValA,
                                                  const int*                csrSortedRowPtrA,
                                                  const int*                csrSortedColIndA,
                                                  csric02Info_t             info,
                                                  size_t*                   pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsric02_analysis(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       nnz,
                                             const hipsparseMatDescr_t descrA,
                                             const float*              csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsric02_analysis(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       nnz,
                                             const hipsparseMatDescr_t descrA,
                                             const double*             csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsric02_analysis(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       nnz,
                                             const hipsparseMatDescr_t descrA,
                                             const hipComplex*         csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsric02_analysis(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       nnz,
                                             const hipsparseMatDescr_t descrA,
                                             const hipDoubleComplex*   csrSortedValA,
                                             const int*                csrSortedRowPtrA,
                                             const int*                csrSortedColIndA,
                                             csric02Info_t             info,
                                             hipsparseSolvePolicy_t    policy,
                                             void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsric02(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    float*                    csrSortedValA_valM,
                                    /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                    const int*             csrSortedRowPtrA,
                                    const int*             csrSortedColIndA,
                                    csric02Info_t          info,
                                    hipsparseSolvePolicy_t policy,
                                    void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsric02(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    double*                   csrSortedValA_valM,
                                    /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                    const int*             csrSortedRowPtrA,
                                    const int*             csrSortedColIndA,
                                    csric02Info_t          info,
                                    hipsparseSolvePolicy_t policy,
                                    void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsric02(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    hipComplex*               csrSortedValA_valM,
                                    /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                    const int*             csrSortedRowPtrA,
                                    const int*             csrSortedColIndA,
                                    csric02Info_t          info,
                                    hipsparseSolvePolicy_t policy,
                                    void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsric02(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    hipDoubleComplex*         csrSortedValA_valM,
                                    /* matrix A values are updated inplace
                                        to be the preconditioner M values */
                                    const int*             csrSortedRowPtrA,
                                    const int*             csrSortedColIndA,
                                    csric02Info_t          info,
                                    hipsparseSolvePolicy_t policy,
                                    void*                  pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsr2coo(hipsparseHandle_t    handle,
                                    const int*           csrRowPtr,
                                    int                  nnz,
                                    int                  m,
                                    int*                 cooRowInd,
                                    hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2csc(hipsparseHandle_t    handle,
                                    int                  m,
                                    int                  n,
                                    int                  nnz,
                                    const float*         csrSortedVal,
                                    const int*           csrSortedRowPtr,
                                    const int*           csrSortedColInd,
                                    float*               cscSortedVal,
                                    int*                 cscSortedRowInd,
                                    int*                 cscSortedColPtr,
                                    hipsparseAction_t    copyValues,
                                    hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2csc(hipsparseHandle_t    handle,
                                    int                  m,
                                    int                  n,
                                    int                  nnz,
                                    const double*        csrSortedVal,
                                    const int*           csrSortedRowPtr,
                                    const int*           csrSortedColInd,
                                    double*              cscSortedVal,
                                    int*                 cscSortedRowInd,
                                    int*                 cscSortedColPtr,
                                    hipsparseAction_t    copyValues,
                                    hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2csc(hipsparseHandle_t    handle,
                                    int                  m,
                                    int                  n,
                                    int                  nnz,
                                    const hipComplex*    csrSortedVal,
                                    const int*           csrSortedRowPtr,
                                    const int*           csrSortedColInd,
                                    hipComplex*          cscSortedVal,
                                    int*                 cscSortedRowInd,
                                    int*                 cscSortedColPtr,
                                    hipsparseAction_t    copyValues,
                                    hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2csc(hipsparseHandle_t       handle,
                                    int                     m,
                                    int                     n,
                                    int                     nnz,
                                    const hipDoubleComplex* csrSortedVal,
                                    const int*              csrSortedRowPtr,
                                    const int*              csrSortedColInd,
                                    hipDoubleComplex*       cscSortedVal,
                                    int*                    cscSortedRowInd,
                                    int*                    cscSortedColPtr,
                                    hipsparseAction_t       copyValues,
                                    hipsparseIndexBase_t    idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsr2cscEx2_bufferSize(hipsparseHandle_t     handle,
                                                 int                   m,
                                                 int                   n,
                                                 int                   nnz,
                                                 const void*           csrVal,
                                                 const int*            csrRowPtr,
                                                 const int*            csrColInd,
                                                 void*                 cscVal,
                                                 int*                  cscColPtr,
                                                 int*                  cscRowInd,
                                                 hipDataType           valType,
                                                 hipsparseAction_t     copyValues,
                                                 hipsparseIndexBase_t  idxBase,
                                                 hipsparseCsr2CscAlg_t alg,
                                                 size_t*               bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsr2cscEx2(hipsparseHandle_t     handle,
                                      int                   m,
                                      int                   n,
                                      int                   nnz,
                                      const void*           csrVal,
                                      const int*            csrRowPtr,
                                      const int*            csrColInd,
                                      void*                 cscVal,
                                      int*                  cscColPtr,
                                      int*                  cscRowInd,
                                      hipDataType           valType,
                                      hipsparseAction_t     copyValues,
                                      hipsparseIndexBase_t  idxBase,
                                      hipsparseCsr2CscAlg_t alg,
                                      void*                 buffer)
{
    switch(valType)
    {
    case HIP_R_32F:
        return HIPSPARSE_STATUS_SUCCESS;
    case HIP_R_64F:
        return HIPSPARSE_STATUS_SUCCESS;
    case HIP_C_32F:
        return HIPSPARSE_STATUS_SUCCESS;
    case HIP_C_64F:
        return HIPSPARSE_STATUS_SUCCESS;
    case HIP_R_16F:
    case HIP_C_16F:
#if(HIP_VERSION >= 50600000)
    case HIP_C_8I:
    case HIP_R_8U:
    case HIP_C_8U:
    case HIP_R_32I:
    case HIP_C_32I:
    case HIP_R_32U:
    case HIP_C_32U:
    case HIP_R_16BF:
    case HIP_C_16BF:
    case HIP_R_4I:
    case HIP_C_4I:
    case HIP_R_4U:
    case HIP_C_4U:
    case HIP_R_16I:
    case HIP_C_16I:
    case HIP_R_16U:
    case HIP_C_16U:
    case HIP_R_64I:
    case HIP_C_64I:
    case HIP_R_64U:
    case HIP_C_64U:
#endif
        return HIPSPARSE_STATUS_NOT_SUPPORTED;
    }

    return HIPSPARSE_STATUS_NOT_SUPPORTED;
}

hipsparseStatus_t hipsparseScsr2hyb(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const float*              csrSortedValA,
                                    const int*                csrSortedRowPtrA,
                                    const int*                csrSortedColIndA,
                                    hipsparseHybMat_t         hybA,
                                    int                       userEllWidth,
                                    hipsparseHybPartition_t   partitionType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2hyb(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const double*             csrSortedValA,
                                    const int*                csrSortedRowPtrA,
                                    const int*                csrSortedColIndA,
                                    hipsparseHybMat_t         hybA,
                                    int                       userEllWidth,
                                    hipsparseHybPartition_t   partitionType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2hyb(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const hipComplex*         csrSortedValA,
                                    const int*                csrSortedRowPtrA,
                                    const int*                csrSortedColIndA,
                                    hipsparseHybMat_t         hybA,
                                    int                       userEllWidth,
                                    hipsparseHybPartition_t   partitionType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2hyb(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const hipDoubleComplex*   csrSortedValA,
                                    const int*                csrSortedRowPtrA,
                                    const int*                csrSortedColIndA,
                                    hipsparseHybMat_t         hybA,
                                    int                       userEllWidth,
                                    hipsparseHybPartition_t   partitionType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgebsr2gebsc_bufferSize(hipsparseHandle_t handle,
                                                   int               mb,
                                                   int               nb,
                                                   int               nnzb,
                                                   const float*      bsr_val,
                                                   const int*        bsr_row_ptr,
                                                   const int*        bsr_col_ind,
                                                   int               row_block_dim,
                                                   int               col_block_dim,
                                                   size_t*           p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgebsr2gebsc_bufferSize(hipsparseHandle_t handle,
                                                   int               mb,
                                                   int               nb,
                                                   int               nnzb,
                                                   const double*     bsr_val,
                                                   const int*        bsr_row_ptr,
                                                   const int*        bsr_col_ind,
                                                   int               row_block_dim,
                                                   int               col_block_dim,
                                                   size_t*           p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgebsr2gebsc_bufferSize(hipsparseHandle_t handle,
                                                   int               mb,
                                                   int               nb,
                                                   int               nnzb,
                                                   const hipComplex* bsr_val,
                                                   const int*        bsr_row_ptr,
                                                   const int*        bsr_col_ind,
                                                   int               row_block_dim,
                                                   int               col_block_dim,
                                                   size_t*           p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgebsr2gebsc_bufferSize(hipsparseHandle_t       handle,
                                                   int                     mb,
                                                   int                     nb,
                                                   int                     nnzb,
                                                   const hipDoubleComplex* bsr_val,
                                                   const int*              bsr_row_ptr,
                                                   const int*              bsr_col_ind,
                                                   int                     row_block_dim,
                                                   int                     col_block_dim,
                                                   size_t*                 p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgebsr2gebsc(hipsparseHandle_t    handle,
                                        int                  mb,
                                        int                  nb,
                                        int                  nnzb,
                                        const float*         bsr_val,
                                        const int*           bsr_row_ptr,
                                        const int*           bsr_col_ind,
                                        int                  row_block_dim,
                                        int                  col_block_dim,
                                        float*               bsc_val,
                                        int*                 bsc_row_ind,
                                        int*                 bsc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base,
                                        void*                temp_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgebsr2gebsc(hipsparseHandle_t    handle,
                                        int                  mb,
                                        int                  nb,
                                        int                  nnzb,
                                        const double*        bsr_val,
                                        const int*           bsr_row_ptr,
                                        const int*           bsr_col_ind,
                                        int                  row_block_dim,
                                        int                  col_block_dim,
                                        double*              bsc_val,
                                        int*                 bsc_row_ind,
                                        int*                 bsc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base,
                                        void*                temp_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgebsr2gebsc(hipsparseHandle_t    handle,
                                        int                  mb,
                                        int                  nb,
                                        int                  nnzb,
                                        const hipComplex*    bsr_val,
                                        const int*           bsr_row_ptr,
                                        const int*           bsr_col_ind,
                                        int                  row_block_dim,
                                        int                  col_block_dim,
                                        hipComplex*          bsc_val,
                                        int*                 bsc_row_ind,
                                        int*                 bsc_col_ptr,
                                        hipsparseAction_t    copy_values,
                                        hipsparseIndexBase_t idx_base,
                                        void*                temp_buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgebsr2gebsc(hipsparseHandle_t       handle,
                                        int                     mb,
                                        int                     nb,
                                        int                     nnzb,
                                        const hipDoubleComplex* bsr_val,
                                        const int*              bsr_row_ptr,
                                        const int*              bsr_col_ind,
                                        int                     row_block_dim,
                                        int                     col_block_dim,
                                        hipDoubleComplex*       bsc_val,
                                        int*                    bsc_row_ind,
                                        int*                    bsc_col_ptr,
                                        hipsparseAction_t       copy_values,
                                        hipsparseIndexBase_t    idx_base,
                                        void*                   temp_buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 int                       m,
                                                 int                       n,
                                                 const hipsparseMatDescr_t csr_descr,
                                                 const float*              csr_val,
                                                 const int*                csr_row_ptr,
                                                 const int*                csr_col_ind,
                                                 int                       row_block_dim,
                                                 int                       col_block_dim,
                                                 size_t*                   p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 int                       m,
                                                 int                       n,
                                                 const hipsparseMatDescr_t csr_descr,
                                                 const double*             csr_val,
                                                 const int*                csr_row_ptr,
                                                 const int*                csr_col_ind,
                                                 int                       row_block_dim,
                                                 int                       col_block_dim,
                                                 size_t*                   p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 int                       m,
                                                 int                       n,
                                                 const hipsparseMatDescr_t csr_descr,
                                                 const hipComplex*         csr_val,
                                                 const int*                csr_row_ptr,
                                                 const int*                csr_col_ind,
                                                 int                       row_block_dim,
                                                 int                       col_block_dim,
                                                 size_t*                   p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                 hipsparseDirection_t      dir,
                                                 int                       m,
                                                 int                       n,
                                                 const hipsparseMatDescr_t csr_descr,
                                                 const hipDoubleComplex*   csr_val,
                                                 const int*                csr_row_ptr,
                                                 const int*                csr_col_ind,
                                                 int                       row_block_dim,
                                                 int                       col_block_dim,
                                                 size_t*                   p_buffer_size)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsr2gebsrNnz(hipsparseHandle_t         handle,
                                         hipsparseDirection_t      dir,
                                         int                       m,
                                         int                       n,
                                         const hipsparseMatDescr_t csr_descr,
                                         const int*                csr_row_ptr,
                                         const int*                csr_col_ind,
                                         const hipsparseMatDescr_t bsr_descr,
                                         int*                      bsr_row_ptr,
                                         int                       row_block_dim,
                                         int                       col_block_dim,
                                         int*                      bsr_nnz_devhost,
                                         void*                     p_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2gebsr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dir,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t csr_descr,
                                      const float*              csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipsparseMatDescr_t bsr_descr,
                                      float*                    bsr_val,
                                      int*                      bsr_row_ptr,
                                      int*                      bsr_col_ind,
                                      int                       row_block_dim,
                                      int                       col_block_dim,
                                      void*                     p_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2gebsr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dir,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t csr_descr,
                                      const double*             csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipsparseMatDescr_t bsr_descr,
                                      double*                   bsr_val,
                                      int*                      bsr_row_ptr,
                                      int*                      bsr_col_ind,
                                      int                       row_block_dim,
                                      int                       col_block_dim,
                                      void*                     p_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2gebsr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dir,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t csr_descr,
                                      const hipComplex*         csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipsparseMatDescr_t bsr_descr,
                                      hipComplex*               bsr_val,
                                      int*                      bsr_row_ptr,
                                      int*                      bsr_col_ind,
                                      int                       row_block_dim,
                                      int                       col_block_dim,
                                      void*                     p_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2gebsr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dir,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t csr_descr,
                                      const hipDoubleComplex*   csr_val,
                                      const int*                csr_row_ptr,
                                      const int*                csr_col_ind,
                                      const hipsparseMatDescr_t bsr_descr,
                                      hipDoubleComplex*         bsr_val,
                                      int*                      bsr_row_ptr,
                                      int*                      bsr_col_ind,
                                      int                       row_block_dim,
                                      int                       col_block_dim,
                                      void*                     p_buffer)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2bsr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const float*              csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    float*                    bsrValC,
                                    int*                      bsrRowPtrC,
                                    int*                      bsrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2bsr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const double*             csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    double*                   bsrValC,
                                    int*                      bsrRowPtrC,
                                    int*                      bsrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2bsr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const hipComplex*         csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    hipComplex*               bsrValC,
                                    int*                      bsrRowPtrC,
                                    int*                      bsrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2bsr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       m,
                                    int                       n,
                                    const hipsparseMatDescr_t descrA,
                                    const hipDoubleComplex*   csrValA,
                                    const int*                csrRowPtrA,
                                    const int*                csrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    hipDoubleComplex*         bsrValC,
                                    int*                      bsrRowPtrC,
                                    int*                      bsrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSbsr2csr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nb,
                                    const hipsparseMatDescr_t descrA,
                                    const float*              bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    float*                    csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDbsr2csr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nb,
                                    const hipsparseMatDescr_t descrA,
                                    const double*             bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    double*                   csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCbsr2csr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nb,
                                    const hipsparseMatDescr_t descrA,
                                    const hipComplex*         bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    hipComplex*               csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZbsr2csr(hipsparseHandle_t         handle,
                                    hipsparseDirection_t      dirA,
                                    int                       mb,
                                    int                       nb,
                                    const hipsparseMatDescr_t descrA,
                                    const hipDoubleComplex*   bsrValA,
                                    const int*                bsrRowPtrA,
                                    const int*                bsrColIndA,
                                    int                       blockDim,
                                    const hipsparseMatDescr_t descrC,
                                    hipDoubleComplex*         csrValC,
                                    int*                      csrRowPtrC,
                                    int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgebsr2csr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dirA,
                                      int                       mb,
                                      int                       nb,
                                      const hipsparseMatDescr_t descrA,
                                      const float*              bsrValA,
                                      const int*                bsrRowPtrA,
                                      const int*                bsrColIndA,
                                      int                       rowBlockDim,
                                      int                       colBlockDim,
                                      const hipsparseMatDescr_t descrC,
                                      float*                    csrValC,
                                      int*                      csrRowPtrC,
                                      int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgebsr2csr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dirA,
                                      int                       mb,
                                      int                       nb,
                                      const hipsparseMatDescr_t descrA,
                                      const double*             bsrValA,
                                      const int*                bsrRowPtrA,
                                      const int*                bsrColIndA,
                                      int                       rowBlockDim,
                                      int                       colBlockDim,
                                      const hipsparseMatDescr_t descrC,
                                      double*                   csrValC,
                                      int*                      csrRowPtrC,
                                      int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgebsr2csr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dirA,
                                      int                       mb,
                                      int                       nb,
                                      const hipsparseMatDescr_t descrA,
                                      const hipComplex*         bsrValA,
                                      const int*                bsrRowPtrA,
                                      const int*                bsrColIndA,
                                      int                       rowBlockDim,
                                      int                       colBlockDim,
                                      const hipsparseMatDescr_t descrC,
                                      hipComplex*               csrValC,
                                      int*                      csrRowPtrC,
                                      int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgebsr2csr(hipsparseHandle_t         handle,
                                      hipsparseDirection_t      dirA,
                                      int                       mb,
                                      int                       nb,
                                      const hipsparseMatDescr_t descrA,
                                      const hipDoubleComplex*   bsrValA,
                                      const int*                bsrRowPtrA,
                                      const int*                bsrColIndA,
                                      int                       rowBlockDim,
                                      int                       colBlockDim,
                                      const hipsparseMatDescr_t descrC,
                                      hipDoubleComplex*         csrValC,
                                      int*                      csrRowPtrC,
                                      int*                      csrColIndC)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2csr_compress(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       n,
                                             const hipsparseMatDescr_t descrA,
                                             const float*              csrValA,
                                             const int*                csrColIndA,
                                             const int*                csrRowPtrA,
                                             int                       nnzA,
                                             const int*                nnzPerRow,
                                             float*                    csrValC,
                                             int*                      csrColIndC,
                                             int*                      csrRowPtrC,
                                             float                     tol)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2csr_compress(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       n,
                                             const hipsparseMatDescr_t descrA,
                                             const double*             csrValA,
                                             const int*                csrColIndA,
                                             const int*                csrRowPtrA,
                                             int                       nnzA,
                                             const int*                nnzPerRow,
                                             double*                   csrValC,
                                             int*                      csrColIndC,
                                             int*                      csrRowPtrC,
                                             double                    tol)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2csr_compress(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       n,
                                             const hipsparseMatDescr_t descrA,
                                             const hipComplex*         csrValA,
                                             const int*                csrColIndA,
                                             const int*                csrRowPtrA,
                                             int                       nnzA,
                                             const int*                nnzPerRow,
                                             hipComplex*               csrValC,
                                             int*                      csrColIndC,
                                             int*                      csrRowPtrC,
                                             hipComplex                tol)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2csr_compress(hipsparseHandle_t         handle,
                                             int                       m,
                                             int                       n,
                                             const hipsparseMatDescr_t descrA,
                                             const hipDoubleComplex*   csrValA,
                                             const int*                csrColIndA,
                                             const int*                csrRowPtrA,
                                             int                       nnzA,
                                             const int*                nnzPerRow,
                                             hipDoubleComplex*         csrValC,
                                             int*                      csrColIndC,
                                             int*                      csrRowPtrC,
                                             hipDoubleComplex          tol)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csr_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       n,
                                                    int                       nnzA,
                                                    const hipsparseMatDescr_t descrA,
                                                    const float*              csrValA,
                                                    const int*                csrRowPtrA,
                                                    const int*                csrColIndA,
                                                    const float*              threshold,
                                                    const hipsparseMatDescr_t descrC,
                                                    const float*              csrValC,
                                                    const int*                csrRowPtrC,
                                                    const int*                csrColIndC,
                                                    size_t*                   bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csr_bufferSize(hipsparseHandle_t         handle,
                                                    int                       m,
                                                    int                       n,
                                                    int                       nnzA,
                                                    const hipsparseMatDescr_t descrA,
                                                    const double*             csrValA,
                                                    const int*                csrRowPtrA,
                                                    const int*                csrColIndA,
                                                    const double*             threshold,
                                                    const hipsparseMatDescr_t descrC,
                                                    const double*             csrValC,
                                                    const int*                csrRowPtrC,
                                                    const int*                csrColIndC,
                                                    size_t*                   bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csr_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       nnzA,
                                                       const hipsparseMatDescr_t descrA,
                                                       const float*              csrValA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const float*              threshold,
                                                       const hipsparseMatDescr_t descrC,
                                                       const float*              csrValC,
                                                       const int*                csrRowPtrC,
                                                       const int*                csrColIndC,
                                                       size_t*                   bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csr_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       int                       nnzA,
                                                       const hipsparseMatDescr_t descrA,
                                                       const double*             csrValA,
                                                       const int*                csrRowPtrA,
                                                       const int*                csrColIndA,
                                                       const double*             threshold,
                                                       const hipsparseMatDescr_t descrC,
                                                       const double*             csrValC,
                                                       const int*                csrRowPtrC,
                                                       const int*                csrColIndC,
                                                       size_t*                   bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csrNnz(hipsparseHandle_t         handle,
                                            int                       m,
                                            int                       n,
                                            int                       nnzA,
                                            const hipsparseMatDescr_t descrA,
                                            const float*              csrValA,
                                            const int*                csrRowPtrA,
                                            const int*                csrColIndA,
                                            const float*              threshold,
                                            const hipsparseMatDescr_t descrC,
                                            int*                      csrRowPtrC,
                                            int*                      nnzTotalDevHostPtr,
                                            void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csrNnz(hipsparseHandle_t         handle,
                                            int                       m,
                                            int                       n,
                                            int                       nnzA,
                                            const hipsparseMatDescr_t descrA,
                                            const double*             csrValA,
                                            const int*                csrRowPtrA,
                                            const int*                csrColIndA,
                                            const double*             threshold,
                                            const hipsparseMatDescr_t descrC,
                                            int*                      csrRowPtrC,
                                            int*                      nnzTotalDevHostPtr,
                                            void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csr(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       nnzA,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const float*              threshold,
                                         const hipsparseMatDescr_t descrC,
                                         float*                    csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csr(hipsparseHandle_t         handle,
                                         int                       m,
                                         int                       n,
                                         int                       nnzA,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             csrValA,
                                         const int*                csrRowPtrA,
                                         const int*                csrColIndA,
                                         const double*             threshold,
                                         const hipsparseMatDescr_t descrC,
                                         double*                   csrValC,
                                         const int*                csrRowPtrC,
                                         int*                      csrColIndC,
                                         void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csrByPercentage_bufferSize(hipsparseHandle_t         handle,
                                                                int                       m,
                                                                int                       n,
                                                                int                       nnzA,
                                                                const hipsparseMatDescr_t descrA,
                                                                const float*              csrValA,
                                                                const int* csrRowPtrA,
                                                                const int* csrColIndA,
                                                                float      percentage,
                                                                const hipsparseMatDescr_t descrC,
                                                                const float*              csrValC,
                                                                const int*  csrRowPtrC,
                                                                const int*  csrColIndC,
                                                                pruneInfo_t info,
                                                                size_t*     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csrByPercentage_bufferSize(hipsparseHandle_t         handle,
                                                                int                       m,
                                                                int                       n,
                                                                int                       nnzA,
                                                                const hipsparseMatDescr_t descrA,
                                                                const double*             csrValA,
                                                                const int* csrRowPtrA,
                                                                const int* csrColIndA,
                                                                double     percentage,
                                                                const hipsparseMatDescr_t descrC,
                                                                const double*             csrValC,
                                                                const int*  csrRowPtrC,
                                                                const int*  csrColIndC,
                                                                pruneInfo_t info,
                                                                size_t*     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csrByPercentage_bufferSizeExt(hipsparseHandle_t         handle,
                                                                   int                       m,
                                                                   int                       n,
                                                                   int                       nnzA,
                                                                   const hipsparseMatDescr_t descrA,
                                                                   const float* csrValA,
                                                                   const int*   csrRowPtrA,
                                                                   const int*   csrColIndA,
                                                                   float        percentage,
                                                                   const hipsparseMatDescr_t descrC,
                                                                   const float* csrValC,
                                                                   const int*   csrRowPtrC,
                                                                   const int*   csrColIndC,
                                                                   pruneInfo_t  info,
                                                                   size_t*      bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csrByPercentage_bufferSizeExt(hipsparseHandle_t         handle,
                                                                   int                       m,
                                                                   int                       n,
                                                                   int                       nnzA,
                                                                   const hipsparseMatDescr_t descrA,
                                                                   const double* csrValA,
                                                                   const int*    csrRowPtrA,
                                                                   const int*    csrColIndA,
                                                                   double        percentage,
                                                                   const hipsparseMatDescr_t descrC,
                                                                   const double* csrValC,
                                                                   const int*    csrRowPtrC,
                                                                   const int*    csrColIndC,
                                                                   pruneInfo_t   info,
                                                                   size_t*       bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csrNnzByPercentage(hipsparseHandle_t         handle,
                                                        int                       m,
                                                        int                       n,
                                                        int                       nnzA,
                                                        const hipsparseMatDescr_t descrA,
                                                        const float*              csrValA,
                                                        const int*                csrRowPtrA,
                                                        const int*                csrColIndA,
                                                        float                     percentage,
                                                        const hipsparseMatDescr_t descrC,
                                                        int*                      csrRowPtrC,
                                                        int*        nnzTotalDevHostPtr,
                                                        pruneInfo_t info,
                                                        void*       buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csrNnzByPercentage(hipsparseHandle_t         handle,
                                                        int                       m,
                                                        int                       n,
                                                        int                       nnzA,
                                                        const hipsparseMatDescr_t descrA,
                                                        const double*             csrValA,
                                                        const int*                csrRowPtrA,
                                                        const int*                csrColIndA,
                                                        double                    percentage,
                                                        const hipsparseMatDescr_t descrC,
                                                        int*                      csrRowPtrC,
                                                        int*        nnzTotalDevHostPtr,
                                                        pruneInfo_t info,
                                                        void*       buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneCsr2csrByPercentage(hipsparseHandle_t         handle,
                                                     int                       m,
                                                     int                       n,
                                                     int                       nnzA,
                                                     const hipsparseMatDescr_t descrA,
                                                     const float*              csrValA,
                                                     const int*                csrRowPtrA,
                                                     const int*                csrColIndA,
                                                     float                     percentage,
                                                     const hipsparseMatDescr_t descrC,
                                                     float*                    csrValC,
                                                     const int*                csrRowPtrC,
                                                     int*                      csrColIndC,
                                                     pruneInfo_t               info,
                                                     void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneCsr2csrByPercentage(hipsparseHandle_t         handle,
                                                     int                       m,
                                                     int                       n,
                                                     int                       nnzA,
                                                     const hipsparseMatDescr_t descrA,
                                                     const double*             csrValA,
                                                     const int*                csrRowPtrA,
                                                     const int*                csrColIndA,
                                                     double                    percentage,
                                                     const hipsparseMatDescr_t descrC,
                                                     double*                   csrValC,
                                                     const int*                csrRowPtrC,
                                                     int*                      csrColIndC,
                                                     pruneInfo_t               info,
                                                     void*                     buffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseShyb2csr(hipsparseHandle_t         handle,
                                    const hipsparseMatDescr_t descrA,
                                    const hipsparseHybMat_t   hybA,
                                    float*                    csrSortedValA,
                                    int*                      csrSortedRowPtrA,
                                    int*                      csrSortedColIndA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDhyb2csr(hipsparseHandle_t         handle,
                                    const hipsparseMatDescr_t descrA,
                                    const hipsparseHybMat_t   hybA,
                                    double*                   csrSortedValA,
                                    int*                      csrSortedRowPtrA,
                                    int*                      csrSortedColIndA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseChyb2csr(hipsparseHandle_t         handle,
                                    const hipsparseMatDescr_t descrA,
                                    const hipsparseHybMat_t   hybA,
                                    hipComplex*               csrSortedValA,
                                    int*                      csrSortedRowPtrA,
                                    int*                      csrSortedColIndA)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZhyb2csr(hipsparseHandle_t         handle,
                                    const hipsparseMatDescr_t descrA,
                                    const hipsparseHybMat_t   hybA,
                                    hipDoubleComplex*         csrSortedValA,
                                    int*                      csrSortedRowPtrA,
                                    int*                      csrSortedColIndA)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSnnz(hipsparseHandle_t         handle,
                                hipsparseDirection_t      dirA,
                                int                       m,
                                int                       n,
                                const hipsparseMatDescr_t descrA,
                                const float*              A,
                                int                       lda,
                                int*                      nnzPerRowColumn,
                                int*                      nnzTotalDevHostPtr)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnnz(hipsparseHandle_t         handle,
                                hipsparseDirection_t      dirA,
                                int                       m,
                                int                       n,
                                const hipsparseMatDescr_t descrA,
                                const double*             A,
                                int                       lda,
                                int*                      nnzPerRowColumn,
                                int*                      nnzTotalDevHostPtr)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCnnz(hipsparseHandle_t         handle,
                                hipsparseDirection_t      dirA,
                                int                       m,
                                int                       n,
                                const hipsparseMatDescr_t descrA,
                                const hipComplex*         A,
                                int                       lda,
                                int*                      nnzPerRowColumn,
                                int*                      nnzTotalDevHostPtr)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZnnz(hipsparseHandle_t         handle,
                                hipsparseDirection_t      dirA,
                                int                       m,
                                int                       n,
                                const hipsparseMatDescr_t descrA,
                                const hipDoubleComplex*   A,
                                int                       lda,
                                int*                      nnzPerRowColumn,
                                int*                      nnzTotalDevHostPtr)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSdense2csr(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const float*              A,
                                      int                       ld,
                                      const int*                nnzPerRow,
                                      float*                    csrVal,
                                      int*                      csrRowPtr,
                                      int*                      csrColInd)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDdense2csr(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const double*             A,
                                      int                       ld,
                                      const int*                nnzPerRow,
                                      double*                   csrVal,
                                      int*                      csrRowPtr,
                                      int*                      csrColInd)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCdense2csr(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipComplex*         A,
                                      int                       ld,
                                      const int*                nnzPerRow,
                                      hipComplex*               csrVal,
                                      int*                      csrRowPtr,
                                      int*                      csrColInd)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZdense2csr(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipDoubleComplex*   A,
                                      int                       ld,
                                      const int*                nnzPerRow,
                                      hipDoubleComplex*         csrVal,
                                      int*                      csrRowPtr,
                                      int*                      csrColInd)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csr_bufferSize(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       n,
                                                      const float*              A,
                                                      int                       lda,
                                                      const float*              threshold,
                                                      const hipsparseMatDescr_t descr,
                                                      const float*              csrVal,
                                                      const int*                csrRowPtr,
                                                      const int*                csrColInd,
                                                      size_t*                   bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csr_bufferSize(hipsparseHandle_t         handle,
                                                      int                       m,
                                                      int                       n,
                                                      const double*             A,
                                                      int                       lda,
                                                      const double*             threshold,
                                                      const hipsparseMatDescr_t descr,
                                                      const double*             csrVal,
                                                      const int*                csrRowPtr,
                                                      const int*                csrColInd,
                                                      size_t*                   bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csr_bufferSizeExt(hipsparseHandle_t         handle,
                                                         int                       m,
                                                         int                       n,
                                                         const float*              A,
                                                         int                       lda,
                                                         const float*              threshold,
                                                         const hipsparseMatDescr_t descr,
                                                         const float*              csrVal,
                                                         const int*                csrRowPtr,
                                                         const int*                csrColInd,
                                                         size_t*                   bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csr_bufferSizeExt(hipsparseHandle_t         handle,
                                                         int                       m,
                                                         int                       n,
                                                         const double*             A,
                                                         int                       lda,
                                                         const double*             threshold,
                                                         const hipsparseMatDescr_t descr,
                                                         const double*             csrVal,
                                                         const int*                csrRowPtr,
                                                         const int*                csrColInd,
                                                         size_t*                   bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csrNnz(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       n,
                                              const float*              A,
                                              int                       lda,
                                              const float*              threshold,
                                              const hipsparseMatDescr_t descr,
                                              int*                      csrRowPtr,
                                              int*                      nnzTotalDevHostPtr,
                                              void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csrNnz(hipsparseHandle_t         handle,
                                              int                       m,
                                              int                       n,
                                              const double*             A,
                                              int                       lda,
                                              const double*             threshold,
                                              const hipsparseMatDescr_t descr,
                                              int*                      csrRowPtr,
                                              int*                      nnzTotalDevHostPtr,
                                              void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csr(hipsparseHandle_t         handle,
                                           int                       m,
                                           int                       n,
                                           const float*              A,
                                           int                       lda,
                                           const float*              threshold,
                                           const hipsparseMatDescr_t descr,
                                           float*                    csrVal,
                                           const int*                csrRowPtr,
                                           int*                      csrColInd,
                                           void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csr(hipsparseHandle_t         handle,
                                           int                       m,
                                           int                       n,
                                           const double*             A,
                                           int                       lda,
                                           const double*             threshold,
                                           const hipsparseMatDescr_t descr,
                                           double*                   csrVal,
                                           const int*                csrRowPtr,
                                           int*                      csrColInd,
                                           void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csrByPercentage_bufferSize(hipsparseHandle_t handle,
                                                                  int               m,
                                                                  int               n,
                                                                  const float*      A,
                                                                  int               lda,
                                                                  float             percentage,
                                                                  const hipsparseMatDescr_t descr,
                                                                  const float*              csrVal,
                                                                  const int*  csrRowPtr,
                                                                  const int*  csrColInd,
                                                                  pruneInfo_t info,
                                                                  size_t*     bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csrByPercentage_bufferSize(hipsparseHandle_t handle,
                                                                  int               m,
                                                                  int               n,
                                                                  const double*     A,
                                                                  int               lda,
                                                                  double            percentage,
                                                                  const hipsparseMatDescr_t descr,
                                                                  const double*             csrVal,
                                                                  const int*  csrRowPtr,
                                                                  const int*  csrColInd,
                                                                  pruneInfo_t info,
                                                                  size_t*     bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseSpruneDense2csrByPercentage_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       const float*              A,
                                                       int                       lda,
                                                       float                     percentage,
                                                       const hipsparseMatDescr_t descr,
                                                       const float*              csrVal,
                                                       const int*                csrRowPtr,
                                                       const int*                csrColInd,
                                                       pruneInfo_t               info,
                                                       size_t*                   bufferSize)
{

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t
    hipsparseDpruneDense2csrByPercentage_bufferSizeExt(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       const double*             A,
                                                       int                       lda,
                                                       double                    percentage,
                                                       const hipsparseMatDescr_t descr,
                                                       const double*             csrVal,
                                                       const int*                csrRowPtr,
                                                       const int*                csrColInd,
                                                       pruneInfo_t               info,
                                                       size_t*                   bufferSize)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csrNnzByPercentage(hipsparseHandle_t         handle,
                                                          int                       m,
                                                          int                       n,
                                                          const float*              A,
                                                          int                       lda,
                                                          float                     percentage,
                                                          const hipsparseMatDescr_t descr,
                                                          int*                      csrRowPtr,
                                                          int*        nnzTotalDevHostPtr,
                                                          pruneInfo_t info,
                                                          void*       buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csrNnzByPercentage(hipsparseHandle_t         handle,
                                                          int                       m,
                                                          int                       n,
                                                          const double*             A,
                                                          int                       lda,
                                                          double                    percentage,
                                                          const hipsparseMatDescr_t descr,
                                                          int*                      csrRowPtr,
                                                          int*        nnzTotalDevHostPtr,
                                                          pruneInfo_t info,
                                                          void*       buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpruneDense2csrByPercentage(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       const float*              A,
                                                       int                       lda,
                                                       float                     percentage,
                                                       const hipsparseMatDescr_t descr,
                                                       float*                    csrVal,
                                                       const int*                csrRowPtr,
                                                       int*                      csrColInd,
                                                       pruneInfo_t               info,
                                                       void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDpruneDense2csrByPercentage(hipsparseHandle_t         handle,
                                                       int                       m,
                                                       int                       n,
                                                       const double*             A,
                                                       int                       lda,
                                                       double                    percentage,
                                                       const hipsparseMatDescr_t descr,
                                                       double*                   csrVal,
                                                       const int*                csrRowPtr,
                                                       int*                      csrColInd,
                                                       pruneInfo_t               info,
                                                       void*                     buffer)
{


    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSdense2csc(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const float*              A,
                                      int                       ld,
                                      const int*                nnz_per_columns,
                                      float*                    cscVal,
                                      int*                      cscRowInd,
                                      int*                      cscColPtr)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_sdense2csc((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                A,
    //                                                ld,
    //                                                nnz_per_columns,
    //                                                cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDdense2csc(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const double*             A,
                                      int                       ld,
                                      const int*                nnz_per_columns,
                                      double*                   cscVal,
                                      int*                      cscRowInd,
                                      int*                      cscColPtr)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_ddense2csc((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                A,
    //                                                ld,
    //                                                nnz_per_columns,
    //                                                cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCdense2csc(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipComplex*         A,
                                      int                       ld,
                                      const int*                nnz_per_columns,
                                      hipComplex*               cscVal,
                                      int*                      cscRowInd,
                                      int*                      cscColPtr)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_cdense2csc((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_float_complex*)A,
    //                                                ld,
    //                                                nnz_per_columns,
    //                                                (rocsparse_float_complex*)cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZdense2csc(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipDoubleComplex*   A,
                                      int                       ld,
                                      const int*                nnz_per_columns,
                                      hipDoubleComplex*         cscVal,
                                      int*                      cscRowInd,
                                      int*                      cscColPtr)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_zdense2csc((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_double_complex*)A,
    //                                                ld,
    //                                                nnz_per_columns,
    //                                                (rocsparse_double_complex*)cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const float*              csrVal,
                                      const int*                csrRowPtr,
                                      const int*                csrColInd,
                                      float*                    A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_scsr2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                csrVal,
    //                                                csrRowPtr,
    //                                                csrColInd,
    //                                                A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const double*             csrVal,
                                      const int*                csrRowPtr,
                                      const int*                csrColInd,
                                      double*                   A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dcsr2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                csrVal,
    //                                                csrRowPtr,
    //                                                csrColInd,
    //                                                A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipComplex*         csrVal,
                                      const int*                csrRowPtr,
                                      const int*                csrColInd,
                                      hipComplex*               A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_ccsr2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_float_complex*)csrVal,
    //                                                csrRowPtr,
    //                                                csrColInd,
    //                                                (rocsparse_float_complex*)A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipDoubleComplex*   csrVal,
                                      const int*                csrRowPtr,
                                      const int*                csrColInd,
                                      hipDoubleComplex*         A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_zcsr2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_double_complex*)csrVal,
    //                                                csrRowPtr,
    //                                                csrColInd,
    //                                                (rocsparse_double_complex*)A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsc2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const float*              cscVal,
                                      const int*                cscRowInd,
                                      const int*                cscColPtr,
                                      float*                    A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_scsc2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd,
    //                                                A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsc2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const double*             cscVal,
                                      const int*                cscRowInd,
                                      const int*                cscColPtr,
                                      double*                   A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dcsc2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd,
    //                                                A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsc2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipComplex*         cscVal,
                                      const int*                cscRowInd,
                                      const int*                cscColPtr,
                                      hipComplex*               A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_ccsc2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_float_complex*)cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd,
    //                                                (rocsparse_float_complex*)A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsc2dense(hipsparseHandle_t         handle,
                                      int                       m,
                                      int                       n,
                                      const hipsparseMatDescr_t descr,
                                      const hipDoubleComplex*   cscVal,
                                      const int*                cscRowInd,
                                      const int*                cscColPtr,
                                      hipDoubleComplex*         A,
                                      int                       ld)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_zcsc2dense((rocsparse_handle)handle,
    //                                                m,
    //                                                n,
    //                                                (const rocsparse_mat_descr)descr,
    //                                                (const rocsparse_double_complex*)cscVal,
    //                                                cscColPtr,
    //                                                cscRowInd,
    //                                                (rocsparse_double_complex*)A,
    //                                                ld));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsr2bsrNnz(hipsparseHandle_t         handle,
                                       hipsparseDirection_t      dirA,
                                       int                       m,
                                       int                       n,
                                       const hipsparseMatDescr_t descrA,
                                       const int*                csrRowPtrA,
                                       const int*                csrColIndA,
                                       int                       blockDim,
                                       const hipsparseMatDescr_t descrC,
                                       int*                      bsrRowPtrC,
                                       int*                      bsrNnzb)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_csr2bsr_nnz((rocsparse_handle)handle,
    //                                                 hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                 m,
    //                                                 n,
    //                                                 (const rocsparse_mat_descr)descrA,
    //                                                 csrRowPtrA,
    //                                                 csrColIndA,
    //                                                 blockDim,
    //                                                 (const rocsparse_mat_descr)descrC,
    //                                                 bsrRowPtrC,
    //                                                 bsrNnzb));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSnnz_compress(hipsparseHandle_t         handle,
                                         int                       m,
                                         const hipsparseMatDescr_t descrA,
                                         const float*              csrValA,
                                         const int*                csrRowPtrA,
                                         int*                      nnzPerRow,
                                         int*                      nnzC,
                                         float                     tol)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_snnz_compress((rocsparse_handle)handle,
    //                                                   m,
    //                                                   (const rocsparse_mat_descr)descrA,
    //                                                   csrValA,
    //                                                   csrRowPtrA,
    //                                                   nnzPerRow,
    //                                                   nnzC,
    //                                                   tol));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnnz_compress(hipsparseHandle_t         handle,
                                         int                       m,
                                         const hipsparseMatDescr_t descrA,
                                         const double*             csrValA,
                                         const int*                csrRowPtrA,
                                         int*                      nnzPerRow,
                                         int*                      nnzC,
                                         double                    tol)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dnnz_compress((rocsparse_handle)handle,
    //                                                   m,
    //                                                   (const rocsparse_mat_descr)descrA,
    //                                                   csrValA,
    //                                                   csrRowPtrA,
    //                                                   nnzPerRow,
    //                                                   nnzC,
    //                                                   tol));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCnnz_compress(hipsparseHandle_t         handle,
                                         int                       m,
                                         const hipsparseMatDescr_t descrA,
                                         const hipComplex*         csrValA,
                                         const int*                csrRowPtrA,
                                         int*                      nnzPerRow,
                                         int*                      nnzC,
                                         hipComplex                tol)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_cnnz_compress((rocsparse_handle)handle,
    //                                                   m,
    //                                                   (const rocsparse_mat_descr)descrA,
    //                                                   (const rocsparse_float_complex*)csrValA,
    //                                                   csrRowPtrA,
    //                                                   nnzPerRow,
    //                                                   nnzC,
    //                                                   {hipCrealf(tol), hipCimagf(tol)}));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZnnz_compress(hipsparseHandle_t         handle,
                                         int                       m,
                                         const hipsparseMatDescr_t descrA,
                                         const hipDoubleComplex*   csrValA,
                                         const int*                csrRowPtrA,
                                         int*                      nnzPerRow,
                                         int*                      nnzC,
                                         hipDoubleComplex          tol)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_znnz_compress((rocsparse_handle)handle,
    //                                                   m,
    //                                                   (const rocsparse_mat_descr)descrA,
    //                                                   (const rocsparse_double_complex*)csrValA,
    //                                                   csrRowPtrA,
    //                                                   nnzPerRow,
    //                                                   nnzC,
    //                                                   {hipCreal(tol), hipCimag(tol)}));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcoo2csr(hipsparseHandle_t    handle,
                                    const int*           cooRowInd,
                                    int                  nnz,
                                    int                  m,
                                    int*                 csrRowPtr,
                                    hipsparseIndexBase_t idxBase)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateIdentityPermutation(hipsparseHandle_t handle, int n, int* p)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrsort_bufferSizeExt(hipsparseHandle_t handle,
                                                  int               m,
                                                  int               n,
                                                  int               nnz,
                                                  const int*        csrRowPtr,
                                                  const int*        csrColInd,
                                                  size_t*           pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcsrsort(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    const int*                csrRowPtr,
                                    int*                      csrColInd,
                                    int*                      P,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcscsort_bufferSizeExt(hipsparseHandle_t handle,
                                                  int               m,
                                                  int               n,
                                                  int               nnz,
                                                  const int*        cscColPtr,
                                                  const int*        cscRowInd,
                                                  size_t*           pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcscsort(hipsparseHandle_t         handle,
                                    int                       m,
                                    int                       n,
                                    int                       nnz,
                                    const hipsparseMatDescr_t descrA,
                                    const int*                cscColPtr,
                                    int*                      cscRowInd,
                                    int*                      P,
                                    void*                     pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcoosort_bufferSizeExt(hipsparseHandle_t handle,
                                                  int               m,
                                                  int               n,
                                                  int               nnz,
                                                  const int*        cooRows,
                                                  const int*        cooCols,
                                                  size_t*           pBufferSizeInBytes)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcoosortByRow(hipsparseHandle_t handle,
                                         int               m,
                                         int               n,
                                         int               nnz,
                                         int*              cooRows,
                                         int*              cooCols,
                                         int*              P,
                                         void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXcoosortByColumn(hipsparseHandle_t handle,
                                            int               m,
                                            int               n,
                                            int               nnz,
                                            int*              cooRows,
                                            int*              cooCols,
                                            int*              P,
                                            void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgebsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                   hipsparseDirection_t      dirA,
                                                   int                       mb,
                                                   int                       nb,
                                                   int                       nnzb,
                                                   const hipsparseMatDescr_t descrA,
                                                   const float*              bsrValA,
                                                   const int*                bsrRowPtrA,
                                                   const int*                bsrColIndA,
                                                   int                       rowBlockDimA,
                                                   int                       colBlockDimA,
                                                   int                       rowBlockDimC,
                                                   int                       colBlockDimC,
                                                   int*                      bufferSize)
{
    // size_t bufSize;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_sgebsr2gebsr_buffer_size((rocsparse_handle)handle,
    //                                        hipsparse::hipDirectionToHCCDirection(dirA),
    //                                        mb,
    //                                        nb,
    //                                        nnzb,
    //                                        (const rocsparse_mat_descr)descrA,
    //                                        bsrValA,
    //                                        bsrRowPtrA,
    //                                        bsrColIndA,
    //                                        rowBlockDimA,
    //                                        colBlockDimA,
    //                                        rowBlockDimC,
    //                                        colBlockDimC,
    //                                        bufferSize != nullptr ? &bufSize : nullptr));

    // if(bufferSize != nullptr)
    // {
    //     *bufferSize = bufSize;
    // }
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgebsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                   hipsparseDirection_t      dirA,
                                                   int                       mb,
                                                   int                       nb,
                                                   int                       nnzb,
                                                   const hipsparseMatDescr_t descrA,
                                                   const double*             bsrValA,
                                                   const int*                bsrRowPtrA,
                                                   const int*                bsrColIndA,
                                                   int                       rowBlockDimA,
                                                   int                       colBlockDimA,
                                                   int                       rowBlockDimC,
                                                   int                       colBlockDimC,
                                                   int*                      bufferSize)
{
    // size_t bufSize;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_dgebsr2gebsr_buffer_size((rocsparse_handle)handle,
    //                                        hipsparse::hipDirectionToHCCDirection(dirA),
    //                                        mb,
    //                                        nb,
    //                                        nnzb,
    //                                        (const rocsparse_mat_descr)descrA,
    //                                        bsrValA,
    //                                        bsrRowPtrA,
    //                                        bsrColIndA,
    //                                        rowBlockDimA,
    //                                        colBlockDimA,
    //                                        rowBlockDimC,
    //                                        colBlockDimC,
    //                                        bufferSize != nullptr ? &bufSize : nullptr));
    // if(bufferSize != nullptr)
    // {
    //     *bufferSize = bufSize;
    // }
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgebsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                   hipsparseDirection_t      dirA,
                                                   int                       mb,
                                                   int                       nb,
                                                   int                       nnzb,
                                                   const hipsparseMatDescr_t descrA,
                                                   const hipComplex*         bsrValA,
                                                   const int*                bsrRowPtrA,
                                                   const int*                bsrColIndA,
                                                   int                       rowBlockDimA,
                                                   int                       colBlockDimA,
                                                   int                       rowBlockDimC,
                                                   int                       colBlockDimC,
                                                   int*                      bufferSize)
{
    // size_t bufSize;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_cgebsr2gebsr_buffer_size((rocsparse_handle)handle,
    //                                        hipsparse::hipDirectionToHCCDirection(dirA),
    //                                        mb,
    //                                        nb,
    //                                        nnzb,
    //                                        (const rocsparse_mat_descr)descrA,
    //                                        (const rocsparse_float_complex*)bsrValA,
    //                                        bsrRowPtrA,
    //                                        bsrColIndA,
    //                                        rowBlockDimA,
    //                                        colBlockDimA,
    //                                        rowBlockDimC,
    //                                        colBlockDimC,
    //                                        bufferSize != nullptr ? &bufSize : nullptr));
    // if(bufferSize != nullptr)
    // {
    //     *bufferSize = bufSize;
    // }
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgebsr2gebsr_bufferSize(hipsparseHandle_t         handle,
                                                   hipsparseDirection_t      dirA,
                                                   int                       mb,
                                                   int                       nb,
                                                   int                       nnzb,
                                                   const hipsparseMatDescr_t descrA,
                                                   const hipDoubleComplex*   bsrValA,
                                                   const int*                bsrRowPtrA,
                                                   const int*                bsrColIndA,
                                                   int                       rowBlockDimA,
                                                   int                       colBlockDimA,
                                                   int                       rowBlockDimC,
                                                   int                       colBlockDimC,
                                                   int*                      bufferSize)
{
    // size_t bufSize;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_zgebsr2gebsr_buffer_size((rocsparse_handle)handle,
    //                                        hipsparse::hipDirectionToHCCDirection(dirA),
    //                                        mb,
    //                                        nb,
    //                                        nnzb,
    //                                        (const rocsparse_mat_descr)descrA,
    //                                        (const rocsparse_double_complex*)bsrValA,
    //                                        bsrRowPtrA,
    //                                        bsrColIndA,
    //                                        rowBlockDimA,
    //                                        colBlockDimA,
    //                                        rowBlockDimC,
    //                                        colBlockDimC,
    //                                        bufferSize != nullptr ? &bufSize : nullptr));
    // if(bufferSize != nullptr)
    // {
    //     *bufferSize = bufSize;
    // }
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseXgebsr2gebsrNnz(hipsparseHandle_t         handle,
                                           hipsparseDirection_t      dirA,
                                           int                       mb,
                                           int                       nb,
                                           int                       nnzb,
                                           const hipsparseMatDescr_t descrA,
                                           const int*                bsrRowPtrA,
                                           const int*                bsrColIndA,
                                           int                       rowBlockDimA,
                                           int                       colBlockDimA,
                                           const hipsparseMatDescr_t descrC,
                                           int*                      bsrRowPtrC,
                                           int                       rowBlockDimC,
                                           int                       colBlockDimC,
                                           int*                      nnzTotalDevHostPtr,
                                           void*                     buffer)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_gebsr2gebsr_nnz((rocsparse_handle)handle,
    //                                                     hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                     mb,
    //                                                     nb,
    //                                                     nnzb,
    //                                                     (const rocsparse_mat_descr)descrA,
    //                                                     bsrRowPtrA,
    //                                                     bsrColIndA,
    //                                                     rowBlockDimA,
    //                                                     colBlockDimA,
    //                                                     (const rocsparse_mat_descr)descrC,
    //                                                     bsrRowPtrC,
    //                                                     rowBlockDimC,
    //                                                     colBlockDimC,
    //                                                     nnzTotalDevHostPtr,
    //                                                     buffer));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgebsr2gebsr(hipsparseHandle_t         handle,
                                        hipsparseDirection_t      dirA,
                                        int                       mb,
                                        int                       nb,
                                        int                       nnzb,
                                        const hipsparseMatDescr_t descrA,
                                        const float*              bsrValA,
                                        const int*                bsrRowPtrA,
                                        const int*                bsrColIndA,
                                        int                       rowBlockDimA,
                                        int                       colBlockDimA,
                                        const hipsparseMatDescr_t descrC,
                                        float*                    bsrValC,
                                        int*                      bsrRowPtrC,
                                        int*                      bsrColIndC,
                                        int                       rowBlockDimC,
                                        int                       colBlockDimC,
                                        void*                     buffer)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_sgebsr2gebsr((rocsparse_handle)handle,
    //                                                  hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                  mb,
    //                                                  nb,
    //                                                  nnzb,
    //                                                  (const rocsparse_mat_descr)descrA,
    //                                                  bsrValA,
    //                                                  bsrRowPtrA,
    //                                                  bsrColIndA,
    //                                                  rowBlockDimA,
    //                                                  colBlockDimA,
    //                                                  (const rocsparse_mat_descr)descrC,
    //                                                  bsrValC,
    //                                                  bsrRowPtrC,
    //                                                  bsrColIndC,
    //                                                  rowBlockDimC,
    //                                                  colBlockDimC,
    //                                                  buffer));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgebsr2gebsr(hipsparseHandle_t         handle,
                                        hipsparseDirection_t      dirA,
                                        int                       mb,
                                        int                       nb,
                                        int                       nnzb,
                                        const hipsparseMatDescr_t descrA,
                                        const double*             bsrValA,
                                        const int*                bsrRowPtrA,
                                        const int*                bsrColIndA,
                                        int                       rowBlockDimA,
                                        int                       colBlockDimA,
                                        const hipsparseMatDescr_t descrC,
                                        double*                   bsrValC,
                                        int*                      bsrRowPtrC,
                                        int*                      bsrColIndC,
                                        int                       rowBlockDimC,
                                        int                       colBlockDimC,
                                        void*                     buffer)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dgebsr2gebsr((rocsparse_handle)handle,
    //                                                  hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                  mb,
    //                                                  nb,
    //                                                  nnzb,
    //                                                  (const rocsparse_mat_descr)descrA,
    //                                                  bsrValA,
    //                                                  bsrRowPtrA,
    //                                                  bsrColIndA,
    //                                                  rowBlockDimA,
    //                                                  colBlockDimA,
    //                                                  (const rocsparse_mat_descr)descrC,
    //                                                  bsrValC,
    //                                                  bsrRowPtrC,
    //                                                  bsrColIndC,
    //                                                  rowBlockDimC,
    //                                                  colBlockDimC,
    //                                                  buffer));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgebsr2gebsr(hipsparseHandle_t         handle,
                                        hipsparseDirection_t      dirA,
                                        int                       mb,
                                        int                       nb,
                                        int                       nnzb,
                                        const hipsparseMatDescr_t descrA,
                                        const hipComplex*         bsrValA,
                                        const int*                bsrRowPtrA,
                                        const int*                bsrColIndA,
                                        int                       rowBlockDimA,
                                        int                       colBlockDimA,
                                        const hipsparseMatDescr_t descrC,
                                        hipComplex*               bsrValC,
                                        int*                      bsrRowPtrC,
                                        int*                      bsrColIndC,
                                        int                       rowBlockDimC,
                                        int                       colBlockDimC,
                                        void*                     buffer)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_cgebsr2gebsr((rocsparse_handle)handle,
    //                                                  hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                  mb,
    //                                                  nb,
    //                                                  nnzb,
    //                                                  (const rocsparse_mat_descr)descrA,
    //                                                  (const rocsparse_float_complex*)bsrValA,
    //                                                  bsrRowPtrA,
    //                                                  bsrColIndA,
    //                                                  rowBlockDimA,
    //                                                  colBlockDimA,
    //                                                  (const rocsparse_mat_descr)descrC,
    //                                                  (rocsparse_float_complex*)bsrValC,
    //                                                  bsrRowPtrC,
    //                                                  bsrColIndC,
    //                                                  rowBlockDimC,
    //                                                  colBlockDimC,
    //                                                  buffer));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgebsr2gebsr(hipsparseHandle_t         handle,
                                        hipsparseDirection_t      dirA,
                                        int                       mb,
                                        int                       nb,
                                        int                       nnzb,
                                        const hipsparseMatDescr_t descrA,
                                        const hipDoubleComplex*   bsrValA,
                                        const int*                bsrRowPtrA,
                                        const int*                bsrColIndA,
                                        int                       rowBlockDimA,
                                        int                       colBlockDimA,
                                        const hipsparseMatDescr_t descrC,
                                        hipDoubleComplex*         bsrValC,
                                        int*                      bsrRowPtrC,
                                        int*                      bsrColIndC,
                                        int                       rowBlockDimC,
                                        int                       colBlockDimC,
                                        void*                     buffer)
{
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_zgebsr2gebsr((rocsparse_handle)handle,
    //                                                  hipsparse::hipDirectionToHCCDirection(dirA),
    //                                                  mb,
    //                                                  nb,
    //                                                  nnzb,
    //                                                  (const rocsparse_mat_descr)descrA,
    //                                                  (const rocsparse_double_complex*)bsrValA,
    //                                                  bsrRowPtrA,
    //                                                  bsrColIndA,
    //                                                  rowBlockDimA,
    //                                                  colBlockDimA,
    //                                                  (const rocsparse_mat_descr)descrC,
    //                                                  (rocsparse_double_complex*)bsrValC,
    //                                                  bsrRowPtrC,
    //                                                  bsrColIndC,
    //                                                  rowBlockDimC,
    //                                                  colBlockDimC,
    //                                                  buffer));
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsru2csr_bufferSizeExt(hipsparseHandle_t handle,
                                                   int               m,
                                                   int               n,
                                                   int               nnz,
                                                   float*            csrVal,
                                                   const int*        csrRowPtr,
                                                   int*              csrColInd,
                                                   csru2csrInfo_t    info,
                                                   size_t*           pBufferSizeInBytes)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0 and pBufferSizeInBytes must be valid
    //     if(nnz != 0 || pBufferSizeInBytes == nullptr)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     *pBufferSizeInBytes = 4;

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr || info == nullptr
    //    || pBufferSizeInBytes == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Determine required buffer size for CSR sort
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseXcsrsort_bufferSizeExt(
    //     handle, m, n, nnz, csrRowPtr, csrColInd, pBufferSizeInBytes));

    // // We need a buffer of at least nnz * sizeof(float)
    // size_t min_size     = nnz * sizeof(float);
    // *pBufferSizeInBytes = std::max(*pBufferSizeInBytes, min_size);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsru2csr_bufferSizeExt(hipsparseHandle_t handle,
                                                   int               m,
                                                   int               n,
                                                   int               nnz,
                                                   double*           csrVal,
                                                   const int*        csrRowPtr,
                                                   int*              csrColInd,
                                                   csru2csrInfo_t    info,
                                                   size_t*           pBufferSizeInBytes)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0 and pBufferSizeInBytes must be valid
    //     if(nnz != 0 || pBufferSizeInBytes == nullptr)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     *pBufferSizeInBytes = 4;

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr || info == nullptr
    //    || pBufferSizeInBytes == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Determine required buffer size for CSR sort
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseXcsrsort_bufferSizeExt(
    //     handle, m, n, nnz, csrRowPtr, csrColInd, pBufferSizeInBytes));

    // // We need a buffer of at least nnz * sizeof(double)
    // size_t min_size     = nnz * sizeof(double);
    // *pBufferSizeInBytes = std::max(*pBufferSizeInBytes, min_size);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsru2csr_bufferSizeExt(hipsparseHandle_t handle,
                                                   int               m,
                                                   int               n,
                                                   int               nnz,
                                                   hipComplex*       csrVal,
                                                   const int*        csrRowPtr,
                                                   int*              csrColInd,
                                                   csru2csrInfo_t    info,
                                                   size_t*           pBufferSizeInBytes)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0 and pBufferSizeInBytes must be valid
    //     if(nnz != 0 || pBufferSizeInBytes == nullptr)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     *pBufferSizeInBytes = 4;

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr || info == nullptr
    //    || pBufferSizeInBytes == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Determine required buffer size for CSR sort
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseXcsrsort_bufferSizeExt(
    //     handle, m, n, nnz, csrRowPtr, csrColInd, pBufferSizeInBytes));

    // // We need a buffer of at least nnz * sizeof(hipComplex)
    // size_t min_size     = nnz * sizeof(hipComplex);
    // *pBufferSizeInBytes = std::max(*pBufferSizeInBytes, min_size);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsru2csr_bufferSizeExt(hipsparseHandle_t handle,
                                                   int               m,
                                                   int               n,
                                                   int               nnz,
                                                   hipDoubleComplex* csrVal,
                                                   const int*        csrRowPtr,
                                                   int*              csrColInd,
                                                   csru2csrInfo_t    info,
                                                   size_t*           pBufferSizeInBytes)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0 and pBufferSizeInBytes must be valid
    //     if(nnz != 0 || pBufferSizeInBytes == nullptr)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     *pBufferSizeInBytes = 4;

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr || info == nullptr
    //    || pBufferSizeInBytes == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Determine required buffer size for CSR sort
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseXcsrsort_bufferSizeExt(
    //     handle, m, n, nnz, csrRowPtr, csrColInd, pBufferSizeInBytes));

    // // We need a buffer of at least nnz * sizeof(hipDoubleComplex)
    // size_t min_size     = nnz * sizeof(hipDoubleComplex);
    // *pBufferSizeInBytes = std::max(*pBufferSizeInBytes, min_size);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsru2csr(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     float*                    csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // De-allocate permutation array, if already allocated but sizes do not match
    // if(info->P != nullptr && info->size != nnz)
    // {
    //     RETURN_IF_HIP_ERROR(hipFree(info->P));
    //     info->size = 0;
    // }

    // // Allocate memory inside info structure to keep track of the permutation
    // // if it has not yet been allocated with matching size
    // if(info->P == nullptr)
    // {
    //     // size must be 0
    //     assert(info->size == 0);

    //     RETURN_IF_HIP_ERROR(hipMalloc((void**)&info->P, sizeof(int) * nnz));

    //     info->size = nnz;
    // }

    // // Initialize permutation with identity
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateIdentityPermutation(handle, nnz, info->P));

    // // Sort CSR columns
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseXcsrsort(handle, m, n, nnz, descrA, csrRowPtr, csrColInd, info->P, pBuffer));

    // // Sort CSR values
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseSgthr(handle, nnz, csrVal, (float*)pBuffer, info->P, HIPSPARSE_INDEX_BASE_ZERO));

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Copy sorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(float) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsru2csr(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     double*                   csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // De-allocate permutation array, if already allocated but sizes do not match
    // if(info->P != nullptr && info->size != nnz)
    // {
    //     RETURN_IF_HIP_ERROR(hipFree(info->P));
    //     info->size = 0;
    // }

    // // Allocate memory inside info structure to keep track of the permutation
    // // if it has not yet been allocated with matching size
    // if(info->P == nullptr)
    // {
    //     // size must be 0
    //     assert(info->size == 0);

    //     RETURN_IF_HIP_ERROR(hipMalloc((void**)&info->P, sizeof(int) * nnz));

    //     info->size = nnz;
    // }

    // // Initialize permutation with identity
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateIdentityPermutation(handle, nnz, info->P));

    // // Sort CSR columns
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseXcsrsort(handle, m, n, nnz, descrA, csrRowPtr, csrColInd, info->P, pBuffer));

    // // Sort CSR values
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseDgthr(handle, nnz, csrVal, (double*)pBuffer, info->P, HIPSPARSE_INDEX_BASE_ZERO));

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Copy sorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(double) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsru2csr(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipComplex*               csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // De-allocate permutation array, if already allocated but sizes do not match
    // if(info->P != nullptr && info->size != nnz)
    // {
    //     RETURN_IF_HIP_ERROR(hipFree(info->P));
    //     info->size = 0;
    // }

    // // Allocate memory inside info structure to keep track of the permutation
    // // if it has not yet been allocated with matching size
    // if(info->P == nullptr)
    // {
    //     // size must be 0
    //     assert(info->size == 0);

    //     RETURN_IF_HIP_ERROR(hipMalloc((void**)&info->P, sizeof(int) * nnz));

    //     info->size = nnz;
    // }

    // // Initialize permutation with identity
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateIdentityPermutation(handle, nnz, info->P));

    // // Sort CSR columns
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseXcsrsort(handle, m, n, nnz, descrA, csrRowPtr, csrColInd, info->P, pBuffer));

    // // Sort CSR values
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCgthr(
    //     handle, nnz, csrVal, (hipComplex*)pBuffer, info->P, HIPSPARSE_INDEX_BASE_ZERO));

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Copy sorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(hipComplex) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsru2csr(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipDoubleComplex*         csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // De-allocate permutation array, if already allocated but sizes do not match
    // if(info->P != nullptr && info->size != nnz)
    // {
    //     RETURN_IF_HIP_ERROR(hipFree(info->P));
    //     info->size = 0;
    // }

    // // Allocate memory inside info structure to keep track of the permutation
    // // if it has not yet been allocated with matching size
    // if(info->P == nullptr)
    // {
    //     // size must be 0
    //     assert(info->size == 0);

    //     RETURN_IF_HIP_ERROR(hipMalloc((void**)&info->P, sizeof(int) * nnz));

    //     info->size = nnz;
    // }

    // // Initialize permutation with identity
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateIdentityPermutation(handle, nnz, info->P));

    // // Sort CSR columns
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseXcsrsort(handle, m, n, nnz, descrA, csrRowPtr, csrColInd, info->P, pBuffer));

    // // Sort CSR values
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseZgthr(
    //     handle, nnz, csrVal, (hipDoubleComplex*)pBuffer, info->P, HIPSPARSE_INDEX_BASE_ZERO));

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Copy sorted values back to csrVal
    // RETURN_IF_HIP_ERROR(hipMemcpyAsync(
    //     csrVal, pBuffer, sizeof(hipDoubleComplex) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsr2csru(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     float*                    csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Check for valid permutation array
    // if(info->P == nullptr || info->size != nnz)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Unsort CSR column indices based on the given permutation
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_isctr((rocsparse_handle)handle,
    //                                           nnz,
    //                                           csrColInd,
    //                                           info->P,
    //                                           (int*)pBuffer,
    //                                           rocsparse_index_base_zero));

    // // Copy unsorted column indices back to csrColInd
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrColInd, pBuffer, sizeof(int) * nnz, hipMemcpyDeviceToDevice, stream));

    // // Unsort CSR values based on the given permutation
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseSsctr(handle, nnz, csrVal, info->P, (float*)pBuffer, HIPSPARSE_INDEX_BASE_ZERO));

    // // Copy unsorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(float) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsr2csru(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     double*                   csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Check for valid permutation array
    // if(info->P == nullptr || info->size != nnz)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Unsort CSR column indices based on the given permutation
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_isctr((rocsparse_handle)handle,
    //                                           nnz,
    //                                           csrColInd,
    //                                           info->P,
    //                                           (int*)pBuffer,
    //                                           rocsparse_index_base_zero));

    // // Copy unsorted column indices back to csrColInd
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrColInd, pBuffer, sizeof(int) * nnz, hipMemcpyDeviceToDevice, stream));

    // // Unsort CSR values based on the given permutation
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseDsctr(handle, nnz, csrVal, info->P, (double*)pBuffer, HIPSPARSE_INDEX_BASE_ZERO));

    // // Copy unsorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(double) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsr2csru(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipComplex*               csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Check for valid permutation array
    // if(info->P == nullptr || info->size != nnz)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Unsort CSR column indices based on the given permutation
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_isctr((rocsparse_handle)handle,
    //                                           nnz,
    //                                           csrColInd,
    //                                           info->P,
    //                                           (int*)pBuffer,
    //                                           rocsparse_index_base_zero));

    // // Copy unsorted column indices back to csrColInd
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrColInd, pBuffer, sizeof(int) * nnz, hipMemcpyDeviceToDevice, stream));

    // // Unsort CSR values based on the given permutation
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsctr(
    //     handle, nnz, csrVal, info->P, (hipComplex*)pBuffer, HIPSPARSE_INDEX_BASE_ZERO));

    // // Copy unsorted values back to csrVal
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrVal, pBuffer, sizeof(hipComplex) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsr2csru(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       n,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     hipDoubleComplex*         csrVal,
                                     const int*                csrRowPtr,
                                     int*                      csrColInd,
                                     csru2csrInfo_t            info,
                                     void*                     pBuffer)
{
    // // Test for bad args
    // if(handle == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Invalid sizes
    // if(m < 0 || n < 0 || nnz < 0)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Quick return
    // if(m == 0 || n == 0 || nnz == 0)
    // {
    //     // nnz must be 0
    //     if(nnz != 0)
    //     {
    //         return HIPSPARSE_STATUS_INVALID_VALUE;
    //     }

    //     return HIPSPARSE_STATUS_SUCCESS;
    // }

    // // Invalid pointers
    // if(descrA == nullptr || csrVal == nullptr || csrRowPtr == nullptr || csrColInd == nullptr
    //    || info == nullptr || pBuffer == nullptr)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Check for valid permutation array
    // if(info->P == nullptr || info->size != nnz)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // // Get stream
    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // // Unsort CSR column indices based on the given permutation
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_isctr((rocsparse_handle)handle,
    //                                           nnz,
    //                                           csrColInd,
    //                                           info->P,
    //                                           (int*)pBuffer,
    //                                           rocsparse_index_base_zero));

    // // Copy unsorted column indices back to csrColInd
    // RETURN_IF_HIP_ERROR(
    //     hipMemcpyAsync(csrColInd, pBuffer, sizeof(int) * nnz, hipMemcpyDeviceToDevice, stream));

    // // Unsort CSR values based on the given permutation
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseZsctr(
    //     handle, nnz, csrVal, info->P, (hipDoubleComplex*)pBuffer, HIPSPARSE_INDEX_BASE_ZERO));

    // // Copy unsorted values back to csrVal
    // RETURN_IF_HIP_ERROR(hipMemcpyAsync(
    //     csrVal, pBuffer, sizeof(hipDoubleComplex) * nnz, hipMemcpyDeviceToDevice, stream));

    return HIPSPARSE_STATUS_SUCCESS;
}

/* Generic API */
hipsparseStatus_t hipsparseCreateSpVec(hipsparseSpVecDescr_t* spVecDescr,
                                       int64_t                size,
                                       int64_t                nnz,
                                       void*                  indices,
                                       void*                  values,
                                       hipsparseIndexType_t   idxType,
                                       hipsparseIndexBase_t   idxBase,
                                       hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstSpVec(hipsparseConstSpVecDescr_t* spVecDescr,
                                            int64_t                     size,
                                            int64_t                     nnz,
                                            const void*                 indices,
                                            const void*                 values,
                                            hipsparseIndexType_t        idxType,
                                            hipsparseIndexBase_t        idxBase,
                                            hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroySpVec(hipsparseConstSpVecDescr_t spVecDescr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVecGet(const hipsparseSpVecDescr_t spVecDescr,
                                    int64_t*                    size,
                                    int64_t*                    nnz,
                                    void**                      indices,
                                    void**                      values,
                                    hipsparseIndexType_t*       idxType,
                                    hipsparseIndexBase_t*       idxBase,
                                    hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_spvec_get((const rocsparse_spvec_descr)spVecDescr,
    //                                               size,
    //                                               nnz,
    //                                               indices,
    //                                               values,
    //                                               idxType != nullptr ? &hcc_index_type : nullptr,
    //                                               idxBase != nullptr ? &hcc_index_base : nullptr,
    //                                               valueType != nullptr ? &hcc_data_type : nullptr));

    // *idxType   = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase   = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstSpVecGet(hipsparseConstSpVecDescr_t spVecDescr,
                                         int64_t*                   size,
                                         int64_t*                   nnz,
                                         const void**               indices,
                                         const void**               values,
                                         hipsparseIndexType_t*      idxType,
                                         hipsparseIndexBase_t*      idxBase,
                                         hipDataType*               valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_spvec_get((rocsparse_const_spvec_descr)spVecDescr,
    //                               size,
    //                               nnz,
    //                               indices,
    //                               values,
    //                               idxType != nullptr ? &hcc_index_type : nullptr,
    //                               idxBase != nullptr ? &hcc_index_base : nullptr,
    //                               valueType != nullptr ? &hcc_data_type : nullptr));

    // *idxType   = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase   = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVecGetIndexBase(const hipsparseConstSpVecDescr_t spVecDescr,
                                             hipsparseIndexBase_t*            idxBase)
{
    // rocsparse_index_base hcc_index_base;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_spvec_get_index_base((const rocsparse_const_spvec_descr)spVecDescr,
    //                                    idxBase != nullptr ? &hcc_index_base : nullptr));

    // *idxBase = hipsparse::HCCBaseToHIPBase(hcc_index_base);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVecGetValues(const hipsparseSpVecDescr_t spVecDescr, void** values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstSpVecGetValues(hipsparseConstSpVecDescr_t spVecDescr,
                                               const void**               values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVecSetValues(hipsparseSpVecDescr_t spVecDescr, void* values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCoo(hipsparseSpMatDescr_t* spMatDescr,
                                     int64_t                rows,
                                     int64_t                cols,
                                     int64_t                nnz,
                                     void*                  cooRowInd,
                                     void*                  cooColInd,
                                     void*                  cooValues,
                                     hipsparseIndexType_t   cooIdxType,
                                     hipsparseIndexBase_t   idxBase,
                                     hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstCoo(hipsparseConstSpMatDescr_t* spMatDescr,
                                          int64_t                     rows,
                                          int64_t                     cols,
                                          int64_t                     nnz,
                                          const void*                 cooRowInd,
                                          const void*                 cooColInd,
                                          const void*                 cooValues,
                                          hipsparseIndexType_t        cooIdxType,
                                          hipsparseIndexBase_t        idxBase,
                                          hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateBlockedEll(hipsparseSpMatDescr_t* spMatDescr,
                                            int64_t                rows,
                                            int64_t                cols,
                                            int64_t                ellBlockSize,
                                            int64_t                ellCols,
                                            void*                  ellColInd,
                                            void*                  ellValue,
                                            hipsparseIndexType_t   ellIdxType,
                                            hipsparseIndexBase_t   idxBase,
                                            hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstBlockedEll(hipsparseConstSpMatDescr_t* spMatDescr,
                                                 int64_t                     rows,
                                                 int64_t                     cols,
                                                 int64_t                     ellBlockSize,
                                                 int64_t                     ellCols,
                                                 const void*                 ellColInd,
                                                 const void*                 ellValue,
                                                 hipsparseIndexType_t        ellIdxType,
                                                 hipsparseIndexBase_t        idxBase,
                                                 hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCooAoS(hipsparseSpMatDescr_t* spMatDescr,
                                        int64_t                rows,
                                        int64_t                cols,
                                        int64_t                nnz,
                                        void*                  cooInd,
                                        void*                  cooValues,
                                        hipsparseIndexType_t   cooIdxType,
                                        hipsparseIndexBase_t   idxBase,
                                        hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}


hipsparseStatus_t hipsparseCreateCsr(hipsparseSpMatDescr_t* spMatDescr,
                                     int64_t                rows,
                                     int64_t                cols,
                                     int64_t                nnz,
                                     void*                  csrRowOffsets,
                                     void*                  csrColInd,
                                     void*                  csrValues,
                                     hipsparseIndexType_t   csrRowOffsetsType,
                                     hipsparseIndexType_t   csrColIndType,
                                     hipsparseIndexBase_t   idxBase,
                                     hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstCsr(hipsparseConstSpMatDescr_t* spMatDescr,
                                          int64_t                     rows,
                                          int64_t                     cols,
                                          int64_t                     nnz,
                                          const void*                 csrRowOffsets,
                                          const void*                 csrColInd,
                                          const void*                 csrValues,
                                          hipsparseIndexType_t        csrRowOffsetsType,
                                          hipsparseIndexType_t        csrColIndType,
                                          hipsparseIndexBase_t        idxBase,
                                          hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateCsc(hipsparseSpMatDescr_t* spMatDescr,
                                     int64_t                rows,
                                     int64_t                cols,
                                     int64_t                nnz,
                                     void*                  cscColOffsets,
                                     void*                  cscRowInd,
                                     void*                  cscValues,
                                     hipsparseIndexType_t   cscColOffsetsType,
                                     hipsparseIndexType_t   cscRowIndType,
                                     hipsparseIndexBase_t   idxBase,
                                     hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstCsc(hipsparseConstSpMatDescr_t* spMatDescr,
                                          int64_t                     rows,
                                          int64_t                     cols,
                                          int64_t                     nnz,
                                          const void*                 cscColOffsets,
                                          const void*                 cscRowInd,
                                          const void*                 cscValues,
                                          hipsparseIndexType_t        cscColOffsetsType,
                                          hipsparseIndexType_t        cscRowIndType,
                                          hipsparseIndexBase_t        idxBase,
                                          hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroySpMat(hipsparseConstSpMatDescr_t spMatDescr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseBlockedEllGet(const hipsparseSpMatDescr_t spMatDescr,
                                         int64_t*                    rows,
                                         int64_t*                    cols,
                                         int64_t*                    ellBlockSize,
                                         int64_t*                    ellCols,
                                         void**                      ellColInd,
                                         void**                      ellValue,
                                         hipsparseIndexType_t*       ellIdxType,
                                         hipsparseIndexBase_t*       idxBase,
                                         hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;
    // rocsparse_direction  hcc_block_direction;

    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_bell_get((const rocsparse_spmat_descr)spMatDescr,
    //                                              rows,
    //                                              cols,
    //                                              &hcc_block_direction,
    //                                              ellBlockSize,
    //                                              ellCols,
    //                                              ellColInd,
    //                                              ellValue,
    //                                              ellIdxType != nullptr ? &hcc_index_type : nullptr,
    //                                              idxBase != nullptr ? &hcc_index_base : nullptr,
    //                                              valueType != nullptr ? &hcc_data_type : nullptr));

    // *ellIdxType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase    = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType  = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstBlockedEllGet(hipsparseConstSpMatDescr_t spMatDescr,
                                              int64_t*                   rows,
                                              int64_t*                   cols,
                                              int64_t*                   ellBlockSize,
                                              int64_t*                   ellCols,
                                              const void**               ellColInd,
                                              const void**               ellValue,
                                              hipsparseIndexType_t*      ellIdxType,
                                              hipsparseIndexBase_t*      idxBase,
                                              hipDataType*               valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;
    // rocsparse_direction  hcc_block_direction;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_bell_get((const rocsparse_const_spmat_descr)spMatDescr,
    //                              rows,
    //                              cols,
    //                              &hcc_block_direction,
    //                              ellBlockSize,
    //                              ellCols,
    //                              ellColInd,
    //                              ellValue,
    //                              ellIdxType != nullptr ? &hcc_index_type : nullptr,
    //                              idxBase != nullptr ? &hcc_index_base : nullptr,
    //                              valueType != nullptr ? &hcc_data_type : nullptr));

    // *ellIdxType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase    = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType  = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCooGet(const hipsparseSpMatDescr_t spMatDescr,
                                  int64_t*                    rows,
                                  int64_t*                    cols,
                                  int64_t*                    nnz,
                                  void**                      cooRowInd,
                                  void**                      cooColInd,
                                  void**                      cooValues,
                                  hipsparseIndexType_t*       idxType,
                                  hipsparseIndexBase_t*       idxBase,
                                  hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_coo_get((const rocsparse_spmat_descr)spMatDescr,
    //                                             rows,
    //                                             cols,
    //                                             nnz,
    //                                             cooRowInd,
    //                                             cooColInd,
    //                                             cooValues,
    //                                             idxType != nullptr ? &hcc_index_type : nullptr,
    //                                             idxBase != nullptr ? &hcc_index_base : nullptr,
    //                                             valueType != nullptr ? &hcc_data_type : nullptr));

    // *idxType   = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase   = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstCooGet(hipsparseConstSpMatDescr_t spMatDescr,
                                       int64_t*                   rows,
                                       int64_t*                   cols,
                                       int64_t*                   nnz,
                                       const void**               cooRowInd,
                                       const void**               cooColInd,
                                       const void**               cooValues,
                                       hipsparseIndexType_t*      idxType,
                                       hipsparseIndexBase_t*      idxBase,
                                       hipDataType*               valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_coo_get((const rocsparse_const_spmat_descr)spMatDescr,
    //                             rows,
    //                             cols,
    //                             nnz,
    //                             cooRowInd,
    //                             cooColInd,
    //                             cooValues,
    //                             idxType != nullptr ? &hcc_index_type : nullptr,
    //                             idxBase != nullptr ? &hcc_index_base : nullptr,
    //                             valueType != nullptr ? &hcc_data_type : nullptr));

    // *idxType   = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase   = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCooAoSGet(const hipsparseSpMatDescr_t spMatDescr,
                                     int64_t*                    rows,
                                     int64_t*                    cols,
                                     int64_t*                    nnz,
                                     void**                      cooInd,
                                     void**                      cooValues,
                                     hipsparseIndexType_t*       idxType,
                                     hipsparseIndexBase_t*       idxBase,
                                     hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_coo_aos_get((const rocsparse_spmat_descr)spMatDescr,
    //                           rows,
    //                           cols,
    //                           nnz,
    //                           cooInd,
    //                           cooValues,
    //                           idxType != nullptr ? &hcc_index_type : nullptr,
    //                           idxBase != nullptr ? &hcc_index_base : nullptr,
    //                           valueType != nullptr ? &hcc_data_type : nullptr));

    // *idxType   = hipsparse::HCCIndexTypeToHIPIndexType(hcc_index_type);
    // *idxBase   = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsrGet(const hipsparseSpMatDescr_t spMatDescr,
                                  int64_t*                    rows,
                                  int64_t*                    cols,
                                  int64_t*                    nnz,
                                  void**                      csrRowOffsets,
                                  void**                      csrColInd,
                                  void**                      csrValues,
                                  hipsparseIndexType_t*       csrRowOffsetsType,
                                  hipsparseIndexType_t*       csrColIndType,
                                  hipsparseIndexBase_t*       idxBase,
                                  hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_row_index_type;
    // rocsparse_indextype  hcc_col_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_csr_get((const rocsparse_spmat_descr)spMatDescr,
    //                       rows,
    //                       cols,
    //                       nnz,
    //                       csrRowOffsets,
    //                       csrColInd,
    //                       csrValues,
    //                       csrRowOffsetsType != nullptr ? &hcc_row_index_type : nullptr,
    //                       csrColIndType != nullptr ? &hcc_col_index_type : nullptr,
    //                       idxBase != nullptr ? &hcc_index_base : nullptr,
    //                       valueType != nullptr ? &hcc_data_type : nullptr));

    // *csrRowOffsetsType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_row_index_type);
    // *csrColIndType     = hipsparse::HCCIndexTypeToHIPIndexType(hcc_col_index_type);
    // *idxBase           = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType         = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstCsrGet(hipsparseConstSpMatDescr_t spMatDescr,
                                       int64_t*                   rows,
                                       int64_t*                   cols,
                                       int64_t*                   nnz,
                                       const void**               csrRowOffsets,
                                       const void**               csrColInd,
                                       const void**               csrValues,
                                       hipsparseIndexType_t*      csrRowOffsetsType,
                                       hipsparseIndexType_t*      csrColIndType,
                                       hipsparseIndexBase_t*      idxBase,
                                       hipDataType*               valueType)
{
    // rocsparse_indextype  hcc_row_index_type;
    // rocsparse_indextype  hcc_col_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_csr_get((const rocsparse_const_spmat_descr)spMatDescr,
    //                             rows,
    //                             cols,
    //                             nnz,
    //                             csrRowOffsets,
    //                             csrColInd,
    //                             csrValues,
    //                             csrRowOffsetsType != nullptr ? &hcc_row_index_type : nullptr,
    //                             csrColIndType != nullptr ? &hcc_col_index_type : nullptr,
    //                             idxBase != nullptr ? &hcc_index_base : nullptr,
    //                             valueType != nullptr ? &hcc_data_type : nullptr));

    // *csrRowOffsetsType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_row_index_type);
    // *csrColIndType     = hipsparse::HCCIndexTypeToHIPIndexType(hcc_col_index_type);
    // *idxBase           = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType         = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsrSetPointers(hipsparseSpMatDescr_t spMatDescr,
                                          void*                 csrRowOffsets,
                                          void*                 csrColInd,
                                          void*                 csrValues)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCscGet(const hipsparseSpMatDescr_t spMatDescr,
                                  int64_t*                    rows,
                                  int64_t*                    cols,
                                  int64_t*                    nnz,
                                  void**                      cscColOffsets,
                                  void**                      cscRowInd,
                                  void**                      cscValues,
                                  hipsparseIndexType_t*       cscColOffsetsType,
                                  hipsparseIndexType_t*       cscRowIndType,
                                  hipsparseIndexBase_t*       idxBase,
                                  hipDataType*                valueType)
{
    // rocsparse_indextype  hcc_col_index_type;
    // rocsparse_indextype  hcc_row_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_csc_get((const rocsparse_spmat_descr)spMatDescr,
    //                       rows,
    //                       cols,
    //                       nnz,
    //                       cscColOffsets,
    //                       cscRowInd,
    //                       cscValues,
    //                       cscColOffsetsType != nullptr ? &hcc_col_index_type : nullptr,
    //                       cscRowIndType != nullptr ? &hcc_row_index_type : nullptr,
    //                       idxBase != nullptr ? &hcc_index_base : nullptr,
    //                       valueType != nullptr ? &hcc_data_type : nullptr));

    // *cscColOffsetsType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_col_index_type);
    // *cscRowIndType     = hipsparse::HCCIndexTypeToHIPIndexType(hcc_row_index_type);
    // *idxBase           = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType         = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstCscGet(hipsparseConstSpMatDescr_t spMatDescr,
                                       int64_t*                   rows,
                                       int64_t*                   cols,
                                       int64_t*                   nnz,
                                       const void**               cscColOffsets,
                                       const void**               cscRowInd,
                                       const void**               cscValues,
                                       hipsparseIndexType_t*      cscColOffsetsType,
                                       hipsparseIndexType_t*      cscRowIndType,
                                       hipsparseIndexBase_t*      idxBase,
                                       hipDataType*               valueType)
{
    // rocsparse_indextype  hcc_col_index_type;
    // rocsparse_indextype  hcc_row_index_type;
    // rocsparse_index_base hcc_index_base;
    // rocsparse_datatype   hcc_data_type;

    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_csc_get((const rocsparse_const_spmat_descr)spMatDescr,
    //                             rows,
    //                             cols,
    //                             nnz,
    //                             cscColOffsets,
    //                             cscRowInd,
    //                             cscValues,
    //                             cscColOffsetsType != nullptr ? &hcc_col_index_type : nullptr,
    //                             cscRowIndType != nullptr ? &hcc_row_index_type : nullptr,
    //                             idxBase != nullptr ? &hcc_index_base : nullptr,
    //                             valueType != nullptr ? &hcc_data_type : nullptr));

    // *cscColOffsetsType = hipsparse::HCCIndexTypeToHIPIndexType(hcc_col_index_type);
    // *cscRowIndType     = hipsparse::HCCIndexTypeToHIPIndexType(hcc_row_index_type);
    // *idxBase           = hipsparse::HCCBaseToHIPBase(hcc_index_base);
    // *valueType         = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCscSetPointers(hipsparseSpMatDescr_t spMatDescr,
                                          void*                 cscColOffsets,
                                          void*                 cscRowInd,
                                          void*                 cscValues)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCooSetPointers(hipsparseSpMatDescr_t spMatDescr,
                                          void*                 cooRowInd,
                                          void*                 cooColInd,
                                          void*                 cooValues)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetSize(hipsparseConstSpMatDescr_t spMatDescr,
                                        int64_t*                   rows,
                                        int64_t*                   cols,
                                        int64_t*                   nnz)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetFormat(hipsparseConstSpMatDescr_t spMatDescr,
                                          hipsparseFormat_t*         format)
{
    // rocsparse_format hcc_format;
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_spmat_get_format(
    //     (const rocsparse_const_spmat_descr)spMatDescr, format != nullptr ? &hcc_format : nullptr));

    // *format = hipsparse::HCCFormatToHIPFormat(hcc_format);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetIndexBase(hipsparseConstSpMatDescr_t spMatDescr,
                                             hipsparseIndexBase_t*      idxBase)
{
    // rocsparse_index_base hcc_index_base;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_spmat_get_index_base((const rocsparse_const_spmat_descr)spMatDescr,
    //                                    idxBase != nullptr ? &hcc_index_base : nullptr));

    // *idxBase = hipsparse::HCCBaseToHIPBase(hcc_index_base);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetValues(hipsparseSpMatDescr_t spMatDescr, void** values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstSpMatGetValues(hipsparseConstSpMatDescr_t spMatDescr,
                                               const void**               values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatSetValues(hipsparseSpMatDescr_t spMatDescr, void* values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetStridedBatch(hipsparseConstSpMatDescr_t spMatDescr,
                                                int*                       batchCount)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatSetStridedBatch(hipsparseSpMatDescr_t spMatDescr, int batchCount)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCooSetStridedBatch(hipsparseSpMatDescr_t spMatDescr,
                                              int                   batchCount,
                                              int64_t               batchStride)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCsrSetStridedBatch(hipsparseSpMatDescr_t spMatDescr,
                                              int                   batchCount,
                                              int64_t               offsetsBatchStride,
                                              int64_t               columnsValuesBatchStride)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatGetAttribute(hipsparseConstSpMatDescr_t spMatDescr,
                                             hipsparseSpMatAttribute_t  attribute,
                                             void*                      data,
                                             size_t                     dataSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMatSetAttribute(hipsparseSpMatDescr_t     spMatDescr,
                                             hipsparseSpMatAttribute_t attribute,
                                             const void*               data,
                                             size_t                    dataSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateDnVec(hipsparseDnVecDescr_t* dnVecDescr,
                                       int64_t                size,
                                       void*                  values,
                                       hipDataType            valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstDnVec(hipsparseConstDnVecDescr_t* dnVecDescr,
                                            int64_t                     size,
                                            const void*                 values,
                                            hipDataType                 valueType)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyDnVec(hipsparseConstDnVecDescr_t dnVecDescr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnVecGet(const hipsparseDnVecDescr_t dnVecDescr,
                                    int64_t*                    size,
                                    void**                      values,
                                    hipDataType*                valueType)
{
    // rocsparse_datatype hcc_data_type;
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dnvec_get((const rocsparse_dnvec_descr)dnVecDescr,
    //                                               size,
    //                                               values,
    //                                               valueType != nullptr ? &hcc_data_type : nullptr));

    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstDnVecGet(hipsparseConstDnVecDescr_t dnVecDescr,
                                         int64_t*                   size,
                                         const void**               values,
                                         hipDataType*               valueType)
{
    // rocsparse_datatype hcc_data_type;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_dnvec_get((const rocsparse_const_dnvec_descr)dnVecDescr,
    //                               size,
    //                               values,
    //                               valueType != nullptr ? &hcc_data_type : nullptr));

    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnVecGetValues(const hipsparseDnVecDescr_t dnVecDescr, void** values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstDnVecGetValues(hipsparseConstDnVecDescr_t dnVecDescr,
                                               const void**               values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnVecSetValues(hipsparseDnVecDescr_t dnVecDescr, void* values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateDnMat(hipsparseDnMatDescr_t* dnMatDescr,
                                       int64_t                rows,
                                       int64_t                cols,
                                       int64_t                ld,
                                       void*                  values,
                                       hipDataType            valueType,
                                       hipsparseOrder_t       order)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCreateConstDnMat(hipsparseConstDnMatDescr_t* dnMatDescr,
                                            int64_t                     rows,
                                            int64_t                     cols,
                                            int64_t                     ld,
                                            const void*                 values,
                                            hipDataType                 valueType,
                                            hipsparseOrder_t            order)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDestroyDnMat(hipsparseConstDnMatDescr_t dnMatDescr)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnMatGet(const hipsparseDnMatDescr_t dnMatDescr,
                                    int64_t*                    rows,
                                    int64_t*                    cols,
                                    int64_t*                    ld,
                                    void**                      values,
                                    hipDataType*                valueType,
                                    hipsparseOrder_t*           order)
{
    // rocsparse_datatype hcc_data_type;
    // rocsparse_order    hcc_order;
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_dnmat_get((const rocsparse_dnmat_descr)dnMatDescr,
    //                                               rows,
    //                                               cols,
    //                                               ld,
    //                                               values,
    //                                               valueType != nullptr ? &hcc_data_type : nullptr,
    //                                               order != nullptr ? &hcc_order : nullptr));

    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);
    // *order     = hipsparse::HCCOrderToHIPOrder(hcc_order);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstDnMatGet(hipsparseConstDnMatDescr_t dnMatDescr,
                                         int64_t*                   rows,
                                         int64_t*                   cols,
                                         int64_t*                   ld,
                                         const void**               values,
                                         hipDataType*               valueType,
                                         hipsparseOrder_t*          order)
{
    // rocsparse_datatype hcc_data_type;
    // rocsparse_order    hcc_order;
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_const_dnmat_get((rocsparse_const_dnmat_descr)dnMatDescr,
    //                               rows,
    //                               cols,
    //                               ld,
    //                               values,
    //                               valueType != nullptr ? &hcc_data_type : nullptr,
    //                               order != nullptr ? &hcc_order : nullptr));

    // *valueType = hipsparse::HCCDataTypeToHIPDataType(hcc_data_type);
    // *order     = hipsparse::HCCOrderToHIPOrder(hcc_order);

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnMatGetValues(const hipsparseDnMatDescr_t dnMatDescr, void** values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseConstDnMatGetValues(hipsparseConstDnMatDescr_t dnMatDescr,
                                               const void**               values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnMatSetValues(hipsparseDnMatDescr_t dnMatDescr, void* values)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnMatGetStridedBatch(hipsparseConstDnMatDescr_t dnMatDescr,
                                                int*                       batchCount,
                                                int64_t*                   batchStride)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDnMatSetStridedBatch(hipsparseDnMatDescr_t dnMatDescr,
                                                int                   batchCount,
                                                int64_t               batchStride)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseAxpby(hipsparseHandle_t          handle,
                                 const void*                alpha,
                                 hipsparseConstSpVecDescr_t vecX,
                                 const void*                beta,
                                 hipsparseDnVecDescr_t      vecY)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseGather(hipsparseHandle_t          handle,
                                  hipsparseConstDnVecDescr_t vecY,
                                  hipsparseSpVecDescr_t      vecX)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScatter(hipsparseHandle_t          handle,
                                   hipsparseConstSpVecDescr_t vecX,
                                   hipsparseDnVecDescr_t      vecY)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseRot(hipsparseHandle_t     handle,
                               const void*           c_coeff,
                               const void*           s_coeff,
                               hipsparseSpVecDescr_t vecX,
                               hipsparseDnVecDescr_t vecY)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSparseToDense_bufferSize(hipsparseHandle_t           handle,
                                                    hipsparseConstSpMatDescr_t  matA,
                                                    hipsparseDnMatDescr_t       matB,
                                                    hipsparseSparseToDenseAlg_t alg,
                                                    size_t*                     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSparseToDense(hipsparseHandle_t           handle,
                                         hipsparseConstSpMatDescr_t  matA,
                                         hipsparseDnMatDescr_t       matB,
                                         hipsparseSparseToDenseAlg_t alg,
                                         void*                       externalBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDenseToSparse_bufferSize(hipsparseHandle_t           handle,
                                                    hipsparseConstDnMatDescr_t  matA,
                                                    hipsparseSpMatDescr_t       matB,
                                                    hipsparseDenseToSparseAlg_t alg,
                                                    size_t*                     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDenseToSparse_analysis(hipsparseHandle_t           handle,
                                                  hipsparseConstDnMatDescr_t  matA,
                                                  hipsparseSpMatDescr_t       matB,
                                                  hipsparseDenseToSparseAlg_t alg,
                                                  void*                       externalBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDenseToSparse_convert(hipsparseHandle_t           handle,
                                                 hipsparseConstDnMatDescr_t  matA,
                                                 hipsparseSpMatDescr_t       matB,
                                                 hipsparseDenseToSparseAlg_t alg,
                                                 void*                       externalBuffer)
{
    size_t bufferSize = 4;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVV_bufferSize(hipsparseHandle_t          handle,
                                           hipsparseOperation_t       opX,
                                           hipsparseConstSpVecDescr_t vecX,
                                           hipsparseConstDnVecDescr_t vecY,
                                           void*                      result,
                                           hipDataType                computeType,
                                           size_t*                    bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpVV(hipsparseHandle_t          handle,
                                hipsparseOperation_t       opX,
                                hipsparseConstSpVecDescr_t vecX,
                                hipsparseConstDnVecDescr_t vecY,
                                void*                      result,
                                hipDataType                computeType,
                                void*                      externalBuffer)
{
    size_t bufferSize;

    // Check for buffer == nullptr as this is not done in rocsparse
    if(externalBuffer == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMV_bufferSize(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnVecDescr_t  vecX,
                                           const void*                 beta,
                                           const hipsparseDnVecDescr_t vecY,
                                           hipDataType                 computeType,
                                           hipsparseSpMVAlg_t          alg,
                                           size_t*                     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMV_preprocess(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnVecDescr_t  vecX,
                                           const void*                 beta,
                                           const hipsparseDnVecDescr_t vecY,
                                           hipDataType                 computeType,
                                           hipsparseSpMVAlg_t          alg,
                                           void*                       externalBuffer)
{
    size_t bufferSize;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMV(hipsparseHandle_t           handle,
                                hipsparseOperation_t        opA,
                                const void*                 alpha,
                                hipsparseConstSpMatDescr_t  matA,
                                hipsparseConstDnVecDescr_t  vecX,
                                const void*                 beta,
                                const hipsparseDnVecDescr_t vecY,
                                hipDataType                 computeType,
                                hipsparseSpMVAlg_t          alg,
                                void*                       externalBuffer)
{
    size_t bufferSize;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMM_bufferSize(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           hipsparseOperation_t        opB,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnMatDescr_t  matB,
                                           const void*                 beta,
                                           const hipsparseDnMatDescr_t matC,
                                           hipDataType                 computeType,
                                           hipsparseSpMMAlg_t          alg,
                                           size_t*                     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMM_preprocess(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           hipsparseOperation_t        opB,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnMatDescr_t  matB,
                                           const void*                 beta,
                                           const hipsparseDnMatDescr_t matC,
                                           hipDataType                 computeType,
                                           hipsparseSpMMAlg_t          alg,
                                           void*                       externalBuffer)
{
    size_t bufferSize;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpMM(hipsparseHandle_t           handle,
                                hipsparseOperation_t        opA,
                                hipsparseOperation_t        opB,
                                const void*                 alpha,
                                hipsparseConstSpMatDescr_t  matA,
                                hipsparseConstDnMatDescr_t  matB,
                                const void*                 beta,
                                const hipsparseDnMatDescr_t matC,
                                hipDataType                 computeType,
                                hipsparseSpMMAlg_t          alg,
                                void*                       externalBuffer)
{
    size_t bufferSize;
    return HIPSPARSE_STATUS_SUCCESS;
}

struct hipsparseSpGEMMDescr
{
    size_t bufferSize1{};
    size_t bufferSize2{};
    size_t bufferSize3{};
    size_t bufferSize4{};
    size_t bufferSize5{};

    void* externalBuffer1{};
    void* externalBuffer2{};
    void* externalBuffer3{};
    void* externalBuffer4{};
    void* externalBuffer5{};
};

hipsparseStatus_t hipsparseSpGEMM_createDescr(hipsparseSpGEMMDescr_t* descr)
{
    *descr = new hipsparseSpGEMMDescr;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMM_destroyDescr(hipsparseSpGEMMDescr_t descr)
{
    // Check if info structure has been created
    if(descr != nullptr)
    {
        descr->externalBuffer1 = nullptr;
        descr->externalBuffer2 = nullptr;
        descr->externalBuffer3 = nullptr;
        descr->externalBuffer4 = nullptr;
        descr->externalBuffer5 = nullptr;
        delete descr;
    }

    return HIPSPARSE_STATUS_SUCCESS;
}

namespace hipsparse
{
    static hipsparseStatus_t getIndexTypeSize(hipsparseIndexType_t indexType, size_t& size)
    {
        switch(indexType)
        {
        case HIPSPARSE_INDEX_16U:
        {
            size = sizeof(uint16_t);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIPSPARSE_INDEX_32I:
        {
            size = sizeof(int32_t);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIPSPARSE_INDEX_64I:
        {
            size = sizeof(int64_t);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        }

        size = 0;
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    static hipsparseStatus_t getDataTypeSize(hipDataType dataType, size_t& size)
    {
        switch(dataType)
        {
        case HIP_R_32F:
        {
            size = sizeof(float);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIP_R_64F:
        {
            size = sizeof(double);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIP_C_32F:
        {
            size = sizeof(hipComplex);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIP_C_64F:
        {
            size = sizeof(hipDoubleComplex);
            return HIPSPARSE_STATUS_SUCCESS;
        }
        case HIP_R_16F:
        case HIP_C_16F:
        {
            size = 0;
            return HIPSPARSE_STATUS_INVALID_VALUE;
        }
        }

        size = 0;
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }
}

hipsparseStatus_t hipsparseSpGEMM_workEstimation(hipsparseHandle_t          handle,
                                                 hipsparseOperation_t       opA,
                                                 hipsparseOperation_t       opB,
                                                 const void*                alpha,
                                                 hipsparseConstSpMatDescr_t matA,
                                                 hipsparseConstSpMatDescr_t matB,
                                                 const void*                beta,
                                                 hipsparseSpMatDescr_t      matC,
                                                 hipDataType                computeType,
                                                 hipsparseSpGEMMAlg_t       alg,
                                                 hipsparseSpGEMMDescr_t     spgemmDescr,
                                                 size_t*                    bufferSize1,
                                                 void*                      externalBuffer1)
{
    // Match cusparse error handling
    if(handle == nullptr || alpha == nullptr || beta == nullptr || matA == nullptr
       || matB == nullptr || matC == nullptr || bufferSize1 == nullptr || spgemmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // size_t csrRowOffsetsTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));

    // if(externalBuffer1 == nullptr)
    // {
    //     // Query for required buffer size
    //     RETURN_IF_ROCSPARSE_ERROR(rocsparse_spgemm((rocsparse_handle)handle,
    //                                                hipsparse::hipOperationToHCCOperation(opA),
    //                                                hipsparse::hipOperationToHCCOperation(opB),
    //                                                alpha,
    //                                                (rocsparse_const_spmat_descr)matA,
    //                                                (rocsparse_const_spmat_descr)matB,
    //                                                nullptr,
    //                                                (rocsparse_const_spmat_descr)matC,
    //                                                (rocsparse_spmat_descr)matC,
    //                                                hipsparse::hipDataTypeToHCCDataType(computeType),
    //                                                hipsparse::hipSpGEMMAlgToHCCSpGEMMAlg(alg),
    //                                                rocsparse_spgemm_stage_buffer_size,
    //                                                bufferSize1,
    //                                                nullptr));

    //     // Add space for storing matC row ptr array
    //     *bufferSize1 += ((csrRowOffsetsTypeSizeC * (rowsC + 1) - 1) / 256 + 1) * 256;

    //     spgemmDescr->bufferSize1 = *bufferSize1;
    // }
    // else
    // {
    //     spgemmDescr->externalBuffer1 = externalBuffer1;

    //     void*  csrRowOffsetsCFromBuffer1 = spgemmDescr->externalBuffer1;
    //     size_t byteOffset1 = ((csrRowOffsetsTypeSizeC * (rowsC + 1) - 1) / 256 + 1) * 256;

    //     // Temporarily set in C matrix in order to compute C row pointer array (stored in externalBuffer1)
    //     RETURN_IF_HIPSPARSE_ERROR(
    //         hipsparseCsrSetPointers(matC, csrRowOffsetsCFromBuffer1, csrColIndC, csrValuesC));

    //     // Compute number of non-zeros in C matrix
    //     size_t bufferSize = (spgemmDescr->bufferSize1 - byteOffset1);
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_spgemm((rocsparse_handle)handle,
    //                          hipsparse::hipOperationToHCCOperation(opA),
    //                          hipsparse::hipOperationToHCCOperation(opB),
    //                          alpha,
    //                          (rocsparse_const_spmat_descr)matA,
    //                          (rocsparse_const_spmat_descr)matB,
    //                          nullptr,
    //                          (rocsparse_const_spmat_descr)matC,
    //                          (rocsparse_spmat_descr)matC,
    //                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                          hipsparse::hipSpGEMMAlgToHCCSpGEMMAlg(alg),
    //                          rocsparse_spgemm_stage_nnz,
    //                          &bufferSize,
    //                          (static_cast<char*>(spgemmDescr->externalBuffer1) + byteOffset1)));
    //}

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMM_compute(hipsparseHandle_t          handle,
                                          hipsparseOperation_t       opA,
                                          hipsparseOperation_t       opB,
                                          const void*                alpha,
                                          hipsparseConstSpMatDescr_t matA,
                                          hipsparseConstSpMatDescr_t matB,
                                          const void*                beta,
                                          hipsparseSpMatDescr_t      matC,
                                          hipDataType                computeType,
                                          hipsparseSpGEMMAlg_t       alg,
                                          hipsparseSpGEMMDescr_t     spgemmDescr,
                                          size_t*                    bufferSize2,
                                          void*                      externalBuffer2)
{
    if(handle == nullptr || alpha == nullptr || beta == nullptr || matA == nullptr
       || matB == nullptr || matC == nullptr || bufferSize2 == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // size_t csrRowOffsetsTypeSizeC;
    // size_t csrColIndTypeSizeC;
    // size_t csrValueTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getIndexTypeSize(csrColIndTypeC, csrColIndTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(csrValueTypeC, csrValueTypeSizeC));

    // size_t computeTypeSize;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(computeType, computeTypeSize));

    // if(externalBuffer2 == nullptr)
    // {
    //     *bufferSize2 = 0;

    //     // Need to store temporary space for C matrix column indices and values arrays
    //     *bufferSize2 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;
    //     *bufferSize2 += ((csrValueTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     // Need to store temporary space for indices array used in hipsparseSpGEMM_copy Axpby
    //     *bufferSize2 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     // Need to store temporary space for host/device 1 value used in hipsparseSpGEMM_copy Axpby
    //     *bufferSize2 += ((computeTypeSize - 1) / 256 + 1) * 256;

    //     spgemmDescr->bufferSize2 = *bufferSize2;
    // }
    // else
    // {
    //     spgemmDescr->externalBuffer2 = externalBuffer2;

    //     size_t byteOffset1 = 0;
    //     size_t byteOffset2 = 0;

    //     void* csrRowOffsetsCFromBuffer1 = spgemmDescr->externalBuffer1;
    //     byteOffset1 += ((csrRowOffsetsTypeSizeC * (rowsC + 1) - 1) / 256 + 1) * 256;

    //     void* csrColIndCFromBuffer2 = spgemmDescr->externalBuffer2;
    //     byteOffset2 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     void* csrValuesCFromBuffer2
    //         = (static_cast<char*>(spgemmDescr->externalBuffer2) + byteOffset2);

    //     // Set pointers (which now point to the external buffers) so that we can perform the computation and have the results
    //     // temporarily stored in the external buffers. The data will then be copied to the final output arrays in hipsparseSpGEMM_copy.
    //     RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrSetPointers(
    //         matC, csrRowOffsetsCFromBuffer1, csrColIndCFromBuffer2, csrValuesCFromBuffer2));

    //     size_t bufferSize = (spgemmDescr->bufferSize1 - byteOffset1);
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_spgemm((rocsparse_handle)handle,
    //                          hipsparse::hipOperationToHCCOperation(opA),
    //                          hipsparse::hipOperationToHCCOperation(opB),
    //                          alpha,
    //                          (rocsparse_const_spmat_descr)matA,
    //                          (rocsparse_const_spmat_descr)matB,
    //                          nullptr,
    //                          (rocsparse_const_spmat_descr)matC,
    //                          (rocsparse_spmat_descr)matC,
    //                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                          hipsparse::hipSpGEMMAlgToHCCSpGEMMAlg(alg),
    //                          rocsparse_spgemm_stage_compute,
    //                          &bufferSize,
    //                          (static_cast<char*>(spgemmDescr->externalBuffer1) + byteOffset1)));
    //}

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMM_copy(hipsparseHandle_t          handle,
                                       hipsparseOperation_t       opA,
                                       hipsparseOperation_t       opB,
                                       const void*                alpha,
                                       hipsparseConstSpMatDescr_t matA,
                                       hipsparseConstSpMatDescr_t matB,
                                       const void*                beta,
                                       hipsparseSpMatDescr_t      matC,
                                       hipDataType                computeType,
                                       hipsparseSpGEMMAlg_t       alg,
                                       hipsparseSpGEMMDescr_t     spgemmDescr)
{
    if(handle == nullptr || alpha == nullptr || beta == nullptr || matA == nullptr
       || matB == nullptr || matC == nullptr || spgemmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // size_t csrRowOffsetsTypeSizeC;
    // size_t csrColIndTypeSizeC;
    // size_t csrValueTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getIndexTypeSize(csrColIndTypeC, csrColIndTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(csrValueTypeC, csrValueTypeSizeC));

    // size_t byteOffset2 = 0;

    // void* csrRowOffsetsCFromBuffer1 = spgemmDescr->externalBuffer1;
    // void* csrColIndCFromBuffer2     = spgemmDescr->externalBuffer2;
    // byteOffset2 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    // void* csrValuesCFromBuffer2 = (static_cast<char*>(spgemmDescr->externalBuffer2) + byteOffset2);
    // byteOffset2 += ((csrValueTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    // void* indicesArray = (static_cast<char*>(spgemmDescr->externalBuffer2) + byteOffset2);
    // byteOffset2 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    // void* device_one = (static_cast<char*>(spgemmDescr->externalBuffer2) + byteOffset2);

    // // Get pointer mode
    // hipsparsePointerMode_t pointer_mode;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetPointerMode(handle, &pointer_mode));

    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // float            host_sone = 1.0f;
    // double           host_done = 1.0f;
    // hipComplex       host_cone = make_hipComplex(1.0f, 0.0f);
    // hipDoubleComplex host_zone = make_hipDoubleComplex(1.0, 0.0);

    // void* one = nullptr;
    // if(pointer_mode == HIPSPARSE_POINTER_MODE_HOST)
    // {
    //     if(computeType == HIP_R_32F)
    //         one = &host_sone;
    //     if(computeType == HIP_R_64F)
    //         one = &host_done;
    //     if(computeType == HIP_C_32F)
    //         one = &host_cone;
    //     if(computeType == HIP_C_64F)
    //         one = &host_zone;
    // }
    // else
    // {
    //     if(computeType == HIP_R_32F)
    //     {
    //         hipMemcpyAsync(device_one, &host_sone, sizeof(float), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_R_64F)
    //     {
    //         hipMemcpyAsync(device_one, &host_done, sizeof(double), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_C_32F)
    //     {
    //         hipMemcpyAsync(
    //             device_one, &host_cone, sizeof(hipComplex), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_C_64F)
    //     {
    //         hipMemcpyAsync(
    //             device_one, &host_zone, sizeof(hipDoubleComplex), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    // }

    // if(csrColIndTypeC == HIPSPARSE_INDEX_32I)
    // {
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_set_identity_permutation((rocsparse_handle)handle,
    //                                            nnzC,
    //                                            static_cast<int32_t*>(indicesArray),
    //                                            rocsparse_indextype_i32));
    // }
    // else if(csrColIndTypeC == HIPSPARSE_INDEX_64I)
    // {
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_set_identity_permutation((rocsparse_handle)handle,
    //                                            nnzC,
    //                                            static_cast<int64_t*>(indicesArray),
    //                                            rocsparse_indextype_i64));
    // }
    // else
    // {
    //     return HIPSPARSE_STATUS_NOT_SUPPORTED;
    // }

    // // Copy data from external1 buffer to row pointer array
    // RETURN_IF_HIP_ERROR(hipMemcpyAsync(csrRowOffsetsC,
    //                                    csrRowOffsetsCFromBuffer1,
    //                                    csrRowOffsetsTypeSizeC * (rowsC + 1),
    //                                    hipMemcpyDeviceToDevice,
    //                                    stream));

    // // Copy data from external2 buffer to column indices array
    // RETURN_IF_HIP_ERROR(hipMemcpyAsync(csrColIndC,
    //                                    csrColIndCFromBuffer2,
    //                                    csrColIndTypeSizeC * nnzC,
    //                                    hipMemcpyDeviceToDevice,
    //                                    stream));

    // hipsparseConstSpVecDescr_t vecX;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateConstSpVec(&vecX,
    //                                                     nnzC,
    //                                                     nnzC,
    //                                                     indicesArray,
    //                                                     csrValuesCFromBuffer2,
    //                                                     csrColIndTypeC,
    //                                                     HIPSPARSE_INDEX_BASE_ZERO,
    //                                                     csrValueTypeC));

    // hipsparseDnVecDescr_t vecY;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateDnVec(&vecY, nnzC, csrValuesC, csrValueTypeC));

    // // Axpby computes: Y = alpha * X + beta * Y
    // // What we want to compute: csrValuesC = 1.0 * csrValuesCFromBuffer2 + beta * csrValuesC
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseAxpby(handle, one, vecX, beta, vecY));

    // RETURN_IF_HIPSPARSE_ERROR(hipsparseDestroySpVec(vecX));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseDestroyDnVec(vecY));

    // // Finally, update C matrix
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseCsrSetPointers(matC, csrRowOffsetsC, csrColIndC, csrValuesC));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMMreuse_workEstimation(hipsparseHandle_t          handle,
                                                      hipsparseOperation_t       opA,
                                                      hipsparseOperation_t       opB,
                                                      hipsparseConstSpMatDescr_t matA,
                                                      hipsparseConstSpMatDescr_t matB,
                                                      hipsparseSpMatDescr_t      matC,
                                                      hipsparseSpGEMMAlg_t       alg,
                                                      hipsparseSpGEMMDescr_t     spgemmDescr,
                                                      size_t*                    bufferSize1,
                                                      void*                      externalBuffer1)
{
    const void* alpha = (const void*)0x4;
    const void* beta  = (const void*)0x4;

    // Get data stored in C matrix
    int64_t              rowsC, colsC, nnzC;
    void*                csrRowOffsetsC;
    void*                csrColIndC;
    void*                csrValuesC;
    hipsparseIndexType_t csrRowOffsetsTypeC;
    hipsparseIndexType_t csrColIndTypeC;
    hipsparseIndexBase_t idxBaseC;
    hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    hipDataType computeType = csrValueTypeC;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMMreuse_nnz(hipsparseHandle_t          handle,
                                           hipsparseOperation_t       opA,
                                           hipsparseOperation_t       opB,
                                           hipsparseConstSpMatDescr_t matA,
                                           hipsparseConstSpMatDescr_t matB,
                                           hipsparseSpMatDescr_t      matC,
                                           hipsparseSpGEMMAlg_t       alg,
                                           hipsparseSpGEMMDescr_t     spgemmDescr,
                                           size_t*                    bufferSize2,
                                           void*                      externalBuffer2,
                                           size_t*                    bufferSize3,
                                           void*                      externalBuffer3,
                                           size_t*                    bufferSize4,
                                           void*                      externalBuffer4)
{
    // Match cusparse error handling
    if(handle == nullptr || matA == nullptr || matB == nullptr || matC == nullptr
       || spgemmDescr == nullptr || bufferSize2 == nullptr || bufferSize3 == nullptr
       || bufferSize3 == nullptr || bufferSize4 == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // If any external buffer is nullptr, they must all be nullptr.
    // bool allBuffersNull = (externalBuffer2 == nullptr) & (externalBuffer3 == nullptr)
    //                       & (externalBuffer4 == nullptr);
    // bool anyBuffersNull = (externalBuffer2 == nullptr) | (externalBuffer3 == nullptr)
    //                       | (externalBuffer4 == nullptr);
    // if(anyBuffersNull && !allBuffersNull)
    // {
    //     return HIPSPARSE_STATUS_INVALID_VALUE;
    // }

    // const void* alpha = (const void*)0x4;

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // hipDataType computeType = csrValueTypeC;

    // size_t csrRowOffsetsTypeSizeC;
    // size_t csrColIndTypeSizeC;
    // size_t csrValueTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getIndexTypeSize(csrColIndTypeC, csrColIndTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(csrValueTypeC, csrValueTypeSizeC));

    // if(allBuffersNull)
    // {
    //     *bufferSize2 = 4;
    //     *bufferSize3 = 4;
    //     *bufferSize4 = spgemmDescr->bufferSize1;

    //     *bufferSize3 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;
    //     *bufferSize3 += ((csrValueTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     spgemmDescr->bufferSize2 = *bufferSize2;
    //     spgemmDescr->bufferSize3 = *bufferSize3;
    //     spgemmDescr->bufferSize4 = *bufferSize4;
    // }
    // else
    // {
    //     hipStream_t stream;
    //     RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    //     spgemmDescr->externalBuffer2 = externalBuffer2;
    //     spgemmDescr->externalBuffer3 = externalBuffer3; // stores C column indices and values
    //     spgemmDescr->externalBuffer4
    //         = externalBuffer4; // stores C row pointers array + spgemm buffer

    //     size_t byteOffset3 = ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;
    //     size_t byteOffset4 = ((csrRowOffsetsTypeSizeC * (rowsC + 1) - 1) / 256 + 1) * 256;

    //     // Transfer external buffer 1 (which stores C row pointer array) to external buffer 4 because
    //     // buffer 1 can be deleted after this function
    //     RETURN_IF_HIP_ERROR(hipMemcpyAsync(spgemmDescr->externalBuffer4,
    //                                        spgemmDescr->externalBuffer1,
    //                                        *bufferSize4,
    //                                        hipMemcpyDeviceToDevice,
    //                                        stream));

    //     // Temporarily set in C matrix in order to compute C row pointer array (stored in externalBuffer1)
    //     RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrSetPointers(
    //         matC,
    //         spgemmDescr->externalBuffer4,
    //         spgemmDescr->externalBuffer3,
    //         static_cast<char*>(spgemmDescr->externalBuffer3) + byteOffset3));

    //     size_t bufferSize = (spgemmDescr->bufferSize4 - byteOffset4);
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_spgemm((rocsparse_handle)handle,
    //                          hipsparse::hipOperationToHCCOperation(opA),
    //                          hipsparse::hipOperationToHCCOperation(opB),
    //                          alpha,
    //                          (rocsparse_const_spmat_descr)matA,
    //                          (rocsparse_const_spmat_descr)matB,
    //                          nullptr,
    //                          (rocsparse_const_spmat_descr)matC,
    //                          (rocsparse_spmat_descr)matC,
    //                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                          hipsparse::hipSpGEMMAlgToHCCSpGEMMAlg(alg),
    //                          rocsparse_spgemm_stage_symbolic,
    //                          &bufferSize,
    //                          static_cast<char*>(spgemmDescr->externalBuffer4) + byteOffset4));
    // }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMMreuse_copy(hipsparseHandle_t          handle,
                                            hipsparseOperation_t       opA,
                                            hipsparseOperation_t       opB,
                                            hipsparseConstSpMatDescr_t matA,
                                            hipsparseConstSpMatDescr_t matB,
                                            hipsparseSpMatDescr_t      matC,
                                            hipsparseSpGEMMAlg_t       alg,
                                            hipsparseSpGEMMDescr_t     spgemmDescr,
                                            size_t*                    bufferSize5,
                                            void*                      externalBuffer5)
{
    if(handle == nullptr || matA == nullptr || matB == nullptr || matC == nullptr
       || bufferSize5 == nullptr || spgemmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // size_t csrRowOffsetsTypeSizeC;
    // size_t csrColIndTypeSizeC;
    // size_t csrValueTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getIndexTypeSize(csrColIndTypeC, csrColIndTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(csrValueTypeC, csrValueTypeSizeC));

    // if(externalBuffer5 == nullptr)
    // {
    //     *bufferSize5 = 0;

    //     // Need to store temporary space for values array
    //     *bufferSize5 += ((csrValueTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     // Need to store temporary space for indices array used in hipsparseSpGEMM_copy Axpby
    //     *bufferSize5 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    //     // Need to store temporary space for host/device 1 value used in hipsparseSpGEMM_copy Axpby
    //     *bufferSize5 += ((16 - 1) / 256 + 1) * 256;

    //     spgemmDescr->bufferSize5 = *bufferSize5;
    // }
    // else
    // {
    //     spgemmDescr->externalBuffer5 = externalBuffer5;

    //     hipStream_t stream;
    //     RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    //     RETURN_IF_HIP_ERROR(hipMemcpyAsync(csrRowOffsetsC,
    //                                        spgemmDescr->externalBuffer4,
    //                                        csrRowOffsetsTypeSizeC * (rowsC + 1),
    //                                        hipMemcpyDeviceToDevice,
    //                                        stream));
    //     RETURN_IF_HIP_ERROR(hipMemcpyAsync(csrColIndC,
    //                                        spgemmDescr->externalBuffer3,
    //                                        csrColIndTypeSizeC * nnzC,
    //                                        hipMemcpyDeviceToDevice,
    //                                        stream));

    //     RETURN_IF_HIPSPARSE_ERROR(
    //         hipsparseCsrSetPointers(matC, csrRowOffsetsC, csrColIndC, csrValuesC));
    // }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpGEMMreuse_compute(hipsparseHandle_t          handle,
                                               hipsparseOperation_t       opA,
                                               hipsparseOperation_t       opB,
                                               const void*                alpha,
                                               hipsparseConstSpMatDescr_t matA,
                                               hipsparseConstSpMatDescr_t matB,
                                               const void*                beta,
                                               hipsparseSpMatDescr_t      matC,
                                               hipDataType                computeType,
                                               hipsparseSpGEMMAlg_t       alg,
                                               hipsparseSpGEMMDescr_t     spgemmDescr)
{
    if(handle == nullptr || alpha == nullptr || beta == nullptr || spgemmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // // Get data stored in C matrix
    // int64_t              rowsC, colsC, nnzC;
    // void*                csrRowOffsetsC;
    // void*                csrColIndC;
    // void*                csrValuesC;
    // hipsparseIndexType_t csrRowOffsetsTypeC;
    // hipsparseIndexType_t csrColIndTypeC;
    // hipsparseIndexBase_t idxBaseC;
    // hipDataType          csrValueTypeC;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCsrGet(matC,
    //                                           &rowsC,
    //                                           &colsC,
    //                                           &nnzC,
    //                                           &csrRowOffsetsC,
    //                                           &csrColIndC,
    //                                           &csrValuesC,
    //                                           &csrRowOffsetsTypeC,
    //                                           &csrColIndTypeC,
    //                                           &idxBaseC,
    //                                           &csrValueTypeC));

    // size_t csrRowOffsetsTypeSizeC;
    // size_t csrColIndTypeSizeC;
    // size_t csrValueTypeSizeC;
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparse::getIndexTypeSize(csrRowOffsetsTypeC, csrRowOffsetsTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getIndexTypeSize(csrColIndTypeC, csrColIndTypeSizeC));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparse::getDataTypeSize(csrValueTypeC, csrValueTypeSizeC));

    // size_t byteOffset4 = ((csrRowOffsetsTypeSizeC * (rowsC + 1) - 1) / 256 + 1) * 256;
    // size_t byteOffset5 = 0;

    // void* csrValuesCFromBuffer5 = spgemmDescr->externalBuffer5;
    // byteOffset5 += ((csrValueTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    // void* indicesArray = (static_cast<char*>(spgemmDescr->externalBuffer5) + byteOffset5);
    // byteOffset5 += ((csrColIndTypeSizeC * nnzC - 1) / 256 + 1) * 256;

    // void* device_one = (static_cast<char*>(spgemmDescr->externalBuffer5) + byteOffset5);

    // // Use external buffer for values array as the original values array may have data in it
    // // that must be accounted for when multiplying by beta. See below.
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseCsrSetPointers(matC, csrRowOffsetsC, csrColIndC, csrValuesCFromBuffer5));

    // size_t bufferSize = (spgemmDescr->bufferSize4 - byteOffset4);
    // RETURN_IF_ROCSPARSE_ERROR(
    //     rocsparse_spgemm((rocsparse_handle)handle,
    //                      hipsparse::hipOperationToHCCOperation(opA),
    //                      hipsparse::hipOperationToHCCOperation(opB),
    //                      alpha,
    //                      (rocsparse_const_spmat_descr)matA,
    //                      (rocsparse_const_spmat_descr)matB,
    //                      nullptr,
    //                      (rocsparse_const_spmat_descr)matC,
    //                      (rocsparse_spmat_descr)matC,
    //                      hipsparse::hipDataTypeToHCCDataType(computeType),
    //                      hipsparse::hipSpGEMMAlgToHCCSpGEMMAlg(alg),
    //                      rocsparse_spgemm_stage_numeric,
    //                      &bufferSize,
    //                      static_cast<char*>(spgemmDescr->externalBuffer4) + byteOffset4));

    // // Get pointer mode
    // hipsparsePointerMode_t pointer_mode;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetPointerMode(handle, &pointer_mode));

    // hipStream_t stream;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseGetStream(handle, &stream));

    // float            host_sone = 1.0f;
    // double           host_done = 1.0f;
    // hipComplex       host_cone = make_hipComplex(1.0f, 0.0f);
    // hipDoubleComplex host_zone = make_hipDoubleComplex(1.0, 0.0);

    // void* one = nullptr;
    // if(pointer_mode == HIPSPARSE_POINTER_MODE_HOST)
    // {
    //     if(computeType == HIP_R_32F)
    //         one = &host_sone;
    //     if(computeType == HIP_R_64F)
    //         one = &host_done;
    //     if(computeType == HIP_C_32F)
    //         one = &host_cone;
    //     if(computeType == HIP_C_64F)
    //         one = &host_zone;
    // }
    // else
    // {
    //     if(computeType == HIP_R_32F)
    //     {
    //         hipMemcpyAsync(device_one, &host_sone, sizeof(float), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_R_64F)
    //     {
    //         hipMemcpyAsync(device_one, &host_done, sizeof(double), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_C_32F)
    //     {
    //         hipMemcpyAsync(
    //             device_one, &host_cone, sizeof(hipComplex), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    //     if(computeType == HIP_C_64F)
    //     {
    //         hipMemcpyAsync(
    //             device_one, &host_zone, sizeof(hipDoubleComplex), hipMemcpyHostToDevice, stream);
    //         one = device_one;
    //     }
    // }

    // if(csrColIndTypeC == HIPSPARSE_INDEX_32I)
    // {
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_set_identity_permutation((rocsparse_handle)handle,
    //                                            nnzC,
    //                                            static_cast<int32_t*>(indicesArray),
    //                                            rocsparse_indextype_i32));
    // }
    // else if(csrColIndTypeC == HIPSPARSE_INDEX_64I)
    // {
    //     RETURN_IF_ROCSPARSE_ERROR(
    //         rocsparse_set_identity_permutation((rocsparse_handle)handle,
    //                                            nnzC,
    //                                            static_cast<int64_t*>(indicesArray),
    //                                            rocsparse_indextype_i64));
    // }
    // else
    // {
    //     return HIPSPARSE_STATUS_NOT_SUPPORTED;
    // }

    // hipsparseConstSpVecDescr_t vecX;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateConstSpVec(&vecX,
    //                                                     nnzC,
    //                                                     nnzC,
    //                                                     indicesArray,
    //                                                     csrValuesCFromBuffer5,
    //                                                     csrColIndTypeC,
    //                                                     HIPSPARSE_INDEX_BASE_ZERO,
    //                                                     csrValueTypeC));

    // hipsparseDnVecDescr_t vecY;
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseCreateDnVec(&vecY, nnzC, csrValuesC, csrValueTypeC));

    // // Axpby computes: Y = alpha * X + beta * Y
    // // What we want to compute: csrValuesC = 1.0 * csrValuesCFromBuffer5 + beta * csrValuesC
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseAxpby(handle, one, vecX, beta, vecY));

    // RETURN_IF_HIPSPARSE_ERROR(hipsparseDestroySpVec(vecX));
    // RETURN_IF_HIPSPARSE_ERROR(hipsparseDestroyDnVec(vecY));

    // // Finally, update C matrix
    // RETURN_IF_HIPSPARSE_ERROR(
    //     hipsparseCsrSetPointers(matC, csrRowOffsetsC, csrColIndC, csrValuesC));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSDDMM(hipsparseHandle_t          handle,
                                 hipsparseOperation_t       opA,
                                 hipsparseOperation_t       opB,
                                 const void*                alpha,
                                 hipsparseConstDnMatDescr_t matA,
                                 hipsparseConstDnMatDescr_t matB,
                                 const void*                beta,
                                 hipsparseSpMatDescr_t      matC,
                                 hipDataType                computeType,
                                 hipsparseSDDMMAlg_t        alg,
                                 void*                      tempBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSDDMM_bufferSize(hipsparseHandle_t          handle,
                                            hipsparseOperation_t       opA,
                                            hipsparseOperation_t       opB,
                                            const void*                alpha,
                                            hipsparseConstDnMatDescr_t matA,
                                            hipsparseConstDnMatDescr_t matB,
                                            const void*                beta,
                                            hipsparseSpMatDescr_t      matC,
                                            hipDataType                computeType,
                                            hipsparseSDDMMAlg_t        alg,
                                            size_t*                    bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSDDMM_preprocess(hipsparseHandle_t          handle,
                                            hipsparseOperation_t       opA,
                                            hipsparseOperation_t       opB,
                                            const void*                alpha,
                                            hipsparseConstDnMatDescr_t matA,
                                            hipsparseConstDnMatDescr_t matB,
                                            const void*                beta,
                                            hipsparseSpMatDescr_t      matC,
                                            hipDataType                computeType,
                                            hipsparseSDDMMAlg_t        alg,
                                            void*                      tempBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

struct hipsparseSpSVDescr
{
    void* externalBuffer{};
};

hipsparseStatus_t hipsparseSpSV_createDescr(hipsparseSpSVDescr_t* descr)
{
    *descr = new hipsparseSpSVDescr;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSV_destroyDescr(hipsparseSpSVDescr_t descr)
{
    if(descr != nullptr)
    {
        descr->externalBuffer = nullptr;
        delete descr;
    }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSV_bufferSize(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnVecDescr_t  x,
                                           const hipsparseDnVecDescr_t y,
                                           hipDataType                 computeType,
                                           hipsparseSpSVAlg_t          alg,
                                           hipsparseSpSVDescr_t        spsvDescr,
                                           size_t*                     bufferSize)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSV_analysis(hipsparseHandle_t           handle,
                                         hipsparseOperation_t        opA,
                                         const void*                 alpha,
                                         hipsparseConstSpMatDescr_t  matA,
                                         hipsparseConstDnVecDescr_t  x,
                                         const hipsparseDnVecDescr_t y,
                                         hipDataType                 computeType,
                                         hipsparseSpSVAlg_t          alg,
                                         hipsparseSpSVDescr_t        spsvDescr,
                                         void*                       externalBuffer)
{

    if(spsvDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }
    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_spsv((rocsparse_handle)handle,
    //                                          hipsparse::hipOperationToHCCOperation(opA),
    //                                          alpha,
    //                                          (rocsparse_const_spmat_descr)matA,
    //                                          (rocsparse_const_dnvec_descr)x,
    //                                          (const rocsparse_dnvec_descr)y,
    //                                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                                          hipsparse::hipSpSVAlgToHCCSpSVAlg(alg),
    //                                          rocsparse_spsv_stage_preprocess,
    //                                          nullptr,
    //                                          externalBuffer));
    spsvDescr->externalBuffer = externalBuffer;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSV_solve(hipsparseHandle_t           handle,
                                      hipsparseOperation_t        opA,
                                      const void*                 alpha,
                                      hipsparseConstSpMatDescr_t  matA,
                                      hipsparseConstDnVecDescr_t  x,
                                      const hipsparseDnVecDescr_t y,
                                      hipDataType                 computeType,
                                      hipsparseSpSVAlg_t          alg,
                                      hipsparseSpSVDescr_t        spsvDescr)
{
    if(spsvDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }
    return HIPSPARSE_STATUS_SUCCESS;
}

struct hipsparseSpSMDescr
{
    void* externalBuffer{};
};

hipsparseStatus_t hipsparseSpSM_createDescr(hipsparseSpSMDescr_t* descr)
{
    *descr = new hipsparseSpSMDescr;
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSM_destroyDescr(hipsparseSpSMDescr_t descr)
{
    if(descr != nullptr)
    {
        descr->externalBuffer = nullptr;
        delete descr;
    }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSM_bufferSize(hipsparseHandle_t           handle,
                                           hipsparseOperation_t        opA,
                                           hipsparseOperation_t        opB,
                                           const void*                 alpha,
                                           hipsparseConstSpMatDescr_t  matA,
                                           hipsparseConstDnMatDescr_t  matB,
                                           const hipsparseDnMatDescr_t matC,
                                           hipDataType                 computeType,
                                           hipsparseSpSMAlg_t          alg,
                                           hipsparseSpSMDescr_t        spsmDescr,
                                           size_t*                     bufferSize)
{
    if(spsmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_spsm((rocsparse_handle)handle,
    //                                          hipsparse::hipOperationToHCCOperation(opA),
    //                                          hipsparse::hipOperationToHCCOperation(opB),
    //                                          alpha,
    //                                          (rocsparse_const_spmat_descr)matA,
    //                                          (rocsparse_const_dnmat_descr)matB,
    //                                          (const rocsparse_dnmat_descr)matC,
    //                                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                                          hipsparse::hipSpSMAlgToHCCSpSMAlg(alg),
    //                                          rocsparse_spsm_stage_buffer_size,
    //                                          bufferSize,
    //                                          nullptr));

    bufferSize[0] = std::max(bufferSize[0], sizeof(int32_t));

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSM_analysis(hipsparseHandle_t           handle,
                                         hipsparseOperation_t        opA,
                                         hipsparseOperation_t        opB,
                                         const void*                 alpha,
                                         hipsparseConstSpMatDescr_t  matA,
                                         hipsparseConstDnMatDescr_t  matB,
                                         const hipsparseDnMatDescr_t matC,
                                         hipDataType                 computeType,
                                         hipsparseSpSMAlg_t          alg,
                                         hipsparseSpSMDescr_t        spsmDescr,
                                         void*                       externalBuffer)
{
    if(spsmDescr == nullptr || externalBuffer == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    // RETURN_IF_ROCSPARSE_ERROR(rocsparse_spsm((rocsparse_handle)handle,
    //                                          hipsparse::hipOperationToHCCOperation(opA),
    //                                          hipsparse::hipOperationToHCCOperation(opB),
    //                                          alpha,
    //                                          (rocsparse_const_spmat_descr)matA,
    //                                          (rocsparse_const_dnmat_descr)matB,
    //                                          (const rocsparse_dnmat_descr)matC,
    //                                          hipsparse::hipDataTypeToHCCDataType(computeType),
    //                                          hipsparse::hipSpSMAlgToHCCSpSMAlg(alg),
    //                                          rocsparse_spsm_stage_preprocess,
    //                                          nullptr,
    //                                          externalBuffer));

    spsmDescr->externalBuffer = externalBuffer;

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSpSM_solve(hipsparseHandle_t           handle,
                                      hipsparseOperation_t        opA,
                                      hipsparseOperation_t        opB,
                                      const void*                 alpha,
                                      hipsparseConstSpMatDescr_t  matA,
                                      hipsparseConstDnMatDescr_t  matB,
                                      const hipsparseDnMatDescr_t matC,
                                      hipDataType                 computeType,
                                      hipsparseSpSMAlg_t          alg,
                                      hipsparseSpSMDescr_t        spsmDescr,
                                      void*                       externalBuffer)
{
    if(spsmDescr == nullptr)
    {
        return HIPSPARSE_STATUS_INVALID_VALUE;
    }

    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2StridedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                            int               m,
                                                            const float*      dl,
                                                            const float*      d,
                                                            const float*      du,
                                                            const float*      x,
                                                            int               batchCount,
                                                            int               batchStride,
                                                            size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const float* dummy = static_cast<const float*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2StridedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                            int               m,
                                                            const double*     dl,
                                                            const double*     d,
                                                            const double*     du,
                                                            const double*     x,
                                                            int               batchCount,
                                                            int               batchStride,
                                                            size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const double* dummy = static_cast<const double*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2StridedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                            int               m,
                                                            const hipComplex* dl,
                                                            const hipComplex* d,
                                                            const hipComplex* du,
                                                            const hipComplex* x,
                                                            int               batchCount,
                                                            int               batchStride,
                                                            size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipComplex* dummy = static_cast<const hipComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2StridedBatch_bufferSizeExt(hipsparseHandle_t       handle,
                                                            int                     m,
                                                            const hipDoubleComplex* dl,
                                                            const hipDoubleComplex* d,
                                                            const hipDoubleComplex* du,
                                                            const hipDoubleComplex* x,
                                                            int                     batchCount,
                                                            int                     batchStride,
                                                            size_t* pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipDoubleComplex* dummy = static_cast<const hipDoubleComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2StridedBatch(hipsparseHandle_t handle,
                                              int               m,
                                              const float*      dl,
                                              const float*      d,
                                              const float*      du,
                                              float*            x,
                                              int               batchCount,
                                              int               batchStride,
                                              void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2StridedBatch(hipsparseHandle_t handle,
                                              int               m,
                                              const double*     dl,
                                              const double*     d,
                                              const double*     du,
                                              double*           x,
                                              int               batchCount,
                                              int               batchStride,
                                              void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2StridedBatch(hipsparseHandle_t handle,
                                              int               m,
                                              const hipComplex* dl,
                                              const hipComplex* d,
                                              const hipComplex* du,
                                              hipComplex*       x,
                                              int               batchCount,
                                              int               batchStride,
                                              void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2StridedBatch(hipsparseHandle_t       handle,
                                              int                     m,
                                              const hipDoubleComplex* dl,
                                              const hipDoubleComplex* d,
                                              const hipDoubleComplex* du,
                                              hipDoubleComplex*       x,
                                              int                     batchCount,
                                              int                     batchStride,
                                              void*                   pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2_bufferSizeExt(hipsparseHandle_t handle,
                                                int               m,
                                                int               n,
                                                const float*      dl,
                                                const float*      d,
                                                const float*      du,
                                                const float*      B,
                                                int               ldb,
                                                size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const float* dummy = static_cast<const float*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2_bufferSizeExt(hipsparseHandle_t handle,
                                                int               m,
                                                int               n,
                                                const double*     dl,
                                                const double*     d,
                                                const double*     du,
                                                const double*     B,
                                                int               ldb,
                                                size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const double* dummy = static_cast<const double*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2_bufferSizeExt(hipsparseHandle_t handle,
                                                int               m,
                                                int               n,
                                                const hipComplex* dl,
                                                const hipComplex* d,
                                                const hipComplex* du,
                                                const hipComplex* B,
                                                int               ldb,
                                                size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipComplex* dummy = static_cast<const hipComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2_bufferSizeExt(hipsparseHandle_t       handle,
                                                int                     m,
                                                int                     n,
                                                const hipDoubleComplex* dl,
                                                const hipDoubleComplex* d,
                                                const hipDoubleComplex* du,
                                                const hipDoubleComplex* B,
                                                int                     ldb,
                                                size_t*                 pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipDoubleComplex* dummy = static_cast<const hipDoubleComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  const float*      dl,
                                  const float*      d,
                                  const float*      du,
                                  float*            B,
                                  int               ldb,
                                  void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  const double*     dl,
                                  const double*     d,
                                  const double*     du,
                                  double*           B,
                                  int               ldb,
                                  void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2(hipsparseHandle_t handle,
                                  int               m,
                                  int               n,
                                  const hipComplex* dl,
                                  const hipComplex* d,
                                  const hipComplex* du,
                                  hipComplex*       B,
                                  int               ldb,
                                  void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2(hipsparseHandle_t       handle,
                                  int                     m,
                                  int                     n,
                                  const hipDoubleComplex* dl,
                                  const hipDoubleComplex* d,
                                  const hipDoubleComplex* du,
                                  hipDoubleComplex*       B,
                                  int                     ldb,
                                  void*                   pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2_nopivot_bufferSizeExt(hipsparseHandle_t handle,
                                                        int               m,
                                                        int               n,
                                                        const float*      dl,
                                                        const float*      d,
                                                        const float*      du,
                                                        const float*      B,
                                                        int               ldb,
                                                        size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const float* dummy = static_cast<const float*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2_nopivot_bufferSizeExt(hipsparseHandle_t handle,
                                                        int               m,
                                                        int               n,
                                                        const double*     dl,
                                                        const double*     d,
                                                        const double*     du,
                                                        const double*     B,
                                                        int               ldb,
                                                        size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const double* dummy = static_cast<const double*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2_nopivot_bufferSizeExt(hipsparseHandle_t handle,
                                                        int               m,
                                                        int               n,
                                                        const hipComplex* dl,
                                                        const hipComplex* d,
                                                        const hipComplex* du,
                                                        const hipComplex* B,
                                                        int               ldb,
                                                        size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipComplex* dummy = static_cast<const hipComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2_nopivot_bufferSizeExt(hipsparseHandle_t       handle,
                                                        int                     m,
                                                        int                     n,
                                                        const hipDoubleComplex* dl,
                                                        const hipDoubleComplex* d,
                                                        const hipDoubleComplex* du,
                                                        const hipDoubleComplex* B,
                                                        int                     ldb,
                                                        size_t*                 pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipDoubleComplex* dummy = static_cast<const hipDoubleComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsv2_nopivot(hipsparseHandle_t handle,
                                          int               m,
                                          int               n,
                                          const float*      dl,
                                          const float*      d,
                                          const float*      du,
                                          float*            B,
                                          int               ldb,
                                          void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsv2_nopivot(hipsparseHandle_t handle,
                                          int               m,
                                          int               n,
                                          const double*     dl,
                                          const double*     d,
                                          const double*     du,
                                          double*           B,
                                          int               ldb,
                                          void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsv2_nopivot(hipsparseHandle_t handle,
                                          int               m,
                                          int               n,
                                          const hipComplex* dl,
                                          const hipComplex* d,
                                          const hipComplex* du,
                                          hipComplex*       B,
                                          int               ldb,
                                          void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsv2_nopivot(hipsparseHandle_t       handle,
                                          int                     m,
                                          int                     n,
                                          const hipDoubleComplex* dl,
                                          const hipDoubleComplex* d,
                                          const hipDoubleComplex* du,
                                          hipDoubleComplex*       B,
                                          int                     ldb,
                                          void*                   pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const float*      dl,
                                                               const float*      d,
                                                               const float*      du,
                                                               const float*      x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const float* dummy = static_cast<const float*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const double*     dl,
                                                               const double*     d,
                                                               const double*     du,
                                                               const double*     x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const double* dummy = static_cast<const double*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const hipComplex* dl,
                                                               const hipComplex* d,
                                                               const hipComplex* du,
                                                               const hipComplex* x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipComplex* dummy = static_cast<const hipComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t       handle,
                                                               int                     algo,
                                                               int                     m,
                                                               const hipDoubleComplex* dl,
                                                               const hipDoubleComplex* d,
                                                               const hipDoubleComplex* du,
                                                               const hipDoubleComplex* x,
                                                               int                     batchCount,
                                                               size_t* pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipDoubleComplex* dummy = static_cast<const hipDoubleComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgtsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 float*            dl,
                                                 float*            d,
                                                 float*            du,
                                                 float*            x,
                                                 int               batchCount,
                                                 void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgtsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 double*           dl,
                                                 double*           d,
                                                 double*           du,
                                                 double*           x,
                                                 int               batchCount,
                                                 void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgtsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 hipComplex*       dl,
                                                 hipComplex*       d,
                                                 hipComplex*       du,
                                                 hipComplex*       x,
                                                 int               batchCount,
                                                 void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgtsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 hipDoubleComplex* dl,
                                                 hipDoubleComplex* d,
                                                 hipDoubleComplex* du,
                                                 hipDoubleComplex* x,
                                                 int               batchCount,
                                                 void*             pBuffer)

{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgpsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const float*      ds,
                                                               const float*      dl,
                                                               const float*      d,
                                                               const float*      du,
                                                               const float*      dw,
                                                               const float*      x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const float* dummy = static_cast<const float*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgpsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const double*     ds,
                                                               const double*     dl,
                                                               const double*     d,
                                                               const double*     du,
                                                               const double*     dw,
                                                               const double*     x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const double* dummy = static_cast<const double*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgpsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t handle,
                                                               int               algo,
                                                               int               m,
                                                               const hipComplex* ds,
                                                               const hipComplex* dl,
                                                               const hipComplex* d,
                                                               const hipComplex* du,
                                                               const hipComplex* dw,
                                                               const hipComplex* x,
                                                               int               batchCount,
                                                               size_t*           pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipComplex* dummy = static_cast<const hipComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgpsvInterleavedBatch_bufferSizeExt(hipsparseHandle_t       handle,
                                                               int                     algo,
                                                               int                     m,
                                                               const hipDoubleComplex* ds,
                                                               const hipDoubleComplex* dl,
                                                               const hipDoubleComplex* d,
                                                               const hipDoubleComplex* du,
                                                               const hipDoubleComplex* dw,
                                                               const hipDoubleComplex* x,
                                                               int                     batchCount,
                                                               size_t* pBufferSizeInBytes)
{
    // cusparse allows passing nullptr's for dl, d, du, and B. On the other hand rocsparse checks
    // if they are nullptr and returns invalid pointer if they are. In both cases the pointers are
    // never actually de-referenced. In order to work in the same way regardless of the backend
    // that a user chooses, just pass in non-null dummy pointer.
    const hipDoubleComplex* dummy = static_cast<const hipDoubleComplex*>((void*)0x4);
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseSgpsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 float*            ds,
                                                 float*            dl,
                                                 float*            d,
                                                 float*            du,
                                                 float*            dw,
                                                 float*            x,
                                                 int               batchCount,
                                                 void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDgpsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 double*           ds,
                                                 double*           dl,
                                                 double*           d,
                                                 double*           du,
                                                 double*           dw,
                                                 double*           x,
                                                 int               batchCount,
                                                 void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCgpsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 hipComplex*       ds,
                                                 hipComplex*       dl,
                                                 hipComplex*       d,
                                                 hipComplex*       du,
                                                 hipComplex*       dw,
                                                 hipComplex*       x,
                                                 int               batchCount,
                                                 void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZgpsvInterleavedBatch(hipsparseHandle_t handle,
                                                 int               algo,
                                                 int               m,
                                                 hipDoubleComplex* ds,
                                                 hipDoubleComplex* dl,
                                                 hipDoubleComplex* d,
                                                 hipDoubleComplex* du,
                                                 hipDoubleComplex* dw,
                                                 hipDoubleComplex* x,
                                                 int               batchCount,
                                                 void*             pBuffer)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseScsrcolor(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     const float*              csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const float*              fractionToColor,
                                     int*                      ncolors,
                                     int*                      coloring,
                                     int*                      reordering,
                                     hipsparseColorInfo_t      info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseDcsrcolor(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     const double*             csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const double*             fractionToColor,
                                     int*                      ncolors,
                                     int*                      coloring,
                                     int*                      reordering,
                                     hipsparseColorInfo_t      info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseCcsrcolor(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     const hipComplex*         csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const float*              fractionToColor,
                                     int*                      ncolors,
                                     int*                      coloring,
                                     int*                      reordering,
                                     hipsparseColorInfo_t      info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}

hipsparseStatus_t hipsparseZcsrcolor(hipsparseHandle_t         handle,
                                     int                       m,
                                     int                       nnz,
                                     const hipsparseMatDescr_t descrA,
                                     const hipDoubleComplex*   csrValA,
                                     const int*                csrRowPtrA,
                                     const int*                csrColIndA,
                                     const double*             fractionToColor,
                                     int*                      ncolors,
                                     int*                      coloring,
                                     int*                      reordering,
                                     hipsparseColorInfo_t      info)
{
    return HIPSPARSE_STATUS_SUCCESS;
}
