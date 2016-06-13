#include "nit.common.h"
val* BOX_core__Pointer(void*);
extern const struct type type_realtime__Timespec;
extern const struct class class_realtime__Timespec;
void* realtime___new_Timespec___impl( long s, long ns );
void* realtime___new_Timespec_monotonic_now___impl(  );
void* realtime___new_Timespec_copy_of___impl( void* other );
void realtime___Timespec_update___impl( void* self );
extern const int COLOR_realtime__Timespec__sec;
extern const struct type type_core__Int;
extern const char FILE_core__kernel[];
extern const int COLOR_realtime__Timespec__nanosec;
val* NEW_realtime__Timespec(const struct type* type);
extern const int COLOR_realtime__Timespec__new;
long realtime___Timespec_sec___impl( void* self );
long realtime___Timespec_nanosec___impl( void* self );
long realtime___Timespec_microsec___impl( void* self );
long realtime___Timespec_millisec___impl( void* self );
extern const struct type type_core__Float;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
val* core__flat___NativeString___to_s_full(char* self, long p0, long p1);
extern const int COLOR_realtime__Timespec__to_f;
val* core__abstract_text___Float___Object__to_s(double self);
extern const int COLOR_core__abstract_text__NativeArray__native_to_s;
extern const int COLOR_realtime__Clock___time_at_beginning;
extern const char FILE_realtime[];
extern const int COLOR_realtime__Clock___time_at_last_lapse;
void* realtime___Clock_resolution___impl( struct nitni_instance * self );
extern const int COLOR_realtime__Timespec__monotonic_now;
extern const int COLOR_realtime__Clock__time_at_beginning;
extern const int COLOR_realtime__Timespec___45d;
extern const int COLOR_realtime__Clock__time_at_last_lapse;
extern const int COLOR_realtime__Clock__time_at_last_lapse_61d;
