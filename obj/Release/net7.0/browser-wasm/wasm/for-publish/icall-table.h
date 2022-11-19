#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
258,
264,
265,
266,
267,
268,
269,
270,
271,
272,
275,
276,
361,
362,
364,
392,
393,
394,
414,
415,
416,
417,
515,
516,
517,
518,
519,
520,
521,
524,
605,
606,
607,
608,
611,
613,
615,
616,
618,
625,
633,
634,
635,
636,
637,
638,
639,
640,
641,
642,
643,
644,
645,
646,
647,
648,
649,
650,
693,
694,
695,
696,
697,
698,
699,
700,
701,
702,
703,
704,
705,
706,
707,
708,
709,
802,
810,
813,
815,
821,
822,
824,
825,
829,
830,
833,
834,
836,
837,
840,
841,
842,
845,
847,
850,
852,
854,
918,
920,
922,
931,
932,
933,
935,
941,
942,
943,
944,
945,
953,
954,
955,
959,
960,
962,
964,
1168,
1341,
1342,
6936,
6937,
6939,
6940,
6941,
6942,
6943,
6945,
6947,
6949,
6950,
6951,
6962,
6964,
6968,
6969,
6971,
6973,
6975,
6977,
6992,
7000,
7006,
7007,
7009,
7010,
7011,
7012,
7013,
7015,
7017,
7018,
7082,
7084,
7086,
7088,
8342,
8345,
8347,
8348,
8349,
8478,
8479,
8480,
8481,
8500,
8501,
8502,
8503,
8505,
8507,
8509,
8566,
8567,
8568,
8569,
8661,
8674,
8675,
8676,
8677,
9138,
9139,
9143,
9144,
9177,
9207,
9212,
9219,
9229,
9233,
9302,
9308,
9321,
9323,
9324,
9325,
9326,
9333,
9347,
9366,
9367,
9375,
9377,
9383,
9384,
9387,
9389,
9394,
9404,
9405,
9412,
9414,
9425,
9428,
9431,
9432,
9433,
9443,
9451,
9457,
9458,
9459,
9461,
9462,
9481,
9483,
9497,
9527,
9528,
9529,
9530,
9531,
9532,
9552,
9581,
9582,
10030,
10031,
10033,
10106,
10186,
10404,
10405,
10411,
10412,
10417,
10484,
11009,
11010,
11573,
11575,
11576,
11678,
11679,
11680,
11681,
11682,
11683,
11684,
11685,
11686,
11687,
11688,
11689,
11690,
11691,
11692,
11693,
11694,
13419,
13440,
13447,
13448,
13450,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int mono_environment_exitcode_get ();
void mono_environment_exitcode_set (int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_Exit (int);
int ves_icall_System_Environment_GetCommandLineArgs_raw (int);
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
int64_t ves_icall_System_GC_GetTotalAllocatedBytes_raw (int,int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
int64_t ves_icall_System_GC_GetTotalMemory (int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetInterfaceMapData_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Read_Long (int);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int64_t ves_icall_System_Threading_Monitor_Monitor_LockContentionCount ();
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_StartInternal_raw (int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
int ves_icall_System_Threading_Thread_Join_internal_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
int ves_icall_System_Threading_LowLevelLifoSemaphore_InitInternal ();
void ves_icall_System_Threading_LowLevelLifoSemaphore_DeleteInternal (int);
int ves_icall_System_Threading_LowLevelLifoSemaphore_TimedWaitInternal (int,int);
void ves_icall_System_Threading_LowLevelLifoSemaphore_ReleaseInternal (int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
int ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw (int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw (int,int,int,int);
void ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
void ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw (int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_AssemblyExtensions_ApplyUpdateEnabled (int);
int ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw (int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsAttached_internal ();
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_CreateProvider_raw (int,int,int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DefineEvent (int,int,int64_t,int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DeleteProvider (int);
int ves_icall_System_Diagnostics_Tracing_EventPipeInternal_EventActivityIdControl (int,int);
void ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WriteEventData (int,int,int,int,int);
uint64_t ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetRuntimeCounterValue (int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStart (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStop (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadWait (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolMinMaxThreads (int,int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentSample (double,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentAdjustment (double,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentStats (double,double,double,double,double,double,double,double,double,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOEnqueue (int,int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIODequeue (int,int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkingThreadCount (int,int);
void ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOPack (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 258,
ves_icall_System_Array_InternalCreate,
// token 264,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 265,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 266,
ves_icall_System_Array_CanChangePrimitive,
// token 267,
ves_icall_System_Array_FastCopy_raw,
// token 268,
ves_icall_System_Array_GetLength_raw,
// token 269,
ves_icall_System_Array_GetLowerBound_raw,
// token 270,
ves_icall_System_Array_GetGenericValue_icall,
// token 271,
ves_icall_System_Array_GetValueImpl_raw,
// token 272,
ves_icall_System_Array_SetGenericValue_icall,
// token 275,
ves_icall_System_Array_SetValueImpl_raw,
// token 276,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 361,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 362,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 364,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 392,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 393,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 394,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 414,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 415,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 416,
ves_icall_System_Enum_InternalGetCorElementType,
// token 417,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 515,
mono_environment_exitcode_get,
// token 516,
mono_environment_exitcode_set,
// token 517,
ves_icall_System_Environment_get_ProcessorCount,
// token 518,
ves_icall_System_Environment_get_TickCount,
// token 519,
ves_icall_System_Environment_get_TickCount64,
// token 520,
ves_icall_System_Environment_Exit,
// token 521,
ves_icall_System_Environment_GetCommandLineArgs_raw,
// token 524,
ves_icall_System_Environment_FailFast_raw,
// token 605,
ves_icall_System_GC_GetCollectionCount,
// token 606,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 607,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 608,
ves_icall_System_GC_GetTotalAllocatedBytes_raw,
// token 611,
ves_icall_System_GC_SuppressFinalize_raw,
// token 613,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 615,
ves_icall_System_GC_GetTotalMemory,
// token 616,
ves_icall_System_GC_GetGCMemoryInfo,
// token 618,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 625,
ves_icall_System_Object_MemberwiseClone_raw,
// token 633,
ves_icall_System_Math_Acos,
// token 634,
ves_icall_System_Math_Asin,
// token 635,
ves_icall_System_Math_Atan,
// token 636,
ves_icall_System_Math_Atan2,
// token 637,
ves_icall_System_Math_Ceiling,
// token 638,
ves_icall_System_Math_Cos,
// token 639,
ves_icall_System_Math_Cosh,
// token 640,
ves_icall_System_Math_Exp,
// token 641,
ves_icall_System_Math_Floor,
// token 642,
ves_icall_System_Math_Log,
// token 643,
ves_icall_System_Math_Log10,
// token 644,
ves_icall_System_Math_Pow,
// token 645,
ves_icall_System_Math_Sin,
// token 646,
ves_icall_System_Math_Sinh,
// token 647,
ves_icall_System_Math_Sqrt,
// token 648,
ves_icall_System_Math_Tan,
// token 649,
ves_icall_System_Math_Tanh,
// token 650,
ves_icall_System_Math_ModF,
// token 693,
ves_icall_System_MathF_Acos,
// token 694,
ves_icall_System_MathF_Asin,
// token 695,
ves_icall_System_MathF_Atan,
// token 696,
ves_icall_System_MathF_Atan2,
// token 697,
ves_icall_System_MathF_Ceiling,
// token 698,
ves_icall_System_MathF_Cos,
// token 699,
ves_icall_System_MathF_Cosh,
// token 700,
ves_icall_System_MathF_Exp,
// token 701,
ves_icall_System_MathF_Floor,
// token 702,
ves_icall_System_MathF_Log,
// token 703,
ves_icall_System_MathF_Log10,
// token 704,
ves_icall_System_MathF_Pow,
// token 705,
ves_icall_System_MathF_Sin,
// token 706,
ves_icall_System_MathF_Sinh,
// token 707,
ves_icall_System_MathF_Sqrt,
// token 708,
ves_icall_System_MathF_Tan,
// token 709,
ves_icall_System_MathF_Tanh,
// token 802,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 810,
ves_icall_RuntimeType_make_array_type_raw,
// token 813,
ves_icall_RuntimeType_make_byref_type_raw,
// token 815,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 821,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 822,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 824,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 825,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 829,
ves_icall_RuntimeType_GetInterfaceMapData_raw,
// token 830,
ves_icall_RuntimeType_GetPacking_raw,
// token 833,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 834,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 836,
ves_icall_System_RuntimeType_getFullName_raw,
// token 837,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 840,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 841,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 842,
ves_icall_RuntimeType_GetFields_native_raw,
// token 845,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 847,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 850,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 852,
ves_icall_RuntimeType_GetName_raw,
// token 854,
ves_icall_RuntimeType_GetNamespace_raw,
// token 918,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 920,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 922,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 931,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 932,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 933,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 935,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 941,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 942,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 943,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 944,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 945,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 953,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 954,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 955,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 959,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 960,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 962,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 964,
ves_icall_System_String_FastAllocateString_raw,
// token 1168,
ves_icall_System_Type_internal_from_handle_raw,
// token 1341,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1342,
ves_icall_System_ValueType_Equals_raw,
// token 6936,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6937,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6939,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6940,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6941,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6942,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6943,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6945,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6947,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6949,
ves_icall_System_Threading_Interlocked_Read_Long,
// token 6950,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6951,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6962,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6964,
mono_monitor_exit_icall_raw,
// token 6968,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 6969,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6971,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6973,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6975,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6977,
ves_icall_System_Threading_Monitor_Monitor_LockContentionCount,
// token 6992,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 7000,
ves_icall_System_Threading_Thread_StartInternal_raw,
// token 7006,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 7007,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 7009,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 7010,
ves_icall_System_Threading_Thread_GetState_raw,
// token 7011,
ves_icall_System_Threading_Thread_SetState_raw,
// token 7012,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 7013,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 7015,
ves_icall_System_Threading_Thread_YieldInternal,
// token 7017,
ves_icall_System_Threading_Thread_Join_internal_raw,
// token 7018,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7082,
ves_icall_System_Threading_LowLevelLifoSemaphore_InitInternal,
// token 7084,
ves_icall_System_Threading_LowLevelLifoSemaphore_DeleteInternal,
// token 7086,
ves_icall_System_Threading_LowLevelLifoSemaphore_TimedWaitInternal,
// token 7088,
ves_icall_System_Threading_LowLevelLifoSemaphore_ReleaseInternal,
// token 8342,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 8345,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 8347,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 8348,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 8349,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 8478,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8479,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8480,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8481,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8500,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8501,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8502,
ves_icall_System_Runtime_InteropServices_Marshal_OffsetOf_raw,
// token 8503,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8505,
ves_icall_System_Runtime_InteropServices_Marshal_PtrToStructureInternal_raw,
// token 8507,
ves_icall_System_Runtime_InteropServices_Marshal_GetDelegateForFunctionPointerInternal_raw,
// token 8509,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8566,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadFromPath_raw,
// token 8567,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8568,
ves_icall_System_Runtime_InteropServices_NativeLibrary_FreeLib_raw,
// token 8569,
ves_icall_System_Runtime_InteropServices_NativeLibrary_GetSymbol_raw,
// token 8661,
mono_object_hash_icall_raw,
// token 8674,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8675,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8676,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 8677,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9138,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9139,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9143,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9144,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9177,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9207,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9212,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9219,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9229,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9233,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9302,
ves_icall_System_Reflection_RuntimeAssembly_GetEntryPoint_raw,
// token 9308,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 9321,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 9323,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 9324,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9325,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9326,
ves_icall_System_Reflection_Assembly_InternalGetReferencedAssemblies_raw,
// token 9333,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9347,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9366,
ves_icall_reflection_get_token_raw,
// token 9367,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9375,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9377,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9383,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9384,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9387,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9389,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9394,
ves_icall_reflection_get_token_raw,
// token 9404,
ves_icall_get_method_info_raw,
// token 9405,
ves_icall_get_method_attributes,
// token 9412,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9414,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9425,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodBodyInternal_raw,
// token 9428,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9431,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9432,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9433,
ves_icall_reflection_get_token_raw,
// token 9443,
ves_icall_InternalInvoke_raw,
// token 9451,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 9457,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 9458,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 9459,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 9461,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 9462,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 9481,
ves_icall_InvokeClassConstructor_raw,
// token 9483,
ves_icall_InternalInvoke_raw,
// token 9497,
ves_icall_reflection_get_token_raw,
// token 9527,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 9528,
ves_icall_System_Reflection_RuntimeModule_ResolveTypeToken_raw,
// token 9529,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 9530,
ves_icall_System_Reflection_RuntimeModule_ResolveFieldToken_raw,
// token 9531,
ves_icall_System_Reflection_RuntimeModule_ResolveStringToken_raw,
// token 9532,
ves_icall_System_Reflection_RuntimeModule_ResolveMemberToken_raw,
// token 9552,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 9581,
ves_icall_reflection_get_token_raw,
// token 9582,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10030,
ves_icall_AssemblyExtensions_ApplyUpdateEnabled,
// token 10031,
ves_icall_AssemblyExtensions_GetApplyUpdateCapabilities_raw,
// token 10033,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10106,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10186,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 10404,
ves_icall_ModuleBuilder_basic_init_raw,
// token 10405,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 10411,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 10412,
ves_icall_ModuleBuilder_getToken_raw,
// token 10417,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 10484,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11009,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11010,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11573,
ves_icall_System_Diagnostics_Debugger_IsAttached_internal,
// token 11575,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 11576,
ves_icall_System_Diagnostics_Debugger_Log,
// token 11678,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_CreateProvider_raw,
// token 11679,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DefineEvent,
// token 11680,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_DeleteProvider,
// token 11681,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_EventActivityIdControl,
// token 11682,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_WriteEventData,
// token 11683,
ves_icall_System_Diagnostics_Tracing_EventPipeInternal_GetRuntimeCounterValue,
// token 11684,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStart,
// token 11685,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadStop,
// token 11686,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadWait,
// token 11687,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolMinMaxThreads,
// token 11688,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentSample,
// token 11689,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentAdjustment,
// token 11690,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkerThreadAdjustmentStats,
// token 11691,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOEnqueue,
// token 11692,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIODequeue,
// token 11693,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolWorkingThreadCount,
// token 11694,
ves_icall_System_Diagnostics_Tracing_NativeRuntimeEventSource_LogThreadPoolIOPack,
// token 13419,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 13440,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 13447,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 13448,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 13450,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
0,
0,
0,
0,
0,
0,
1,
1,
0,
1,
1,
1,
1,
1,
0,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
};
