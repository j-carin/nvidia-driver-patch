// Generated by the protocol buffer compiler.  DO NOT EDIT!

#include "nvtypes.h"
#include "prbrt.h"
#include "g_journal_pb.h"

// 'Assert.RecTyp' enum descriptor
static const PRB_ENUM_MAPPING prb_enum_mappings_assert_rectyp[] = {
    {
        120,
        PRB_MAYBE_ENUM_NAME("ASSERT")
    },
    {
        121,
        PRB_MAYBE_ENUM_NAME("TIMEOUT")
    },
    {
        124,
        PRB_MAYBE_ENUM_NAME("DEBUG_BREAKPOINT")
    },
    {
        139,
        PRB_MAYBE_ENUM_NAME("ASSERT_V3")
    },
    {
        140,
        PRB_MAYBE_ENUM_NAME("TIMEOUT_V3")
    },
    {
        141,
        PRB_MAYBE_ENUM_NAME("DEBUG_BREAKPOINT_V3")
    },
};

const PRB_ENUM_DESC prb_enums_journal_assert_rectyp = {
    prb_enum_mappings_assert_rectyp,
    6,
   PRB_MAYBE_ENUM_NAME("RecTyp")
};

// 'BadRead.MemSpace' enum descriptor
static const PRB_ENUM_MAPPING prb_enum_mappings_badread_memspace[] = {
    {
        1,
        PRB_MAYBE_ENUM_NAME("BAR0")
    },
    {
        2,
        PRB_MAYBE_ENUM_NAME("FB")
    },
    {
        3,
        PRB_MAYBE_ENUM_NAME("INSTANCE")
    },
    {
        4,
        PRB_MAYBE_ENUM_NAME("PCI")
    },
};

const PRB_ENUM_DESC prb_enums_journal_badread_memspace = {
    prb_enum_mappings_badread_memspace,
    4,
   PRB_MAYBE_ENUM_NAME("MemSpace")
};

// 'BadRead.Reason' enum descriptor
static const PRB_ENUM_MAPPING prb_enum_mappings_badread_reason[] = {
    {
        1,
        PRB_MAYBE_ENUM_NAME("GPU_OFF_BUS")
    },
    {
        2,
        PRB_MAYBE_ENUM_NAME("LOW_POWER")
    },
    {
        3,
        PRB_MAYBE_ENUM_NAME("PCI_DEVICE_DISABLED")
    },
    {
        4,
        PRB_MAYBE_ENUM_NAME("GPU_RESET")
    },
    {
        5,
        PRB_MAYBE_ENUM_NAME("DWORD_SHIFT")
    },
    {
        6,
        PRB_MAYBE_ENUM_NAME("UNKNOWN")
    },
};

const PRB_ENUM_DESC prb_enums_journal_badread_reason = {
    prb_enum_mappings_badread_reason,
    6,
   PRB_MAYBE_ENUM_NAME("Reason")
};

// 'Common' field defaults
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU32 journal_common_gpu_tag_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU64 journal_common_cpu_tag_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU64 journal_common_time_stamp_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU64 journal_common_state_mask_default = 0;)

// 'Common' field descriptors
const PRB_FIELD_DESC prb_fields_journal_common[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("gpu_tag")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_common_gpu_tag_default)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("cpu_tag")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_common_cpu_tag_default)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("time_stamp")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_common_time_stamp_default)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("state_mask")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_common_state_mask_default)
    },
};

// 'Assert' field defaults
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU64 journal_assert_last_time_stamp_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU64 journal_assert_last_time_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU32 journal_assert_gpu_tag_default = 0;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU32 journal_assert_count_default = 1;)
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU32 journal_assert_level_default = 1;)

// 'Assert' field descriptors
const PRB_FIELD_DESC prb_fields_journal_assert[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_ENUM,
            0,
        },
        0,
        &prb_enums_journal_assert_rectyp,
        PRB_MAYBE_FIELD_NAME("type")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        9,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0 | PRB_IS_DEPRECATED,
        },
        JOURNAL_COMMON,
        0,
        PRB_MAYBE_FIELD_NAME("common_obsolete")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        10,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("last_time_stamp")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_assert_last_time_stamp_default)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_IS_DEPRECATED,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("first_time")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_HAS_DEFAULT | PRB_IS_DEPRECATED,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("last_time")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_assert_last_time_default)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("breakpoint_addr_hint")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        5,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0 | PRB_HAS_DEFAULT | PRB_IS_DEPRECATED,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("gpu_tag")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_assert_gpu_tag_default)
    },
    {
        6,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("count")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_assert_count_default)
    },
    {
        7,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0 | PRB_HAS_DEFAULT,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("level")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_assert_level_default)
    },
    {
        8,
        {
            PRB_REPEATED,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("call_stack")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        11,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("source_line")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'RvaHeader' field defaults

// 'RvaHeader' field descriptors
const PRB_FIELD_DESC prb_fields_journal_rvaheader[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("driver_start")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("offset")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("pointer_size")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("unique_id_high")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        5,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("unique_id_low")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        6,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("age")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'BadRead' field defaults

// 'BadRead' field descriptors
const PRB_FIELD_DESC prb_fields_journal_badread[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_ENUM,
            0,
        },
        0,
        &prb_enums_journal_badread_memspace,
        PRB_MAYBE_FIELD_NAME("memory_space")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("offset")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("mask")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("value")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        5,
        {
            PRB_OPTIONAL,
            PRB_ENUM,
            0,
        },
        0,
        &prb_enums_journal_badread_reason,
        PRB_MAYBE_FIELD_NAME("reason")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        6,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0 | PRB_IS_DEPRECATED,
        },
        JOURNAL_COMMON,
        0,
        PRB_MAYBE_FIELD_NAME("common_obsolete")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// 'BugCheck' field defaults
PRB_MAYBE_FIELD_DEFAULT_DEF(static const NvU32 journal_bugcheck_gpu_tag_default = 0;)

// 'BugCheck' field descriptors
const PRB_FIELD_DESC prb_fields_journal_bugcheck[] = {
    {
        1,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("code")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        2,
        {
            PRB_OPTIONAL,
            PRB_UINT32,
            0 | PRB_HAS_DEFAULT | PRB_IS_DEPRECATED,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("gpu_tag")
        PRB_MAYBE_FIELD_DEFAULT((const PRB_VALUE *)&journal_bugcheck_gpu_tag_default)
    },
    {
        3,
        {
            PRB_OPTIONAL,
            PRB_UINT64,
            0 | PRB_IS_DEPRECATED,
        },
        0,
        0,
        PRB_MAYBE_FIELD_NAME("time_stamp")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
    {
        4,
        {
            PRB_OPTIONAL,
            PRB_MESSAGE,
            0 | PRB_IS_DEPRECATED,
        },
        JOURNAL_COMMON,
        0,
        PRB_MAYBE_FIELD_NAME("common_obsolete")
        PRB_MAYBE_FIELD_DEFAULT(0)
    },
};

// Message descriptors
const PRB_MSG_DESC prb_messages_journal[] = {
    {
        4,
        prb_fields_journal_common,
        PRB_MAYBE_MESSAGE_NAME("Journal.Common")
    },
    {
        11,
        prb_fields_journal_assert,
        PRB_MAYBE_MESSAGE_NAME("Journal.Assert")
    },
    {
        6,
        prb_fields_journal_rvaheader,
        PRB_MAYBE_MESSAGE_NAME("Journal.RvaHeader")
    },
    {
        6,
        prb_fields_journal_badread,
        PRB_MAYBE_MESSAGE_NAME("Journal.BadRead")
    },
    {
        4,
        prb_fields_journal_bugcheck,
        PRB_MAYBE_MESSAGE_NAME("Journal.BugCheck")
    },
};

// Service descriptors
const PRB_SERVICE_DESC prb_services_journal[] = {
   { 0 }
};

