// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Provides OS object boilerplate and RTTI.
//
// Profile:  shipping-gpus-openrm
// Haldef:   os.def
// Template: templates/gt_eng_odb.h
//

#ifndef _G_OS_ODB_H_
#define _G_OS_ODB_H_

#include "core/core.h"
#include "g_os_hal.h"


#define __OS_OBJECT_BASE_DEFINITION \
    const struct NVOC_RTTI *__nvoc_rtti; \
    Object __nvoc_base_Object; \
    Object *__nvoc_pbase_Object; \
    PDB_PROP_OS pdb


extern const struct NVOC_CLASS_DEF __iom_class_def_OBJOS;
#define __nvoc_class_def_OBJOS __iom_class_def_OBJOS

#ifndef __nvoc_class_id_OBJOS
#define __nvoc_class_id_OBJOS 0xaa1d70
#endif /* __nvoc_class_id_OBJOS */

#define __objCreate_OBJOS(ppNewObj, pParent, flags) \
    __iom_objCreate_OBJOS((ppNewObj), staticCast((pParent), Dynamic), flags)
NV_STATUS __iom_objCreate_OBJOS(POBJOS *ppNewObj, Dynamic *pParent, NvU32 flags);


#endif  // _G_OS_ODB_H_
