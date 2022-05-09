// This file is automatically generated by rmconfig - DO NOT EDIT!
//
// Profile:  shipping-gpus-openrm
// Template: templates/gt_eng_iom.c
//
#include "nvstatus.h"
#include "nvport/inline/util_valist.h"
#include "nvport/nvport.h"
#include "core/core.h"
#include "nvoc/rtti.h"
#include "os/os.h"
#include "gpu/gpu.h"

#include "os/os.h"

#include "g_os_private.h"

//
// OS's object-level _STUB, _MISSING, _VGPUSTUB interface routines
// (if any)
//








//
// Initialize OS's object-level interfaces
//
void
osSetPropertiesSpecial
(
    POBJOS    pOs
)
{
    // SET_IF support for OS's PDB properties
    if (!RMCFG_FEATURE_PLATFORM_UNIX) {
        pOs->setProperty(pOs, PDB_PROP_OS_SUPPORTS_DISPLAY_REMAPPER, NV_TRUE);
    }

}





//
// OS's run-time type information
//

extern const struct NVOC_CLASS_DEF __iom_class_def_OBJOS;
extern const struct NVOC_CLASS_DEF __nvoc_class_def_Object;

void      __iom_dtor_OBJOS(POBJOS);
NV_STATUS __iom_objCreate_OBJOS(POBJOS *ppThis, Dynamic *pParent, NvU32 createFlags);

const struct NVOC_RTTI __iom_rtti_OBJOS_OBJOS =
{
    &__iom_class_def_OBJOS,
    (NVOC_DYNAMIC_DTOR)&__iom_dtor_OBJOS,
    0,
};

const struct NVOC_RTTI __iom_rtti_OBJOS_Object =
{
    &__nvoc_class_def_Object,
    (NVOC_DYNAMIC_DTOR)&__nvoc_destructFromBase,
    NV_OFFSETOF(OBJOS, __nvoc_base_Object),
};

static const struct NVOC_CASTINFO __iom_castinfo_OBJOS =
{
    2,
    {
        &__iom_rtti_OBJOS_OBJOS,
        &__iom_rtti_OBJOS_Object
    }
};

extern const NVOC_RTTI_PROVIDER __iom_rtti_provider;
const struct NVOC_CLASS_DEF __iom_class_def_OBJOS =
{
    {
        sizeof(OBJOS),
        classId(OBJOS),
        &__iom_rtti_provider,
#if NV_PRINTF_STRINGS_ALLOWED
        "OBJOS",
#endif
    },
    (NVOC_DYNAMIC_OBJ_CREATE)&__iom_objCreate_OBJOS,
    &__iom_castinfo_OBJOS,
};




//
// OS's object infrastructure boilerplate
//

// initializers, constructors, and destructors for OS's base classes
void      __nvoc_init_Object(Object*);
NV_STATUS __nvoc_ctor_Object(Object*);
void      __nvoc_dtor_Object(Object*);
NV_STATUS __nvoc_vctor_Object(Dynamic*, va_list);


NV_STATUS __iom_ctor_OBJOS(POBJOS pOs)
{
    NV_STATUS status;
    RMCFG_MODULE_ENABLED_OR_ASSERT_AND_BAIL(OS);
    status = __nvoc_ctor_Object(&pOs->__nvoc_base_Object);
    if (status != NV_OK) goto __iom_ctor_OBJOS_fail_Object;
    return NV_OK;
__iom_ctor_OBJOS_fail_Object:
    return status;
}

NV_STATUS __iom_vctor_OBJOS(Dynamic *pDynamic, va_list args)
{
    NV_STATUS status;
    POBJOS pThis = dynamicCast(pDynamic, OBJOS);
    if (pThis != NULL)
    {
        status = __iom_ctor_OBJOS(pThis);
    }
    else
    {
        status = NV_ERR_INVALID_OBJECT;
    }
    return status;
}

void __iom_dtor_OBJOS(POBJOS pOs)
{
    __nvoc_dtor_Object(&pOs->__nvoc_base_Object);
}

// OS's object initializer function to set up vtables and RTTI
void __iom_init_OBJOS(POBJOS pOs)
{
    pOs->__nvoc_pbase_Object = &pOs->__nvoc_base_Object;
    __nvoc_init_Object(&pOs->__nvoc_base_Object);
    osSetPropertiesSpecial(pOs);
}


//
// OS's object creation routine
//
NV_STATUS __iom_objCreate_OBJOS(POBJOS *ppThis, Dynamic *pParent, NvU32 flags)
{
    NV_STATUS status;
    Object *pParentObj;
    POBJOS pThis = NULL;

    // var flags is used by NVOC but not enabled in IOM
    PORT_UNREFERENCED_VARIABLE(flags);

    pThis = portMemAllocNonPaged(sizeof(OBJOS));
    if (!pThis)
    {
        status = NV_ERR_NO_MEMORY;
        goto __iom_objCreate_OBJOS_cleanup;
    }

    portMemSet(pThis, 0, sizeof(OBJOS));

    __nvoc_initRtti(staticCast(pThis, Dynamic), &__iom_class_def_OBJOS);

    pParentObj = dynamicCast(pParent, Object);
    if (pParent)
    {
        objAddChild(pParentObj, &pThis->__nvoc_base_Object);
    }

    __iom_init_OBJOS(pThis);
    status = __iom_ctor_OBJOS(pThis);
    if (status != NV_OK) goto __iom_objCreate_OBJOS_cleanup;

    *ppThis = pThis;

    return NV_OK;

__iom_objCreate_OBJOS_cleanup:
    if (pThis)
    {
        // do not call destructors here since __iom_ctor_OBJOS already called them
        portMemSet(pThis, 0, sizeof(OBJOS));
        portMemFree(pThis);
        pThis = NULL;
    }
    return status;
}

