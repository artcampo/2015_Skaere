typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long int uint64_t;
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;
typedef long int int_least64_t;
typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;
typedef unsigned long int uint_least64_t;
typedef signed char int_fast8_t;
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef long int intptr_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
typedef unsigned long int size_t;
enum idtype_t
{
  P_ALL = 0,
  P_PID = 1,
  P_PGID = 2
};
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long int __int64_t;
typedef unsigned long int __uint64_t;
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
struct  __fsid_t
{
    int __val[2L];
};
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long int __blksize_t;
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
typedef long int __fsword_t;
typedef long int __ssize_t;
typedef long int __syscall_slong_t;
typedef unsigned long int __syscall_ulong_t;
typedef ::__off64_t __loff_t;
typedef ::__quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long int __intptr_t;
typedef unsigned int __socklen_t;
union  wait
{
    int w_status;
    struct  mcc_struct_anon_1
    {
        unsigned int __w_termsig:7;
        unsigned int __w_coredump:1;
        unsigned int __w_retcode:8;
        unsigned int:16;
    };
    ::wait::mcc_struct_anon_1 __wait_terminated;
    struct  mcc_struct_anon_2
    {
        unsigned int __w_stopval:8;
        unsigned int __w_stopsig:8;
        unsigned int:16;
    };
    ::wait::mcc_struct_anon_2 __wait_stopped;
};
struct  div_t
{
    int quot;
    int rem;
};
struct  ldiv_t
{
    long int quot;
    long int rem;
};
__extension__ struct  lldiv_t
{
    __extension__ long long int quot;
    __extension__ long long int rem;
};
extern "C"
{
  extern ::size_t __ctype_get_mb_cur_max() throw();
}
extern "C"
{
  extern double atof(const char *__nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int atoi(const char *__nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long int atol(const char *__nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long long int atoll(const char *__nptr) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern double strtod(const char *__restrict __nptr, char **__restrict __endptr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern float strtof(const char *__restrict __nptr, char **__restrict __endptr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long double strtold(const char *__restrict __nptr, char **__restrict __endptr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long int strtol(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern unsigned long int strtoul(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long long int strtoq(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern unsigned long long int strtouq(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long long int strtoll(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern unsigned long long int strtoull(const char *__restrict __nptr, char **__restrict __endptr, int __base) throw() __attribute__((__nonnull__(1)));
}
struct __locale_data;
struct  __locale_struct
{
    ::__locale_data *__locales[13L];
    const unsigned short int *__ctype_b;
    const int *__ctype_tolower;
    const int *__ctype_toupper;
    const char *__names[13L];
};
typedef ::__locale_struct *__locale_t;
typedef ::__locale_t locale_t;
extern "C"
{
  extern long int strtol_l(const char *__restrict __nptr, char **__restrict __endptr, int __base, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern unsigned long int strtoul_l(const char *__restrict __nptr, char **__restrict __endptr, int __base, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern long long int strtoll_l(const char *__restrict __nptr, char **__restrict __endptr, int __base, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern unsigned long long int strtoull_l(const char *__restrict __nptr, char **__restrict __endptr, int __base, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern double strtod_l(const char *__restrict __nptr, char **__restrict __endptr, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern float strtof_l(const char *__restrict __nptr, char **__restrict __endptr, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern long double strtold_l(const char *__restrict __nptr, char **__restrict __endptr, ::__locale_t __loc) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern char *l64a(long int __n) throw();
}
extern "C"
{
  extern long int a64l(const char *__s) throw() __attribute__((__pure__)) __attribute__((__nonnull__(1)));
}
typedef ::__u_char u_char;
typedef ::__u_short u_short;
typedef ::__u_int u_int;
typedef ::__u_long u_long;
typedef ::__quad_t quad_t;
typedef ::__u_quad_t u_quad_t;
typedef ::__fsid_t fsid_t;
typedef ::__loff_t loff_t;
typedef ::__ino_t ino_t;
typedef ::__ino64_t ino64_t;
typedef ::__dev_t dev_t;
typedef ::__gid_t gid_t;
typedef ::__mode_t mode_t;
typedef ::__nlink_t nlink_t;
typedef ::__uid_t uid_t;
typedef ::__off_t off_t;
typedef ::__off64_t off64_t;
typedef ::__pid_t pid_t;
typedef ::__id_t id_t;
typedef ::__ssize_t ssize_t;
typedef ::__daddr_t daddr_t;
typedef ::__caddr_t caddr_t;
typedef ::__key_t key_t;
typedef ::__clock_t clock_t;
typedef ::__time_t time_t;
typedef ::__clockid_t clockid_t;
typedef ::__timer_t timer_t;
typedef ::__useconds_t useconds_t;
typedef ::__suseconds_t suseconds_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned char u_int8_t;
typedef unsigned short int u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long int u_int64_t;
typedef long int register_t;
typedef int __sig_atomic_t;
struct  __sigset_t
{
    unsigned long int __val[16L];
};
typedef ::__sigset_t sigset_t;
struct  timespec
{
    ::__time_t tv_sec;
    ::__syscall_slong_t tv_nsec;
};
struct  timeval
{
    ::__time_t tv_sec;
    ::__suseconds_t tv_usec;
};
typedef long int __fd_mask;
struct  fd_set
{
    ::__fd_mask fds_bits[16L];
};
typedef ::__fd_mask fd_mask;
extern "C"
{
  extern int select(int __nfds, ::fd_set *__restrict __readfds, ::fd_set *__restrict __writefds, ::fd_set *__restrict __exceptfds, ::timeval *__restrict __timeout);
}
extern "C"
{
  extern int pselect(int __nfds, ::fd_set *__restrict __readfds, ::fd_set *__restrict __writefds, ::fd_set *__restrict __exceptfds, const ::timespec *__restrict __timeout, const ::__sigset_t *__restrict __sigmask);
}
extern "C"
{
  extern unsigned int gnu_dev_major(unsigned long long int __dev) throw() __attribute__((__const__));
}
extern "C"
{
  extern unsigned int gnu_dev_minor(unsigned long long int __dev) throw() __attribute__((__const__));
}
extern "C"
{
  extern unsigned long long int gnu_dev_makedev(unsigned int __major, unsigned int __minor) throw() __attribute__((__const__));
}
typedef ::__blksize_t blksize_t;
typedef ::__blkcnt_t blkcnt_t;
typedef ::__fsblkcnt_t fsblkcnt_t;
typedef ::__fsfilcnt_t fsfilcnt_t;
typedef ::__blkcnt64_t blkcnt64_t;
typedef ::__fsblkcnt64_t fsblkcnt64_t;
typedef ::__fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long int pthread_t;
union  pthread_attr_t
{
    char __size[56L];
    long int __align;
};
struct __pthread_internal_list;
struct  __pthread_internal_list
{
    ::__pthread_internal_list *__prev;
    ::__pthread_internal_list *__next;
};
typedef ::__pthread_internal_list __pthread_list_t;
union  pthread_mutex_t
{
    struct  __pthread_mutex_s
    {
        int __lock;
        unsigned int __count;
        int __owner;
        unsigned int __nusers;
        int __kind;
        short int __spins;
        short int __elision;
        ::__pthread_list_t __list;
    };
    ::pthread_mutex_t::__pthread_mutex_s __data;
    char __size[40L];
    long int __align;
};
union  pthread_mutexattr_t
{
    char __size[4L];
    int __align;
};
union  pthread_cond_t
{
    struct  mcc_struct_anon_11
    {
        int __lock;
        unsigned int __futex;
        __extension__ unsigned long long int __total_seq;
        __extension__ unsigned long long int __wakeup_seq;
        __extension__ unsigned long long int __woken_seq;
        void *__mutex;
        unsigned int __nwaiters;
        unsigned int __broadcast_seq;
    };
    ::pthread_cond_t::mcc_struct_anon_11 __data;
    char __size[48L];
    __extension__ long long int __align;
};
union  pthread_condattr_t
{
    char __size[4L];
    int __align;
};
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union  pthread_rwlock_t
{
    struct  mcc_struct_anon_14
    {
        int __lock;
        unsigned int __nr_readers;
        unsigned int __readers_wakeup;
        unsigned int __writer_wakeup;
        unsigned int __nr_readers_queued;
        unsigned int __nr_writers_queued;
        int __writer;
        int __shared;
        unsigned long int __pad1;
        unsigned long int __pad2;
        unsigned int __flags;
    };
    ::pthread_rwlock_t::mcc_struct_anon_14 __data;
    char __size[56L];
    long int __align;
};
union  pthread_rwlockattr_t
{
    char __size[8L];
    long int __align;
};
typedef volatile int pthread_spinlock_t;
union  pthread_barrier_t
{
    char __size[32L];
    long int __align;
};
union  pthread_barrierattr_t
{
    char __size[4L];
    int __align;
};
extern "C"
{
  extern long int random() throw();
}
extern "C"
{
  extern void srandom(unsigned int __seed) throw();
}
extern "C"
{
  extern char *initstate(unsigned int __seed, char *__statebuf, ::size_t __statelen) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern char *setstate(char *__statebuf) throw() __attribute__((__nonnull__(1)));
}
struct  random_data
{
    ::int32_t *fptr;
    ::int32_t *rptr;
    ::int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    ::int32_t *end_ptr;
};
extern "C"
{
  extern int random_r(::random_data *__restrict __buf, ::int32_t *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int srandom_r(unsigned int __seed, ::random_data *__buf) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int initstate_r(unsigned int __seed, char *__restrict __statebuf, ::size_t __statelen, ::random_data *__restrict __buf) throw() __attribute__((__nonnull__(2, 4)));
}
extern "C"
{
  extern int setstate_r(char *__restrict __statebuf, ::random_data *__restrict __buf) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int rand() throw();
}
extern "C"
{
  extern void srand(unsigned int __seed) throw();
}
extern "C"
{
  extern int rand_r(unsigned int *__seed) throw();
}
extern "C"
{
  extern double drand48() throw();
}
extern "C"
{
  extern double erand48(unsigned short int __xsubi[3L]) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long int lrand48() throw();
}
extern "C"
{
  extern long int nrand48(unsigned short int __xsubi[3L]) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern long int mrand48() throw();
}
extern "C"
{
  extern long int jrand48(unsigned short int __xsubi[3L]) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern void srand48(long int __seedval) throw();
}
extern "C"
{
  extern unsigned short int *seed48(unsigned short int __seed16v[3L]) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern void lcong48(unsigned short int __param[7L]) throw() __attribute__((__nonnull__(1)));
}
struct  drand48_data
{
    unsigned short int __x[3L];
    unsigned short int __old_x[3L];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
};
extern "C"
{
  extern int drand48_r(::drand48_data *__restrict __buffer, double *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int erand48_r(unsigned short int __xsubi[3L], ::drand48_data *__restrict __buffer, double *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int lrand48_r(::drand48_data *__restrict __buffer, long int *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int nrand48_r(unsigned short int __xsubi[3L], ::drand48_data *__restrict __buffer, long int *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int mrand48_r(::drand48_data *__restrict __buffer, long int *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int jrand48_r(unsigned short int __xsubi[3L], ::drand48_data *__restrict __buffer, long int *__restrict __result) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int srand48_r(long int __seedval, ::drand48_data *__buffer) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int seed48_r(unsigned short int __seed16v[3L], ::drand48_data *__buffer) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int lcong48_r(unsigned short int __param[7L], ::drand48_data *__buffer) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern void *malloc(::size_t __size) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern void *calloc(::size_t __nmemb, ::size_t __size) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern void *realloc(void *__ptr, ::size_t __size) throw() __attribute__((__warn_unused_result__));
}
extern "C"
{
  extern void free(void *__ptr) throw();
}
extern "C"
{
  extern void cfree(void *__ptr) throw();
}
extern "C"
{
  extern void *alloca(::size_t __size) throw();
}
extern "C"
{
  extern void *valloc(::size_t __size) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern int posix_memalign(void **__memptr, ::size_t __alignment, ::size_t __size) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern void *aligned_alloc(::size_t __alignment, ::size_t __size) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern void abort() throw() __attribute__((__noreturn__));
}
extern "C"
{
  extern int atexit(void (*__func)()) throw() __attribute__((__nonnull__(1)));
}
int at_quick_exit(void (*__func)()) throw() __asm("at_quick_exit") __attribute__((__nonnull__(1)));
extern "C"
{
  extern int on_exit(void (*__func)(int, void *), void *__arg) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern void exit(int __status) throw() __attribute__((__noreturn__));
}
extern "C"
{
  extern void quick_exit(int __status) throw() __attribute__((__noreturn__));
}
extern "C"
{
  extern void _Exit(int __status) throw() __attribute__((__noreturn__));
}
extern "C"
{
  extern char *getenv(const char *__name) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern char *secure_getenv(const char *__name) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int putenv(char *__string) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int setenv(const char *__name, const char *__value, int __replace) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int unsetenv(const char *__name) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int clearenv() throw();
}
extern "C"
{
  extern char *mktemp(char *__template) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkstemp(char *__template) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkstemp64(char *__template) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkstemps(char *__template, int __suffixlen) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkstemps64(char *__template, int __suffixlen) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern char *mkdtemp(char *__template) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkostemp(char *__template, int __flags) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkostemp64(char *__template, int __flags) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkostemps(char *__template, int __suffixlen, int __flags) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int mkostemps64(char *__template, int __suffixlen, int __flags) __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int system(const char *__command);
}
extern "C"
{
  extern char *canonicalize_file_name(const char *__name) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern char *realpath(const char *__restrict __name, char *__restrict __resolved) throw();
}
typedef int (*__compar_fn_t)(const void *, const void *);
typedef ::__compar_fn_t comparison_fn_t;
typedef int (*__compar_d_fn_t)(const void *, const void *, void *);
extern "C"
{
  extern void *bsearch(const void *__key, const void *__base, ::size_t __nmemb, ::size_t __size, ::__compar_fn_t __compar) __attribute__((__nonnull__(1, 2, 5)));
}
extern "C"
{
  extern void qsort(void *__base, ::size_t __nmemb, ::size_t __size, ::__compar_fn_t __compar) __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern void qsort_r(void *__base, ::size_t __nmemb, ::size_t __size, ::__compar_d_fn_t __compar, void *__arg) __attribute__((__nonnull__(1, 4)));
}
extern "C"
{
  extern int abs(int __x) throw() __attribute__((__const__));
}
extern "C"
{
  extern long int labs(long int __x) throw() __attribute__((__const__));
}
extern "C"
{
  extern long long int llabs(long long int __x) throw() __attribute__((__const__));
}
extern "C"
{
  extern ::div_t div(int __numer, int __denom) throw() __attribute__((__const__));
}
extern "C"
{
  extern ::ldiv_t ldiv(long int __numer, long int __denom) throw() __attribute__((__const__));
}
extern "C"
{
  extern ::lldiv_t lldiv(long long int __numer, long long int __denom) throw() __attribute__((__const__));
}
extern "C"
{
  extern char *ecvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
}
extern "C"
{
  extern char *fcvt(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
}
extern "C"
{
  extern char *gcvt(double __value, int __ndigit, char *__buf) throw() __attribute__((__nonnull__(3)));
}
extern "C"
{
  extern char *qecvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
}
extern "C"
{
  extern char *qfcvt(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign) throw() __attribute__((__nonnull__(3, 4)));
}
extern "C"
{
  extern char *qgcvt(long double __value, int __ndigit, char *__buf) throw() __attribute__((__nonnull__(3)));
}
extern "C"
{
  extern int ecvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, ::size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
}
extern "C"
{
  extern int fcvt_r(double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, ::size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
}
extern "C"
{
  extern int qecvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, ::size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
}
extern "C"
{
  extern int qfcvt_r(long double __value, int __ndigit, int *__restrict __decpt, int *__restrict __sign, char *__restrict __buf, ::size_t __len) throw() __attribute__((__nonnull__(3, 4, 5)));
}
extern "C"
{
  extern int mblen(const char *__s, ::size_t __n) throw();
}
extern "C"
{
  extern int mbtowc(wchar_t *__restrict __pwc, const char *__restrict __s, ::size_t __n) throw();
}
extern "C"
{
  extern int wctomb(char *__s, wchar_t __wchar) throw();
}
extern "C"
{
  extern ::size_t mbstowcs(wchar_t *__restrict __pwcs, const char *__restrict __s, ::size_t __n) throw();
}
extern "C"
{
  extern ::size_t wcstombs(char *__restrict __s, const wchar_t *__restrict __pwcs, ::size_t __n) throw();
}
extern "C"
{
  extern int rpmatch(const char *__response) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int getsubopt(char **__restrict __optionp, char *const *__restrict __tokens, char **__restrict __valuep) throw() __attribute__((__nonnull__(1, 2, 3)));
}
extern "C"
{
  extern void setkey(const char *__key) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int posix_openpt(int __oflag);
}
extern "C"
{
  extern int grantpt(int __fd) throw();
}
extern "C"
{
  extern int unlockpt(int __fd) throw();
}
extern "C"
{
  extern char *ptsname(int __fd) throw();
}
extern "C"
{
  extern int ptsname_r(int __fd, char *__buf, ::size_t __buflen) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int getpt();
}
extern "C"
{
  extern int getloadavg(double __loadavg[], int __nelem) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  void tareador_ON();
}
extern "C"
{
  void tareador_OFF();
}
extern "C"
{
  void tareador_dynamic_OFF();
}
extern "C"
{
  void tareador_start_task(const char *const name);
}
extern "C"
{
  void tareador_end_task(const char *const name);
}
extern "C"
{
  void tareador_enable_object(const void *const address);
}
extern "C"
{
  void tareador_disable_object(const void *const address);
}
extern "C"
{
  void tareador_set_InstCount(const int aEnable);
}
extern "C"
{
  void tareador_set_Sections(const int aEnable);
}
extern "C"
{
  void tareador_set_MemAccesses(const int aEnable);
}
extern "C"
{
  void tareador_set_nwdlGlobal(const int aEnable);
}
extern "C"
{
  void tareador_set_nwdlHeap(const int aEnable);
}
extern "C"
{
  void tareador_set_nwdlRetVal(const int aEnable);
}
extern "C"
{
  void tareador_set_nwdlStack(const int aEnable);
}
extern "C"
{
  void __runtimeTareador_AddGlobalVar(const char *const address, const int size, const char *const name, const char *const fileAndLine);
}
extern "C"
{
  void __runtimeTareador_AddRegVar(const int size, const char *const name);
}
extern "C"
{
  void __runtimeTareador_DeleteRegVar(const char *const name);
}
extern "C"
{
  void __runtimeTareador_Read(const char *const address, const int size);
}
extern "C"
{
  void __runtimeTareador_Write(const char *const address, const int size);
}
extern "C"
{
  void __runtimeTareador_RegRead(const int s1, const int s2);
}
extern "C"
{
  void __runtimeTareador_RegWrite(const int s1, const int s2);
}
extern "C"
{
  void __runtimeTareador_Alloca(const char *const address, const ::size_t sizep, const char *const name);
}
extern "C"
{
  void __runtimeTareador_Heap(const char *const address, const ::size_t size, const char *const name, const char *const fileAndLine);
}
extern "C"
{
  void tareador_label_object(const void *const address, const char *const newname);
}
extern "C"
{
  void __runtimeTareador_DeleteAlloca(const char *const address);
}
extern "C"
{
  void __runtimeTareador_DeleteHeap(const char *const address);
}
extern "C"
{
  void __runtimeTareador_ReallocHeap(const char *const oldaddress, const char *const newaddress, const ::int64_t size);
}
extern "C"
{
  void __runtimeTareadorInit(const int flushToFile, const int lite, const int stats);
}
extern "C"
{
  void __runtimeTareador_DeepProfileInit();
}
extern "C"
{
  void __runtimeTareador_ProfileInit();
}
extern "C"
{
  void __runtimeTareador_LoadBlackList();
}
extern "C"
{
  void __runtimeTareadorEnd();
}
extern "C"
{
  extern int *gExecutedInstructionsLocal;
}
extern "C"
{
  void __runtimeTareadorAddExecutedInstructions(const int execInstr);
}
extern "C"
{
  void __runtimeTareadorAddExecutedInstructions_execute(int *const execInstr);
}
extern "C"
{
  void __runtimeTareador_StartSection(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_EndSection(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_OMPSS_StartTask(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_OMPSS_AddIn(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_AddOut(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_AddInOut(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_Shared(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_Firstprivate(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_Private(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_Lastprivate(const char *const varName, const void *const begin, const int size);
}
extern "C"
{
  void __runtimeTareador_OMPSS_EndTask(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_OMPSS_Wait();
}
extern "C"
{
  void __runtimeTareador_ResumeException(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_DumpRegisters();
}
extern "C"
{
  void __runtimeTareador_DumpLiveVariables();
}
extern "C"
{
  void __runtimeTareador_DumpDeadVariables();
}
extern "C"
{
  void __runtimeTareador_DumpSectionsAndAccesses();
}
extern "C"
{
  void __runtimeTareador_DumpEverything();
}
extern "C"
{
  void __runtimeTareador_ProfileStart(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_ProfileEnd(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_ProfileAddExecutedInstructions(const int execInstr);
}
extern "C"
{
  void __runtimeTareador_ProfileDump();
}
extern "C"
{
  void __runtimeTareador_DeepProfileStart(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_DeepProfileEnd(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_DeepProfileAddExecutedInstructions(const int execInstr);
}
extern "C"
{
  void __runtimeTareador_DeepProfileDump();
}
extern "C"
{
  void __runtimeTareador_AddCallingPoint(const char *const lineNumber);
}
extern "C"
{
  void __runtimeTareador_AddStackFrame(const char *const sectionId);
}
extern "C"
{
  void __runtimeTareador_DelStackFrame();
}
extern "C"
{
  void __runtimeTareador_mainArgs(const int argc, const char *const *const argv);
}
extern "C"
{
  void __tareador_pin_ON();
}
extern "C"
{
  void __tareador_pin_OFF();
}
extern "C"
{
  void __runtimeTareador_PINMalloc(void *pointer, const ::size_t d);
}
extern "C"
{
  void __runtimeTareador_PINWrite(const char *const address, int size);
}
extern "C"
{
  void __runtimeTareador_PINRead(const char *const address, int size);
}
extern "C"
{
  void __runtimeTareador_PIN_SharedPointer(void *sharedPointer, void *inst);
}
extern "C"
{
  void __runtimeTareador_PIN_ProcessBuffer();
}
namespace std __attribute__((__visibility__("default"))) {
  typedef unsigned long int size_t;
  typedef long int ptrdiff_t;
  typedef decltype(nullptr) nullptr_t;
}
#pragma GCC visibility push(default)
namespace std __attribute__((__visibility__("default"))) {
  class  exception
  {
    public:
      inline exception() noexcept(true)
      {
      }
      virtual ~exception() noexcept(true);
      virtual const char *what() const  noexcept(true);
  };
  class  bad_exception : public ::std::exception
  {
    public:
      inline bad_exception() noexcept(true)
      {
      }
      virtual ~bad_exception() noexcept(true);
      virtual const char *what() const  noexcept(true);
  };
  typedef void (*terminate_handler)();
  typedef void (*unexpected_handler)();
  ::std::terminate_handler set_terminate(::std::terminate_handler) noexcept(true);
  void terminate() noexcept(true) __attribute__((__noreturn__));
  ::std::unexpected_handler set_unexpected(::std::unexpected_handler) noexcept(true);
  void unexpected() __attribute__((__noreturn__));
  bool uncaught_exception() noexcept(true) __attribute__((__pure__));
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  void __verbose_terminate_handler();
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
namespace std __attribute__((__visibility__("default"))) {
  class type_info;
  namespace __exception_ptr {
    class exception_ptr;
  }
  using ::std::__exception_ptr::exception_ptr;
  ::std::__exception_ptr::exception_ptr current_exception() noexcept(true);
  void rethrow_exception(::std::__exception_ptr::exception_ptr) __attribute__((__noreturn__));
  namespace __exception_ptr {
    class  exception_ptr
    {
        void *_M_exception_object;
        explicit exception_ptr(void *__e) noexcept(true);
        void _M_addref() noexcept(true);
        void _M_release() noexcept(true);
        void *_M_get() const  noexcept(true) __attribute__((__pure__));
      public:
        exception_ptr() noexcept(true);
        exception_ptr(const ::std::__exception_ptr::exception_ptr &) noexcept(true);
        inline exception_ptr(::std::nullptr_t) noexcept(true)
          : _M_exception_object(0)
        {
        }
        inline exception_ptr(::std::__exception_ptr::exception_ptr &&__o) noexcept(true)
          : _M_exception_object(__o._M_exception_object)
        {
          __o._M_exception_object = 0;
        }
        ::std::__exception_ptr::exception_ptr &operator =(const ::std::__exception_ptr::exception_ptr &) noexcept(true);
        inline ::std::__exception_ptr::exception_ptr &operator =(::std::__exception_ptr::exception_ptr &&__o) noexcept(true)
        {
          ::std::__exception_ptr::exception_ptr(static_cast< ::std::__exception_ptr::exception_ptr &&>(__o)).::std::__exception_ptr::exception_ptr::swap(*this);
          return *this;
        }
        ~exception_ptr() noexcept(true);
        void swap(::std::__exception_ptr::exception_ptr &) noexcept(true);
        inline explicit operator bool() const 
        {
          return (*this)._M_exception_object;
        }
        const ::std::type_info *__cxa_exception_type() const  noexcept(true) __attribute__((__pure__));
      friend ::std::__exception_ptr::exception_ptr (::std::current_exception)() noexcept(true);
      friend void (::std::rethrow_exception)(::std::__exception_ptr::exception_ptr);
      friend bool operator ==(const ::std::__exception_ptr::exception_ptr &, const ::std::__exception_ptr::exception_ptr &) noexcept(true);
    };
    bool operator ==(const ::std::__exception_ptr::exception_ptr &, const ::std::__exception_ptr::exception_ptr &) noexcept(true) __attribute__((__pure__));
    bool operator !=(const ::std::__exception_ptr::exception_ptr &, const ::std::__exception_ptr::exception_ptr &) noexcept(true) __attribute__((__pure__));
    inline void swap(::std::__exception_ptr::exception_ptr &__lhs, ::std::__exception_ptr::exception_ptr &__rhs)
    {
      __lhs.::std::__exception_ptr::exception_ptr::swap(__rhs);
    }
  }
  template < typename _Ex >
  ::std::__exception_ptr::exception_ptr copy_exception(_Ex __ex) noexcept(true);
  template < typename _Ex >
  ::std::__exception_ptr::exception_ptr copy_exception(_Ex __ex) noexcept(true)
  {
    try
    {
      throw __ex;
    }
    catch (...)
    {
      return ::std::current_exception();
    }
  }
  template < typename _Ex >
  ::std::__exception_ptr::exception_ptr make_exception_ptr(_Ex __ex) noexcept(true);
  template < typename _Ex >
  ::std::__exception_ptr::exception_ptr make_exception_ptr(_Ex __ex) noexcept(true)
  {
    return std::copy_exception<_Ex>(__ex);
  }
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
namespace std __attribute__((__visibility__("default"))) {
  class  nested_exception
  {
      ::std::__exception_ptr::exception_ptr _M_ptr;
    public:
      inline nested_exception() noexcept(true)
        : _M_ptr(::std::current_exception())
      {
      }
      nested_exception(const ::std::nested_exception &) = default ;
      ::std::nested_exception &operator =(const ::std::nested_exception &) = default ;
      virtual ~nested_exception() noexcept(true);
      inline __attribute__((__noreturn__)) void rethrow_nested() const 
      {
        ::std::rethrow_exception((*this)._M_ptr);
      }
      inline ::std::__exception_ptr::exception_ptr nested_ptr() const 
      {
        return (*this)._M_ptr;
      }
  };
  template < typename _Except >
  struct  _Nested_exception : _Except, ::std::nested_exception
  {
      inline explicit _Nested_exception(_Except &&__ex)
        : _Except(static_cast<_Except &&>(__ex))
      {
      }
  };
  template < typename _Ex >
  struct  __get_nested_helper
  {
      static inline const ::std::nested_exception *_S_get(const _Ex &__ex)
      {
        return dynamic_cast<const ::std::nested_exception *>(&__ex);
      }
  };
  template < typename _Ex >
  struct  __get_nested_helper<_Ex *>
  {
      static inline const ::std::nested_exception *_S_get(const _Ex *__ex)
      {
        return dynamic_cast<const ::std::nested_exception *>(__ex);
      }
  };
  template < typename _Ex >
  inline const ::std::nested_exception *__get_nested_exception(const _Ex &__ex);
  template < typename _Ex >
  inline const ::std::nested_exception *__get_nested_exception(const _Ex &__ex)
  {
    return __get_nested_helper<_Ex>::_S_get(__ex);
  }
  template < typename _Ex >
  inline void __throw_with_nested(_Ex &&__ex, const ::std::nested_exception *  = (0));
  template < typename _Ex >
  inline void __throw_with_nested(_Ex &&__ex, ...);
  template < typename _Ex >
  inline void __throw_with_nested(_Ex &&__ex, const ::std::nested_exception *)
  {
    throw __ex;
  }
  template < typename _Ex >
  inline void __throw_with_nested(_Ex &&__ex, ...)
  {
    throw ::std::_Nested_exception<_Ex>(static_cast<_Ex &&>(__ex));
  }
  template < typename _Ex >
  inline void throw_with_nested(_Ex __ex);
  template < typename _Ex >
  inline void throw_with_nested(_Ex __ex)
  {
    if (__get_nested_exception(__ex))
      {
        throw __ex;
      }
    __throw_with_nested(static_cast<_Ex &&>(__ex), &__ex);
  }
  template < typename _Ex >
  inline void rethrow_if_nested(const _Ex &__ex);
  template < typename _Ex >
  inline void rethrow_if_nested(const _Ex &__ex)
  {
    if (const ::std::nested_exception *__nested = __get_nested_exception(__ex))
      {
        (*__nested).::std::nested_exception::rethrow_nested();
      }
  }
  inline void rethrow_if_nested(const ::std::nested_exception &__ex)
  {
    __ex.::std::nested_exception::rethrow_nested();
  }
}
#pragma GCC visibility pop
#pragma GCC visibility push(default)
namespace std __attribute__((__visibility__("default"))) {
  class  bad_alloc : public ::std::exception
  {
    public:
      inline bad_alloc() throw()
      {
      }
      virtual ~bad_alloc() throw();
      virtual const char *what() const  throw();
  };
  struct  nothrow_t
  {
  };
  extern const ::std::nothrow_t nothrow;
  typedef void (*new_handler)();
  ::std::new_handler set_new_handler(::std::new_handler) throw();
}
void *operator new(::std::size_t, const ::std::nothrow_t &) noexcept(true) __attribute__((__externally_visible__));
void *operator new[](::std::size_t, const ::std::nothrow_t &) noexcept(true) __attribute__((__externally_visible__));
void operator delete(void *, const ::std::nothrow_t &) noexcept(true) __attribute__((__externally_visible__));
void operator delete[](void *, const ::std::nothrow_t &) noexcept(true) __attribute__((__externally_visible__));
inline void *operator new(::std::size_t, void *__p) noexcept(true)
{
  return __p;
}
inline void *operator new[](::std::size_t, void *__p) noexcept(true)
{
  return __p;
}
inline void operator delete(void *, void *) noexcept(true)
{
}
inline void operator delete[](void *, void *) noexcept(true)
{
}
#pragma GCC visibility pop
namespace std __attribute__((__visibility__("default"))) {
  template < typename __type_tpl__param_1_0__ >
  class allocator;
  template <>
  class allocator<void>;
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct uses_allocator;
  template < typename _CharT >
  struct char_traits;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT>, typename _Alloc = ::std::allocator<_CharT> >
  class basic_string;
  template <>
  struct char_traits<char>;
  typedef ::std::basic_string<char> string;
  template <>
  struct char_traits<wchar_t>;
  typedef ::std::basic_string<wchar_t> wstring;
  template <>
  struct char_traits<char16_t>;
  template <>
  struct char_traits<char32_t>;
  typedef ::std::basic_string<char16_t> u16string;
  typedef ::std::basic_string<char32_t> u32string;
}
struct _IO_FILE;
typedef ::_IO_FILE FILE;
typedef ::_IO_FILE __FILE;
typedef ::__builtin_va_list va_list;
typedef ::__builtin_va_list __gnuc_va_list;
typedef unsigned int wint_t;
struct  __mbstate_t
{
    int __count;
    union  mcc_union_anon_19
    {
        unsigned int __wch;
        char __wchb[4L];
    };
    ::__mbstate_t::mcc_union_anon_19 __value;
};
typedef ::__mbstate_t mbstate_t;
struct tm;
extern "C"
{
  extern wchar_t *wcscpy(wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw();
}
extern "C"
{
  extern wchar_t *wcsncpy(wchar_t *__restrict __dest, const wchar_t *__restrict __src, ::size_t __n) throw();
}
extern "C"
{
  extern wchar_t *wcscat(wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw();
}
extern "C"
{
  extern wchar_t *wcsncat(wchar_t *__restrict __dest, const wchar_t *__restrict __src, ::size_t __n) throw();
}
extern "C"
{
  extern int wcscmp(const wchar_t *__s1, const wchar_t *__s2) throw() __attribute__((__pure__));
}
extern "C"
{
  extern int wcsncmp(const wchar_t *__s1, const wchar_t *__s2, ::size_t __n) throw() __attribute__((__pure__));
}
extern "C"
{
  extern int wcscasecmp(const wchar_t *__s1, const wchar_t *__s2) throw();
}
extern "C"
{
  extern int wcsncasecmp(const wchar_t *__s1, const wchar_t *__s2, ::size_t __n) throw();
}
extern "C"
{
  extern int wcscasecmp_l(const wchar_t *__s1, const wchar_t *__s2, ::__locale_t __loc) throw();
}
extern "C"
{
  extern int wcsncasecmp_l(const wchar_t *__s1, const wchar_t *__s2, ::size_t __n, ::__locale_t __loc) throw();
}
extern "C"
{
  extern int wcscoll(const wchar_t *__s1, const wchar_t *__s2) throw();
}
extern "C"
{
  extern ::size_t wcsxfrm(wchar_t *__restrict __s1, const wchar_t *__restrict __s2, ::size_t __n) throw();
}
extern "C"
{
  extern int wcscoll_l(const wchar_t *__s1, const wchar_t *__s2, ::__locale_t __loc) throw();
}
extern "C"
{
  extern ::size_t wcsxfrm_l(wchar_t *__s1, const wchar_t *__s2, ::size_t __n, ::__locale_t __loc) throw();
}
extern "C"
{
  extern wchar_t *wcsdup(const wchar_t *__s) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern wchar_t *wcschr(const wchar_t *__wcs, wchar_t __wc) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcsrchr(const wchar_t *__wcs, wchar_t __wc) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcschrnul(const wchar_t *__s, wchar_t __wc) throw() __attribute__((__pure__));
}
extern "C"
{
  extern ::size_t wcscspn(const wchar_t *__wcs, const wchar_t *__reject) throw() __attribute__((__pure__));
}
extern "C"
{
  extern ::size_t wcsspn(const wchar_t *__wcs, const wchar_t *__accept) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcspbrk(const wchar_t *__wcs, const wchar_t *__accept) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcsstr(const wchar_t *__haystack, const wchar_t *__needle) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcstok(wchar_t *__restrict __s, const wchar_t *__restrict __delim, wchar_t **__restrict __ptr) throw();
}
extern "C"
{
  extern ::size_t wcslen(const wchar_t *__s) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wcswcs(const wchar_t *__haystack, const wchar_t *__needle) throw() __attribute__((__pure__));
}
extern "C"
{
  extern ::size_t wcsnlen(const wchar_t *__s, ::size_t __maxlen) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wmemchr(const wchar_t *__s, wchar_t __c, ::size_t __n) throw() __attribute__((__pure__));
}
extern "C"
{
  extern int wmemcmp(const wchar_t *__s1, const wchar_t *__s2, ::size_t __n) throw() __attribute__((__pure__));
}
extern "C"
{
  extern wchar_t *wmemcpy(wchar_t *__restrict __s1, const wchar_t *__restrict __s2, ::size_t __n) throw();
}
extern "C"
{
  extern wchar_t *wmemmove(wchar_t *__s1, const wchar_t *__s2, ::size_t __n) throw();
}
extern "C"
{
  extern wchar_t *wmemset(wchar_t *__s, wchar_t __c, ::size_t __n) throw();
}
extern "C"
{
  extern wchar_t *wmempcpy(wchar_t *__restrict __s1, const wchar_t *__restrict __s2, ::size_t __n) throw();
}
extern "C"
{
  extern ::wint_t btowc(int __c) throw();
}
extern "C"
{
  extern int wctob(::wint_t __c) throw();
}
extern "C"
{
  extern int mbsinit(const ::mbstate_t *__ps) throw() __attribute__((__pure__));
}
extern "C"
{
  extern ::size_t mbrtowc(wchar_t *__restrict __pwc, const char *__restrict __s, ::size_t __n, ::mbstate_t *__restrict __p) throw();
}
extern "C"
{
  extern ::size_t wcrtomb(char *__restrict __s, wchar_t __wc, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t __mbrlen(const char *__restrict __s, ::size_t __n, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t mbrlen(const char *__restrict __s, ::size_t __n, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t mbsrtowcs(wchar_t *__restrict __dst, const char **__restrict __src, ::size_t __len, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t wcsrtombs(char *__restrict __dst, const wchar_t **__restrict __src, ::size_t __len, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t mbsnrtowcs(wchar_t *__restrict __dst, const char **__restrict __src, ::size_t __nmc, ::size_t __len, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern ::size_t wcsnrtombs(char *__restrict __dst, const wchar_t **__restrict __src, ::size_t __nwc, ::size_t __len, ::mbstate_t *__restrict __ps) throw();
}
extern "C"
{
  extern int wcwidth(wchar_t __c) throw();
}
extern "C"
{
  extern int wcswidth(const wchar_t *__s, ::size_t __n) throw();
}
extern "C"
{
  extern double wcstod(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr) throw();
}
extern "C"
{
  extern float wcstof(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr) throw();
}
extern "C"
{
  extern long double wcstold(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr) throw();
}
extern "C"
{
  extern long int wcstol(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern unsigned long int wcstoul(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern long long int wcstoll(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern unsigned long long int wcstoull(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern long long int wcstoq(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern unsigned long long int wcstouq(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base) throw();
}
extern "C"
{
  extern long int wcstol_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base, ::__locale_t __loc) throw();
}
extern "C"
{
  extern unsigned long int wcstoul_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base, ::__locale_t __loc) throw();
}
extern "C"
{
  extern long long int wcstoll_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base, ::__locale_t __loc) throw();
}
extern "C"
{
  extern unsigned long long int wcstoull_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, int __base, ::__locale_t __loc) throw();
}
extern "C"
{
  extern double wcstod_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, ::__locale_t __loc) throw();
}
extern "C"
{
  extern float wcstof_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, ::__locale_t __loc) throw();
}
extern "C"
{
  extern long double wcstold_l(const wchar_t *__restrict __nptr, wchar_t **__restrict __endptr, ::__locale_t __loc) throw();
}
extern "C"
{
  extern wchar_t *wcpcpy(wchar_t *__restrict __dest, const wchar_t *__restrict __src) throw();
}
extern "C"
{
  extern wchar_t *wcpncpy(wchar_t *__restrict __dest, const wchar_t *__restrict __src, ::size_t __n) throw();
}
extern "C"
{
  extern ::__FILE *open_wmemstream(wchar_t **__bufloc, ::size_t *__sizeloc) throw();
}
extern "C"
{
  extern int fwide(::__FILE *__fp, int __mode) throw();
}
extern "C"
{
  extern int fwprintf(::__FILE *__restrict __stream, const wchar_t *__restrict __format, ...);
}
extern "C"
{
  extern int wprintf(const wchar_t *__restrict __format, ...);
}
extern "C"
{
  extern int swprintf(wchar_t *__restrict __s, ::size_t __n, const wchar_t *__restrict __format, ...) throw();
}
extern "C"
{
  extern int vfwprintf(::__FILE *__restrict __s, const wchar_t *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vwprintf(const wchar_t *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vswprintf(wchar_t *__restrict __s, ::size_t __n, const wchar_t *__restrict __format, ::__gnuc_va_list __arg) throw();
}
extern "C"
{
  extern int fwscanf(::__FILE *__restrict __stream, const wchar_t *__restrict __format, ...);
}
extern "C"
{
  extern int wscanf(const wchar_t *__restrict __format, ...);
}
extern "C"
{
  extern int swscanf(const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) throw();
}
extern "C"
{
  extern int vfwscanf(::__FILE *__restrict __s, const wchar_t *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vwscanf(const wchar_t *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vswscanf(const wchar_t *__restrict __s, const wchar_t *__restrict __format, ::__gnuc_va_list __arg) throw();
}
extern "C"
{
  extern ::wint_t fgetwc(::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t getwc(::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t getwchar();
}
extern "C"
{
  extern ::wint_t fputwc(wchar_t __wc, ::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t putwc(wchar_t __wc, ::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t putwchar(wchar_t __wc);
}
extern "C"
{
  extern wchar_t *fgetws(wchar_t *__restrict __ws, int __n, ::__FILE *__restrict __stream);
}
extern "C"
{
  extern int fputws(const wchar_t *__restrict __ws, ::__FILE *__restrict __stream);
}
extern "C"
{
  extern ::wint_t ungetwc(::wint_t __wc, ::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t getwc_unlocked(::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t getwchar_unlocked();
}
extern "C"
{
  extern ::wint_t fgetwc_unlocked(::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t fputwc_unlocked(wchar_t __wc, ::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t putwc_unlocked(wchar_t __wc, ::__FILE *__stream);
}
extern "C"
{
  extern ::wint_t putwchar_unlocked(wchar_t __wc);
}
extern "C"
{
  extern wchar_t *fgetws_unlocked(wchar_t *__restrict __ws, int __n, ::__FILE *__restrict __stream);
}
extern "C"
{
  extern int fputws_unlocked(const wchar_t *__restrict __ws, ::__FILE *__restrict __stream);
}
extern "C"
{
  extern ::size_t wcsftime(wchar_t *__restrict __s, ::size_t __maxsize, const wchar_t *__restrict __format, const ::tm *__restrict __tp) throw();
}
extern "C"
{
  extern ::size_t wcsftime_l(wchar_t *__restrict __s, ::size_t __maxsize, const wchar_t *__restrict __format, const ::tm *__restrict __tp, ::__locale_t __loc) throw();
}
namespace std __attribute__((__visibility__("default"))) {
  using ::mbstate_t;
  using ::wint_t;
  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;
  using ::swprintf;
  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;
  using ::vfwscanf;
  using ::vswprintf;
  using ::vswscanf;
  using ::vwprintf;
  using ::vwscanf;
  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;
  using ::wcstof;
  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
  inline wchar_t *wcschr(wchar_t *__p, wchar_t __c)
  {
    return ::std::wcschr(const_cast<const wchar_t *>(__p), __c);
  }
  inline wchar_t *wcspbrk(wchar_t *__s1, const wchar_t *__s2)
  {
    return ::std::wcspbrk(const_cast<const wchar_t *>(__s1), __s2);
  }
  inline wchar_t *wcsrchr(wchar_t *__p, wchar_t __c)
  {
    return ::std::wcsrchr(const_cast<const wchar_t *>(__p), __c);
  }
  inline wchar_t *wcsstr(wchar_t *__s1, const wchar_t *__s2)
  {
    return ::std::wcsstr(const_cast<const wchar_t *>(__s1), __s2);
  }
  inline wchar_t *wmemchr(wchar_t *__p, wchar_t __c, ::std::size_t __n)
  {
    return ::std::wmemchr(const_cast<const wchar_t *>(__p), __c, __n);
  }
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  using ::wcstold;
  using ::wcstoll;
  using ::wcstoull;
}
namespace std __attribute__((__visibility__("default"))) {
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
  using ::std::wcstof;
  using ::std::vfwscanf;
  using ::std::vswscanf;
  using ::std::vwscanf;
  using ::std::wcstold;
  using ::std::wcstoll;
  using ::std::wcstoull;
  typedef long int streamoff;
  typedef ::std::ptrdiff_t streamsize;
  template < typename _StateT >
  class  fpos
  {
      ::std::streamoff _M_off;
      _StateT _M_state;
    public:
      inline fpos()
        : _M_off(0), _M_state()
      {
      }
      inline fpos(::std::streamoff __off)
        : _M_off(__off), _M_state()
      {
      }
      inline operator ::std::streamoff() const 
      {
        return ::std::fpos<_StateT>::_M_off;
      }
      inline void state(_StateT __st)
      {
        ::std::fpos<_StateT>::_M_state = __st;
      }
      inline _StateT state() const 
      {
        return ::std::fpos<_StateT>::_M_state;
      }
      inline ::std::fpos<_StateT> &operator +=(::std::streamoff __off)
      {
        ::std::fpos<_StateT>::_M_off += __off;
        return *this;
      }
      inline ::std::fpos<_StateT> &operator -=(::std::streamoff __off)
      {
        ::std::fpos<_StateT>::_M_off -= __off;
        return *this;
      }
      inline ::std::fpos<_StateT> operator +(::std::streamoff __off) const 
      {
        ::std::fpos<_StateT> __pos(*this);
        __pos += __off;
        return __pos;
      }
      inline ::std::fpos<_StateT> operator -(::std::streamoff __off) const 
      {
        ::std::fpos<_StateT> __pos(*this);
        __pos -= __off;
        return __pos;
      }
      inline ::std::streamoff operator -(const ::std::fpos<_StateT> &__other) const 
      {
        return ::std::fpos<_StateT>::_M_off - __other._M_off;
      }
  };
  template < typename _StateT >
  inline bool operator ==(const ::std::fpos<_StateT> &__lhs, const ::std::fpos<_StateT> &__rhs);
  template < typename _StateT >
  inline bool operator ==(const ::std::fpos<_StateT> &__lhs, const ::std::fpos<_StateT> &__rhs)
  {
    return long(__lhs) == long(__rhs);
  }
  template < typename _StateT >
  inline bool operator !=(const ::std::fpos<_StateT> &__lhs, const ::std::fpos<_StateT> &__rhs);
  template < typename _StateT >
  inline bool operator !=(const ::std::fpos<_StateT> &__lhs, const ::std::fpos<_StateT> &__rhs)
  {
    return long(__lhs) != long(__rhs);
  }
  typedef ::std::fpos< ::__mbstate_t> streampos;
  typedef ::std::fpos< ::__mbstate_t> wstreampos;
  typedef ::std::fpos< ::__mbstate_t> u16streampos;
  typedef ::std::fpos< ::__mbstate_t> u32streampos;
  class ios_base;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_ios;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_streambuf;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_istream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_ostream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_iostream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT>, typename _Alloc = ::std::allocator<_CharT> >
  class basic_stringbuf;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT>, typename _Alloc = ::std::allocator<_CharT> >
  class basic_istringstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT>, typename _Alloc = ::std::allocator<_CharT> >
  class basic_ostringstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT>, typename _Alloc = ::std::allocator<_CharT> >
  class basic_stringstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_filebuf;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_ifstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_ofstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class basic_fstream;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class istreambuf_iterator;
  template < typename _CharT, typename _Traits = ::std::char_traits<_CharT> >
  class ostreambuf_iterator;
  typedef ::std::basic_ios<char> ios;
  typedef ::std::basic_streambuf<char> streambuf;
  typedef ::std::basic_istream<char> istream;
  typedef ::std::basic_ostream<char> ostream;
  typedef ::std::basic_iostream<char> iostream;
  typedef ::std::basic_stringbuf<char> stringbuf;
  typedef ::std::basic_istringstream<char> istringstream;
  typedef ::std::basic_ostringstream<char> ostringstream;
  typedef ::std::basic_stringstream<char> stringstream;
  typedef ::std::basic_filebuf<char> filebuf;
  typedef ::std::basic_ifstream<char> ifstream;
  typedef ::std::basic_ofstream<char> ofstream;
  typedef ::std::basic_fstream<char> fstream;
  typedef ::std::basic_ios<wchar_t> wios;
  typedef ::std::basic_streambuf<wchar_t> wstreambuf;
  typedef ::std::basic_istream<wchar_t> wistream;
  typedef ::std::basic_ostream<wchar_t> wostream;
  typedef ::std::basic_iostream<wchar_t> wiostream;
  typedef ::std::basic_stringbuf<wchar_t> wstringbuf;
  typedef ::std::basic_istringstream<wchar_t> wistringstream;
  typedef ::std::basic_ostringstream<wchar_t> wostringstream;
  typedef ::std::basic_stringstream<wchar_t> wstringstream;
  typedef ::std::basic_filebuf<wchar_t> wfilebuf;
  typedef ::std::basic_ifstream<wchar_t> wifstream;
  typedef ::std::basic_ofstream<wchar_t> wofstream;
  typedef ::std::basic_fstream<wchar_t> wfstream;
  void __throw_bad_exception() __attribute__((__noreturn__));
  void __throw_bad_alloc() __attribute__((__noreturn__));
  void __throw_bad_cast() __attribute__((__noreturn__));
  void __throw_bad_typeid() __attribute__((__noreturn__));
  void __throw_logic_error(const char *) __attribute__((__noreturn__));
  void __throw_domain_error(const char *) __attribute__((__noreturn__));
  void __throw_invalid_argument(const char *) __attribute__((__noreturn__));
  void __throw_length_error(const char *) __attribute__((__noreturn__));
  void __throw_out_of_range(const char *) __attribute__((__noreturn__));
  void __throw_runtime_error(const char *) __attribute__((__noreturn__));
  void __throw_range_error(const char *) __attribute__((__noreturn__));
  void __throw_overflow_error(const char *) __attribute__((__noreturn__));
  void __throw_underflow_error(const char *) __attribute__((__noreturn__));
  void __throw_ios_failure(const char *) __attribute__((__noreturn__));
  void __throw_system_error(int) __attribute__((__noreturn__));
  void __throw_future_error(int) __attribute__((__noreturn__));
  void __throw_bad_function_call() __attribute__((__noreturn__));
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  template < typename _Iterator, typename _Container >
  class __normal_iterator;
}
namespace std __attribute__((__visibility__("default"))) {
  struct  __true_type
  {
  };
  struct  __false_type
  {
  };
  template < bool __nontype_tpl_param_1_0__ >
  struct  __truth_type
  {
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __truth_type<true>
  {
      typedef ::std::__true_type __type;
  };
  template < typename _Sp, typename _Tp >
  struct  __traitor
  {
      enum mcc_enum_anon_1
      {
        __value = bool(_Sp::__value) || bool(_Tp::__value)
      };
      typedef typename ::std::__truth_type< ::std::__traitor<_Sp, _Tp>::__value>::__type __type;
  };
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct  __are_same
  {
      enum mcc_enum_anon_2
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template < typename _Tp >
  struct  __are_same<_Tp, _Tp>
  {
      enum mcc_enum_anon_3
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_void
  {
      enum mcc_enum_anon_4
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __is_void<void>
  {
      enum mcc_enum_anon_5
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_integer
  {
      enum mcc_enum_anon_6
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __is_integer<bool>
  {
      enum mcc_enum_anon_7
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<char>
  {
      enum mcc_enum_anon_8
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<signed char>
  {
      enum mcc_enum_anon_9
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<unsigned char>
  {
      enum mcc_enum_anon_10
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<wchar_t>
  {
      enum mcc_enum_anon_11
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<char16_t>
  {
      enum mcc_enum_anon_12
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<char32_t>
  {
      enum mcc_enum_anon_13
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<short int>
  {
      enum mcc_enum_anon_14
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<unsigned short int>
  {
      enum mcc_enum_anon_15
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<int>
  {
      enum mcc_enum_anon_16
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<unsigned int>
  {
      enum mcc_enum_anon_17
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<long int>
  {
      enum mcc_enum_anon_18
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<unsigned long int>
  {
      enum mcc_enum_anon_19
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<long long int>
  {
      enum mcc_enum_anon_20
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_integer<unsigned long long int>
  {
      enum mcc_enum_anon_21
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_floating
  {
      enum mcc_enum_anon_22
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __is_floating<float>
  {
      enum mcc_enum_anon_23
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_floating<double>
  {
      enum mcc_enum_anon_24
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_floating<long double>
  {
      enum mcc_enum_anon_25
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_pointer
  {
      enum mcc_enum_anon_26
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template < typename _Tp >
  struct  __is_pointer<_Tp *>
  {
      enum mcc_enum_anon_27
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_normal_iterator
  {
      enum mcc_enum_anon_28
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template < typename _Iterator, typename _Container >
  struct  __is_normal_iterator< ::__gnu_cxx::__normal_iterator<_Iterator, _Container> >
  {
      enum mcc_enum_anon_29
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_arithmetic : ::std::__traitor< ::std::__is_integer<_Tp>, ::std::__is_floating<_Tp> >
  {
  };
  template < typename _Tp >
  struct  __is_fundamental : ::std::__traitor< ::std::__is_void<_Tp>, ::std::__is_arithmetic<_Tp> >
  {
  };
  template < typename _Tp >
  struct  __is_scalar : ::std::__traitor< ::std::__is_arithmetic<_Tp>, ::std::__is_pointer<_Tp> >
  {
  };
  template < typename _Tp >
  struct  __is_char
  {
      enum mcc_enum_anon_30
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __is_char<char>
  {
      enum mcc_enum_anon_31
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_char<wchar_t>
  {
      enum mcc_enum_anon_32
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_byte
  {
      enum mcc_enum_anon_33
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template <>
  struct  __is_byte<char>
  {
      enum mcc_enum_anon_34
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_byte<signed char>
  {
      enum mcc_enum_anon_35
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template <>
  struct  __is_byte<unsigned char>
  {
      enum mcc_enum_anon_36
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
  template < typename _Tp >
  struct  __is_move_iterator
  {
      enum mcc_enum_anon_37
      {
        __value = 0
      };
      typedef ::std::__false_type __type;
  };
  template < typename _Iterator >
  class move_iterator;
  template < typename _Iterator >
  struct  __is_move_iterator< ::std::move_iterator<_Iterator> >
  {
      enum mcc_enum_anon_38
      {
        __value = 1
      };
      typedef ::std::__true_type __type;
  };
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  template < bool __nontype_tpl_param_1_0__, typename __type_tpl__param_1_1__ >
  struct  __enable_if
  {
  };
  template < typename _Tp >
  struct  __enable_if<true, _Tp>
  {
      typedef _Tp __type;
  };
  template < bool _Cond, typename _Iftrue, typename _Iffalse >
  struct  __conditional_type
  {
      typedef _Iftrue __type;
  };
  template < typename _Iftrue, typename _Iffalse >
  struct  __conditional_type<false, _Iftrue, _Iffalse>
  {
      typedef _Iffalse __type;
  };
  template < typename _Tp >
  struct  __add_unsigned
  {
    private:
      typedef ::__gnu_cxx::__enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
    public:
      typedef typename ::__gnu_cxx::__enable_if<std::__is_integer<_Tp>::__value, _Tp>::__type __type;
  };
  template <>
  struct  __add_unsigned<char>
  {
      typedef unsigned char __type;
  };
  template <>
  struct  __add_unsigned<signed char>
  {
      typedef unsigned char __type;
  };
  template <>
  struct  __add_unsigned<short int>
  {
      typedef unsigned short int __type;
  };
  template <>
  struct  __add_unsigned<int>
  {
      typedef unsigned int __type;
  };
  template <>
  struct  __add_unsigned<long int>
  {
      typedef unsigned long int __type;
  };
  template <>
  struct  __add_unsigned<long long int>
  {
      typedef unsigned long long int __type;
  };
  template <>
  struct __add_unsigned<bool>;
  template <>
  struct __add_unsigned<wchar_t>;
  template < typename _Tp >
  struct  __remove_unsigned
  {
    private:
      typedef ::__gnu_cxx::__enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;
    public:
      typedef typename ::__gnu_cxx::__enable_if<std::__is_integer<_Tp>::__value, _Tp>::__type __type;
  };
  template <>
  struct  __remove_unsigned<char>
  {
      typedef signed char __type;
  };
  template <>
  struct  __remove_unsigned<unsigned char>
  {
      typedef signed char __type;
  };
  template <>
  struct  __remove_unsigned<unsigned short int>
  {
      typedef short int __type;
  };
  template <>
  struct  __remove_unsigned<unsigned int>
  {
      typedef int __type;
  };
  template <>
  struct  __remove_unsigned<unsigned long int>
  {
      typedef long int __type;
  };
  template <>
  struct  __remove_unsigned<unsigned long long int>
  {
      typedef long long int __type;
  };
  template <>
  struct __remove_unsigned<bool>;
  template <>
  struct __remove_unsigned<wchar_t>;
  template < typename _Type >
  inline bool __is_null_pointer(_Type *__ptr);
  template < typename _Type >
  inline bool __is_null_pointer(_Type *__ptr)
  {
    return __ptr == 0;
  }
  template < typename _Type >
  inline bool __is_null_pointer(_Type);
  template < typename _Type >
  inline bool __is_null_pointer(_Type)
  {
    return false;
  }
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = std::__is_integer<_Tp>::__value >
  struct  __promote
  {
      typedef double __type;
  };
  template < typename _Tp >
  struct  __promote<_Tp, false>
  {
  };
 /* Instantiation of class template '::std::__is_integer<long double>' */ 
  template <>
  struct  __promote<long double>
  {
      typedef long double __type;
  };
 /* Instantiation of class template '::std::__is_integer<double>' */ 
  template <>
  struct  __promote<double>
  {
      typedef double __type;
  };
 /* Instantiation of class template '::std::__is_integer<float>' */ 
  template <>
  struct  __promote<float>
  {
      typedef float __type;
  };
  template < typename _Tp, typename _Up, typename _Tp2 = typename ::__gnu_cxx::__promote<_Tp>::__type, typename _Up2 = typename ::__gnu_cxx::__promote<_Up>::__type >
  struct  __promote_2
  {
      typedef __typeof__(_Tp2() + _Up2()) __type;
  };
  template < typename _Tp, typename _Up, typename _Vp, typename _Tp2 = typename ::__gnu_cxx::__promote<_Tp>::__type, typename _Up2 = typename ::__gnu_cxx::__promote<_Up>::__type, typename _Vp2 = typename ::__gnu_cxx::__promote<_Vp>::__type >
  struct  __promote_3
  {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
  };
  template < typename _Tp, typename _Up, typename _Vp, typename _Wp, typename _Tp2 = typename ::__gnu_cxx::__promote<_Tp>::__type, typename _Up2 = typename ::__gnu_cxx::__promote<_Up>::__type, typename _Vp2 = typename ::__gnu_cxx::__promote<_Vp>::__type, typename _Wp2 = typename ::__gnu_cxx::__promote<_Wp>::__type >
  struct  __promote_4
  {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
  };
  template < typename _Value >
  struct  __numeric_traits_integer
  {
      static const _Value __min = (_Value) -1 < 0 ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value) -1 < 0)) : (_Value)0;
      static const _Value __max = (_Value) -1 < 0 ? ((((_Value)1 << (sizeof(_Value) * 8 - ((_Value) -1 < 0) - 1)) - 1) << 1) + 1 : ~((_Value)0);
      static const bool __is_signed = (_Value) -1 < 0;
      static const int __digits = sizeof(_Value) * 8 - ((_Value) -1 < 0);
  };
  template < typename _Value >
  struct  __numeric_traits_floating
  {
      static const int __max_digits10 = 2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136;
      static const bool __is_signed = true;
      static const int __digits10 = std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18;
      static const int __max_exponent10 = std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932;
  };
  template < typename _Value >
  struct  __numeric_traits : ::__gnu_cxx::__conditional_type<std::__is_integer<_Value>::__value, ::__gnu_cxx::__numeric_traits_integer<_Value>, ::__gnu_cxx::__numeric_traits_floating<_Value> >::__type
  {
  };
}
namespace std __attribute__((__visibility__("default"))) {
  template < typename _Tp >
  inline _Tp *__addressof(_Tp &__r) noexcept(true);
  template < typename _Tp >
  inline _Tp *__addressof(_Tp &__r) noexcept(true)
  {
    return reinterpret_cast<_Tp *>(&const_cast<char &>(reinterpret_cast<const volatile char &>(__r)));
  }
  template < typename _Tp, _Tp __v >
  struct  integral_constant
  {
      static constexpr const _Tp value = __v;
      typedef _Tp value_type;
      typedef ::std::integral_constant<_Tp, __v> type;
      inline constexpr operator typename ::std::integral_constant<_Tp, __v>::value_type() const 
      {
        return ::std::integral_constant<_Tp, __v>::value;
      }
  };
  typedef ::std::integral_constant<bool, true> true_type;
  typedef ::std::integral_constant<bool, false> false_type;
  template < bool __nontype_tpl_param_1_0__, typename __type_tpl__param_1_1__, typename __type_tpl__param_1_2__ >
  struct conditional;
  template < typename ...__type_tpl__param_1_0__ >
  struct __or_;
 /* Instantiation of class template '::std::integral_constant<bool, false>' */ 
  template <>
  struct  __or_<> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _B1 >
  struct  __or_<_B1> : _B1
  {
  };
  template < typename _B1, typename _B2 >
  struct  __or_<_B1, _B2> : ::std::conditional<_B1::value, _B1, _B2>::type
  {
  };
  template < typename _B1, typename _B2, typename _B3, typename ..._Bn >
  struct  __or_<_B1, _B2, _B3, _Bn ...> : ::std::conditional<_B1::value, _B1, ::std::__or_<_B2, _B3, _Bn ...> >::type
  {
  };
  template < typename ...__type_tpl__param_1_0__ >
  struct __and_;
 /* Instantiation of class template '::std::integral_constant<bool, true>' */ 
  template <>
  struct  __and_<> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _B1 >
  struct  __and_<_B1> : _B1
  {
  };
  template < typename _B1, typename _B2 >
  struct  __and_<_B1, _B2> : ::std::conditional<_B1::value, _B2, _B1>::type
  {
  };
  template < typename _B1, typename _B2, typename _B3, typename ..._Bn >
  struct  __and_<_B1, _B2, _B3, _Bn ...> : ::std::conditional<_B1::value, ::std::__and_<_B2, _B3, _Bn ...>, _B1>::type
  {
  };
  template < typename _Pp >
  struct  __not_ : ::std::integral_constant<bool, !_Pp::value>
  {
  };
  struct  __sfinae_types
  {
      typedef char __one;
      struct  __two
      {
          char __arr[2L];
      };
  };
  template < typename _Tp >
  struct  __success_type
  {
      typedef _Tp type;
  };
  struct  __failure_type
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct remove_cv;
  template < typename __type_tpl__param_1_0__ >
  struct  __is_void_helper : ::std::integral_constant<bool, false>
  {
  };
  template <>
  struct  __is_void_helper<void> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_void : ::std::integral_constant<bool, __is_void_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  __is_integral_helper : ::std::integral_constant<bool, false>
  {
  };
  template <>
  struct  __is_integral_helper<bool> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<char> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<signed char> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<unsigned char> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<wchar_t> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<char16_t> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<char32_t> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<short int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<unsigned short int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<unsigned int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<long int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<unsigned long int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<long long int> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_integral_helper<unsigned long long int> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_integral : ::std::integral_constant<bool, __is_integral_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  __is_floating_point_helper : ::std::integral_constant<bool, false>
  {
  };
  template <>
  struct  __is_floating_point_helper<float> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_floating_point_helper<double> : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_floating_point_helper<long double> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_floating_point : ::std::integral_constant<bool, __is_floating_point_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_array : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp, ::std::size_t _Size >
  struct  is_array<_Tp [_Size]> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_array<_Tp []> : ::std::integral_constant<bool, true>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  __is_pointer_helper : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_pointer_helper<_Tp *> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_pointer : ::std::integral_constant<bool, __is_pointer_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_lvalue_reference : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  is_lvalue_reference<_Tp &> : ::std::integral_constant<bool, true>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_rvalue_reference : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  is_rvalue_reference<_Tp &&> : ::std::integral_constant<bool, true>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct is_function;
  template < typename __type_tpl__param_1_0__ >
  struct  __is_member_object_pointer_helper : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp, typename _Cp >
  struct  __is_member_object_pointer_helper<_Tp _Cp::*> : ::std::integral_constant<bool, !is_function<_Tp>::value>
  {
  };
  template < typename _Tp >
  struct  is_member_object_pointer : ::std::integral_constant<bool, __is_member_object_pointer_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  __is_member_function_pointer_helper : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp, typename _Cp >
  struct  __is_member_function_pointer_helper<_Tp _Cp::*> : ::std::integral_constant<bool, is_function<_Tp>::value>
  {
  };
  template < typename _Tp >
  struct  is_member_function_pointer : ::std::integral_constant<bool, __is_member_function_pointer_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename _Tp >
  struct  is_enum : ::std::integral_constant<bool, __is_enum(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_union : ::std::integral_constant<bool, __is_union(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_class : ::std::integral_constant<bool, __is_class(_Tp)>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_function : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ...)> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ..., ...)> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ...) const > : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ..., ...) const > : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ...) volatile > : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ..., ...) volatile > : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ...) const volatile > : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Res, typename ..._ArgTypes >
  struct  is_function<_Res (_ArgTypes ..., ...) const volatile > : ::std::integral_constant<bool, true>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  __is_nullptr_t_helper : ::std::integral_constant<bool, false>
  {
  };
  template <>
  struct  __is_nullptr_t_helper<decltype(nullptr)> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  __is_nullptr_t : ::std::integral_constant<bool, __is_nullptr_t_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename _Tp >
  struct  is_reference : ::std::__or_< ::std::is_lvalue_reference<_Tp>, ::std::is_rvalue_reference<_Tp> >::type
  {
  };
  template < typename _Tp >
  struct  is_arithmetic : ::std::__or_< ::std::is_integral<_Tp>, ::std::is_floating_point<_Tp> >::type
  {
  };
  template < typename _Tp >
  struct  is_fundamental : ::std::__or_< ::std::is_arithmetic<_Tp>, ::std::is_void<_Tp>, ::std::__is_nullptr_t<_Tp> >::type
  {
  };
  template < typename _Tp >
  struct  is_object : ::std::__not_< ::std::__or_< ::std::is_function<_Tp>, ::std::is_reference<_Tp>, ::std::is_void<_Tp> > >::type
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct is_member_pointer;
  template < typename _Tp >
  struct  is_scalar : ::std::__or_< ::std::is_arithmetic<_Tp>, ::std::is_enum<_Tp>, ::std::is_pointer<_Tp>, ::std::is_member_pointer<_Tp>, ::std::__is_nullptr_t<_Tp> >::type
  {
  };
  template < typename _Tp >
  struct  is_compound : ::std::integral_constant<bool, !is_fundamental<_Tp>::value>
  {
  };
  template < typename _Tp >
  struct  __is_member_pointer_helper : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp, typename _Cp >
  struct  __is_member_pointer_helper<_Tp _Cp::*> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_member_pointer : ::std::integral_constant<bool, __is_member_pointer_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_const : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  is_const<const _Tp> : ::std::integral_constant<bool, true>
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct  is_volatile : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  is_volatile<volatile _Tp> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_trivial : ::std::integral_constant<bool, __is_trivial(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_standard_layout : ::std::integral_constant<bool, __is_standard_layout(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_pod : ::std::integral_constant<bool, __is_pod(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_literal_type : ::std::integral_constant<bool, __is_literal_type(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_empty : ::std::integral_constant<bool, __is_empty(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_polymorphic : ::std::integral_constant<bool, __is_polymorphic(_Tp)>
  {
  };
  template < typename _Tp >
  struct  is_abstract : ::std::integral_constant<bool, __is_abstract(_Tp)>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_integral<_Tp>::value, bool __nontype_tpl_param_1_2__ = is_floating_point<_Tp>::value >
  struct  __is_signed_helper : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_signed_helper<_Tp, false, true> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  __is_signed_helper<_Tp, true, false> : ::std::integral_constant<bool, static_cast<bool>(_Tp( -1) < _Tp(0))>
  {
  };
  template < typename _Tp >
  struct  is_signed : ::std::integral_constant<bool, __is_signed_helper<_Tp>::value>
  {
  };
  template < typename _Tp >
  struct  is_unsigned : ::std::__and_< ::std::is_arithmetic<_Tp>, ::std::__not_< ::std::is_signed<_Tp> > >::type
  {
  };
  template < typename __type_tpl__param_1_0__ >
  struct add_rvalue_reference;
  template < typename _Tp >
  inline typename ::std::add_rvalue_reference<_Tp>::type declval() noexcept(true);
  template < typename __type_tpl__param_1_0__, unsigned int __nontype_tpl_param_1_1__ = 0 >
  struct extent;
  template < typename __type_tpl__param_1_0__ >
  struct remove_all_extents;
  template < typename _Tp >
  struct  __is_array_known_bounds : ::std::integral_constant<bool, (extent<_Tp>::value > 0)>
  {
  };
  template < typename _Tp >
  struct  __is_array_unknown_bounds : ::std::__and_< ::std::is_array<_Tp>, ::std::__not_< ::std::extent<_Tp> > >::type
  {
  };
  struct  __do_is_destructible_impl
  {
      template < typename _Tp, typename __type_tpl__param_1_1__ = decltype(declval<_Tp &>().~_Tp()) >
      static ::std::true_type __test(int);
      template < typename __type_tpl__param_1_0__ >
      static ::std::false_type __test(...);
  };
  template < typename _Tp >
  struct  __is_destructible_impl : ::std::__do_is_destructible_impl
  {
      typedef decltype(__test<_Tp>(0)) type;
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = __or_< ::std::is_void<_Tp>, ::std::__is_array_unknown_bounds<_Tp>, ::std::is_function<_Tp> >::value, bool __nontype_tpl_param_1_2__ = __or_< ::std::is_reference<_Tp>, ::std::is_scalar<_Tp> >::value >
  struct __is_destructible_safe;
  template < typename _Tp >
  struct  __is_destructible_safe<_Tp, false, false> : ::std::__is_destructible_impl<typename ::std::remove_all_extents<_Tp>::type>::type
  {
  };
  template < typename _Tp >
  struct  __is_destructible_safe<_Tp, true, false> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_destructible_safe<_Tp, false, true> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_destructible : ::std::integral_constant<bool, __is_destructible_safe<_Tp>::value>
  {
  };
  struct  __do_is_nt_destructible_impl
  {
      template < typename _Tp >
      static ::std::integral_constant<bool, noexcept(declval<_Tp &>().~_Tp())> __test(int);
      template < typename __type_tpl__param_1_0__ >
      static ::std::false_type __test(...);
  };
  template < typename _Tp >
  struct  __is_nt_destructible_impl : ::std::__do_is_nt_destructible_impl
  {
      typedef decltype(__test<_Tp>(0)) type;
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = __or_< ::std::is_void<_Tp>, ::std::__is_array_unknown_bounds<_Tp>, ::std::is_function<_Tp> >::value, bool __nontype_tpl_param_1_2__ = __or_< ::std::is_reference<_Tp>, ::std::is_scalar<_Tp> >::value >
  struct __is_nt_destructible_safe;
  template < typename _Tp >
  struct  __is_nt_destructible_safe<_Tp, false, false> : ::std::__is_nt_destructible_impl<typename ::std::remove_all_extents<_Tp>::type>::type
  {
  };
  template < typename _Tp >
  struct  __is_nt_destructible_safe<_Tp, true, false> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_nt_destructible_safe<_Tp, false, true> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_destructible : ::std::integral_constant<bool, __is_nt_destructible_safe<_Tp>::value>
  {
  };
  struct  __do_is_default_constructible_impl
  {
      template < typename _Tp, typename __type_tpl__param_1_1__ = decltype(_Tp()) >
      static ::std::true_type __test(int);
      template < typename __type_tpl__param_1_0__ >
      static ::std::false_type __test(...);
  };
  template < typename _Tp >
  struct  __is_default_constructible_impl : ::std::__do_is_default_constructible_impl
  {
      typedef decltype(__test<_Tp>(0)) type;
  };
  template < typename _Tp >
  struct  __is_default_constructible_atom : ::std::__and_< ::std::__not_< ::std::is_void<_Tp> >, ::std::__is_default_constructible_impl<_Tp> >::type
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_array<_Tp>::value >
  struct __is_default_constructible_safe;
  template < typename _Tp >
  struct  __is_default_constructible_safe<_Tp, true> : ::std::__and_< ::std::__is_array_known_bounds<_Tp>, ::std::__is_default_constructible_atom<typename ::std::remove_all_extents<_Tp>::type> >::type
  {
  };
  template < typename _Tp >
  struct  __is_default_constructible_safe<_Tp, false> : ::std::__is_default_constructible_atom<_Tp>::type
  {
  };
  template < typename _Tp >
  struct  is_default_constructible : ::std::integral_constant<bool, __is_default_constructible_safe<_Tp>::value>
  {
  };
  struct  __do_is_static_castable_impl
  {
      template < typename _From, typename _To, typename __type_tpl__param_1_2__ = decltype(static_cast<_To>(declval<_From>())) >
      static ::std::true_type __test(int);
      template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
      static ::std::false_type __test(...);
  };
  template < typename _From, typename _To >
  struct  __is_static_castable_impl : ::std::__do_is_static_castable_impl
  {
      typedef decltype(__test<_From, _To>(0)) type;
  };
  template < typename _From, typename _To >
  struct  __is_static_castable_safe : ::std::__is_static_castable_impl<_From, _To>::type
  {
  };
  template < typename _From, typename _To >
  struct  __is_static_castable : ::std::integral_constant<bool, __is_static_castable_safe<_From, _To>::value>
  {
  };
  struct  __do_is_direct_constructible_impl
  {
      template < typename _Tp, typename _Arg, typename __type_tpl__param_1_2__ = decltype(::new _Tp(declval<_Arg>())) >
      static ::std::true_type __test(int);
      template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
      static ::std::false_type __test(...);
  };
  template < typename _Tp, typename _Arg >
  struct  __is_direct_constructible_impl : ::std::__do_is_direct_constructible_impl
  {
      typedef decltype(__test<_Tp, _Arg>(0)) type;
  };
  template < typename _Tp, typename _Arg >
  struct  __is_direct_constructible_new_safe : ::std::__and_< ::std::is_destructible<_Tp>, ::std::__is_direct_constructible_impl<_Tp, _Arg> >::type
  {
  };
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct is_same;
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct is_base_of;
  template < typename __type_tpl__param_1_0__ >
  struct remove_reference;
  template < typename _From, typename _To, bool __nontype_tpl_param_1_2__ = __not_< ::std::__or_< ::std::is_void<_From>, ::std::is_function<_From> > >::value >
  struct __is_base_to_derived_ref;
  template < typename _From, typename _To >
  struct  __is_base_to_derived_ref<_From, _To, true>
  {
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_From>::type>::type __src_t;
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_To>::type>::type __dst_t;
      typedef ::std::__and_< ::std::__not_< ::std::is_same<typename ::std::__is_base_to_derived_ref<_From, _To, true>::__src_t, typename ::std::__is_base_to_derived_ref<_From, _To, true>::__dst_t> >, ::std::is_base_of<typename ::std::__is_base_to_derived_ref<_From, _To, true>::__src_t, typename ::std::__is_base_to_derived_ref<_From, _To, true>::__dst_t> > type;
      static constexpr const bool value = type::value;
  };
  template < typename _From, typename _To >
  struct  __is_base_to_derived_ref<_From, _To, false> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _From, typename _To, bool __nontype_tpl_param_1_2__ = __and_< ::std::is_lvalue_reference<_From>, ::std::is_rvalue_reference<_To> >::value >
  struct __is_lvalue_to_rvalue_ref;
  template < typename _From, typename _To >
  struct  __is_lvalue_to_rvalue_ref<_From, _To, true>
  {
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_From>::type>::type __src_t;
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_To>::type>::type __dst_t;
      typedef ::std::__and_< ::std::__not_< ::std::is_function<typename ::std::__is_lvalue_to_rvalue_ref<_From, _To, true>::__src_t> >, ::std::__or_< ::std::is_same<typename ::std::__is_lvalue_to_rvalue_ref<_From, _To, true>::__src_t, typename ::std::__is_lvalue_to_rvalue_ref<_From, _To, true>::__dst_t>, ::std::is_base_of<typename ::std::__is_lvalue_to_rvalue_ref<_From, _To, true>::__dst_t, typename ::std::__is_lvalue_to_rvalue_ref<_From, _To, true>::__src_t> > > type;
      static constexpr const bool value = type::value;
  };
  template < typename _From, typename _To >
  struct  __is_lvalue_to_rvalue_ref<_From, _To, false> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp, typename _Arg >
  struct  __is_direct_constructible_ref_cast : ::std::__and_< ::std::__is_static_castable<_Arg, _Tp>, ::std::__not_< ::std::__or_< ::std::__is_base_to_derived_ref<_Arg, _Tp>, ::std::__is_lvalue_to_rvalue_ref<_Arg, _Tp> > > >::type
  {
  };
  template < typename _Tp, typename _Arg >
  struct  __is_direct_constructible_new : ::std::conditional<is_reference<_Tp>::value, ::std::__is_direct_constructible_ref_cast<_Tp, _Arg>, ::std::__is_direct_constructible_new_safe<_Tp, _Arg> >::type
  {
  };
  template < typename _Tp, typename _Arg >
  struct  __is_direct_constructible : ::std::integral_constant<bool, __is_direct_constructible_new<_Tp, _Arg>::value>
  {
  };
  struct  __do_is_nary_constructible_impl
  {
      template < typename _Tp, typename ..._Args, typename __type_tpl__param_1_2__ = decltype(_Tp(declval<_Args>() ...)) >
      static ::std::true_type __test(int);
      template < typename __type_tpl__param_1_0__, typename ...__type_tpl__param_1_1__ >
      static ::std::false_type __test(...);
  };
  template < typename _Tp, typename ..._Args >
  struct  __is_nary_constructible_impl : ::std::__do_is_nary_constructible_impl
  {
      typedef decltype(__test<_Tp, _Args ...>(0)) type;
  };
  template < typename _Tp, typename ..._Args >
  struct  __is_nary_constructible : ::std::__is_nary_constructible_impl<_Tp, _Args ...>::type
  {
      static_assert((sizeof...(_Args)) > 1, "Only useful for > 1 arguments");
  };
  template < typename _Tp, typename ..._Args >
  struct  __is_constructible_impl : ::std::__is_nary_constructible<_Tp, _Args ...>
  {
  };
  template < typename _Tp, typename _Arg >
  struct  __is_constructible_impl<_Tp, _Arg> : ::std::__is_direct_constructible<_Tp, _Arg>
  {
  };
  template < typename _Tp >
  struct  __is_constructible_impl<_Tp> : ::std::is_default_constructible<_Tp>
  {
  };
  template < typename _Tp, typename ..._Args >
  struct  is_constructible : ::std::integral_constant<bool, __is_constructible_impl<_Tp, _Args ...>::value>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_copy_constructible_impl;
  template < typename _Tp >
  struct  __is_copy_constructible_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_copy_constructible_impl<_Tp, false> : ::std::is_constructible<_Tp, const _Tp &>
  {
  };
  template < typename _Tp >
  struct  is_copy_constructible : ::std::__is_copy_constructible_impl<_Tp>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_move_constructible_impl;
  template < typename _Tp >
  struct  __is_move_constructible_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_move_constructible_impl<_Tp, false> : ::std::is_constructible<_Tp, _Tp &&>
  {
  };
  template < typename _Tp >
  struct  is_move_constructible : ::std::__is_move_constructible_impl<_Tp>
  {
  };
  template < typename _Tp >
  struct  __is_nt_default_constructible_atom : ::std::integral_constant<bool, noexcept(_Tp())>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_array<_Tp>::value >
  struct __is_nt_default_constructible_impl;
  template < typename _Tp >
  struct  __is_nt_default_constructible_impl<_Tp, true> : ::std::__and_< ::std::__is_array_known_bounds<_Tp>, ::std::__is_nt_default_constructible_atom<typename ::std::remove_all_extents<_Tp>::type> >::type
  {
  };
  template < typename _Tp >
  struct  __is_nt_default_constructible_impl<_Tp, false> : ::std::__is_nt_default_constructible_atom<_Tp>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_default_constructible : ::std::__and_< ::std::is_default_constructible<_Tp>, ::std::__is_nt_default_constructible_impl<_Tp> >::type
  {
  };
  template < typename _Tp, typename ..._Args >
  struct  __is_nt_constructible_impl : ::std::integral_constant<bool, noexcept(_Tp(declval<_Args>() ...))>
  {
  };
  template < typename _Tp, typename _Arg >
  struct  __is_nt_constructible_impl<_Tp, _Arg> : ::std::integral_constant<bool, noexcept(static_cast<_Tp>(declval<_Arg>()))>
  {
  };
  template < typename _Tp >
  struct  __is_nt_constructible_impl<_Tp> : ::std::is_nothrow_default_constructible<_Tp>
  {
  };
  template < typename _Tp, typename ..._Args >
  struct  is_nothrow_constructible : ::std::__and_< ::std::is_constructible<_Tp, _Args ...>, ::std::__is_nt_constructible_impl<_Tp, _Args ...> >::type
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_nothrow_copy_constructible_impl;
  template < typename _Tp >
  struct  __is_nothrow_copy_constructible_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_nothrow_copy_constructible_impl<_Tp, false> : ::std::is_nothrow_constructible<_Tp, const _Tp &>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_copy_constructible : ::std::__is_nothrow_copy_constructible_impl<_Tp>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_nothrow_move_constructible_impl;
  template < typename _Tp >
  struct  __is_nothrow_move_constructible_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_nothrow_move_constructible_impl<_Tp, false> : ::std::is_nothrow_constructible<_Tp, _Tp &&>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_move_constructible : ::std::__is_nothrow_move_constructible_impl<_Tp>
  {
  };
  template < typename _Tp, typename _Up >
  class  __is_assignable_helper : public ::std::__sfinae_types
  {
      template < typename _Tp1, typename _Up1 >
      static decltype((declval<_Tp1>() = declval<_Up1>(), ::std::__sfinae_types::__one())) __test(int);
      template < typename __type_tpl__param_2_0__, typename __type_tpl__param_2_1__ >
      static ::std::__sfinae_types::__two __test(...);
    public:
      static constexpr const bool value = sizeof(__test<_Tp, _Up>(0)) == 1;
  };
  template < typename _Tp, typename _Up >
  struct  is_assignable : ::std::integral_constant<bool, __is_assignable_helper<_Tp, _Up>::value>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_copy_assignable_impl;
  template < typename _Tp >
  struct  __is_copy_assignable_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_copy_assignable_impl<_Tp, false> : ::std::is_assignable<_Tp &, const _Tp &>
  {
  };
  template < typename _Tp >
  struct  is_copy_assignable : ::std::__is_copy_assignable_impl<_Tp>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_move_assignable_impl;
  template < typename _Tp >
  struct  __is_move_assignable_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_move_assignable_impl<_Tp, false> : ::std::is_assignable<_Tp &, _Tp &&>
  {
  };
  template < typename _Tp >
  struct  is_move_assignable : ::std::__is_move_assignable_impl<_Tp>
  {
  };
  template < typename _Tp, typename _Up >
  struct  __is_nt_assignable_impl : ::std::integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>
  {
  };
  template < typename _Tp, typename _Up >
  struct  is_nothrow_assignable : ::std::__and_< ::std::is_assignable<_Tp, _Up>, ::std::__is_nt_assignable_impl<_Tp, _Up> >::type
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_nt_copy_assignable_impl;
  template < typename _Tp >
  struct  __is_nt_copy_assignable_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_nt_copy_assignable_impl<_Tp, false> : ::std::is_nothrow_assignable<_Tp &, const _Tp &>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_copy_assignable : ::std::__is_nt_copy_assignable_impl<_Tp>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = is_void<_Tp>::value >
  struct __is_nt_move_assignable_impl;
  template < typename _Tp >
  struct  __is_nt_move_assignable_impl<_Tp, true> : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  __is_nt_move_assignable_impl<_Tp, false> : ::std::is_nothrow_assignable<_Tp &, _Tp &&>
  {
  };
  template < typename _Tp >
  struct  is_nothrow_move_assignable : ::std::__is_nt_move_assignable_impl<_Tp>
  {
  };
  template < typename _Tp >
  struct  is_trivially_destructible : ::std::__and_< ::std::is_destructible<_Tp>, ::std::integral_constant<bool, __has_trivial_destructor(_Tp)> >::type
  {
  };
  template < typename _Tp >
  struct  has_trivial_default_constructor : ::std::integral_constant<bool, __has_trivial_constructor(_Tp)>
  {
  };
  template < typename _Tp >
  struct  has_trivial_copy_constructor : ::std::integral_constant<bool, __has_trivial_copy(_Tp)>
  {
  };
  template < typename _Tp >
  struct  has_trivial_copy_assign : ::std::integral_constant<bool, __has_trivial_assign(_Tp)>
  {
  };
  template < typename _Tp >
  struct  has_virtual_destructor : ::std::integral_constant<bool, __has_virtual_destructor(_Tp)>
  {
  };
  template < typename _Tp >
  struct  alignment_of : ::std::integral_constant<unsigned long int, alignof(_Tp)>
  {
  };
 /* Instantiation of class template '::std::integral_constant<unsigned long int, 0>' */ 
  template < typename __type_tpl__param_1_0__ >
  struct  rank : ::std::integral_constant<unsigned long int, 0>
  {
  };
  template < typename _Tp, ::std::size_t _Size >
  struct  rank<_Tp [_Size]> : ::std::integral_constant<unsigned long int, 1 + rank<_Tp>::value>
  {
  };
  template < typename _Tp >
  struct  rank<_Tp []> : ::std::integral_constant<unsigned long int, 1 + rank<_Tp>::value>
  {
  };
  template < typename __type_tpl__param_1_0__, unsigned int _Uint >
  struct  extent : ::std::integral_constant<unsigned long int, 0>
  {
  };
  template < typename _Tp, unsigned int _Uint, ::std::size_t _Size >
  struct  extent<_Tp [_Size], _Uint> : ::std::integral_constant<unsigned long int, _Uint == 0 ? _Size : extent<_Tp, _Uint - 1>::value>
  {
  };
  template < typename _Tp, unsigned int _Uint >
  struct  extent<_Tp [], _Uint> : ::std::integral_constant<unsigned long int, _Uint == 0 ? 0 : extent<_Tp, _Uint - 1>::value>
  {
  };
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct  is_same : ::std::integral_constant<bool, false>
  {
  };
  template < typename _Tp >
  struct  is_same<_Tp, _Tp> : ::std::integral_constant<bool, true>
  {
  };
  template < typename _Base, typename _Derived >
  struct  is_base_of : ::std::integral_constant<bool, __is_base_of(_Base, _Derived)>
  {
  };
  template < typename _From, typename _To, bool __nontype_tpl_param_1_2__ = __or_< ::std::is_void<_From>, ::std::is_function<_To>, ::std::is_array<_To> >::value >
  struct  __is_convertible_helper
  {
      static constexpr const bool value = is_void<_To>::value;
  };
  template < typename _From, typename _To >
  class  __is_convertible_helper<_From, _To, false> : public ::std::__sfinae_types
  {
      template < typename _To1 >
      static void __test_aux(_To1);
      template < typename _From1, typename _To1 >
      static decltype((__test_aux<_To1>(std::declval<_From1>()), ::std::__sfinae_types::__one())) __test(int);
      template < typename __type_tpl__param_2_0__, typename __type_tpl__param_2_1__ >
      static ::std::__sfinae_types::__two __test(...);
    public:
      static constexpr const bool value = sizeof(__test<_From, _To>(0)) == 1;
  };
  template < typename _From, typename _To >
  struct  is_convertible : ::std::integral_constant<bool, __is_convertible_helper<_From, _To>::value>
  {
  };
  template < typename _Tp >
  struct  remove_const
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_const<const _Tp>
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_volatile
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_volatile<volatile _Tp>
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_cv
  {
      typedef typename ::std::remove_const<typename ::std::remove_volatile<_Tp>::type>::type type;
  };
  template < typename _Tp >
  struct  add_const
  {
      typedef const _Tp type;
  };
  template < typename _Tp >
  struct  add_volatile
  {
      typedef volatile _Tp type;
  };
  template < typename _Tp >
  struct  add_cv
  {
      typedef typename ::std::add_const<typename ::std::add_volatile<_Tp>::type>::type type;
  };
  template < typename _Tp >
  struct  remove_reference
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_reference<_Tp &>
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_reference<_Tp &&>
  {
      typedef _Tp type;
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = __and_< ::std::__not_< ::std::is_reference<_Tp> >, ::std::__not_< ::std::is_void<_Tp> > >::value, bool __nontype_tpl_param_1_2__ = is_rvalue_reference<_Tp>::value >
  struct  __add_lvalue_reference_helper
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  __add_lvalue_reference_helper<_Tp, true, false>
  {
      typedef _Tp &type;
  };
  template < typename _Tp >
  struct  __add_lvalue_reference_helper<_Tp, false, true>
  {
      typedef typename ::std::remove_reference<_Tp>::type &type;
  };
  template < typename _Tp >
  struct  add_lvalue_reference : ::std::__add_lvalue_reference_helper<_Tp>
  {
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = __and_< ::std::__not_< ::std::is_reference<_Tp> >, ::std::__not_< ::std::is_void<_Tp> > >::value >
  struct  __add_rvalue_reference_helper
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  __add_rvalue_reference_helper<_Tp, true>
  {
      typedef _Tp &&type;
  };
  template < typename _Tp >
  struct  add_rvalue_reference : ::std::__add_rvalue_reference_helper<_Tp>
  {
  };
  template < typename _Unqualified, bool _IsConst, bool _IsVol >
  struct __cv_selector;
  template < typename _Unqualified >
  struct  __cv_selector<_Unqualified, false, false>
  {
      typedef _Unqualified __type;
  };
  template < typename _Unqualified >
  struct  __cv_selector<_Unqualified, false, true>
  {
      typedef volatile _Unqualified __type;
  };
  template < typename _Unqualified >
  struct  __cv_selector<_Unqualified, true, false>
  {
      typedef const _Unqualified __type;
  };
  template < typename _Unqualified >
  struct  __cv_selector<_Unqualified, true, true>
  {
      typedef const volatile _Unqualified __type;
  };
  template < typename _Qualified, typename _Unqualified, bool _IsConst = is_const<_Qualified>::value, bool _IsVol = is_volatile<_Qualified>::value >
  class  __match_cv_qualifiers
  {
      typedef ::std::__cv_selector<_Unqualified, _IsConst, _IsVol> __match;
    public:
      typedef typename ::std::__cv_selector<_Unqualified, _IsConst, _IsVol>::__type __type;
  };
  template < typename _Tp >
  struct  __make_unsigned
  {
      typedef _Tp __type;
  };
  template <>
  struct  __make_unsigned<char>
  {
      typedef unsigned char __type;
  };
  template <>
  struct  __make_unsigned<signed char>
  {
      typedef unsigned char __type;
  };
  template <>
  struct  __make_unsigned<short int>
  {
      typedef unsigned short int __type;
  };
  template <>
  struct  __make_unsigned<int>
  {
      typedef unsigned int __type;
  };
  template <>
  struct  __make_unsigned<long int>
  {
      typedef unsigned long int __type;
  };
  template <>
  struct  __make_unsigned<long long int>
  {
      typedef unsigned long long int __type;
  };
  template < typename _Tp, bool _IsInt = is_integral<_Tp>::value, bool _IsEnum = is_enum<_Tp>::value >
  class __make_unsigned_selector;
  template < typename _Tp >
  class  __make_unsigned_selector<_Tp, true, false>
  {
      typedef ::std::__make_unsigned<typename ::std::remove_cv<_Tp>::type> __unsignedt;
      typedef typename ::std::__make_unsigned<typename ::std::remove_cv<_Tp>::type>::__type __unsigned_type;
      typedef ::std::__match_cv_qualifiers<_Tp, typename ::std::__make_unsigned_selector<_Tp, true, false>::__unsigned_type> __cv_unsigned;
    public:
      typedef typename ::std::__match_cv_qualifiers<_Tp, typename ::std::__make_unsigned_selector<_Tp, true, false>::__unsigned_type>::__type __type;
  };
  template < typename _Tp >
  class  __make_unsigned_selector<_Tp, false, true>
  {
      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(typename ::std::__make_unsigned_selector<_Tp, false, true>::__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short int);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      typedef ::std::conditional< ::std::__make_unsigned_selector<_Tp, false, true>::__b2, unsigned int, unsigned long int> __cond2;
      typedef typename ::std::conditional< ::std::__make_unsigned_selector<_Tp, false, true>::__b2, unsigned int, unsigned long int>::type __cond2_type;
      typedef ::std::conditional< ::std::__make_unsigned_selector<_Tp, false, true>::__b1, unsigned short int, typename ::std::__make_unsigned_selector<_Tp, false, true>::__cond2_type> __cond1;
      typedef typename ::std::conditional< ::std::__make_unsigned_selector<_Tp, false, true>::__b1, unsigned short int, typename ::std::__make_unsigned_selector<_Tp, false, true>::__cond2_type>::type __cond1_type;
    public:
      typedef typename ::std::conditional< ::std::__make_unsigned_selector<_Tp, false, true>::__b0, unsigned char, typename ::std::__make_unsigned_selector<_Tp, false, true>::__cond1_type>::type __type;
  };
  template < typename _Tp >
  struct  make_unsigned
  {
      typedef typename ::std::__make_unsigned_selector<_Tp>::__type type;
  };
  template <>
  struct make_unsigned<bool>;
  template < typename _Tp >
  struct  __make_signed
  {
      typedef _Tp __type;
  };
  template <>
  struct  __make_signed<char>
  {
      typedef signed char __type;
  };
  template <>
  struct  __make_signed<unsigned char>
  {
      typedef signed char __type;
  };
  template <>
  struct  __make_signed<unsigned short int>
  {
      typedef short int __type;
  };
  template <>
  struct  __make_signed<unsigned int>
  {
      typedef int __type;
  };
  template <>
  struct  __make_signed<unsigned long int>
  {
      typedef long int __type;
  };
  template <>
  struct  __make_signed<unsigned long long int>
  {
      typedef long long int __type;
  };
  template < typename _Tp, bool _IsInt = is_integral<_Tp>::value, bool _IsEnum = is_enum<_Tp>::value >
  class __make_signed_selector;
  template < typename _Tp >
  class  __make_signed_selector<_Tp, true, false>
  {
      typedef ::std::__make_signed<typename ::std::remove_cv<_Tp>::type> __signedt;
      typedef typename ::std::__make_signed<typename ::std::remove_cv<_Tp>::type>::__type __signed_type;
      typedef ::std::__match_cv_qualifiers<_Tp, typename ::std::__make_signed_selector<_Tp, true, false>::__signed_type> __cv_signed;
    public:
      typedef typename ::std::__match_cv_qualifiers<_Tp, typename ::std::__make_signed_selector<_Tp, true, false>::__signed_type>::__type __type;
  };
  template < typename _Tp >
  class  __make_signed_selector<_Tp, false, true>
  {
      typedef signed char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(typename ::std::__make_signed_selector<_Tp, false, true>::__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(short int);
      static const bool __b2 = sizeof(_Tp) <= sizeof(int);
      typedef ::std::conditional< ::std::__make_signed_selector<_Tp, false, true>::__b2, int, long int> __cond2;
      typedef typename ::std::conditional< ::std::__make_signed_selector<_Tp, false, true>::__b2, int, long int>::type __cond2_type;
      typedef ::std::conditional< ::std::__make_signed_selector<_Tp, false, true>::__b1, short int, typename ::std::__make_signed_selector<_Tp, false, true>::__cond2_type> __cond1;
      typedef typename ::std::conditional< ::std::__make_signed_selector<_Tp, false, true>::__b1, short int, typename ::std::__make_signed_selector<_Tp, false, true>::__cond2_type>::type __cond1_type;
    public:
      typedef typename ::std::conditional< ::std::__make_signed_selector<_Tp, false, true>::__b0, signed char, typename ::std::__make_signed_selector<_Tp, false, true>::__cond1_type>::type __type;
  };
  template < typename _Tp >
  struct  make_signed
  {
      typedef typename ::std::__make_signed_selector<_Tp>::__type type;
  };
  template <>
  struct make_signed<bool>;
  template < typename _Tp >
  struct  remove_extent
  {
      typedef _Tp type;
  };
  template < typename _Tp, ::std::size_t _Size >
  struct  remove_extent<_Tp [_Size]>
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_extent<_Tp []>
  {
      typedef _Tp type;
  };
  template < typename _Tp >
  struct  remove_all_extents
  {
      typedef _Tp type;
  };
  template < typename _Tp, ::std::size_t _Size >
  struct  remove_all_extents<_Tp [_Size]>
  {
      typedef typename ::std::remove_all_extents<_Tp>::type type;
  };
  template < typename _Tp >
  struct  remove_all_extents<_Tp []>
  {
      typedef typename ::std::remove_all_extents<_Tp>::type type;
  };
  template < typename _Tp, typename __type_tpl__param_1_1__ >
  struct  __remove_pointer_helper
  {
      typedef _Tp type;
  };
  template < typename _Tp, typename _Up >
  struct  __remove_pointer_helper<_Tp, _Up *>
  {
      typedef _Up type;
  };
  template < typename _Tp >
  struct  remove_pointer : ::std::__remove_pointer_helper<_Tp, typename ::std::remove_cv<_Tp>::type>
  {
  };
  template < typename _Tp >
  struct  add_pointer
  {
      typedef typename ::std::remove_reference<_Tp>::type *type;
  };
  template < ::std::size_t _Len >
  struct  __aligned_storage_msa
  {
      union  __type
      {
          unsigned char __data[_Len];
          struct __attribute__((__aligned__))  mcc_struct_anon_21
          {
          };
          typename ::std::__aligned_storage_msa<_Len>::__type::mcc_struct_anon_21 __align;
      };
  };
  template < ::std::size_t _Len, ::std::size_t _Align = alignof(typename ::std::__aligned_storage_msa<_Len>::__type) >
  struct  aligned_storage
  {
      union  type
      {
          unsigned char __data[_Len];
          struct __attribute__((aligned(/* ??? */_Align)))  mcc_struct_anon_22
          {
          };
          typename ::std::aligned_storage<_Len, _Align>::type::mcc_struct_anon_22 __align;
      };
  };
  template < typename _Up, bool _IsArray = is_array<_Up>::value, bool _IsFunction = is_function<_Up>::value >
  struct __decay_selector;
  template < typename _Up >
  struct  __decay_selector<_Up, false, false>
  {
      typedef typename ::std::remove_cv<_Up>::type __type;
  };
  template < typename _Up >
  struct  __decay_selector<_Up, true, false>
  {
      typedef typename ::std::remove_extent<_Up>::type *__type;
  };
  template < typename _Up >
  struct  __decay_selector<_Up, false, true>
  {
      typedef typename ::std::add_pointer<_Up>::type __type;
  };
  template < typename _Tp >
  class  decay
  {
      typedef typename ::std::remove_reference<_Tp>::type __remove_type;
    public:
      typedef typename ::std::__decay_selector<typename ::std::decay<_Tp>::__remove_type>::__type type;
  };
  template < typename _Tp >
  class reference_wrapper;
  template < typename _Tp >
  struct  __strip_reference_wrapper
  {
      typedef _Tp __type;
  };
  template < typename _Tp >
  struct  __strip_reference_wrapper< ::std::reference_wrapper<_Tp> >
  {
      typedef _Tp &__type;
  };
  template < typename _Tp >
  struct  __strip_reference_wrapper<const ::std::reference_wrapper<_Tp> >
  {
      typedef _Tp &__type;
  };
  template < typename _Tp >
  struct  __decay_and_strip
  {
      typedef typename ::std::__strip_reference_wrapper<typename ::std::decay<_Tp>::type>::__type __type;
  };
  template < bool __nontype_tpl_param_1_0__, typename _Tp = void >
  struct  enable_if
  {
  };
  template < typename _Tp >
  struct  enable_if<true, _Tp>
  {
      typedef _Tp type;
  };
  template < typename ..._Cond >
  using _Require = typename ::std::enable_if<__and_<_Cond ...>::value>::type;
  template < bool _Cond, typename _Iftrue, typename _Iffalse >
  struct  conditional
  {
      typedef _Iftrue type;
  };
  template < typename _Iftrue, typename _Iffalse >
  struct  conditional<false, _Iftrue, _Iffalse>
  {
      typedef _Iffalse type;
  };
  template < typename ..._Tp >
  struct common_type;
  struct  __do_common_type_impl
  {
      template < typename _Tp, typename _Up >
      static ::std::__success_type<typename ::std::decay<decltype(true ? std::declval<_Tp>() : std::declval<_Up>())>::type> _S_test(int);
      template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _Tp, typename _Up >
  struct  __common_type_impl : private ::std::__do_common_type_impl
  {
      typedef decltype(_S_test<_Tp, _Up>(0)) type;
  };
  struct  __do_member_type_wrapper
  {
      template < typename _Tp >
      static ::std::__success_type<typename _Tp::type> _S_test(int);
      template < typename __type_tpl__param_1_0__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _Tp >
  struct  __member_type_wrapper : private ::std::__do_member_type_wrapper
  {
      typedef decltype(_S_test<_Tp>(0)) type;
  };
  template < typename _CTp, typename ..._Args >
  struct  __expanded_common_type_wrapper
  {
      typedef ::std::common_type<typename _CTp::type, _Args ...> type;
  };
  template < typename ..._Args >
  struct  __expanded_common_type_wrapper< ::std::__failure_type, _Args ...>
  {
      typedef ::std::__failure_type type;
  };
  template < typename _Tp >
  struct  common_type<_Tp>
  {
      typedef typename ::std::decay<_Tp>::type type;
  };
  template < typename _Tp, typename _Up >
  struct  common_type<_Tp, _Up> : ::std::__common_type_impl<_Tp, _Up>::type
  {
  };
  template < typename _Tp, typename _Up, typename ..._Vp >
  struct  common_type<_Tp, _Up, _Vp ...> : ::std::__expanded_common_type_wrapper<typename ::std::__member_type_wrapper< ::std::common_type<_Tp, _Up> >::type, _Vp ...>::type
  {
  };
  template < typename _Tp >
  struct  underlying_type
  {
      typedef __underlying_type(_Tp) type;
  };
  template < typename _Tp >
  struct  __declval_protector
  {
      static const bool __stop = false;
      static typename ::std::add_rvalue_reference<_Tp>::type __delegate();
  };
  template < typename _Tp >
  inline typename ::std::add_rvalue_reference<_Tp>::type declval() noexcept(true)
  {
    static_assert(__declval_protector<_Tp>::__stop, "declval() must not be used!");
    return __declval_protector<_Tp>::__delegate();
  }
  template < typename _Signature >
  class result_of;
  struct  __result_of_memfun_ref_impl
  {
      template < typename _Fp, typename _Tp1, typename ..._Args >
      static ::std::__success_type<decltype((std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>() ...))> _S_test(int);
      template < typename ...__type_tpl__param_1_0__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _MemPtr, typename _Arg, typename ..._Args >
  struct  __result_of_memfun_ref : private ::std::__result_of_memfun_ref_impl
  {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args ...>(0)) type;
  };
  struct  __result_of_memfun_deref_impl
  {
      template < typename _Fp, typename _Tp1, typename ..._Args >
      static ::std::__success_type<decltype((*std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>() ...))> _S_test(int);
      template < typename ...__type_tpl__param_1_0__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _MemPtr, typename _Arg, typename ..._Args >
  struct  __result_of_memfun_deref : private ::std::__result_of_memfun_deref_impl
  {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args ...>(0)) type;
  };
  struct  __result_of_memobj_ref_impl
  {
      template < typename _Fp, typename _Tp1 >
      static ::std::__success_type<decltype(std::declval<_Tp1>().*std::declval<_Fp>())> _S_test(int);
      template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _MemPtr, typename _Arg >
  struct  __result_of_memobj_ref : private ::std::__result_of_memobj_ref_impl
  {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
  };
  struct  __result_of_memobj_deref_impl
  {
      template < typename _Fp, typename _Tp1 >
      static ::std::__success_type<decltype(*std::declval<_Tp1>().*std::declval<_Fp>())> _S_test(int);
      template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _MemPtr, typename _Arg >
  struct  __result_of_memobj_deref : private ::std::__result_of_memobj_deref_impl
  {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
  };
  template < typename _MemPtr, typename _Arg >
  struct __result_of_memobj;
  template < typename _Res, typename _Class, typename _Arg >
  struct  __result_of_memobj<_Res _Class::*, _Arg>
  {
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_Arg>::type>::type _Argval;
      typedef _Res _Class::*_MemPtr;
      typedef typename ::std::conditional<__or_< ::std::is_same<typename ::std::__result_of_memobj<_Res _Class::*, _Arg>::_Argval, _Class>, ::std::is_base_of<_Class, typename ::std::__result_of_memobj<_Res _Class::*, _Arg>::_Argval> >::value, ::std::__result_of_memobj_ref<typename ::std::__result_of_memobj<_Res _Class::*, _Arg>::_MemPtr, _Arg>, ::std::__result_of_memobj_deref<typename ::std::__result_of_memobj<_Res _Class::*, _Arg>::_MemPtr, _Arg> >::type::type type;
  };
  template < typename _MemPtr, typename _Arg, typename ..._Args >
  struct __result_of_memfun;
  template < typename _Res, typename _Class, typename _Arg, typename ..._Args >
  struct  __result_of_memfun<_Res _Class::*, _Arg, _Args ...>
  {
      typedef typename ::std::remove_cv<typename ::std::remove_reference<_Arg>::type>::type _Argval;
      typedef _Res _Class::*_MemPtr;
      typedef typename ::std::conditional<__or_< ::std::is_same<typename ::std::__result_of_memfun<_Res _Class::*, _Arg, _Args ...>::_Argval, _Class>, ::std::is_base_of<_Class, typename ::std::__result_of_memfun<_Res _Class::*, _Arg, _Args ...>::_Argval> >::value, ::std::__result_of_memfun_ref<typename ::std::__result_of_memfun<_Res _Class::*, _Arg, _Args ...>::_MemPtr, _Arg, _Args ...>, ::std::__result_of_memfun_deref<typename ::std::__result_of_memfun<_Res _Class::*, _Arg, _Args ...>::_MemPtr, _Arg, _Args ...> >::type::type type;
  };
  template < bool __nontype_tpl_param_1_0__, bool __nontype_tpl_param_1_1__, typename _Functor, typename ..._ArgTypes >
  struct  __result_of_impl
  {
      typedef ::std::__failure_type type;
  };
  template < typename _MemPtr, typename _Arg >
  struct  __result_of_impl<true, false, _MemPtr, _Arg> : ::std::__result_of_memobj<typename ::std::decay<_MemPtr>::type, _Arg>
  {
  };
  template < typename _MemPtr, typename _Arg, typename ..._Args >
  struct  __result_of_impl<false, true, _MemPtr, _Arg, _Args ...> : ::std::__result_of_memfun<typename ::std::decay<_MemPtr>::type, _Arg, _Args ...>
  {
  };
  struct  __result_of_other_impl
  {
      template < typename _Fn, typename ..._Args >
      static ::std::__success_type<decltype(std::declval<_Fn>()(std::declval<_Args>() ...))> _S_test(int);
      template < typename ...__type_tpl__param_1_0__ >
      static ::std::__failure_type _S_test(...);
  };
  template < typename _Functor, typename ..._ArgTypes >
  struct  __result_of_impl<false, false, _Functor, _ArgTypes ...> : private ::std::__result_of_other_impl
  {
      typedef decltype(_S_test<_Functor, _ArgTypes ...>(0)) type;
  };
  template < typename _Functor, typename ..._ArgTypes >
  struct  result_of<_Functor (_ArgTypes ...)> : ::std::__result_of_impl<is_member_object_pointer<typename ::std::remove_reference<_Functor>::type>::value, is_member_function_pointer<typename ::std::remove_reference<_Functor>::type>::value, _Functor, _ArgTypes ...>::type
  {
  };
  template < typename _Tp >
  inline constexpr _Tp &&forward(typename ::std::remove_reference<_Tp>::type &__t) noexcept(true);
  template < typename _Tp >
  inline constexpr _Tp &&forward(typename ::std::remove_reference<_Tp>::type &__t) noexcept(true)
  {
    return static_cast<_Tp &&>(__t);
  }
  template < typename _Tp >
  inline constexpr _Tp &&forward(typename ::std::remove_reference<_Tp>::type &&__t) noexcept(true);
  template < typename _Tp >
  inline constexpr _Tp &&forward(typename ::std::remove_reference<_Tp>::type &&__t) noexcept(true)
  {
    static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument substituting _Tp is an lvalue reference type");
    return static_cast<_Tp &&>(__t);
  }
  template < typename _Tp >
  inline constexpr typename ::std::remove_reference<_Tp>::type &&move(_Tp &&__t) noexcept(true);
  template < typename _Tp >
  inline constexpr typename ::std::remove_reference<_Tp>::type &&move(_Tp &&__t) noexcept(true)
  {
    return static_cast<typename ::std::remove_reference<_Tp>::type &&>(__t);
  }
  template < typename _Tp >
  struct  __move_if_noexcept_cond : ::std::__and_< ::std::__not_< ::std::is_nothrow_move_constructible<_Tp> >, ::std::is_copy_constructible<_Tp> >::type
  {
  };
  template < typename _Tp >
  inline constexpr typename ::std::conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp &, _Tp &&>::type move_if_noexcept(_Tp &__x) noexcept(true);
  template < typename _Tp >
  inline constexpr typename ::std::conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp &, _Tp &&>::type move_if_noexcept(_Tp &__x) noexcept(true)
  {
    return std::move(__x);
  }
  template < typename _Tp >
  inline _Tp *addressof(_Tp &__r) noexcept(true);
  template < typename _Tp >
  inline _Tp *addressof(_Tp &__r) noexcept(true)
  {
    return std::__addressof(__r);
  }
  template < typename _Tp >
  inline void swap(_Tp &__a, _Tp &__b) noexcept(__and_< ::std::is_nothrow_move_constructible<_Tp>, ::std::is_nothrow_move_assignable<_Tp> >::value);
  template < typename _Tp >
  inline void swap(_Tp &__a, _Tp &__b) noexcept(__and_< ::std::is_nothrow_move_constructible<_Tp>, ::std::is_nothrow_move_assignable<_Tp> >::value)
  {
    _Tp __tmp = std::move(__a);
    __a = std::move(__b);
    __b = std::move(__tmp);
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline void swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(noexcept(swap(*__a, *__b)));
  template < typename _Tp, ::std::size_t _Nm >
  inline void swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) noexcept(noexcept(swap(*__a, *__b)))
  {
    for (::std::size_t __n(0); __n < _Nm;  ++__n)
      {
        swap(__a[__n], __b[__n]);
      }
  }
  struct  piecewise_construct_t
  {
  };
  constexpr const ::std::piecewise_construct_t piecewise_construct((::std::piecewise_construct_t()));
  template < typename ...__type_tpl__param_1_0__ >
  class tuple;
  template < ::std::size_t ... __nontype_tpl_param_1_0__ >
  struct _Index_tuple;
  template < typename _T1, typename _T2 >
  struct  pair
  {
      typedef _T1 first_type;
      typedef _T2 second_type;
      _T1 first;
      _T2 second;
      inline constexpr pair()
        : first(), second()
      {
      }
      inline constexpr pair(const _T1 &__a, const _T2 &__b)
        : first(__a), second(__b)
      {
      }
      template < typename _U1, typename _U2, typename __type_tpl__param_2_2__ = typename ::std::enable_if<__and_< ::std::is_convertible<const _U1 &, _T1>, ::std::is_convertible<const _U2 &, _T2> >::value>::type >
      inline constexpr pair(const ::std::pair<_U1, _U2> &__p)
        : first(__p.first), second(__p.second)
      {
      }
      inline constexpr pair(const ::std::pair<_T1, _T2> &) = default ;
      inline constexpr pair(::std::pair<_T1, _T2> &&) = default ;
      template < typename _U1, typename __type_tpl__param_2_1__ = typename ::std::enable_if<is_convertible<_U1, _T1>::value>::type >
      inline constexpr pair(_U1 &&__x, const _T2 &__y)
        : first(std::forward<_U1>(__x)), second(__y)
      {
      }
      template < typename _U2, typename __type_tpl__param_2_1__ = typename ::std::enable_if<is_convertible<_U2, _T2>::value>::type >
      inline constexpr pair(const _T1 &__x, _U2 &&__y)
        : first(__x), second(std::forward<_U2>(__y))
      {
      }
      template < typename _U1, typename _U2, typename __type_tpl__param_2_2__ = typename ::std::enable_if<__and_< ::std::is_convertible<_U1, _T1>, ::std::is_convertible<_U2, _T2> >::value>::type >
      inline constexpr pair(_U1 &&__x, _U2 &&__y)
        : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y))
      {
      }
      template < typename _U1, typename _U2, typename __type_tpl__param_2_2__ = typename ::std::enable_if<__and_< ::std::is_convertible<_U1, _T1>, ::std::is_convertible<_U2, _T2> >::value>::type >
      inline constexpr pair(::std::pair<_U1, _U2> &&__p)
        : first(std::forward<_U1>(__p.first)), second(std::forward<_U2>(__p.second))
      {
      }
      template < typename ..._Args1, typename ..._Args2 >
      pair(::std::piecewise_construct_t, ::std::tuple<_Args1 ...>, ::std::tuple<_Args2 ...>);
      inline ::std::pair<_T1, _T2> &operator =(const ::std::pair<_T1, _T2> &__p)
      {
        ::std::pair<_T1, _T2>::first = __p.first;
        ::std::pair<_T1, _T2>::second = __p.second;
        return *this;
      }
      inline ::std::pair<_T1, _T2> &operator =(::std::pair<_T1, _T2> &&__p) noexcept(__and_< ::std::is_nothrow_move_assignable<_T1>, ::std::is_nothrow_move_assignable<_T2> >::value)
      {
        ::std::pair<_T1, _T2>::first = std::forward<typename ::std::pair<_T1, _T2>::first_type>(__p.first);
        ::std::pair<_T1, _T2>::second = std::forward<typename ::std::pair<_T1, _T2>::second_type>(__p.second);
        return *this;
      }
      template < typename _U1, typename _U2 >
      inline ::std::pair<_T1, _T2> &operator =(const ::std::pair<_U1, _U2> &__p)
      {
        ::std::pair<_T1, _T2>::first = __p.first;
        ::std::pair<_T1, _T2>::second = __p.second;
        return *this;
      }
      template < typename _U1, typename _U2 >
      inline ::std::pair<_T1, _T2> &operator =(::std::pair<_U1, _U2> &&__p)
      {
        ::std::pair<_T1, _T2>::first = std::forward<_U1>(__p.first);
        ::std::pair<_T1, _T2>::second = std::forward<_U2>(__p.second);
        return *this;
      }
      inline void swap(::std::pair<_T1, _T2> &__p) noexcept((noexcept(swap(::std::pair<_T1, _T2>::first, __p.first))) && (noexcept(swap(::std::pair<_T1, _T2>::second, __p.second))))
      {
        using ::std::swap;
        swap(::std::pair<_T1, _T2>::first, __p.first);
        swap(::std::pair<_T1, _T2>::second, __p.second);
      }
    private:
      template < typename ..._Args1, ::std::size_t ... _Indexes1, typename ..._Args2, ::std::size_t ... _Indexes2 >
      pair(::std::tuple<_Args1 ...> &, ::std::tuple<_Args2 ...> &, ::std::_Index_tuple<_Indexes1 ...>, ::std::_Index_tuple<_Indexes2 ...>);
  };
  template < typename _T1, typename _T2 >
  inline constexpr bool operator ==(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator ==(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return __x.first == __y.first && __x.second == __y.second;
  }
  template < typename _T1, typename _T2 >
  inline constexpr bool operator <(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator <(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return __x.first < __y.first || (!(__y.first < __x.first) && __x.second < __y.second);
  }
  template < typename _T1, typename _T2 >
  inline constexpr bool operator !=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator !=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return !(__x == __y);
  }
  template < typename _T1, typename _T2 >
  inline constexpr bool operator >(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator >(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return __y < __x;
  }
  template < typename _T1, typename _T2 >
  inline constexpr bool operator <=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator <=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return !(__y < __x);
  }
  template < typename _T1, typename _T2 >
  inline constexpr bool operator >=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y);
  template < typename _T1, typename _T2 >
  inline constexpr bool operator >=(const ::std::pair<_T1, _T2> &__x, const ::std::pair<_T1, _T2> &__y)
  {
    return !(__x < __y);
  }
  template < typename _T1, typename _T2 >
  inline void swap(::std::pair<_T1, _T2> &__x, ::std::pair<_T1, _T2> &__y) noexcept(noexcept(__x.swap(__y)));
  template < typename _T1, typename _T2 >
  inline void swap(::std::pair<_T1, _T2> &__x, ::std::pair<_T1, _T2> &__y) noexcept(noexcept(__x.swap(__y)))
  {
    __x.swap(__y);
  }
  template < typename _T1, typename _T2 >
  inline constexpr ::std::pair<typename ::std::__decay_and_strip<_T1>::__type, typename ::std::__decay_and_strip<_T2>::__type> make_pair(_T1 &&__x, _T2 &&__y);
  template < typename _T1, typename _T2 >
  inline constexpr ::std::pair<typename ::std::__decay_and_strip<_T1>::__type, typename ::std::__decay_and_strip<_T2>::__type> make_pair(_T1 &&__x, _T2 &&__y)
  {
    typedef typename ::std::__decay_and_strip<_T1>::__type __ds_type1;
    typedef typename ::std::__decay_and_strip<_T2>::__type __ds_type2;
    typedef ::std::pair<__ds_type1, __ds_type2> __pair_type;
    return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
  }
  struct  input_iterator_tag
  {
  };
  struct  output_iterator_tag
  {
  };
  struct  forward_iterator_tag : ::std::input_iterator_tag
  {
  };
  struct  bidirectional_iterator_tag : ::std::forward_iterator_tag
  {
  };
  struct  random_access_iterator_tag : ::std::bidirectional_iterator_tag
  {
  };
  template < typename _Category, typename _Tp, typename _Distance = ::std::ptrdiff_t, typename _Pointer = _Tp *, typename _Reference = _Tp & >
  struct  iterator
  {
      typedef _Category iterator_category;
      typedef _Tp value_type;
      typedef _Distance difference_type;
      typedef _Pointer pointer;
      typedef _Reference reference;
  };
  template < typename _Tp >
  class  __has_iterator_category_helper : ::std::__sfinae_types
  {
      template < typename _Up >
      struct  _Wrap_type
      {
      };
      template < typename _Up >
      static ::std::__sfinae_types::__one __test(typename ::std::__has_iterator_category_helper<_Tp>::template _Wrap_type<typename _Up::iterator_category> *);
      template < typename _Up >
      static ::std::__sfinae_types::__two __test(...);
    public:
      static constexpr const bool value = sizeof(__test<_Tp>(0)) == 1;
  };
  template < typename _Tp >
  struct  __has_iterator_category : ::std::integral_constant<bool, __has_iterator_category_helper<typename ::std::remove_cv<_Tp>::type>::value>
  {
  };
  template < typename _Iterator, bool __nontype_tpl_param_1_1__ = __has_iterator_category<_Iterator>::value >
  struct  __iterator_traits
  {
  };
  template < typename _Iterator >
  struct  __iterator_traits<_Iterator, true>
  {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
  };
  template < typename _Iterator >
  struct  iterator_traits : ::std::__iterator_traits<_Iterator>
  {
  };
  template < typename _Tp >
  struct  iterator_traits<_Tp *>
  {
      typedef ::std::random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef _Tp *pointer;
      typedef _Tp &reference;
  };
  template < typename _Tp >
  struct  iterator_traits<const _Tp *>
  {
      typedef ::std::random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef const _Tp *pointer;
      typedef const _Tp &reference;
  };
  template < typename _Iter >
  inline typename ::std::iterator_traits<_Iter>::iterator_category __iterator_category(const _Iter &);
  template < typename _Iter >
  inline typename ::std::iterator_traits<_Iter>::iterator_category __iterator_category(const _Iter &)
  {
    return typename ::std::iterator_traits<_Iter>::iterator_category();
  }
  template < typename _Iterator, bool _HasBase >
  struct  _Iter_base
  {
      typedef _Iterator iterator_type;
      static inline typename ::std::_Iter_base<_Iterator, _HasBase>::iterator_type _S_base(_Iterator __it)
      {
        return __it;
      }
  };
  template < typename _Iterator >
  struct  _Iter_base<_Iterator, true>
  {
      typedef typename _Iterator::iterator_type iterator_type;
      static inline typename ::std::_Iter_base<_Iterator, true>::iterator_type _S_base(_Iterator __it)
      {
        return __it.base();
      }
  };
  template < typename _InIter >
  using _RequireInputIter = typename ::std::enable_if<is_convertible<typename ::std::iterator_traits<_InIter>::iterator_category, ::std::input_iterator_tag>::value>::type;
  namespace __debug { }
}
namespace __gnu_debug {
  using namespace ::std::__debug;
}
namespace std __attribute__((__visibility__("default"))) {
  template < typename _InputIterator >
  inline typename ::std::iterator_traits<_InputIterator>::difference_type __distance(_InputIterator __first, _InputIterator __last, ::std::input_iterator_tag);
  template < typename _InputIterator >
  inline typename ::std::iterator_traits<_InputIterator>::difference_type __distance(_InputIterator __first, _InputIterator __last, ::std::input_iterator_tag)
  {
    typename ::std::iterator_traits<_InputIterator>::difference_type __n = 0;
    while (__first != __last)
      {
         ++__first;
         ++__n;
      }
    return __n;
  }
  template < typename _RandomAccessIterator >
  inline typename ::std::iterator_traits<_RandomAccessIterator>::difference_type __distance(_RandomAccessIterator __first, _RandomAccessIterator __last, ::std::random_access_iterator_tag);
  template < typename _RandomAccessIterator >
  inline typename ::std::iterator_traits<_RandomAccessIterator>::difference_type __distance(_RandomAccessIterator __first, _RandomAccessIterator __last, ::std::random_access_iterator_tag)
  {
    return __last - __first;
  }
  template < typename _InputIterator >
  inline typename ::std::iterator_traits<_InputIterator>::difference_type distance(_InputIterator __first, _InputIterator __last);
  template < typename _InputIterator >
  inline typename ::std::iterator_traits<_InputIterator>::difference_type distance(_InputIterator __first, _InputIterator __last)
  {
    return std::__distance(__first, __last, std::__iterator_category(__first));
  }
  template < typename _InputIterator, typename _Distance >
  inline void __advance(_InputIterator &__i, _Distance __n, ::std::input_iterator_tag);
  template < typename _InputIterator, typename _Distance >
  inline void __advance(_InputIterator &__i, _Distance __n, ::std::input_iterator_tag)
  {
    ;
    while (__n--)
      {
         ++__i;
      }
  }
  template < typename _BidirectionalIterator, typename _Distance >
  inline void __advance(_BidirectionalIterator &__i, _Distance __n, ::std::bidirectional_iterator_tag);
  template < typename _BidirectionalIterator, typename _Distance >
  inline void __advance(_BidirectionalIterator &__i, _Distance __n, ::std::bidirectional_iterator_tag)
  {
    if (__n > 0)
      {
        while (__n--)
          {
             ++__i;
          }
      }
    else
      {
        while (__n++)
          {
             --__i;
          }
      }
  }
  template < typename _RandomAccessIterator, typename _Distance >
  inline void __advance(_RandomAccessIterator &__i, _Distance __n, ::std::random_access_iterator_tag);
  template < typename _RandomAccessIterator, typename _Distance >
  inline void __advance(_RandomAccessIterator &__i, _Distance __n, ::std::random_access_iterator_tag)
  {
    __i += __n;
  }
  template < typename _InputIterator, typename _Distance >
  inline void advance(_InputIterator &__i, _Distance __n);
  template < typename _InputIterator, typename _Distance >
  inline void advance(_InputIterator &__i, _Distance __n)
  {
    typename ::std::iterator_traits<_InputIterator>::difference_type __d = __n;
    std::__advance(__i, __d, std::__iterator_category(__i));
  }
  template < typename _ForwardIterator >
  inline _ForwardIterator next(_ForwardIterator __x, typename ::std::iterator_traits<_ForwardIterator>::difference_type __n  = (1));
  template < typename _ForwardIterator >
  inline _ForwardIterator next(_ForwardIterator __x, typename ::std::iterator_traits<_ForwardIterator>::difference_type __n)
  {
    std::advance(__x, __n);
    return __x;
  }
  template < typename _BidirectionalIterator >
  inline _BidirectionalIterator prev(_BidirectionalIterator __x, typename ::std::iterator_traits<_BidirectionalIterator>::difference_type __n  = (1));
  template < typename _BidirectionalIterator >
  inline _BidirectionalIterator prev(_BidirectionalIterator __x, typename ::std::iterator_traits<_BidirectionalIterator>::difference_type __n)
  {
    std::advance(__x,  -__n);
    return __x;
  }
  template < typename _Iterator >
  class  reverse_iterator : public ::std::iterator<typename ::std::iterator_traits<_Iterator>::iterator_category, typename ::std::iterator_traits<_Iterator>::value_type, typename ::std::iterator_traits<_Iterator>::difference_type, typename ::std::iterator_traits<_Iterator>::pointer, typename ::std::iterator_traits<_Iterator>::reference>
  {
    protected:
      _Iterator current;
      typedef ::std::iterator_traits<_Iterator> __traits_type;
    public:
      typedef _Iterator iterator_type;
      typedef typename ::std::iterator_traits<_Iterator>::difference_type difference_type;
      typedef typename ::std::iterator_traits<_Iterator>::pointer pointer;
      typedef typename ::std::iterator_traits<_Iterator>::reference reference;
      inline reverse_iterator()
        : current()
      {
      }
      inline explicit reverse_iterator(typename ::std::reverse_iterator<_Iterator>::iterator_type __x)
        : current(__x)
      {
      }
      inline reverse_iterator(const ::std::reverse_iterator<_Iterator> &__x)
        : current(__x.current)
      {
      }
      template < typename _Iter >
      inline reverse_iterator(const ::std::reverse_iterator<_Iter> &__x)
        : current(__x.base())
      {
      }
      inline typename ::std::reverse_iterator<_Iterator>::iterator_type base() const 
      {
        return ::std::reverse_iterator<_Iterator>::current;
      }
      inline typename ::std::reverse_iterator<_Iterator>::reference operator *() const 
      {
        _Iterator __tmp = ::std::reverse_iterator<_Iterator>::current;
        return * --__tmp;
      }
      inline typename ::std::reverse_iterator<_Iterator>::pointer operator ->() const 
      {
        return &(*this).operator *();
      }
      inline ::std::reverse_iterator<_Iterator> &operator ++()
      {
         --::std::reverse_iterator<_Iterator>::current;
        return *this;
      }
      inline ::std::reverse_iterator<_Iterator> operator ++(int)
      {
        ::std::reverse_iterator<_Iterator> __tmp = *this;
         --::std::reverse_iterator<_Iterator>::current;
        return __tmp;
      }
      inline ::std::reverse_iterator<_Iterator> &operator --()
      {
         ++::std::reverse_iterator<_Iterator>::current;
        return *this;
      }
      inline ::std::reverse_iterator<_Iterator> operator --(int)
      {
        ::std::reverse_iterator<_Iterator> __tmp = *this;
         ++::std::reverse_iterator<_Iterator>::current;
        return __tmp;
      }
      inline ::std::reverse_iterator<_Iterator> operator +(typename ::std::reverse_iterator<_Iterator>::difference_type __n) const 
      {
        return ::std::reverse_iterator<_Iterator>(::std::reverse_iterator<_Iterator>::current - __n);
      }
      inline ::std::reverse_iterator<_Iterator> &operator +=(typename ::std::reverse_iterator<_Iterator>::difference_type __n)
      {
        ::std::reverse_iterator<_Iterator>::current -= __n;
        return *this;
      }
      inline ::std::reverse_iterator<_Iterator> operator -(typename ::std::reverse_iterator<_Iterator>::difference_type __n) const 
      {
        return ::std::reverse_iterator<_Iterator>(::std::reverse_iterator<_Iterator>::current + __n);
      }
      inline ::std::reverse_iterator<_Iterator> &operator -=(typename ::std::reverse_iterator<_Iterator>::difference_type __n)
      {
        ::std::reverse_iterator<_Iterator>::current += __n;
        return *this;
      }
      inline typename ::std::reverse_iterator<_Iterator>::reference operator [](typename ::std::reverse_iterator<_Iterator>::difference_type __n) const 
      {
        return *(*this + __n);
      }
  };
  template < typename _Iterator >
  inline bool operator ==(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator ==(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return __x.base() == __y.base();
  }
  template < typename _Iterator >
  inline bool operator <(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator <(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return __y.base() < __x.base();
  }
  template < typename _Iterator >
  inline bool operator !=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator !=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return !(__x == __y);
  }
  template < typename _Iterator >
  inline bool operator >(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator >(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return __y < __x;
  }
  template < typename _Iterator >
  inline bool operator <=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator <=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return !(__y < __x);
  }
  template < typename _Iterator >
  inline bool operator >=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator >=(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return !(__x < __y);
  }
  template < typename _Iterator >
  inline typename ::std::reverse_iterator<_Iterator>::difference_type operator -(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline typename ::std::reverse_iterator<_Iterator>::difference_type operator -(const ::std::reverse_iterator<_Iterator> &__x, const ::std::reverse_iterator<_Iterator> &__y)
  {
    return __y.base() - __x.base();
  }
  template < typename _Iterator >
  inline ::std::reverse_iterator<_Iterator> operator +(typename ::std::reverse_iterator<_Iterator>::difference_type __n, const ::std::reverse_iterator<_Iterator> &__x);
  template < typename _Iterator >
  inline ::std::reverse_iterator<_Iterator> operator +(typename ::std::reverse_iterator<_Iterator>::difference_type __n, const ::std::reverse_iterator<_Iterator> &__x)
  {
    return ::std::reverse_iterator<_Iterator>(__x.base() - __n);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator ==(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator ==(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return __x.base() == __y.base();
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return __y.base() < __x.base();
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator !=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator !=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return !(__x == __y);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return __y < __x;
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return !(__y < __x);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >=(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y)
  {
    return !(__x < __y);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline auto operator -(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y) -> decltype(__y.base() - __x.base());
  template < typename _IteratorL, typename _IteratorR >
  inline auto operator -(const ::std::reverse_iterator<_IteratorL> &__x, const ::std::reverse_iterator<_IteratorR> &__y) -> decltype(__y.base() - __x.base())
  {
    return __y.base() - __x.base();
  }
 /* Instantiation of class template '::std::iterator< ::std::output_iterator_tag, void, void, void, void>' */ 
  template < typename _Container >
  class  back_insert_iterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>
  {
    protected:
      _Container *container;
    public:
      typedef _Container container_type;
      inline explicit back_insert_iterator(_Container &__x)
        : container(&__x)
      {
      }
      inline ::std::back_insert_iterator<_Container> &operator =(const typename _Container::value_type &__value)
      {
        ::std::back_insert_iterator<_Container>::container->push_back(__value);
        return *this;
      }
      inline ::std::back_insert_iterator<_Container> &operator =(typename _Container::value_type &&__value)
      {
        ::std::back_insert_iterator<_Container>::container->push_back(std::move(__value));
        return *this;
      }
      inline ::std::back_insert_iterator<_Container> &operator *()
      {
        return *this;
      }
      inline ::std::back_insert_iterator<_Container> &operator ++()
      {
        return *this;
      }
      inline ::std::back_insert_iterator<_Container> operator ++(int)
      {
        return *this;
      }
  };
  template < typename _Container >
  inline ::std::back_insert_iterator<_Container> back_inserter(_Container &__x);
  template < typename _Container >
  inline ::std::back_insert_iterator<_Container> back_inserter(_Container &__x)
  {
    return ::std::back_insert_iterator<_Container>(__x);
  }
  template < typename _Container >
  class  front_insert_iterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>
  {
    protected:
      _Container *container;
    public:
      typedef _Container container_type;
      inline explicit front_insert_iterator(_Container &__x)
        : container(&__x)
      {
      }
      inline ::std::front_insert_iterator<_Container> &operator =(const typename _Container::value_type &__value)
      {
        ::std::front_insert_iterator<_Container>::container->push_front(__value);
        return *this;
      }
      inline ::std::front_insert_iterator<_Container> &operator =(typename _Container::value_type &&__value)
      {
        ::std::front_insert_iterator<_Container>::container->push_front(std::move(__value));
        return *this;
      }
      inline ::std::front_insert_iterator<_Container> &operator *()
      {
        return *this;
      }
      inline ::std::front_insert_iterator<_Container> &operator ++()
      {
        return *this;
      }
      inline ::std::front_insert_iterator<_Container> operator ++(int)
      {
        return *this;
      }
  };
  template < typename _Container >
  inline ::std::front_insert_iterator<_Container> front_inserter(_Container &__x);
  template < typename _Container >
  inline ::std::front_insert_iterator<_Container> front_inserter(_Container &__x)
  {
    return ::std::front_insert_iterator<_Container>(__x);
  }
  template < typename _Container >
  class  insert_iterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>
  {
    protected:
      _Container *container;
      typename _Container::iterator iter;
    public:
      typedef _Container container_type;
      inline insert_iterator(_Container &__x, typename _Container::iterator __i)
        : container(&__x), iter(__i)
      {
      }
      inline ::std::insert_iterator<_Container> &operator =(const typename _Container::value_type &__value)
      {
        ::std::insert_iterator<_Container>::iter = ::std::insert_iterator<_Container>::container->insert(::std::insert_iterator<_Container>::iter, __value);
         ++::std::insert_iterator<_Container>::iter;
        return *this;
      }
      inline ::std::insert_iterator<_Container> &operator =(typename _Container::value_type &&__value)
      {
        ::std::insert_iterator<_Container>::iter = ::std::insert_iterator<_Container>::container->insert(::std::insert_iterator<_Container>::iter, std::move(__value));
         ++::std::insert_iterator<_Container>::iter;
        return *this;
      }
      inline ::std::insert_iterator<_Container> &operator *()
      {
        return *this;
      }
      inline ::std::insert_iterator<_Container> &operator ++()
      {
        return *this;
      }
      inline ::std::insert_iterator<_Container> &operator ++(int)
      {
        return *this;
      }
  };
  template < typename _Container, typename _Iterator >
  inline ::std::insert_iterator<_Container> inserter(_Container &__x, _Iterator __i);
  template < typename _Container, typename _Iterator >
  inline ::std::insert_iterator<_Container> inserter(_Container &__x, _Iterator __i)
  {
    return ::std::insert_iterator<_Container>(__x, typename _Container::iterator(__i));
  }
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  using ::std::iterator_traits;
  using ::std::iterator;
  template < typename _Iterator, typename _Container >
  class  __normal_iterator
  {
    protected:
      _Iterator _M_current;
      typedef ::std::iterator_traits<_Iterator> __traits_type;
    public:
      typedef _Iterator iterator_type;
      typedef typename ::std::iterator_traits<_Iterator>::iterator_category iterator_category;
      typedef typename ::std::iterator_traits<_Iterator>::value_type value_type;
      typedef typename ::std::iterator_traits<_Iterator>::difference_type difference_type;
      typedef typename ::std::iterator_traits<_Iterator>::reference reference;
      typedef typename ::std::iterator_traits<_Iterator>::pointer pointer;
      inline constexpr __normal_iterator()
        : _M_current(_Iterator())
      {
      }
      inline explicit __normal_iterator(const _Iterator &__i)
        : _M_current(__i)
      {
      }
      template < typename _Iter >
      inline __normal_iterator(const ::__gnu_cxx::__normal_iterator<_Iter, typename ::__gnu_cxx::__enable_if<std::__are_same<_Iter, typename _Container::pointer>::__value, _Container>::__type> &__i)
        : _M_current(__i.base())
      {
      }
      inline typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::reference operator *() const 
      {
        return *::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current;
      }
      inline typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::pointer operator ->() const 
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current;
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &operator ++()
      {
         ++::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current;
        return *this;
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator ++(int)
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>(::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current++);
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &operator --()
      {
         --::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current;
        return *this;
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator --(int)
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>(::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current--);
      }
      inline typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::reference operator [](const typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type &__n) const 
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current[__n];
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &operator +=(const typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type &__n)
      {
        ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current += __n;
        return *this;
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator +(const typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type &__n) const 
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>(::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current + __n);
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &operator -=(const typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type &__n)
      {
        ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current -= __n;
        return *this;
      }
      inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator -(const typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type &__n) const 
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>(::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current - __n);
      }
      inline const _Iterator &base() const 
      {
        return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::_M_current;
      }
  };
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator ==(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator ==(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() == __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator ==(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator ==(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() == __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator !=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator !=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() != __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator !=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator !=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() != __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator <(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator <(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() < __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator <(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator <(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() < __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator >(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator >(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() > __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator >(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator >(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() > __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator <=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator <=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() <= __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator <=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator <=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() <= __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator >=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs);
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline bool operator >=(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs)
  {
    return __lhs.base() >= __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline bool operator >=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline bool operator >=(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() >= __rhs.base();
  }
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline auto operator -(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs) -> decltype(__lhs.base() - __rhs.base());
  template < typename _IteratorL, typename _IteratorR, typename _Container >
  inline auto operator -(const ::__gnu_cxx::__normal_iterator<_IteratorL, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_IteratorR, _Container> &__rhs) -> decltype(__lhs.base() - __rhs.base())
  {
    return __lhs.base() - __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type operator -(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs);
  template < typename _Iterator, typename _Container >
  inline typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type operator -(const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__lhs, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__rhs)
  {
    return __lhs.base() - __rhs.base();
  }
  template < typename _Iterator, typename _Container >
  inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator +(typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type __n, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__i);
  template < typename _Iterator, typename _Container >
  inline ::__gnu_cxx::__normal_iterator<_Iterator, _Container> operator +(typename ::__gnu_cxx::__normal_iterator<_Iterator, _Container>::difference_type __n, const ::__gnu_cxx::__normal_iterator<_Iterator, _Container> &__i)
  {
    return ::__gnu_cxx::__normal_iterator<_Iterator, _Container>(__i.base() + __n);
  }
}
namespace std __attribute__((__visibility__("default"))) {
  template < typename _Iterator >
  class  move_iterator
  {
    protected:
      _Iterator _M_current;
      typedef ::std::iterator_traits<_Iterator> __traits_type;
    public:
      typedef _Iterator iterator_type;
      typedef typename ::std::iterator_traits<_Iterator>::iterator_category iterator_category;
      typedef typename ::std::iterator_traits<_Iterator>::value_type value_type;
      typedef typename ::std::iterator_traits<_Iterator>::difference_type difference_type;
      typedef _Iterator pointer;
      typedef typename ::std::move_iterator<_Iterator>::value_type &&reference;
      inline move_iterator()
        : _M_current()
      {
      }
      inline explicit move_iterator(typename ::std::move_iterator<_Iterator>::iterator_type __i)
        : _M_current(__i)
      {
      }
      template < typename _Iter >
      inline move_iterator(const ::std::move_iterator<_Iter> &__i)
        : _M_current(__i.base())
      {
      }
      inline typename ::std::move_iterator<_Iterator>::iterator_type base() const 
      {
        return ::std::move_iterator<_Iterator>::_M_current;
      }
      inline typename ::std::move_iterator<_Iterator>::reference operator *() const 
      {
        return std::move(*::std::move_iterator<_Iterator>::_M_current);
      }
      inline typename ::std::move_iterator<_Iterator>::pointer operator ->() const 
      {
        return ::std::move_iterator<_Iterator>::_M_current;
      }
      inline ::std::move_iterator<_Iterator> &operator ++()
      {
         ++::std::move_iterator<_Iterator>::_M_current;
        return *this;
      }
      inline ::std::move_iterator<_Iterator> operator ++(int)
      {
        ::std::move_iterator<_Iterator> __tmp = *this;
         ++::std::move_iterator<_Iterator>::_M_current;
        return __tmp;
      }
      inline ::std::move_iterator<_Iterator> &operator --()
      {
         --::std::move_iterator<_Iterator>::_M_current;
        return *this;
      }
      inline ::std::move_iterator<_Iterator> operator --(int)
      {
        ::std::move_iterator<_Iterator> __tmp = *this;
         --::std::move_iterator<_Iterator>::_M_current;
        return __tmp;
      }
      inline ::std::move_iterator<_Iterator> operator +(typename ::std::move_iterator<_Iterator>::difference_type __n) const 
      {
        return ::std::move_iterator<_Iterator>(::std::move_iterator<_Iterator>::_M_current + __n);
      }
      inline ::std::move_iterator<_Iterator> &operator +=(typename ::std::move_iterator<_Iterator>::difference_type __n)
      {
        ::std::move_iterator<_Iterator>::_M_current += __n;
        return *this;
      }
      inline ::std::move_iterator<_Iterator> operator -(typename ::std::move_iterator<_Iterator>::difference_type __n) const 
      {
        return ::std::move_iterator<_Iterator>(::std::move_iterator<_Iterator>::_M_current - __n);
      }
      inline ::std::move_iterator<_Iterator> &operator -=(typename ::std::move_iterator<_Iterator>::difference_type __n)
      {
        ::std::move_iterator<_Iterator>::_M_current -= __n;
        return *this;
      }
      inline typename ::std::move_iterator<_Iterator>::reference operator [](typename ::std::move_iterator<_Iterator>::difference_type __n) const 
      {
        return std::move(::std::move_iterator<_Iterator>::_M_current[__n]);
      }
  };
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator ==(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator ==(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return __x.base() == __y.base();
  }
  template < typename _Iterator >
  inline bool operator ==(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator ==(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return __x.base() == __y.base();
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator !=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator !=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return !(__x == __y);
  }
  template < typename _Iterator >
  inline bool operator !=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator !=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return !(__x == __y);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return __x.base() < __y.base();
  }
  template < typename _Iterator >
  inline bool operator <(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator <(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return __x.base() < __y.base();
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator <=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return !(__y < __x);
  }
  template < typename _Iterator >
  inline bool operator <=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator <=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return !(__y < __x);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return __y < __x;
  }
  template < typename _Iterator >
  inline bool operator >(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator >(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return __y < __x;
  }
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y);
  template < typename _IteratorL, typename _IteratorR >
  inline bool operator >=(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y)
  {
    return !(__x < __y);
  }
  template < typename _Iterator >
  inline bool operator >=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y);
  template < typename _Iterator >
  inline bool operator >=(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y)
  {
    return !(__x < __y);
  }
  template < typename _IteratorL, typename _IteratorR >
  inline auto operator -(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y) -> decltype(__x.base() - __y.base());
  template < typename _IteratorL, typename _IteratorR >
  inline auto operator -(const ::std::move_iterator<_IteratorL> &__x, const ::std::move_iterator<_IteratorR> &__y) -> decltype(__x.base() - __y.base())
  {
    return __x.base() - __y.base();
  }
  template < typename _Iterator >
  inline auto operator -(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y) -> decltype(__x.base() - __y.base());
  template < typename _Iterator >
  inline auto operator -(const ::std::move_iterator<_Iterator> &__x, const ::std::move_iterator<_Iterator> &__y) -> decltype(__x.base() - __y.base())
  {
    return __x.base() - __y.base();
  }
  template < typename _Iterator >
  inline ::std::move_iterator<_Iterator> operator +(typename ::std::move_iterator<_Iterator>::difference_type __n, const ::std::move_iterator<_Iterator> &__x);
  template < typename _Iterator >
  inline ::std::move_iterator<_Iterator> operator +(typename ::std::move_iterator<_Iterator>::difference_type __n, const ::std::move_iterator<_Iterator> &__x)
  {
    return __x + __n;
  }
  template < typename _Iterator >
  inline ::std::move_iterator<_Iterator> make_move_iterator(_Iterator __i);
  template < typename _Iterator >
  inline ::std::move_iterator<_Iterator> make_move_iterator(_Iterator __i)
  {
    return ::std::move_iterator<_Iterator>(__i);
  }
  template < typename _Iterator, typename _ReturnType = typename ::std::conditional<__move_if_noexcept_cond<typename ::std::iterator_traits<_Iterator>::value_type>::value, _Iterator, ::std::move_iterator<_Iterator> >::type >
  inline _ReturnType __make_move_if_noexcept_iterator(_Iterator __i);
  template < typename _Iterator, typename _ReturnType >
  inline _ReturnType __make_move_if_noexcept_iterator(_Iterator __i)
  {
    return _ReturnType(__i);
  }
  template < typename _ForwardIterator1, typename _ForwardIterator2 >
  inline void iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b);
  template < typename _ForwardIterator1, typename _ForwardIterator2 >
  inline void iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
  {
    swap(*__a, *__b);
  }
  template < typename _ForwardIterator1, typename _ForwardIterator2 >
  _ForwardIterator2 swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2);
  template < typename _ForwardIterator1, typename _ForwardIterator2 >
  _ForwardIterator2 swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 __first2)
  {
    ;
    for (; __first1 != __last1; ( ++__first1,  ++__first2))
      {
        std::iter_swap(__first1, __first2);
      }
    return __first2;
  }
  template < typename _Tp >
  inline const _Tp &min(const _Tp &__a, const _Tp &__b);
  template < typename _Tp >
  inline const _Tp &min(const _Tp &__a, const _Tp &__b)
  {
    if (__b < __a)
      {
        return __b;
      }
    return __a;
  }
  template < typename _Tp >
  inline const _Tp &max(const _Tp &__a, const _Tp &__b);
  template < typename _Tp >
  inline const _Tp &max(const _Tp &__a, const _Tp &__b)
  {
    if (__a < __b)
      {
        return __b;
      }
    return __a;
  }
  template < typename _Tp, typename _Compare >
  inline const _Tp &min(const _Tp &__a, const _Tp &__b, _Compare __comp);
  template < typename _Tp, typename _Compare >
  inline const _Tp &min(const _Tp &__a, const _Tp &__b, _Compare __comp)
  {
    if (__comp(__b, __a))
      {
        return __b;
      }
    return __a;
  }
  template < typename _Tp, typename _Compare >
  inline const _Tp &max(const _Tp &__a, const _Tp &__b, _Compare __comp);
  template < typename _Tp, typename _Compare >
  inline const _Tp &max(const _Tp &__a, const _Tp &__b, _Compare __comp)
  {
    if (__comp(__a, __b))
      {
        return __b;
      }
    return __a;
  }
  template < typename _Iterator >
  struct  _Niter_base : ::std::_Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
  {
  };
  template < typename _Iterator >
  inline typename ::std::_Niter_base<_Iterator>::iterator_type __niter_base(_Iterator __it);
  template < typename _Iterator >
  inline typename ::std::_Niter_base<_Iterator>::iterator_type __niter_base(_Iterator __it)
  {
    return std::_Niter_base<_Iterator>::_S_base(__it);
  }
  template < typename _Iterator >
  struct  _Miter_base : ::std::_Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
  {
  };
  template < typename _Iterator >
  inline typename ::std::_Miter_base<_Iterator>::iterator_type __miter_base(_Iterator __it);
  template < typename _Iterator >
  inline typename ::std::_Miter_base<_Iterator>::iterator_type __miter_base(_Iterator __it)
  {
    return std::_Miter_base<_Iterator>::_S_base(__it);
  }
  template < bool __nontype_tpl_param_1_0__, bool __nontype_tpl_param_1_1__, typename __type_tpl__param_1_2__ >
  struct  __copy_move
  {
      template < typename _II, typename _OI >
      static inline _OI __copy_m(_II __first, _II __last, _OI __result)
      {
        for (; __first != __last; ( ++__result,  ++__first))
          {
            *__result = *__first;
          }
        return __result;
      }
  };
  template < typename _Category >
  struct  __copy_move<true, false, _Category>
  {
      template < typename _II, typename _OI >
      static inline _OI __copy_m(_II __first, _II __last, _OI __result)
      {
        for (; __first != __last; ( ++__result,  ++__first))
          {
            *__result = std::move(*__first);
          }
        return __result;
      }
  };
  template <>
  struct  __copy_move<false, false, ::std::random_access_iterator_tag>
  {
      template < typename _II, typename _OI >
      static inline _OI __copy_m(_II __first, _II __last, _OI __result)
      {
        typedef typename ::std::iterator_traits<_II>::difference_type _Distance;
        for (_Distance __n = __last - __first; __n > 0;  --__n)
          {
            *__result = *__first;
             ++__first;
             ++__result;
          }
        return __result;
      }
  };
  template <>
  struct  __copy_move<true, false, ::std::random_access_iterator_tag>
  {
      template < typename _II, typename _OI >
      static inline _OI __copy_m(_II __first, _II __last, _OI __result)
      {
        typedef typename ::std::iterator_traits<_II>::difference_type _Distance;
        for (_Distance __n = __last - __first; __n > 0;  --__n)
          {
            *__result = std::move(*__first);
             ++__first;
             ++__result;
          }
        return __result;
      }
  };
  template < bool _IsMove >
  struct  __copy_move<_IsMove, true, ::std::random_access_iterator_tag>
  {
      template < typename _Tp >
      static inline _Tp *__copy_m(const _Tp *__first, const _Tp *__last, _Tp *__result)
      {
        const ::std::ptrdiff_t _Num = __last - __first;
        if (_Num)
          {
            __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
          }
        return __result + _Num;
      }
  };
  template < bool _IsMove, typename _II, typename _OI >
  inline _OI __copy_move_a(_II __first, _II __last, _OI __result);
  template < bool _IsMove, typename _II, typename _OI >
  inline _OI __copy_move_a(_II __first, _II __last, _OI __result)
  {
    typedef typename ::std::iterator_traits<_II>::value_type _ValueTypeI;
    typedef typename ::std::iterator_traits<_OI>::value_type _ValueTypeO;
    typedef typename ::std::iterator_traits<_II>::iterator_category _Category;
    const bool __simple = (((__is_trivial(_ValueTypeI)) && __is_pointer<_II>::__value) && __is_pointer<_OI>::__value) && __are_same<_ValueTypeI, _ValueTypeO>::__value;
    return std::__copy_move<_IsMove, __simple, _Category>::__copy_m(__first, __last, __result);
  }
  template < typename _CharT >
  struct char_traits;
  template < typename _CharT, typename _Traits >
  class istreambuf_iterator;
  template < typename _CharT, typename _Traits >
  class ostreambuf_iterator;
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > >::__type __copy_move_a2(_CharT *__first, _CharT *__last, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > __result);
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > >::__type __copy_move_a2(const _CharT *__first, const _CharT *__last, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > __result);
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, _CharT *>::__type __copy_move_a2(::std::istreambuf_iterator<_CharT, ::std::char_traits<_CharT> > __first, ::std::istreambuf_iterator<_CharT, ::std::char_traits<_CharT> > __last, _CharT *__result);
  template < bool _IsMove, typename _II, typename _OI >
  inline _OI __copy_move_a2(_II __first, _II __last, _OI __result);
  template < bool _IsMove, typename _II, typename _OI >
  inline _OI __copy_move_a2(_II __first, _II __last, _OI __result)
  {
    return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)));
  }
  template < typename _II, typename _OI >
  inline _OI copy(_II __first, _II __last, _OI __result);
  template < typename _II, typename _OI >
  inline _OI copy(_II __first, _II __last, _OI __result)
  {
    ;
    return std::__copy_move_a2<__is_move_iterator<_II>::__value>(std::__miter_base(__first), std::__miter_base(__last), __result);
  }
  template < typename _II, typename _OI >
  inline _OI move(_II __first, _II __last, _OI __result);
  template < typename _II, typename _OI >
  inline _OI move(_II __first, _II __last, _OI __result)
  {
    ;
    return std::__copy_move_a2<true>(std::__miter_base(__first), std::__miter_base(__last), __result);
  }
  template < bool __nontype_tpl_param_1_0__, bool __nontype_tpl_param_1_1__, typename __type_tpl__param_1_2__ >
  struct  __copy_move_backward
  {
      template < typename _BI1, typename _BI2 >
      static inline _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
      {
        while (__first != __last)
          {
            * --__result = * --__last;
          }
        return __result;
      }
  };
  template < typename _Category >
  struct  __copy_move_backward<true, false, _Category>
  {
      template < typename _BI1, typename _BI2 >
      static inline _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
      {
        while (__first != __last)
          {
            * --__result = std::move(* --__last);
          }
        return __result;
      }
  };
  template <>
  struct  __copy_move_backward<false, false, ::std::random_access_iterator_tag>
  {
      template < typename _BI1, typename _BI2 >
      static inline _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
      {
        typename ::std::iterator_traits<_BI1>::difference_type __n;
        for (__n = __last - __first; __n > 0;  --__n)
          {
            * --__result = * --__last;
          }
        return __result;
      }
  };
  template <>
  struct  __copy_move_backward<true, false, ::std::random_access_iterator_tag>
  {
      template < typename _BI1, typename _BI2 >
      static inline _BI2 __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
      {
        typename ::std::iterator_traits<_BI1>::difference_type __n;
        for (__n = __last - __first; __n > 0;  --__n)
          {
            * --__result = std::move(* --__last);
          }
        return __result;
      }
  };
  template < bool _IsMove >
  struct  __copy_move_backward<_IsMove, true, ::std::random_access_iterator_tag>
  {
      template < typename _Tp >
      static inline _Tp *__copy_move_b(const _Tp *__first, const _Tp *__last, _Tp *__result)
      {
        const ::std::ptrdiff_t _Num = __last - __first;
        if (_Num)
          {
            __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
          }
        return __result - _Num;
      }
  };
  template < bool _IsMove, typename _BI1, typename _BI2 >
  inline _BI2 __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result);
  template < bool _IsMove, typename _BI1, typename _BI2 >
  inline _BI2 __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
  {
    typedef typename ::std::iterator_traits<_BI1>::value_type _ValueType1;
    typedef typename ::std::iterator_traits<_BI2>::value_type _ValueType2;
    typedef typename ::std::iterator_traits<_BI1>::iterator_category _Category;
    const bool __simple = (((__is_trivial(_ValueType1)) && __is_pointer<_BI1>::__value) && __is_pointer<_BI2>::__value) && __are_same<_ValueType1, _ValueType2>::__value;
    return std::__copy_move_backward<_IsMove, __simple, _Category>::__copy_move_b(__first, __last, __result);
  }
  template < bool _IsMove, typename _BI1, typename _BI2 >
  inline _BI2 __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result);
  template < bool _IsMove, typename _BI1, typename _BI2 >
  inline _BI2 __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
  {
    return _BI2(std::__copy_move_backward_a<_IsMove>(std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)));
  }
  template < typename _BI1, typename _BI2 >
  inline _BI2 copy_backward(_BI1 __first, _BI1 __last, _BI2 __result);
  template < typename _BI1, typename _BI2 >
  inline _BI2 copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
  {
    ;
    return std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>(std::__miter_base(__first), std::__miter_base(__last), __result);
  }
  template < typename _BI1, typename _BI2 >
  inline _BI2 move_backward(_BI1 __first, _BI1 __last, _BI2 __result);
  template < typename _BI1, typename _BI2 >
  inline _BI2 move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
  {
    ;
    return std::__copy_move_backward_a2<true>(std::__miter_base(__first), std::__miter_base(__last), __result);
  }
  template < typename _ForwardIterator, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value);
  template < typename _ForwardIterator, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value)
  {
    for (; __first != __last;  ++__first)
      {
        *__first = __value;
      }
  }
  template < typename _ForwardIterator, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value);
  template < typename _ForwardIterator, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type __fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value)
  {
    const _Tp __tmp = __value;
    for (; __first != __last;  ++__first)
      {
        *__first = __tmp;
      }
  }
  template < typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type __fill_a(_Tp *__first, _Tp *__last, const _Tp &__c);
  template < typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type __fill_a(_Tp *__first, _Tp *__last, const _Tp &__c)
  {
    const _Tp __tmp = __c;
    __builtin_memset(__first, static_cast<unsigned char>(__tmp), __last - __first);
  }
  template < typename _ForwardIterator, typename _Tp >
  inline void fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value);
  template < typename _ForwardIterator, typename _Tp >
  inline void fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value)
  {
    ;
    std::__fill_a(std::__niter_base(__first), std::__niter_base(__last), __value);
  }
  template < typename _OutputIterator, typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value);
  template < typename _OutputIterator, typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value)
  {
    for (decltype(__n + 0) __niter = __n; __niter > 0; ( --__niter,  ++__first))
      {
        *__first = __value;
      }
    return __first;
  }
  template < typename _OutputIterator, typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value);
  template < typename _OutputIterator, typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type __fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value)
  {
    const _Tp __tmp = __value;
    for (decltype(__n + 0) __niter = __n; __niter > 0; ( --__niter,  ++__first))
      {
        *__first = __tmp;
      }
    return __first;
  }
  template < typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp *>::__type __fill_n_a(_Tp *__first, _Size __n, const _Tp &__c);
  template < typename _Size, typename _Tp >
  inline typename ::__gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp *>::__type __fill_n_a(_Tp *__first, _Size __n, const _Tp &__c)
  {
    std::__fill_a(__first, __first + __n, __c);
    return __first + __n;
  }
  template < typename _OI, typename _Size, typename _Tp >
  inline _OI fill_n(_OI __first, _Size __n, const _Tp &__value);
  template < typename _OI, typename _Size, typename _Tp >
  inline _OI fill_n(_OI __first, _Size __n, const _Tp &__value)
  {
    return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
  }
  template < bool _BoolType >
  struct  __equal
  {
      template < typename _II1, typename _II2 >
      static inline bool equal(_II1 __first1, _II1 __last1, _II2 __first2)
      {
        for (; __first1 != __last1; ( ++__first1,  ++__first2))
          {
            if (!(*__first1 == *__first2))
              {
                return false;
              }
          }
        return true;
      }
  };
  template <>
  struct  __equal<true>
  {
      template < typename _Tp >
      static inline bool equal(const _Tp *__first1, const _Tp *__last1, const _Tp *__first2)
      {
        return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * (__last1 - __first1));
      }
  };
  template < typename _II1, typename _II2 >
  inline bool __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2);
  template < typename _II1, typename _II2 >
  inline bool __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
  {
    typedef typename ::std::iterator_traits<_II1>::value_type _ValueType1;
    typedef typename ::std::iterator_traits<_II2>::value_type _ValueType2;
    const bool __simple = (((__is_integer<_ValueType1>::__value || __is_pointer<_ValueType1>::__value) && __is_pointer<_II1>::__value) && __is_pointer<_II2>::__value) && __are_same<_ValueType1, _ValueType2>::__value;
    return std::__equal<__simple>::equal(__first1, __last1, __first2);
  }
  template < typename __type_tpl__param_1_0__, typename __type_tpl__param_1_1__ >
  struct  __lc_rai
  {
      template < typename _II1, typename _II2 >
      static inline _II1 __newlast1(_II1, _II1 __last1, _II2, _II2)
      {
        return __last1;
      }
      template < typename _II >
      static inline bool __cnd2(_II __first, _II __last)
      {
        return __first != __last;
      }
  };
  template <>
  struct  __lc_rai< ::std::random_access_iterator_tag, ::std::random_access_iterator_tag>
  {
      template < typename _RAI1, typename _RAI2 >
      static inline _RAI1 __newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 __first2, _RAI2 __last2)
      {
        const typename ::std::iterator_traits<_RAI1>::difference_type __diff1 = __last1 - __first1;
        const typename ::std::iterator_traits<_RAI2>::difference_type __diff2 = __last2 - __first2;
        return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
      }
      template < typename _RAI >
      static inline bool __cnd2(_RAI, _RAI)
      {
        return true;
      }
  };
  template < bool _BoolType >
  struct  __lexicographical_compare
  {
      template < typename _II1, typename _II2 >
      static bool __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2);
  };
  template < bool _BoolType >
  template < typename _II1, typename _II2 >
  bool __lexicographical_compare<_BoolType>::__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
  {
    typedef typename ::std::iterator_traits<_II1>::iterator_category _Category1;
    typedef typename ::std::iterator_traits<_II2>::iterator_category _Category2;
    typedef ::std::__lc_rai<_Category1, _Category2> __rai_type;
    __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
    for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2); ( ++__first1,  ++__first2))
      {
        if (*__first1 < *__first2)
          {
            return true;
          }
        if (*__first2 < *__first1)
          {
            return false;
          }
      }
    return __first1 == __last1 && __first2 != __last2;
  }
  template <>
  struct  __lexicographical_compare<true>
  {
      template < typename _Tp, typename _Up >
      static inline bool __lc(const _Tp *__first1, const _Tp *__last1, const _Up *__first2, const _Up *__last2)
      {
        const ::std::size_t __len1 = __last1 - __first1;
        const ::std::size_t __len2 = __last2 - __first2;
        const int __result = __builtin_memcmp(__first1, __first2, std::min(__len1, __len2));
        return __result != 0 ? __result < 0 : __len1 < __len2;
      }
  };
  template < typename _II1, typename _II2 >
  inline bool __lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2);
  template < typename _II1, typename _II2 >
  inline bool __lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
  {
    typedef typename ::std::iterator_traits<_II1>::value_type _ValueType1;
    typedef typename ::std::iterator_traits<_II2>::value_type _ValueType2;
    const bool __simple = ((((__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value) && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed) && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed) && __is_pointer<_II1>::__value) && __is_pointer<_II2>::__value;
    return std::__lexicographical_compare<__simple>::__lc(__first1, __last1, __first2, __last2);
  }
  template < typename _ForwardIterator, typename _Tp >
  _ForwardIterator lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__val);
  template < typename _ForwardIterator, typename _Tp >
  _ForwardIterator lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__val)
  {
    typedef typename ::std::iterator_traits<_ForwardIterator>::difference_type _DistanceType;
    ;
    _DistanceType __len = std::distance(__first, __last);
    while (__len > 0)
      {
        _DistanceType __half = __len >> 1;
        _ForwardIterator __middle = __first;
        std::advance(__middle, __half);
        if (*__middle < __val)
          {
            __first = __middle;
             ++__first;
            __len = __len - __half - 1;
          }
        else
          {
            __len = __half;
          }
      }
    return __first;
  }
  inline constexpr int __lg(int __n)
  {
    return sizeof(int) * 8 - 1 - __builtin_clz(__n);
  }
  inline constexpr unsigned int __lg(unsigned int __n)
  {
    return sizeof(int) * 8 - 1 - __builtin_clz(__n);
  }
  inline constexpr long int __lg(long int __n)
  {
    return sizeof(long int) * 8 - 1 - __builtin_clzl(__n);
  }
  inline constexpr unsigned long int __lg(unsigned long int __n)
  {
    return sizeof(long int) * 8 - 1 - __builtin_clzl(__n);
  }
  inline constexpr long long int __lg(long long int __n)
  {
    return sizeof(long long int) * 8 - 1 - __builtin_clzll(__n);
  }
  inline constexpr unsigned long long int __lg(unsigned long long int __n)
  {
    return sizeof(long long int) * 8 - 1 - __builtin_clzll(__n);
  }
  template < typename _II1, typename _II2 >
  inline bool equal(_II1 __first1, _II1 __last1, _II2 __first2);
  template < typename _II1, typename _II2 >
  inline bool equal(_II1 __first1, _II1 __last1, _II2 __first2)
  {
    ;
    return std::__equal_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2));
  }
  template < typename _IIter1, typename _IIter2, typename _BinaryPredicate >
  inline bool equal(_IIter1 __first1, _IIter1 __last1, _IIter2 __first2, _BinaryPredicate __binary_pred);
  template < typename _IIter1, typename _IIter2, typename _BinaryPredicate >
  inline bool equal(_IIter1 __first1, _IIter1 __last1, _IIter2 __first2, _BinaryPredicate __binary_pred)
  {
    ;
    for (; __first1 != __last1; ( ++__first1,  ++__first2))
      {
        if (!bool(__binary_pred(*__first1, *__first2)))
          {
            return false;
          }
      }
    return true;
  }
  template < typename _II1, typename _II2 >
  inline bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2);
  template < typename _II1, typename _II2 >
  inline bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
  {
    ;
    ;
    return std::__lexicographical_compare_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2));
  }
  template < typename _II1, typename _II2, typename _Compare >
  bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _Compare __comp);
  template < typename _II1, typename _II2, typename _Compare >
  bool lexicographical_compare(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2, _Compare __comp)
  {
    typedef typename ::std::iterator_traits<_II1>::iterator_category _Category1;
    typedef typename ::std::iterator_traits<_II2>::iterator_category _Category2;
    typedef ::std::__lc_rai<_Category1, _Category2> __rai_type;
    ;
    ;
    __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
    for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2); ( ++__first1,  ++__first2))
      {
        if (__comp(*__first1, *__first2))
          {
            return true;
          }
        if (__comp(*__first2, *__first1))
          {
            return false;
          }
      }
    return __first1 == __last1 && __first2 != __last2;
  }
  template < typename _InputIterator1, typename _InputIterator2 >
  ::std::pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2);
  template < typename _InputIterator1, typename _InputIterator2 >
  ::std::pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2)
  {
    ;
    while (__first1 != __last1 && *__first1 == *__first2)
      {
         ++__first1;
         ++__first2;
      }
    return ::std::pair<_InputIterator1, _InputIterator2>(__first1, __first2);
  }
  template < typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate >
  ::std::pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _BinaryPredicate __binary_pred);
  template < typename _InputIterator1, typename _InputIterator2, typename _BinaryPredicate >
  ::std::pair<_InputIterator1, _InputIterator2> mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 __first2, _BinaryPredicate __binary_pred)
  {
    ;
    while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
      {
         ++__first1;
         ++__first2;
      }
    return ::std::pair<_InputIterator1, _InputIterator2>(__first1, __first2);
  }
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  template < typename _CharT >
  struct  _Char_types
  {
      typedef unsigned long int int_type;
      typedef ::std::streampos pos_type;
      typedef ::std::streamoff off_type;
      typedef ::mbstate_t state_type;
  };
  template < typename _CharT >
  struct  char_traits
  {
      typedef _CharT char_type;
      typedef typename ::__gnu_cxx::_Char_types<_CharT>::int_type int_type;
      typedef typename ::__gnu_cxx::_Char_types<_CharT>::pos_type pos_type;
      typedef typename ::__gnu_cxx::_Char_types<_CharT>::off_type off_type;
      typedef typename ::__gnu_cxx::_Char_types<_CharT>::state_type state_type;
      static inline void assign(typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c2)
      {
        __c1 = __c2;
      }
      static inline constexpr bool eq(const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c2)
      {
        return __c1 == __c2;
      }
      static inline constexpr bool lt(const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c2)
      {
        return __c1 < __c2;
      }
      static int compare(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n);
      static ::std::size_t length(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__p);
      static const typename ::__gnu_cxx::char_traits<_CharT>::char_type *find(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s, ::std::size_t __n, const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__a);
      static typename ::__gnu_cxx::char_traits<_CharT>::char_type *move(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n);
      static typename ::__gnu_cxx::char_traits<_CharT>::char_type *copy(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n);
      static typename ::__gnu_cxx::char_traits<_CharT>::char_type *assign(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s, ::std::size_t __n, typename ::__gnu_cxx::char_traits<_CharT>::char_type __a);
      static inline constexpr typename ::__gnu_cxx::char_traits<_CharT>::char_type to_char_type(const typename ::__gnu_cxx::char_traits<_CharT>::int_type &__c)
      {
        return static_cast<typename ::__gnu_cxx::char_traits<_CharT>::char_type>(__c);
      }
      static inline constexpr typename ::__gnu_cxx::char_traits<_CharT>::int_type to_int_type(const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__c)
      {
        return static_cast<typename ::__gnu_cxx::char_traits<_CharT>::int_type>(__c);
      }
      static inline constexpr bool eq_int_type(const typename ::__gnu_cxx::char_traits<_CharT>::int_type &__c1, const typename ::__gnu_cxx::char_traits<_CharT>::int_type &__c2)
      {
        return __c1 == __c2;
      }
      static inline constexpr typename ::__gnu_cxx::char_traits<_CharT>::int_type eof()
      {
        return static_cast<typename ::__gnu_cxx::char_traits<_CharT>::int_type>( -1);
      }
      static inline constexpr typename ::__gnu_cxx::char_traits<_CharT>::int_type not_eof(const typename ::__gnu_cxx::char_traits<_CharT>::int_type &__c)
      {
        return !eq_int_type(__c, eof()) ? __c : to_int_type(((typename ::__gnu_cxx::char_traits<_CharT>::char_type())));
      }
  };
  template < typename _CharT >
  int char_traits<_CharT>::compare(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n)
  {
    for (::std::size_t __i(0); __i < __n;  ++__i)
      {
        if (lt(__s1[__i], __s2[__i]))
          {
            return  -1;
          }
        else
          {
            if (lt(__s2[__i], __s1[__i]))
              {
                return 1;
              }
          }
      }
    return 0;
  }
  template < typename _CharT >
  ::std::size_t char_traits<_CharT>::length(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__p)
  {
    ::std::size_t __i(0);
    while (!eq(__p[__i], ((typename ::__gnu_cxx::char_traits<_CharT>::char_type()))))
      {
         ++__i;
      }
    return __i;
  }
  template < typename _CharT >
  const typename ::__gnu_cxx::char_traits<_CharT>::char_type *char_traits<_CharT>::find(const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s, ::std::size_t __n, const typename ::__gnu_cxx::char_traits<_CharT>::char_type &__a)
  {
    for (::std::size_t __i(0); __i < __n;  ++__i)
      {
        if (eq(__s[__i], __a))
          {
            return __s + __i;
          }
      }
    return 0;
  }
  template < typename _CharT >
  typename ::__gnu_cxx::char_traits<_CharT>::char_type *char_traits<_CharT>::move(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n)
  {
    return static_cast<_CharT *>(__builtin_memmove(__s1, __s2, __n * sizeof(typename ::__gnu_cxx::char_traits<_CharT>::char_type)));
  }
  template < typename _CharT >
  typename ::__gnu_cxx::char_traits<_CharT>::char_type *char_traits<_CharT>::copy(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s1, const typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s2, ::std::size_t __n)
  {
    std::copy(__s2, __s2 + __n, __s1);
    return __s1;
  }
  template < typename _CharT >
  typename ::__gnu_cxx::char_traits<_CharT>::char_type *char_traits<_CharT>::assign(typename ::__gnu_cxx::char_traits<_CharT>::char_type *__s, ::std::size_t __n, typename ::__gnu_cxx::char_traits<_CharT>::char_type __a)
  {
    std::fill_n(__s, __n, __a);
    return __s;
  }
}
namespace std __attribute__((__visibility__("default"))) {
  template < typename _CharT >
  struct  char_traits : ::__gnu_cxx::char_traits<_CharT>
  {
  };
  template <>
  struct  char_traits<char>
  {
      typedef char char_type;
      typedef int int_type;
      typedef ::std::streampos pos_type;
      typedef ::std::streamoff off_type;
      typedef ::mbstate_t state_type;
      static inline void assign(::std::char_traits<char>::char_type &__c1, const ::std::char_traits<char>::char_type &__c2) noexcept(true)
      {
        __c1 = __c2;
      }
      static inline constexpr bool eq(const ::std::char_traits<char>::char_type &__c1, const ::std::char_traits<char>::char_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr bool lt(const ::std::char_traits<char>::char_type &__c1, const ::std::char_traits<char>::char_type &__c2) noexcept(true)
      {
        return __c1 < __c2;
      }
      static inline int compare(const ::std::char_traits<char>::char_type *__s1, const ::std::char_traits<char>::char_type *__s2, ::std::size_t __n)
      {
        return __builtin_memcmp(__s1, __s2, __n);
      }
      static inline ::std::size_t length(const ::std::char_traits<char>::char_type *__s)
      {
        return __builtin_strlen(__s);
      }
      static inline const ::std::char_traits<char>::char_type *find(const ::std::char_traits<char>::char_type *__s, ::std::size_t __n, const ::std::char_traits<char>::char_type &__a)
      {
        return static_cast<const ::std::char_traits<char>::char_type *>(__builtin_memchr(__s, __a, __n));
      }
      static inline ::std::char_traits<char>::char_type *move(::std::char_traits<char>::char_type *__s1, const ::std::char_traits<char>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char>::char_type *>(__builtin_memmove(__s1, __s2, __n));
      }
      static inline ::std::char_traits<char>::char_type *copy(::std::char_traits<char>::char_type *__s1, const ::std::char_traits<char>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char>::char_type *>(__builtin_memcpy(__s1, __s2, __n));
      }
      static inline ::std::char_traits<char>::char_type *assign(::std::char_traits<char>::char_type *__s, ::std::size_t __n, ::std::char_traits<char>::char_type __a)
      {
        return static_cast< ::std::char_traits<char>::char_type *>(__builtin_memset(__s, __a, __n));
      }
      static inline constexpr ::std::char_traits<char>::char_type to_char_type(const ::std::char_traits<char>::int_type &__c) noexcept(true)
      {
        return static_cast< ::std::char_traits<char>::char_type>(__c);
      }
      static inline constexpr ::std::char_traits<char>::int_type to_int_type(const ::std::char_traits<char>::char_type &__c) noexcept(true)
      {
        return static_cast< ::std::char_traits<char>::int_type>(static_cast<unsigned char>(__c));
      }
      static inline constexpr bool eq_int_type(const ::std::char_traits<char>::int_type &__c1, const ::std::char_traits<char>::int_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr ::std::char_traits<char>::int_type eof() noexcept(true)
      {
        return static_cast< ::std::char_traits<char>::int_type>( -1);
      }
      static inline constexpr ::std::char_traits<char>::int_type not_eof(const ::std::char_traits<char>::int_type &__c) noexcept(true)
      {
        return __c == ::std::char_traits<char>::eof() ? 0 : __c;
      }
  };
  template <>
  struct  char_traits<wchar_t>
  {
      typedef wchar_t char_type;
      typedef ::wint_t int_type;
      typedef ::std::streamoff off_type;
      typedef ::std::wstreampos pos_type;
      typedef ::mbstate_t state_type;
      static inline void assign(::std::char_traits<wchar_t>::char_type &__c1, const ::std::char_traits<wchar_t>::char_type &__c2) noexcept(true)
      {
        __c1 = __c2;
      }
      static inline constexpr bool eq(const ::std::char_traits<wchar_t>::char_type &__c1, const ::std::char_traits<wchar_t>::char_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr bool lt(const ::std::char_traits<wchar_t>::char_type &__c1, const ::std::char_traits<wchar_t>::char_type &__c2) noexcept(true)
      {
        return __c1 < __c2;
      }
      static inline int compare(const ::std::char_traits<wchar_t>::char_type *__s1, const ::std::char_traits<wchar_t>::char_type *__s2, ::std::size_t __n)
      {
        return ::std::wmemcmp(__s1, __s2, __n);
      }
      static inline ::std::size_t length(const ::std::char_traits<wchar_t>::char_type *__s)
      {
        return ::std::wcslen(__s);
      }
      static inline const ::std::char_traits<wchar_t>::char_type *find(const ::std::char_traits<wchar_t>::char_type *__s, ::std::size_t __n, const ::std::char_traits<wchar_t>::char_type &__a)
      {
        return ::std::wmemchr(__s, __a, __n);
      }
      static inline ::std::char_traits<wchar_t>::char_type *move(::std::char_traits<wchar_t>::char_type *__s1, const ::std::char_traits<wchar_t>::char_type *__s2, ::std::size_t __n)
      {
        return ::std::wmemmove(__s1, __s2, __n);
      }
      static inline ::std::char_traits<wchar_t>::char_type *copy(::std::char_traits<wchar_t>::char_type *__s1, const ::std::char_traits<wchar_t>::char_type *__s2, ::std::size_t __n)
      {
        return ::std::wmemcpy(__s1, __s2, __n);
      }
      static inline ::std::char_traits<wchar_t>::char_type *assign(::std::char_traits<wchar_t>::char_type *__s, ::std::size_t __n, ::std::char_traits<wchar_t>::char_type __a)
      {
        return ::std::wmemset(__s, __a, __n);
      }
      static inline constexpr ::std::char_traits<wchar_t>::char_type to_char_type(const ::std::char_traits<wchar_t>::int_type &__c) noexcept(true)
      {
        return (::std::char_traits<wchar_t>::char_type)__c;
      }
      static inline constexpr ::std::char_traits<wchar_t>::int_type to_int_type(const ::std::char_traits<wchar_t>::char_type &__c) noexcept(true)
      {
        return (::std::char_traits<wchar_t>::int_type)__c;
      }
      static inline constexpr bool eq_int_type(const ::std::char_traits<wchar_t>::int_type &__c1, const ::std::char_traits<wchar_t>::int_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr ::std::char_traits<wchar_t>::int_type eof() noexcept(true)
      {
        return static_cast< ::std::char_traits<wchar_t>::int_type>(4294967295U);
      }
      static inline constexpr ::std::char_traits<wchar_t>::int_type not_eof(const ::std::char_traits<wchar_t>::int_type &__c) noexcept(true)
      {
        return ::std::char_traits<wchar_t>::eq_int_type(__c, ::std::char_traits<wchar_t>::eof()) ? 0 : __c;
      }
  };
  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;
  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;
  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;
  using ::intmax_t;
  using ::intptr_t;
  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;
  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;
  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;
  using ::uintmax_t;
  using ::uintptr_t;
  template <>
  struct  char_traits<char16_t>
  {
      typedef char16_t char_type;
      typedef ::uint_least16_t int_type;
      typedef ::std::streamoff off_type;
      typedef ::std::u16streampos pos_type;
      typedef ::mbstate_t state_type;
      static inline void assign(::std::char_traits<char16_t>::char_type &__c1, const ::std::char_traits<char16_t>::char_type &__c2) noexcept(true)
      {
        __c1 = __c2;
      }
      static inline constexpr bool eq(const ::std::char_traits<char16_t>::char_type &__c1, const ::std::char_traits<char16_t>::char_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr bool lt(const ::std::char_traits<char16_t>::char_type &__c1, const ::std::char_traits<char16_t>::char_type &__c2) noexcept(true)
      {
        return __c1 < __c2;
      }
      static inline int compare(const ::std::char_traits<char16_t>::char_type *__s1, const ::std::char_traits<char16_t>::char_type *__s2, ::std::size_t __n)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            if (::std::char_traits<char16_t>::lt(__s1[__i], __s2[__i]))
              {
                return  -1;
              }
            else
              {
                if (::std::char_traits<char16_t>::lt(__s2[__i], __s1[__i]))
                  {
                    return 1;
                  }
              }
          }
        return 0;
      }
      static inline ::std::size_t length(const ::std::char_traits<char16_t>::char_type *__s)
      {
        ::std::size_t __i(0);
        while (!::std::char_traits<char16_t>::eq(__s[__i], ::std::char_traits<char16_t>::char_type()))
          {
             ++__i;
          }
        return __i;
      }
      static inline const ::std::char_traits<char16_t>::char_type *find(const ::std::char_traits<char16_t>::char_type *__s, ::std::size_t __n, const ::std::char_traits<char16_t>::char_type &__a)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            if (::std::char_traits<char16_t>::eq(__s[__i], __a))
              {
                return __s + __i;
              }
          }
        return 0;
      }
      static inline ::std::char_traits<char16_t>::char_type *move(::std::char_traits<char16_t>::char_type *__s1, const ::std::char_traits<char16_t>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char16_t>::char_type *>(__builtin_memmove(__s1, __s2, __n * sizeof(::std::char_traits<char16_t>::char_type)));
      }
      static inline ::std::char_traits<char16_t>::char_type *copy(::std::char_traits<char16_t>::char_type *__s1, const ::std::char_traits<char16_t>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char16_t>::char_type *>(__builtin_memcpy(__s1, __s2, __n * sizeof(::std::char_traits<char16_t>::char_type)));
      }
      static inline ::std::char_traits<char16_t>::char_type *assign(::std::char_traits<char16_t>::char_type *__s, ::std::size_t __n, ::std::char_traits<char16_t>::char_type __a)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            ::std::char_traits<char16_t>::assign(__s[__i], __a);
          }
        return __s;
      }
      static inline constexpr ::std::char_traits<char16_t>::char_type to_char_type(const ::std::char_traits<char16_t>::int_type &__c) noexcept(true)
      {
        return (::std::char_traits<char16_t>::char_type)__c;
      }
      static inline constexpr ::std::char_traits<char16_t>::int_type to_int_type(const ::std::char_traits<char16_t>::char_type &__c) noexcept(true)
      {
        return (::std::char_traits<char16_t>::int_type)__c;
      }
      static inline constexpr bool eq_int_type(const ::std::char_traits<char16_t>::int_type &__c1, const ::std::char_traits<char16_t>::int_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr ::std::char_traits<char16_t>::int_type eof() noexcept(true)
      {
        return static_cast< ::std::char_traits<char16_t>::int_type>( -1);
      }
      static inline constexpr ::std::char_traits<char16_t>::int_type not_eof(const ::std::char_traits<char16_t>::int_type &__c) noexcept(true)
      {
        return ::std::char_traits<char16_t>::eq_int_type(__c, ::std::char_traits<char16_t>::eof()) ? 0 : __c;
      }
  };
  template <>
  struct  char_traits<char32_t>
  {
      typedef char32_t char_type;
      typedef ::uint_least32_t int_type;
      typedef ::std::streamoff off_type;
      typedef ::std::u32streampos pos_type;
      typedef ::mbstate_t state_type;
      static inline void assign(::std::char_traits<char32_t>::char_type &__c1, const ::std::char_traits<char32_t>::char_type &__c2) noexcept(true)
      {
        __c1 = __c2;
      }
      static inline constexpr bool eq(const ::std::char_traits<char32_t>::char_type &__c1, const ::std::char_traits<char32_t>::char_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr bool lt(const ::std::char_traits<char32_t>::char_type &__c1, const ::std::char_traits<char32_t>::char_type &__c2) noexcept(true)
      {
        return __c1 < __c2;
      }
      static inline int compare(const ::std::char_traits<char32_t>::char_type *__s1, const ::std::char_traits<char32_t>::char_type *__s2, ::std::size_t __n)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            if (::std::char_traits<char32_t>::lt(__s1[__i], __s2[__i]))
              {
                return  -1;
              }
            else
              {
                if (::std::char_traits<char32_t>::lt(__s2[__i], __s1[__i]))
                  {
                    return 1;
                  }
              }
          }
        return 0;
      }
      static inline ::std::size_t length(const ::std::char_traits<char32_t>::char_type *__s)
      {
        ::std::size_t __i(0);
        while (!::std::char_traits<char32_t>::eq(__s[__i], ::std::char_traits<char32_t>::char_type()))
          {
             ++__i;
          }
        return __i;
      }
      static inline const ::std::char_traits<char32_t>::char_type *find(const ::std::char_traits<char32_t>::char_type *__s, ::std::size_t __n, const ::std::char_traits<char32_t>::char_type &__a)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            if (::std::char_traits<char32_t>::eq(__s[__i], __a))
              {
                return __s + __i;
              }
          }
        return 0;
      }
      static inline ::std::char_traits<char32_t>::char_type *move(::std::char_traits<char32_t>::char_type *__s1, const ::std::char_traits<char32_t>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char32_t>::char_type *>(__builtin_memmove(__s1, __s2, __n * sizeof(::std::char_traits<char32_t>::char_type)));
      }
      static inline ::std::char_traits<char32_t>::char_type *copy(::std::char_traits<char32_t>::char_type *__s1, const ::std::char_traits<char32_t>::char_type *__s2, ::std::size_t __n)
      {
        return static_cast< ::std::char_traits<char32_t>::char_type *>(__builtin_memcpy(__s1, __s2, __n * sizeof(::std::char_traits<char32_t>::char_type)));
      }
      static inline ::std::char_traits<char32_t>::char_type *assign(::std::char_traits<char32_t>::char_type *__s, ::std::size_t __n, ::std::char_traits<char32_t>::char_type __a)
      {
        for (::std::size_t __i(0); __i < __n;  ++__i)
          {
            ::std::char_traits<char32_t>::assign(__s[__i], __a);
          }
        return __s;
      }
      static inline constexpr ::std::char_traits<char32_t>::char_type to_char_type(const ::std::char_traits<char32_t>::int_type &__c) noexcept(true)
      {
        return (::std::char_traits<char32_t>::char_type)__c;
      }
      static inline constexpr ::std::char_traits<char32_t>::int_type to_int_type(const ::std::char_traits<char32_t>::char_type &__c) noexcept(true)
      {
        return (::std::char_traits<char32_t>::int_type)__c;
      }
      static inline constexpr bool eq_int_type(const ::std::char_traits<char32_t>::int_type &__c1, const ::std::char_traits<char32_t>::int_type &__c2) noexcept(true)
      {
        return __c1 == __c2;
      }
      static inline constexpr ::std::char_traits<char32_t>::int_type eof() noexcept(true)
      {
        return static_cast< ::std::char_traits<char32_t>::int_type>( -1);
      }
      static inline constexpr ::std::char_traits<char32_t>::int_type not_eof(const ::std::char_traits<char32_t>::int_type &__c) noexcept(true)
      {
        return ::std::char_traits<char32_t>::eq_int_type(__c, ::std::char_traits<char32_t>::eof()) ? 0 : __c;
      }
  };
}
struct  lconv
{
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
    char int_p_cs_precedes;
    char int_p_sep_by_space;
    char int_n_cs_precedes;
    char int_n_sep_by_space;
    char int_p_sign_posn;
    char int_n_sign_posn;
};
extern "C"
{
  extern char *setlocale(int __category, const char *__locale) throw();
}
extern "C"
{
  extern ::lconv *localeconv() throw();
}
extern "C"
{
  extern ::__locale_t newlocale(int __category_mask, const char *__locale, ::__locale_t __base) throw();
}
extern "C"
{
  extern ::__locale_t duplocale(::__locale_t __dataset) throw();
}
extern "C"
{
  extern void freelocale(::__locale_t __dataset) throw();
}
extern "C"
{
  extern ::__locale_t uselocale(::__locale_t __dataset) throw();
}
namespace std __attribute__((__visibility__("default"))) {
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
extern "C"
  {
    ::__locale_t __uselocale(::__locale_t) throw();
  }
}
namespace std __attribute__((__visibility__("default"))) {
  typedef ::__locale_t __c_locale;
  inline int __convert_from_v(const ::std::__c_locale &__cloc __attribute__((__unused__)), char *__out, const int __size __attribute__((__unused__)), const char *__fmt, ...)
  {
    ::std::__c_locale __old(__gnu_cxx::__uselocale(__cloc));
    ::__builtin_va_list __args;
    __builtin_va_start(__args, __fmt);
    const int __ret(__builtin_vsnprintf(__out, __size, __fmt, __args));
    __builtin_va_end(__args);
    __gnu_cxx::__uselocale(__old);
    return __ret;
  }
}
enum mcc_enum_anon_39
{
  _ISupper = 0 < 8 ? 1 << 0 << 8 : 1 << 0 >> 8,
  _ISlower = 1 < 8 ? 1 << 1 << 8 : 1 << 1 >> 8,
  _ISalpha = 2 < 8 ? 1 << 2 << 8 : 1 << 2 >> 8,
  _ISdigit = 3 < 8 ? 1 << 3 << 8 : 1 << 3 >> 8,
  _ISxdigit = 4 < 8 ? 1 << 4 << 8 : 1 << 4 >> 8,
  _ISspace = 5 < 8 ? 1 << 5 << 8 : 1 << 5 >> 8,
  _ISprint = 6 < 8 ? 1 << 6 << 8 : 1 << 6 >> 8,
  _ISgraph = 7 < 8 ? 1 << 7 << 8 : 1 << 7 >> 8,
  _ISblank = 8 < 8 ? 1 << 8 << 8 : 1 << 8 >> 8,
  _IScntrl = 9 < 8 ? 1 << 9 << 8 : 1 << 9 >> 8,
  _ISpunct = 10 < 8 ? 1 << 10 << 8 : 1 << 10 >> 8,
  _ISalnum = 11 < 8 ? 1 << 11 << 8 : 1 << 11 >> 8
};
extern "C"
{
  extern const unsigned short int **__ctype_b_loc() throw() __attribute__((__const__));
}
extern "C"
{
  extern const ::__int32_t **__ctype_tolower_loc() throw() __attribute__((__const__));
}
extern "C"
{
  extern const ::__int32_t **__ctype_toupper_loc() throw() __attribute__((__const__));
}
extern "C"
{
  extern int isalnum(int) throw();
}
extern "C"
{
  extern int isalpha(int) throw();
}
extern "C"
{
  extern int iscntrl(int) throw();
}
extern "C"
{
  extern int isdigit(int) throw();
}
extern "C"
{
  extern int islower(int) throw();
}
extern "C"
{
  extern int isgraph(int) throw();
}
extern "C"
{
  extern int isprint(int) throw();
}
extern "C"
{
  extern int ispunct(int) throw();
}
extern "C"
{
  extern int isspace(int) throw();
}
extern "C"
{
  extern int isupper(int) throw();
}
extern "C"
{
  extern int isxdigit(int) throw();
}
extern "C"
{
  extern int tolower(int __c) throw();
}
extern "C"
{
  extern int toupper(int __c) throw();
}
extern "C"
{
  extern int isblank(int) throw();
}
extern "C"
{
  extern int isctype(int __c, int __mask) throw();
}
extern "C"
{
  extern int isascii(int __c) throw();
}
extern "C"
{
  extern int toascii(int __c) throw();
}
extern "C"
{
  extern int _toupper(int) throw();
}
extern "C"
{
  extern int _tolower(int) throw();
}
extern "C"
{
  extern int isalnum_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isalpha_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int iscntrl_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isdigit_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int islower_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isgraph_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isprint_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int ispunct_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isspace_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isupper_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isxdigit_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int isblank_l(int, ::__locale_t) throw();
}
extern "C"
{
  extern int __tolower_l(int __c, ::__locale_t __l) throw();
}
extern "C"
{
  extern int tolower_l(int __c, ::__locale_t __l) throw();
}
extern "C"
{
  extern int __toupper_l(int __c, ::__locale_t __l) throw();
}
extern "C"
{
  extern int toupper_l(int __c, ::__locale_t __l) throw();
}
namespace std __attribute__((__visibility__("default"))) {
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
  using ::isblank;
  class locale;
  template < typename _Facet >
  bool has_facet(const ::std::locale &__loc) throw();
  template < typename _Facet >
  const _Facet &use_facet(const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isspace(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isprint(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool iscntrl(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isupper(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool islower(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isalpha(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isdigit(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool ispunct(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isxdigit(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isalnum(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline bool isgraph(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline _CharT toupper(_CharT __c, const ::std::locale &__loc);
  template < typename _CharT >
  inline _CharT tolower(_CharT __c, const ::std::locale &__loc);
  struct ctype_base;
  template < typename _CharT >
  class ctype;
  template <>
  class ctype<char>;
  template <>
  class ctype<wchar_t>;
  template < typename _CharT >
  class ctype_byname;
  class codecvt_base;
  template < typename _InternT, typename _ExternT, typename _StateT >
  class codecvt;
  template <>
  class codecvt<char, char, ::__mbstate_t>;
  template <>
  class codecvt<wchar_t, char, ::__mbstate_t>;
  template < typename _InternT, typename _ExternT, typename _StateT >
  class codecvt_byname;
  template < typename _CharT, typename _InIter = ::std::istreambuf_iterator<_CharT> >
  class num_get;
  template < typename _CharT, typename _OutIter = ::std::ostreambuf_iterator<_CharT> >
  class num_put;
  template < typename _CharT >
  class numpunct;
  template < typename _CharT >
  class numpunct_byname;
  template < typename _CharT >
  class collate;
  template < typename _CharT >
  class collate_byname;
  class time_base;
  template < typename _CharT, typename _InIter = ::std::istreambuf_iterator<_CharT> >
  class time_get;
  template < typename _CharT, typename _InIter = ::std::istreambuf_iterator<_CharT> >
  class time_get_byname;
  template < typename _CharT, typename _OutIter = ::std::ostreambuf_iterator<_CharT> >
  class time_put;
  template < typename _CharT, typename _OutIter = ::std::ostreambuf_iterator<_CharT> >
  class time_put_byname;
  class money_base;
  template < typename _CharT, typename _InIter = ::std::istreambuf_iterator<_CharT> >
  class money_get;
  template < typename _CharT, typename _OutIter = ::std::ostreambuf_iterator<_CharT> >
  class money_put;
  template < typename _CharT, bool _Intl = false >
  class moneypunct;
  template < typename _CharT, bool _Intl = false >
  class moneypunct_byname;
  class messages_base;
  template < typename _CharT >
  class messages;
  template < typename _CharT >
  class messages_byname;
}
#pragma GCC visibility push(default)
struct  sched_param
{
    int __sched_priority;
};
extern "C"
{
  extern int clone(int (*__fn)(void *), void *__child_stack, int __flags, void *__arg, ...) throw();
}
extern "C"
{
  extern int unshare(int __flags) throw();
}
extern "C"
{
  extern int sched_getcpu() throw();
}
extern "C"
{
  extern int setns(int __fd, int __nstype) throw();
}
struct  __sched_param
{
    int __sched_priority;
};
typedef unsigned long int __cpu_mask;
struct  cpu_set_t
{
    ::__cpu_mask __bits[16L];
};
extern "C"
{
  extern int __sched_cpucount(::size_t __setsize, const ::cpu_set_t *__setp) throw();
}
extern "C"
{
  extern ::cpu_set_t *__sched_cpualloc(::size_t __count) throw();
}
extern "C"
{
  extern void __sched_cpufree(::cpu_set_t *__set) throw();
}
extern "C"
{
  extern int sched_setparam(::__pid_t __pid, const ::sched_param *__param) throw();
}
extern "C"
{
  extern int sched_getparam(::__pid_t __pid, ::sched_param *__param) throw();
}
extern "C"
{
  extern int sched_setscheduler(::__pid_t __pid, int __policy, const ::sched_param *__param) throw();
}
extern "C"
{
  extern int sched_getscheduler(::__pid_t __pid) throw();
}
extern "C"
{
  extern int sched_yield() throw();
}
extern "C"
{
  extern int sched_get_priority_max(int __algorithm) throw();
}
extern "C"
{
  extern int sched_get_priority_min(int __algorithm) throw();
}
extern "C"
{
  extern int sched_rr_get_interval(::__pid_t __pid, ::timespec *__t) throw();
}
extern "C"
{
  extern int sched_setaffinity(::__pid_t __pid, ::size_t __cpusetsize, const ::cpu_set_t *__cpuset) throw();
}
extern "C"
{
  extern int sched_getaffinity(::__pid_t __pid, ::size_t __cpusetsize, ::cpu_set_t *__cpuset) throw();
}
struct  timex
{
    unsigned int modes;
    ::__syscall_slong_t offset;
    ::__syscall_slong_t freq;
    ::__syscall_slong_t maxerror;
    ::__syscall_slong_t esterror;
    int status;
    ::__syscall_slong_t constant;
    ::__syscall_slong_t precision;
    ::__syscall_slong_t tolerance;
    ::timeval time;
    ::__syscall_slong_t tick;
    ::__syscall_slong_t ppsfreq;
    ::__syscall_slong_t jitter;
    int shift;
    ::__syscall_slong_t stabil;
    ::__syscall_slong_t jitcnt;
    ::__syscall_slong_t calcnt;
    ::__syscall_slong_t errcnt;
    ::__syscall_slong_t stbcnt;
    int tai;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
    int:32;
};
extern "C"
{
  extern int clock_adjtime(::__clockid_t __clock_id, ::timex *__utx) throw();
}
struct  tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
    long int tm_gmtoff;
    const char *tm_zone;
};
struct  itimerspec
{
    ::timespec it_interval;
    ::timespec it_value;
};
struct sigevent;
extern "C"
{
  extern ::clock_t clock() throw();
}
extern "C"
{
  extern ::time_t time(::time_t *__timer) throw();
}
extern "C"
{
  extern double difftime(::time_t __time1, ::time_t __time0) throw() __attribute__((__const__));
}
extern "C"
{
  extern ::time_t mktime(::tm *__tp) throw();
}
extern "C"
{
  extern ::size_t strftime(char *__restrict __s, ::size_t __maxsize, const char *__restrict __format, const ::tm *__restrict __tp) throw();
}
extern "C"
{
  extern char *strptime(const char *__restrict __s, const char *__restrict __fmt, ::tm *__tp) throw();
}
extern "C"
{
  extern ::size_t strftime_l(char *__restrict __s, ::size_t __maxsize, const char *__restrict __format, const ::tm *__restrict __tp, ::__locale_t __loc) throw();
}
extern "C"
{
  extern char *strptime_l(const char *__restrict __s, const char *__restrict __fmt, ::tm *__tp, ::__locale_t __loc) throw();
}
extern "C"
{
  extern ::tm *gmtime(const ::time_t *__timer) throw();
}
extern "C"
{
  extern ::tm *localtime(const ::time_t *__timer) throw();
}
extern "C"
{
  extern ::tm *gmtime_r(const ::time_t *__restrict __timer, ::tm *__restrict __tp) throw();
}
extern "C"
{
  extern ::tm *localtime_r(const ::time_t *__restrict __timer, ::tm *__restrict __tp) throw();
}
extern "C"
{
  extern char *asctime(const ::tm *__tp) throw();
}
extern "C"
{
  extern char *ctime(const ::time_t *__timer) throw();
}
extern "C"
{
  extern char *asctime_r(const ::tm *__restrict __tp, char *__restrict __buf) throw();
}
extern "C"
{
  extern char *ctime_r(const ::time_t *__restrict __timer, char *__restrict __buf) throw();
}
extern "C"
{
  extern char *__tzname[2L];
}
extern "C"
{
  extern int __daylight;
}
extern "C"
{
  extern long int __timezone;
}
extern "C"
{
  extern char *tzname[2L];
}
extern "C"
{
  extern void tzset() throw();
}
extern "C"
{
  extern int daylight;
}
extern "C"
{
  extern long int timezone;
}
extern "C"
{
  extern int stime(const ::time_t *__when) throw();
}
extern "C"
{
  extern ::time_t timegm(::tm *__tp) throw();
}
extern "C"
{
  extern ::time_t timelocal(::tm *__tp) throw();
}
extern "C"
{
  extern int dysize(int __year) throw() __attribute__((__const__));
}
extern "C"
{
  extern int nanosleep(const ::timespec *__requested_time, ::timespec *__remaining);
}
extern "C"
{
  extern int clock_getres(::clockid_t __clock_id, ::timespec *__res) throw();
}
extern "C"
{
  extern int clock_gettime(::clockid_t __clock_id, ::timespec *__tp) throw();
}
extern "C"
{
  extern int clock_settime(::clockid_t __clock_id, const ::timespec *__tp) throw();
}
extern "C"
{
  extern int clock_nanosleep(::clockid_t __clock_id, int __flags, const ::timespec *__req, ::timespec *__rem);
}
extern "C"
{
  extern int clock_getcpuclockid(::pid_t __pid, ::clockid_t *__clock_id) throw();
}
extern "C"
{
  extern int timer_create(::clockid_t __clock_id, ::sigevent *__restrict __evp, ::timer_t *__restrict __timerid) throw();
}
extern "C"
{
  extern int timer_delete(::timer_t __timerid) throw();
}
extern "C"
{
  extern int timer_settime(::timer_t __timerid, int __flags, const ::itimerspec *__restrict __value, ::itimerspec *__restrict __ovalue) throw();
}
extern "C"
{
  extern int timer_gettime(::timer_t __timerid, ::itimerspec *__value) throw();
}
extern "C"
{
  extern int timer_getoverrun(::timer_t __timerid) throw();
}
extern "C"
{
  extern int timespec_get(::timespec *__ts, int __base) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int getdate_err;
}
extern "C"
{
  extern ::tm *getdate(const char *__string);
}
extern "C"
{
  extern int getdate_r(const char *__restrict __string, ::tm *__restrict __resbufp);
}
typedef long int __jmp_buf[8L];
enum mcc_enum_anon_40
{
  PTHREAD_CREATE_JOINABLE = 0,
  PTHREAD_CREATE_DETACHED = 1
};
enum mcc_enum_anon_41
{
  PTHREAD_MUTEX_TIMED_NP = 0,
  PTHREAD_MUTEX_RECURSIVE_NP = 1,
  PTHREAD_MUTEX_ERRORCHECK_NP = 2,
  PTHREAD_MUTEX_ADAPTIVE_NP = 3,
  PTHREAD_MUTEX_NORMAL = ::PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = ::PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = ::PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = ::PTHREAD_MUTEX_NORMAL,
  PTHREAD_MUTEX_FAST_NP = ::PTHREAD_MUTEX_TIMED_NP
};
enum mcc_enum_anon_42
{
  PTHREAD_MUTEX_STALLED = 0,
  PTHREAD_MUTEX_STALLED_NP = ::PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST = 1,
  PTHREAD_MUTEX_ROBUST_NP = ::PTHREAD_MUTEX_ROBUST
};
enum mcc_enum_anon_43
{
  PTHREAD_PRIO_NONE = 0,
  PTHREAD_PRIO_INHERIT = 1,
  PTHREAD_PRIO_PROTECT = 2
};
enum mcc_enum_anon_44
{
  PTHREAD_RWLOCK_PREFER_READER_NP = 0,
  PTHREAD_RWLOCK_PREFER_WRITER_NP = 1,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP = 2,
  PTHREAD_RWLOCK_DEFAULT_NP = ::PTHREAD_RWLOCK_PREFER_READER_NP
};
enum mcc_enum_anon_45
{
  PTHREAD_INHERIT_SCHED = 0,
  PTHREAD_EXPLICIT_SCHED = 1
};
enum mcc_enum_anon_46
{
  PTHREAD_SCOPE_SYSTEM = 0,
  PTHREAD_SCOPE_PROCESS = 1
};
enum mcc_enum_anon_47
{
  PTHREAD_PROCESS_PRIVATE = 0,
  PTHREAD_PROCESS_SHARED = 1
};
struct _pthread_cleanup_buffer;
struct  _pthread_cleanup_buffer
{
    void (*__routine)(void *);
    void *__arg;
    int __canceltype;
    ::_pthread_cleanup_buffer *__prev;
};
enum mcc_enum_anon_48
{
  PTHREAD_CANCEL_ENABLE = 0,
  PTHREAD_CANCEL_DISABLE = 1
};
enum mcc_enum_anon_49
{
  PTHREAD_CANCEL_DEFERRED = 0,
  PTHREAD_CANCEL_ASYNCHRONOUS = 1
};
extern "C"
{
  extern int pthread_create(::pthread_t *__restrict __newthread, const ::pthread_attr_t *__restrict __attr, void *(*__start_routine)(void *), void *__restrict __arg) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern void pthread_exit(void *__retval) __attribute__((__noreturn__));
}
extern "C"
{
  extern int pthread_join(::pthread_t __th, void **__thread_return);
}
extern "C"
{
  extern int pthread_tryjoin_np(::pthread_t __th, void **__thread_return) throw();
}
extern "C"
{
  extern int pthread_timedjoin_np(::pthread_t __th, void **__thread_return, const ::timespec *__abstime);
}
extern "C"
{
  extern int pthread_detach(::pthread_t __th) throw();
}
extern "C"
{
  extern ::pthread_t pthread_self() throw() __attribute__((__const__));
}
extern "C"
{
  extern int pthread_equal(::pthread_t __thread1, ::pthread_t __thread2) throw() __attribute__((__const__));
}
extern "C"
{
  extern int pthread_attr_init(::pthread_attr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_destroy(::pthread_attr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getdetachstate(const ::pthread_attr_t *__attr, int *__detachstate) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setdetachstate(::pthread_attr_t *__attr, int __detachstate) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getguardsize(const ::pthread_attr_t *__attr, ::size_t *__guardsize) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setguardsize(::pthread_attr_t *__attr, ::size_t __guardsize) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getschedparam(const ::pthread_attr_t *__restrict __attr, ::sched_param *__restrict __param) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setschedparam(::pthread_attr_t *__restrict __attr, const ::sched_param *__restrict __param) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_getschedpolicy(const ::pthread_attr_t *__restrict __attr, int *__restrict __policy) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setschedpolicy(::pthread_attr_t *__attr, int __policy) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getinheritsched(const ::pthread_attr_t *__restrict __attr, int *__restrict __inherit) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setinheritsched(::pthread_attr_t *__attr, int __inherit) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getscope(const ::pthread_attr_t *__restrict __attr, int *__restrict __scope) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setscope(::pthread_attr_t *__attr, int __scope) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getstackaddr(const ::pthread_attr_t *__restrict __attr, void **__restrict __stackaddr) throw() __attribute__((__nonnull__(1, 2))) __attribute__((__deprecated__));
}
extern "C"
{
  extern int pthread_attr_setstackaddr(::pthread_attr_t *__attr, void *__stackaddr) throw() __attribute__((__nonnull__(1))) __attribute__((__deprecated__));
}
extern "C"
{
  extern int pthread_attr_getstacksize(const ::pthread_attr_t *__restrict __attr, ::size_t *__restrict __stacksize) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_attr_setstacksize(::pthread_attr_t *__attr, ::size_t __stacksize) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_getstack(const ::pthread_attr_t *__restrict __attr, void **__restrict __stackaddr, ::size_t *__restrict __stacksize) throw() __attribute__((__nonnull__(1, 2, 3)));
}
extern "C"
{
  extern int pthread_attr_setstack(::pthread_attr_t *__attr, void *__stackaddr, ::size_t __stacksize) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_attr_setaffinity_np(::pthread_attr_t *__attr, ::size_t __cpusetsize, const ::cpu_set_t *__cpuset) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern int pthread_attr_getaffinity_np(const ::pthread_attr_t *__attr, ::size_t __cpusetsize, ::cpu_set_t *__cpuset) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern int pthread_getattr_default_np(::pthread_attr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_setattr_default_np(const ::pthread_attr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_getattr_np(::pthread_t __th, ::pthread_attr_t *__attr) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int pthread_setschedparam(::pthread_t __target_thread, int __policy, const ::sched_param *__param) throw() __attribute__((__nonnull__(3)));
}
extern "C"
{
  extern int pthread_getschedparam(::pthread_t __target_thread, int *__restrict __policy, ::sched_param *__restrict __param) throw() __attribute__((__nonnull__(2, 3)));
}
extern "C"
{
  extern int pthread_setschedprio(::pthread_t __target_thread, int __prio) throw();
}
extern "C"
{
  extern int pthread_getname_np(::pthread_t __target_thread, char *__buf, ::size_t __buflen) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int pthread_setname_np(::pthread_t __target_thread, const char *__name) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int pthread_getconcurrency() throw();
}
extern "C"
{
  extern int pthread_setconcurrency(int __level) throw();
}
extern "C"
{
  extern int pthread_yield() throw();
}
extern "C"
{
  extern int pthread_setaffinity_np(::pthread_t __th, ::size_t __cpusetsize, const ::cpu_set_t *__cpuset) throw() __attribute__((__nonnull__(3)));
}
extern "C"
{
  extern int pthread_getaffinity_np(::pthread_t __th, ::size_t __cpusetsize, ::cpu_set_t *__cpuset) throw() __attribute__((__nonnull__(3)));
}
extern "C"
{
  extern int pthread_once(::pthread_once_t *__once_control, void (*__init_routine)()) __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_setcancelstate(int __state, int *__oldstate);
}
extern "C"
{
  extern int pthread_setcanceltype(int __type, int *__oldtype);
}
extern "C"
{
  extern int pthread_cancel(::pthread_t __th);
}
extern "C"
{
  extern void pthread_testcancel();
}
struct __attribute__((__aligned__))  __pthread_unwind_buf_t
{
    struct  mcc_struct_anon_25
    {
        ::__jmp_buf __cancel_jmp_buf;
        int __mask_was_saved;
    };
    ::__pthread_unwind_buf_t::mcc_struct_anon_25 __cancel_jmp_buf[1L];
    void *__pad[4L];
};
struct  __pthread_cleanup_frame
{
    void (*__cancel_routine)(void *);
    void *__cancel_arg;
    int __do_it;
    int __cancel_type;
};
class  __pthread_cleanup_class
{
    void (*__cancel_routine)(void *);
    void *__cancel_arg;
    int __do_it;
    int __cancel_type;
  public:
    inline __pthread_cleanup_class(void (*__fct)(void *), void *__arg)
      : __cancel_routine(__fct), __cancel_arg(__arg), __do_it(1)
    {
    }
    inline ~__pthread_cleanup_class()
    {
      if ((*this).__do_it)
        {
          (*this).__cancel_routine((*this).__cancel_arg);
        }
    }
    inline void __setdoit(int __newval)
    {
      (*this).__do_it = __newval;
    }
    inline void __defer()
    {
      ::pthread_setcanceltype(::PTHREAD_CANCEL_DEFERRED, &(*this).__cancel_type);
    }
    inline void __restore() const 
    {
      ::pthread_setcanceltype((*this).__cancel_type, 0);
    }
};
struct __jmp_buf_tag;
extern "C"
{
  extern int __sigsetjmp(::__jmp_buf_tag *__env, int __savemask) throw();
}
extern "C"
{
  extern int pthread_mutex_init(::pthread_mutex_t *__mutex, const ::pthread_mutexattr_t *__mutexattr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_destroy(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_trylock(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_lock(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_timedlock(::pthread_mutex_t *__restrict __mutex, const ::timespec *__restrict __abstime) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutex_unlock(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_getprioceiling(const ::pthread_mutex_t *__restrict __mutex, int *__restrict __prioceiling) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutex_setprioceiling(::pthread_mutex_t *__restrict __mutex, int __prioceiling, int *__restrict __old_ceiling) throw() __attribute__((__nonnull__(1, 3)));
}
extern "C"
{
  extern int pthread_mutex_consistent(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutex_consistent_np(::pthread_mutex_t *__mutex) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_init(::pthread_mutexattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_destroy(::pthread_mutexattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_getpshared(const ::pthread_mutexattr_t *__restrict __attr, int *__restrict __pshared) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_setpshared(::pthread_mutexattr_t *__attr, int __pshared) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_gettype(const ::pthread_mutexattr_t *__restrict __attr, int *__restrict __kind) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_settype(::pthread_mutexattr_t *__attr, int __kind) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_getprotocol(const ::pthread_mutexattr_t *__restrict __attr, int *__restrict __protocol) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_setprotocol(::pthread_mutexattr_t *__attr, int __protocol) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_getprioceiling(const ::pthread_mutexattr_t *__restrict __attr, int *__restrict __prioceiling) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_setprioceiling(::pthread_mutexattr_t *__attr, int __prioceiling) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_getrobust(const ::pthread_mutexattr_t *__attr, int *__robustness) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_getrobust_np(const ::pthread_mutexattr_t *__attr, int *__robustness) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_mutexattr_setrobust(::pthread_mutexattr_t *__attr, int __robustness) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_mutexattr_setrobust_np(::pthread_mutexattr_t *__attr, int __robustness) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_init(::pthread_rwlock_t *__restrict __rwlock, const ::pthread_rwlockattr_t *__restrict __attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_destroy(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_rdlock(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_tryrdlock(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_timedrdlock(::pthread_rwlock_t *__restrict __rwlock, const ::timespec *__restrict __abstime) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_rwlock_wrlock(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_trywrlock(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlock_timedwrlock(::pthread_rwlock_t *__restrict __rwlock, const ::timespec *__restrict __abstime) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_rwlock_unlock(::pthread_rwlock_t *__rwlock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlockattr_init(::pthread_rwlockattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlockattr_destroy(::pthread_rwlockattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlockattr_getpshared(const ::pthread_rwlockattr_t *__restrict __attr, int *__restrict __pshared) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_rwlockattr_setpshared(::pthread_rwlockattr_t *__attr, int __pshared) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_rwlockattr_getkind_np(const ::pthread_rwlockattr_t *__restrict __attr, int *__restrict __pref) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_rwlockattr_setkind_np(::pthread_rwlockattr_t *__attr, int __pref) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_cond_init(::pthread_cond_t *__restrict __cond, const ::pthread_condattr_t *__restrict __cond_attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_cond_destroy(::pthread_cond_t *__cond) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_cond_signal(::pthread_cond_t *__cond) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_cond_broadcast(::pthread_cond_t *__cond) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_cond_wait(::pthread_cond_t *__restrict __cond, ::pthread_mutex_t *__restrict __mutex) __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_cond_timedwait(::pthread_cond_t *__restrict __cond, ::pthread_mutex_t *__restrict __mutex, const ::timespec *__restrict __abstime) __attribute__((__nonnull__(1, 2, 3)));
}
extern "C"
{
  extern int pthread_condattr_init(::pthread_condattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_condattr_destroy(::pthread_condattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_condattr_getpshared(const ::pthread_condattr_t *__restrict __attr, int *__restrict __pshared) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_condattr_setpshared(::pthread_condattr_t *__attr, int __pshared) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_condattr_getclock(const ::pthread_condattr_t *__restrict __attr, ::__clockid_t *__restrict __clock_id) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_condattr_setclock(::pthread_condattr_t *__attr, ::__clockid_t __clock_id) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_spin_init(::pthread_spinlock_t *__lock, int __pshared) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_spin_destroy(::pthread_spinlock_t *__lock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_spin_lock(::pthread_spinlock_t *__lock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_spin_trylock(::pthread_spinlock_t *__lock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_spin_unlock(::pthread_spinlock_t *__lock) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrier_init(::pthread_barrier_t *__restrict __barrier, const ::pthread_barrierattr_t *__restrict __attr, unsigned int __count) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrier_destroy(::pthread_barrier_t *__barrier) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrier_wait(::pthread_barrier_t *__barrier) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrierattr_init(::pthread_barrierattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrierattr_destroy(::pthread_barrierattr_t *__attr) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_barrierattr_getpshared(const ::pthread_barrierattr_t *__restrict __attr, int *__restrict __pshared) throw() __attribute__((__nonnull__(1, 2)));
}
extern "C"
{
  extern int pthread_barrierattr_setpshared(::pthread_barrierattr_t *__attr, int __pshared) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_key_create(::pthread_key_t *__key, void (*__destr_function)(void *)) throw() __attribute__((__nonnull__(1)));
}
extern "C"
{
  extern int pthread_key_delete(::pthread_key_t __key) throw();
}
extern "C"
{
  extern void *pthread_getspecific(::pthread_key_t __key) throw();
}
extern "C"
{
  extern int pthread_setspecific(::pthread_key_t __key, const void *__pointer) throw();
}
extern "C"
{
  extern int pthread_getcpuclockid(::pthread_t __thread_id, ::__clockid_t *__clock_id) throw() __attribute__((__nonnull__(2)));
}
extern "C"
{
  extern int pthread_atfork(void (*__prepare)(), void (*__parent)(), void (*__child)()) throw();
}
typedef ::pthread_t __gthread_t;
typedef ::pthread_key_t __gthread_key_t;
typedef ::pthread_once_t __gthread_once_t;
typedef ::pthread_mutex_t __gthread_mutex_t;
typedef ::pthread_mutex_t __gthread_recursive_mutex_t;
typedef ::pthread_cond_t __gthread_cond_t;
typedef ::timespec __gthread_time_t;
static int __gthrw_pthread_once(::pthread_once_t *, void (*)()) throw() __attribute__((__weakref__("pthread_once")));
static void *__gthrw_pthread_getspecific(::pthread_key_t) throw() __attribute__((__weakref__("pthread_getspecific")));
static int __gthrw_pthread_setspecific(::pthread_key_t, const void *) throw() __attribute__((__weakref__("pthread_setspecific")));
static int __gthrw_pthread_create(::pthread_t *__restrict , const ::pthread_attr_t *__restrict , void *(*)(void *), void *__restrict ) throw() __attribute__((__weakref__("pthread_create")));
static int __gthrw_pthread_join(::pthread_t, void **) throw() __attribute__((__weakref__("pthread_join")));
static int __gthrw_pthread_equal(::pthread_t, ::pthread_t) throw() __attribute__((__weakref__("pthread_equal")));
static ::pthread_t __gthrw_pthread_self() throw() __attribute__((__weakref__("pthread_self")));
static int __gthrw_pthread_detach(::pthread_t) throw() __attribute__((__weakref__("pthread_detach")));
static int __gthrw_pthread_cancel(::pthread_t) throw() __attribute__((__weakref__("pthread_cancel")));
static int __gthrw_sched_yield() throw() __attribute__((__weakref__("sched_yield")));
static int __gthrw_pthread_mutex_lock(::pthread_mutex_t *) throw() __attribute__((__weakref__("pthread_mutex_lock")));
static int __gthrw_pthread_mutex_trylock(::pthread_mutex_t *) throw() __attribute__((__weakref__("pthread_mutex_trylock")));
static int __gthrw_pthread_mutex_timedlock(::pthread_mutex_t *__restrict , const ::timespec *__restrict ) throw() __attribute__((__weakref__("pthread_mutex_timedlock")));
static int __gthrw_pthread_mutex_unlock(::pthread_mutex_t *) throw() __attribute__((__weakref__("pthread_mutex_unlock")));
static int __gthrw_pthread_mutex_init(::pthread_mutex_t *, const ::pthread_mutexattr_t *) throw() __attribute__((__weakref__("pthread_mutex_init")));
static int __gthrw_pthread_mutex_destroy(::pthread_mutex_t *) throw() __attribute__((__weakref__("pthread_mutex_destroy")));
static int __gthrw_pthread_cond_init(::pthread_cond_t *__restrict , const ::pthread_condattr_t *__restrict ) throw() __attribute__((__weakref__("pthread_cond_init")));
static int __gthrw_pthread_cond_broadcast(::pthread_cond_t *) throw() __attribute__((__weakref__("pthread_cond_broadcast")));
static int __gthrw_pthread_cond_signal(::pthread_cond_t *) throw() __attribute__((__weakref__("pthread_cond_signal")));
static int __gthrw_pthread_cond_wait(::pthread_cond_t *__restrict , ::pthread_mutex_t *__restrict ) throw() __attribute__((__weakref__("pthread_cond_wait")));
static int __gthrw_pthread_cond_timedwait(::pthread_cond_t *__restrict , ::pthread_mutex_t *__restrict , const ::timespec *__restrict ) throw() __attribute__((__weakref__("pthread_cond_timedwait")));
static int __gthrw_pthread_cond_destroy(::pthread_cond_t *) throw() __attribute__((__weakref__("pthread_cond_destroy")));
static int __gthrw_pthread_key_create(::pthread_key_t *, void (*)(void *)) throw() __attribute__((__weakref__("pthread_key_create")));
static int __gthrw_pthread_key_delete(::pthread_key_t) throw() __attribute__((__weakref__("pthread_key_delete")));
static int __gthrw_pthread_mutexattr_init(::pthread_mutexattr_t *) throw() __attribute__((__weakref__("pthread_mutexattr_init")));
static int __gthrw_pthread_mutexattr_settype(::pthread_mutexattr_t *, int) throw() __attribute__((__weakref__("pthread_mutexattr_settype")));
static int __gthrw_pthread_mutexattr_destroy(::pthread_mutexattr_t *) throw() __attribute__((__weakref__("pthread_mutexattr_destroy")));
static int __gthrw___pthread_key_create(::pthread_key_t *, void (*)(void *)) throw() __attribute__((__weakref__("__pthread_key_create")));
static inline int __gthread_active_p()
{
  static void *const __gthread_active_ptr((void *)::__gthrw___pthread_key_create);
  return __gthread_active_ptr != 0;
}
static inline int __gthread_create(::__gthread_t *__threadid, void *(*__func)(void *), void *__args)
{
  return ::__gthrw_pthread_create(__threadid, 0L, __func, __args);
}
static inline int __gthread_join(::__gthread_t __threadid, void **__value_ptr)
{
  return ::__gthrw_pthread_join(__threadid, __value_ptr);
}
static inline int __gthread_detach(::__gthread_t __threadid)
{
  return ::__gthrw_pthread_detach(__threadid);
}
static inline int __gthread_equal(::__gthread_t __t1, ::__gthread_t __t2)
{
  return ::__gthrw_pthread_equal(__t1, __t2);
}
static inline ::__gthread_t __gthread_self()
{
  return ::__gthrw_pthread_self();
}
static inline int __gthread_yield()
{
  return ::__gthrw_sched_yield();
}
static inline int __gthread_once(::__gthread_once_t *__once, void (*__func)())
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_once(__once, __func);
    }
  else
    {
      return  -1;
    }
}
static inline int __gthread_key_create(::__gthread_key_t *__key, void (*__dtor)(void *))
{
  return ::__gthrw_pthread_key_create(__key, __dtor);
}
static inline int __gthread_key_delete(::__gthread_key_t __key)
{
  return ::__gthrw_pthread_key_delete(__key);
}
static inline void *__gthread_getspecific(::__gthread_key_t __key)
{
  return ::__gthrw_pthread_getspecific(__key);
}
static inline int __gthread_setspecific(::__gthread_key_t __key, const void *__ptr)
{
  return ::__gthrw_pthread_setspecific(__key, __ptr);
}
static inline void __gthread_mutex_init_function(::__gthread_mutex_t *__mutex)
{
  if (::__gthread_active_p())
    {
      ::__gthrw_pthread_mutex_init(__mutex, 0L);
    }
}
static inline int __gthread_mutex_destroy(::__gthread_mutex_t *__mutex)
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_mutex_destroy(__mutex);
    }
  else
    {
      return 0;
    }
}
static inline int __gthread_mutex_lock(::__gthread_mutex_t *__mutex)
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_mutex_lock(__mutex);
    }
  else
    {
      return 0;
    }
}
static inline int __gthread_mutex_trylock(::__gthread_mutex_t *__mutex)
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_mutex_trylock(__mutex);
    }
  else
    {
      return 0;
    }
}
static inline int __gthread_mutex_timedlock(::__gthread_mutex_t *__mutex, const ::__gthread_time_t *__abs_timeout)
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_mutex_timedlock(__mutex, __abs_timeout);
    }
  else
    {
      return 0;
    }
}
static inline int __gthread_mutex_unlock(::__gthread_mutex_t *__mutex)
{
  if (::__gthread_active_p())
    {
      return ::__gthrw_pthread_mutex_unlock(__mutex);
    }
  else
    {
      return 0;
    }
}
static inline int __gthread_recursive_mutex_lock(::__gthread_recursive_mutex_t *__mutex)
{
  return ::__gthread_mutex_lock(__mutex);
}
static inline int __gthread_recursive_mutex_trylock(::__gthread_recursive_mutex_t *__mutex)
{
  return ::__gthread_mutex_trylock(__mutex);
}
static inline int __gthread_recursive_mutex_timedlock(::__gthread_recursive_mutex_t *__mutex, const ::__gthread_time_t *__abs_timeout)
{
  return ::__gthread_mutex_timedlock(__mutex, __abs_timeout);
}
static inline int __gthread_recursive_mutex_unlock(::__gthread_recursive_mutex_t *__mutex)
{
  return ::__gthread_mutex_unlock(__mutex);
}
static inline int __gthread_recursive_mutex_destroy(::__gthread_recursive_mutex_t *__mutex)
{
  return ::__gthread_mutex_destroy(__mutex);
}
static inline int __gthread_cond_broadcast(::__gthread_cond_t *__cond)
{
  return ::__gthrw_pthread_cond_broadcast(__cond);
}
static inline int __gthread_cond_signal(::__gthread_cond_t *__cond)
{
  return ::__gthrw_pthread_cond_signal(__cond);
}
static inline int __gthread_cond_wait(::__gthread_cond_t *__cond, ::__gthread_mutex_t *__mutex)
{
  return ::__gthrw_pthread_cond_wait(__cond, __mutex);
}
static inline int __gthread_cond_timedwait(::__gthread_cond_t *__cond, ::__gthread_mutex_t *__mutex, const ::__gthread_time_t *__abs_timeout)
{
  return ::__gthrw_pthread_cond_timedwait(__cond, __mutex, __abs_timeout);
}
static inline int __gthread_cond_wait_recursive(::__gthread_cond_t *__cond, ::__gthread_recursive_mutex_t *__mutex)
{
  return ::__gthread_cond_wait(__cond, __mutex);
}
static inline int __gthread_cond_destroy(::__gthread_cond_t *__cond)
{
  return ::__gthrw_pthread_cond_destroy(__cond);
}
#pragma GCC visibility pop
typedef int _Atomic_word;
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  static inline ::_Atomic_word __exchange_and_add(volatile ::_Atomic_word *__mem, int __val)
  {
    return __atomic_fetch_add(__mem, __val, 4);
  }
  static inline void __atomic_add(volatile ::_Atomic_word *__mem, int __val)
  {
    __atomic_fetch_add(__mem, __val, 4);
  }
  static inline ::_Atomic_word __exchange_and_add_single(::_Atomic_word *__mem, int __val)
  {
    ::_Atomic_word __result(*__mem);
    *__mem += __val;
    return __result;
  }
  static inline void __atomic_add_single(::_Atomic_word *__mem, int __val)
  {
    *__mem += __val;
  }
  static inline __attribute__((__unused__)) ::_Atomic_word __exchange_and_add_dispatch(::_Atomic_word *__mem, int __val)
  {
    if (::__gthread_active_p())
      {
        return ::__gnu_cxx::__exchange_and_add(__mem, __val);
      }
    else
      {
        return ::__gnu_cxx::__exchange_and_add_single(__mem, __val);
      }
  }
  static inline __attribute__((__unused__)) void __atomic_add_dispatch(::_Atomic_word *__mem, int __val)
  {
    if (::__gthread_active_p())
      {
        ::__gnu_cxx::__atomic_add(__mem, __val);
      }
    else
      {
        ::__gnu_cxx::__atomic_add_single(__mem, __val);
      }
  }
  using ::std::size_t;
  using ::std::ptrdiff_t;
  template < typename _Tp >
  class  new_allocator
  {
    public:
      typedef ::std::size_t size_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef _Tp *pointer;
      typedef const _Tp *const_pointer;
      typedef _Tp &reference;
      typedef const _Tp &const_reference;
      typedef _Tp value_type;
      template < typename _Tp1 >
      struct  rebind
      {
          typedef ::__gnu_cxx::new_allocator<_Tp1> other;
      };
      typedef ::std::true_type propagate_on_container_move_assignment;
      inline new_allocator() noexcept(true)
      {
      }
      inline new_allocator(const ::__gnu_cxx::new_allocator<_Tp> &) noexcept(true)
      {
      }
      template < typename _Tp1 >
      inline new_allocator(const ::__gnu_cxx::new_allocator<_Tp1> &) noexcept(true)
      {
      }
      inline ~new_allocator() noexcept(true)
      {
      }
      inline typename ::__gnu_cxx::new_allocator<_Tp>::pointer address(typename ::__gnu_cxx::new_allocator<_Tp>::reference __x) const  noexcept(true)
      {
        return std::__addressof(__x);
      }
      inline typename ::__gnu_cxx::new_allocator<_Tp>::const_pointer address(typename ::__gnu_cxx::new_allocator<_Tp>::const_reference __x) const  noexcept(true)
      {
        return std::__addressof(__x);
      }
      inline typename ::__gnu_cxx::new_allocator<_Tp>::pointer allocate(typename ::__gnu_cxx::new_allocator<_Tp>::size_type __n, const void *  = (0))
      {
        if (__n > this->max_size())
          {
            std::__throw_bad_alloc();
          }
        return static_cast<_Tp *>(::operator new(__n * sizeof(_Tp)));
      }
      inline void deallocate(typename ::__gnu_cxx::new_allocator<_Tp>::pointer __p, typename ::__gnu_cxx::new_allocator<_Tp>::size_type)
      {
        ::operator delete(__p);
      }
      inline typename ::__gnu_cxx::new_allocator<_Tp>::size_type max_size() const  noexcept(true)
      {
        return (::std::size_t) -1 / sizeof(_Tp);
      }
      template < typename _Up, typename ..._Args >
      inline void construct(_Up *__p, _Args &&...__args)
      {
        ::new ((void *)__p)_Up(std::forward<_Args>(__args) ...);
      }
      template < typename _Up >
      inline void destroy(_Up *__p)
      {
        __p->~_Up();
      }
  };
  template < typename _Tp >
  inline bool operator ==(const ::__gnu_cxx::new_allocator<_Tp> &, const ::__gnu_cxx::new_allocator<_Tp> &);
  template < typename _Tp >
  inline bool operator ==(const ::__gnu_cxx::new_allocator<_Tp> &, const ::__gnu_cxx::new_allocator<_Tp> &)
  {
    return true;
  }
  template < typename _Tp >
  inline bool operator !=(const ::__gnu_cxx::new_allocator<_Tp> &, const ::__gnu_cxx::new_allocator<_Tp> &);
  template < typename _Tp >
  inline bool operator !=(const ::__gnu_cxx::new_allocator<_Tp> &, const ::__gnu_cxx::new_allocator<_Tp> &)
  {
    return false;
  }
}
namespace std __attribute__((__visibility__("default"))) {
  template < typename _Tp >
  using __allocator_base = ::__gnu_cxx::new_allocator<_Tp>;
  template <>
  class  allocator<void>
  {
    public:
      typedef ::std::size_t size_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef void *pointer;
      typedef const void *const_pointer;
      typedef void value_type;
      template < typename _Tp1 >
      struct  rebind
      {
          typedef ::std::allocator<_Tp1> other;
      };
      typedef ::std::true_type propagate_on_container_move_assignment;
  };
  template < typename _Tp >
  class  allocator : public ::std::__allocator_base<_Tp>
  {
    public:
      typedef ::std::size_t size_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef _Tp *pointer;
      typedef const _Tp *const_pointer;
      typedef _Tp &reference;
      typedef const _Tp &const_reference;
      typedef _Tp value_type;
      template < typename _Tp1 >
      struct  rebind
      {
          typedef ::std::allocator<_Tp1> other;
      };
      typedef ::std::true_type propagate_on_container_move_assignment;
      inline allocator() throw()
      {
      }
      inline allocator(const ::std::allocator<_Tp> &__a) throw()
        : __allocator_base<_Tp>(__a)
      {
      }
      template < typename _Tp1 >
      inline allocator(const ::std::allocator<_Tp1> &) throw()
      {
      }
      inline ~allocator() throw()
      {
      }
  };
  template < typename _T1, typename _T2 >
  inline bool operator ==(const ::std::allocator<_T1> &, const ::std::allocator<_T2> &);
  template < typename _T1, typename _T2 >
  inline bool operator ==(const ::std::allocator<_T1> &, const ::std::allocator<_T2> &)
  {
    return true;
  }
  template < typename _Tp >
  inline bool operator ==(const ::std::allocator<_Tp> &, const ::std::allocator<_Tp> &);
  template < typename _Tp >
  inline bool operator ==(const ::std::allocator<_Tp> &, const ::std::allocator<_Tp> &)
  {
    return true;
  }
  template < typename _T1, typename _T2 >
  inline bool operator !=(const ::std::allocator<_T1> &, const ::std::allocator<_T2> &);
  template < typename _T1, typename _T2 >
  inline bool operator !=(const ::std::allocator<_T1> &, const ::std::allocator<_T2> &)
  {
    return false;
  }
  template < typename _Tp >
  inline bool operator !=(const ::std::allocator<_Tp> &, const ::std::allocator<_Tp> &);
  template < typename _Tp >
  inline bool operator !=(const ::std::allocator<_Tp> &, const ::std::allocator<_Tp> &)
  {
    return false;
  }
  extern template class ::std::allocator<char>;
  extern template class ::std::allocator<wchar_t>;
  template < typename _Alloc, bool __nontype_tpl_param_1_1__ = __is_empty(_Alloc) >
  struct  __alloc_swap
  {
      static inline void _S_do_it(_Alloc &, _Alloc &)
      {
      }
  };
  template < typename _Alloc >
  struct  __alloc_swap<_Alloc, false>
  {
      static inline void _S_do_it(_Alloc &__one, _Alloc &__two)
      {
        if (__one != __two)
          {
            swap(__one, __two);
          }
      }
  };
  template < typename _Alloc, bool __nontype_tpl_param_1_1__ = __is_empty(_Alloc) >
  struct  __alloc_neq
  {
      static inline bool _S_do_it(const _Alloc &, const _Alloc &)
      {
        return false;
      }
  };
  template < typename _Alloc >
  struct  __alloc_neq<_Alloc, false>
  {
      static inline bool _S_do_it(const _Alloc &__one, const _Alloc &__two)
      {
        return __one != __two;
      }
  };
  template < typename _Tp, bool __nontype_tpl_param_1_1__ = __or_< ::std::is_copy_constructible<typename _Tp::value_type>, ::std::is_nothrow_move_constructible<typename _Tp::value_type> >::value >
  struct  __shrink_to_fit_aux
  {
      static inline bool _S_do_it(_Tp &)
      {
        return false;
      }
  };
  template < typename _Tp >
  struct  __shrink_to_fit_aux<_Tp, true>
  {
      static inline bool _S_do_it(_Tp &__c)
      {
        try
        {
          _Tp(__make_move_if_noexcept_iterator(__c.begin()), __make_move_if_noexcept_iterator(__c.end()), __c.get_allocator()).swap(__c);
          return true;
        }
        catch (...)
        {
          return false;
        }
      }
  };
}
#pragma GCC visibility push(default)
namespace __cxxabiv1 {
  class  __forced_unwind
  {
      virtual ~__forced_unwind() throw();
      virtual void __pure_dummy() = 0 ;
    public:
  };
}
#pragma GCC visibility pop
namespace std __attribute__((__visibility__("default"))) {
  template < typename _CharT, typename _Traits >
  inline void __ostream_write(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s, ::std::streamsize __n);
  template < typename _CharT, typename _Traits >
  inline void __ostream_write(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s, ::std::streamsize __n)
  {
    typedef ::std::basic_ostream<_CharT, _Traits> __ostream_type;
    typedef typename ::std::basic_ostream<_CharT, _Traits>::ios_base __ios_base;
    const ::std::streamsize __put = __out.rdbuf()->sputn(__s, __n);
    if (__put != __n)
      {
        __out.setstate(__ios_base::badbit);
      }
  }
  template < typename _CharT, typename _Traits >
  inline void __ostream_fill(::std::basic_ostream<_CharT, _Traits> &__out, ::std::streamsize __n);
  template < typename _CharT, typename _Traits >
  inline void __ostream_fill(::std::basic_ostream<_CharT, _Traits> &__out, ::std::streamsize __n)
  {
    typedef ::std::basic_ostream<_CharT, _Traits> __ostream_type;
    typedef typename ::std::basic_ostream<_CharT, _Traits>::ios_base __ios_base;
    const _CharT __c = __out.fill();
    for (; __n > 0;  --__n)
      {
        const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
        if (_Traits::eq_int_type(__put, _Traits::eof()))
          {
            __out.setstate(__ios_base::badbit);
            break;
          }
      }
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_ostream<_CharT, _Traits> &__ostream_insert(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s, ::std::streamsize __n);
  template < typename _CharT, typename _Traits >
  ::std::basic_ostream<_CharT, _Traits> &__ostream_insert(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s, ::std::streamsize __n)
  {
    typedef ::std::basic_ostream<_CharT, _Traits> __ostream_type;
    typedef typename ::std::basic_ostream<_CharT, _Traits>::ios_base __ios_base;
    typename ::std::basic_ostream<_CharT, _Traits>::sentry __cerb(__out);
    if (__cerb)
      {
        try
        {
          const ::std::streamsize __w = __out.width();
          if (__w > __n)
            {
              const bool __left = (__out.flags() & __ios_base::adjustfield) == __ios_base::left;
              if (!__left)
                {
                  __ostream_fill(__out, __w - __n);
                }
              if (__out.good())
                {
                  __ostream_write(__out, __s, __n);
                }
              if (__left && __out.good())
                {
                  __ostream_fill(__out, __w - __n);
                }
            }
          else
            {
              __ostream_write(__out, __s, __n);
            }
          __out.width(0);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __out._M_setstate(__ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __out._M_setstate(__ios_base::badbit);
        }
      }
    return __out;
  }
  extern template ::std::basic_ostream<char> &__ostream_insert(::std::basic_ostream<char> &, const char *, long int);
  extern template ::std::basic_ostream<wchar_t> &__ostream_insert(::std::basic_ostream<wchar_t> &, const wchar_t *, long int);
  template < typename _Arg, typename _Result >
  struct  unary_function
  {
      typedef _Arg argument_type;
      typedef _Result result_type;
  };
  template < typename _Arg1, typename _Arg2, typename _Result >
  struct  binary_function
  {
      typedef _Arg1 first_argument_type;
      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
  };
  template < typename _Tp >
  struct  plus : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x + __y;
      }
  };
  template < typename _Tp >
  struct  minus : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x - __y;
      }
  };
  template < typename _Tp >
  struct  multiplies : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x * __y;
      }
  };
  template < typename _Tp >
  struct  divides : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x / __y;
      }
  };
  template < typename _Tp >
  struct  modulus : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x % __y;
      }
  };
  template < typename _Tp >
  struct  negate : ::std::unary_function<_Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x) const 
      {
        return  -__x;
      }
  };
  template < typename _Tp >
  struct  equal_to : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x == __y;
      }
  };
  template < typename _Tp >
  struct  not_equal_to : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x != __y;
      }
  };
  template < typename _Tp >
  struct  greater : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x > __y;
      }
  };
  template < typename _Tp >
  struct  less : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x < __y;
      }
  };
  template < typename _Tp >
  struct  greater_equal : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x >= __y;
      }
  };
  template < typename _Tp >
  struct  less_equal : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x <= __y;
      }
  };
  template < typename _Tp >
  struct  logical_and : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x && __y;
      }
  };
  template < typename _Tp >
  struct  logical_or : ::std::binary_function<_Tp, _Tp, bool>
  {
      inline bool operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x || __y;
      }
  };
  template < typename _Tp >
  struct  logical_not : ::std::unary_function<_Tp, bool>
  {
      inline bool operator ()(const _Tp &__x) const 
      {
        return !__x;
      }
  };
  template < typename _Tp >
  struct  bit_and : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x & __y;
      }
  };
  template < typename _Tp >
  struct  bit_or : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x | __y;
      }
  };
  template < typename _Tp >
  struct  bit_xor : ::std::binary_function<_Tp, _Tp, _Tp>
  {
      inline _Tp operator ()(const _Tp &__x, const _Tp &__y) const 
      {
        return __x ^ __y;
      }
  };
  template < typename _Predicate >
  class  unary_negate : public ::std::unary_function<typename _Predicate::argument_type, bool>
  {
    protected:
      _Predicate _M_pred;
    public:
      inline explicit unary_negate(const _Predicate &__x)
        : _M_pred(__x)
      {
      }
      inline bool operator ()(const typename _Predicate::argument_type &__x) const 
      {
        return !::std::unary_negate<_Predicate>::_M_pred(__x);
      }
  };
  template < typename _Predicate >
  inline ::std::unary_negate<_Predicate> not1(const _Predicate &__pred);
  template < typename _Predicate >
  inline ::std::unary_negate<_Predicate> not1(const _Predicate &__pred)
  {
    return ::std::unary_negate<_Predicate>(__pred);
  }
  template < typename _Predicate >
  class  binary_negate : public ::std::binary_function<typename _Predicate::first_argument_type, typename _Predicate::second_argument_type, bool>
  {
    protected:
      _Predicate _M_pred;
    public:
      inline explicit binary_negate(const _Predicate &__x)
        : _M_pred(__x)
      {
      }
      inline bool operator ()(const typename _Predicate::first_argument_type &__x, const typename _Predicate::second_argument_type &__y) const 
      {
        return !::std::binary_negate<_Predicate>::_M_pred(__x, __y);
      }
  };
  template < typename _Predicate >
  inline ::std::binary_negate<_Predicate> not2(const _Predicate &__pred);
  template < typename _Predicate >
  inline ::std::binary_negate<_Predicate> not2(const _Predicate &__pred)
  {
    return ::std::binary_negate<_Predicate>(__pred);
  }
  template < typename _Arg, typename _Result >
  class  pointer_to_unary_function : public ::std::unary_function<_Arg, _Result>
  {
    protected:
      _Result (*_M_ptr)(_Arg);
    public:
      inline pointer_to_unary_function()
      {
      }
      inline explicit pointer_to_unary_function(_Result (*__x)(_Arg))
        : _M_ptr(__x)
      {
      }
      inline _Result operator ()(_Arg __x) const 
      {
        return ::std::pointer_to_unary_function<_Arg, _Result>::_M_ptr(__x);
      }
  };
  template < typename _Arg, typename _Result >
  inline ::std::pointer_to_unary_function<_Arg, _Result> ptr_fun(_Result (*__x)(_Arg));
  template < typename _Arg, typename _Result >
  inline ::std::pointer_to_unary_function<_Arg, _Result> ptr_fun(_Result (*__x)(_Arg))
  {
    return ::std::pointer_to_unary_function<_Arg, _Result>(__x);
  }
  template < typename _Arg1, typename _Arg2, typename _Result >
  class  pointer_to_binary_function : public ::std::binary_function<_Arg1, _Arg2, _Result>
  {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);
    public:
      inline pointer_to_binary_function()
      {
      }
      inline explicit pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
        : _M_ptr(__x)
      {
      }
      inline _Result operator ()(_Arg1 __x, _Arg2 __y) const 
      {
        return ::std::pointer_to_binary_function<_Arg1, _Arg2, _Result>::_M_ptr(__x, __y);
      }
  };
  template < typename _Arg1, typename _Arg2, typename _Result >
  inline ::std::pointer_to_binary_function<_Arg1, _Arg2, _Result> ptr_fun(_Result (*__x)(_Arg1, _Arg2));
  template < typename _Arg1, typename _Arg2, typename _Result >
  inline ::std::pointer_to_binary_function<_Arg1, _Arg2, _Result> ptr_fun(_Result (*__x)(_Arg1, _Arg2))
  {
    return ::std::pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x);
  }
  template < typename _Tp >
  struct  _Identity : ::std::unary_function<_Tp, _Tp>
  {
      inline _Tp &operator ()(_Tp &__x) const 
      {
        return __x;
      }
      inline const _Tp &operator ()(const _Tp &__x) const 
      {
        return __x;
      }
  };
  template < typename _Pair >
  struct  _Select1st : ::std::unary_function<_Pair, typename _Pair::first_type>
  {
      inline typename _Pair::first_type &operator ()(_Pair &__x) const 
      {
        return __x.first;
      }
      inline const typename _Pair::first_type &operator ()(const _Pair &__x) const 
      {
        return __x.first;
      }
      template < typename _Pair2 >
      inline typename _Pair2::first_type &operator ()(_Pair2 &__x) const 
      {
        return __x.first;
      }
      template < typename _Pair2 >
      inline const typename _Pair2::first_type &operator ()(const _Pair2 &__x) const 
      {
        return __x.first;
      }
  };
  template < typename _Pair >
  struct  _Select2nd : ::std::unary_function<_Pair, typename _Pair::second_type>
  {
      inline typename _Pair::second_type &operator ()(_Pair &__x) const 
      {
        return __x.second;
      }
      inline const typename _Pair::second_type &operator ()(const _Pair &__x) const 
      {
        return __x.second;
      }
  };
  template < typename _Ret, typename _Tp >
  class  mem_fun_t : public ::std::unary_function<_Tp *, _Ret>
  {
    public:
      inline explicit mem_fun_t(_Ret (_Tp::*__pf)())
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(_Tp *__p) const 
      {
        return (__p->*::std::mem_fun_t<_Ret, _Tp>::_M_f)();
      }
    private:
      _Ret (_Tp::*_M_f)();
  };
  template < typename _Ret, typename _Tp >
  class  const_mem_fun_t : public ::std::unary_function<const _Tp *, _Ret>
  {
    public:
      inline explicit const_mem_fun_t(_Ret (_Tp::*__pf)() const )
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(const _Tp *__p) const 
      {
        return (__p->*::std::const_mem_fun_t<_Ret, _Tp>::_M_f)();
      }
    private:
      _Ret (_Tp::*_M_f)() const ;
  };
  template < typename _Ret, typename _Tp >
  class  mem_fun_ref_t : public ::std::unary_function<_Tp, _Ret>
  {
    public:
      inline explicit mem_fun_ref_t(_Ret (_Tp::*__pf)())
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(_Tp &__r) const 
      {
        return (__r.*::std::mem_fun_ref_t<_Ret, _Tp>::_M_f)();
      }
    private:
      _Ret (_Tp::*_M_f)();
  };
  template < typename _Ret, typename _Tp >
  class  const_mem_fun_ref_t : public ::std::unary_function<_Tp, _Ret>
  {
    public:
      inline explicit const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const )
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(const _Tp &__r) const 
      {
        return (__r.*::std::const_mem_fun_ref_t<_Ret, _Tp>::_M_f)();
      }
    private:
      _Ret (_Tp::*_M_f)() const ;
  };
  template < typename _Ret, typename _Tp, typename _Arg >
  class  mem_fun1_t : public ::std::binary_function<_Tp *, _Arg, _Ret>
  {
    public:
      inline explicit mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(_Tp *__p, _Arg __x) const 
      {
        return (__p->*::std::mem_fun1_t<_Ret, _Tp, _Arg>::_M_f)(__x);
      }
    private:
      _Ret (_Tp::*_M_f)(_Arg);
  };
  template < typename _Ret, typename _Tp, typename _Arg >
  class  const_mem_fun1_t : public ::std::binary_function<const _Tp *, _Arg, _Ret>
  {
    public:
      inline explicit const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const )
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(const _Tp *__p, _Arg __x) const 
      {
        return (__p->*::std::const_mem_fun1_t<_Ret, _Tp, _Arg>::_M_f)(__x);
      }
    private:
      _Ret (_Tp::*_M_f)(_Arg) const ;
  };
  template < typename _Ret, typename _Tp, typename _Arg >
  class  mem_fun1_ref_t : public ::std::binary_function<_Tp, _Arg, _Ret>
  {
    public:
      inline explicit mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(_Tp &__r, _Arg __x) const 
      {
        return (__r.*::std::mem_fun1_ref_t<_Ret, _Tp, _Arg>::_M_f)(__x);
      }
    private:
      _Ret (_Tp::*_M_f)(_Arg);
  };
  template < typename _Ret, typename _Tp, typename _Arg >
  class  const_mem_fun1_ref_t : public ::std::binary_function<_Tp, _Arg, _Ret>
  {
    public:
      inline explicit const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const )
        : _M_f(__pf)
      {
      }
      inline _Ret operator ()(const _Tp &__r, _Arg __x) const 
      {
        return (__r.*::std::const_mem_fun1_ref_t<_Ret, _Tp, _Arg>::_M_f)(__x);
      }
    private:
      _Ret (_Tp::*_M_f)(_Arg) const ;
  };
  template < typename _Ret, typename _Tp >
  inline ::std::mem_fun_t<_Ret, _Tp> mem_fun(_Ret (_Tp::*__f)());
  template < typename _Ret, typename _Tp >
  inline ::std::mem_fun_t<_Ret, _Tp> mem_fun(_Ret (_Tp::*__f)())
  {
    return ::std::mem_fun_t<_Ret, _Tp>(__f);
  }
  template < typename _Ret, typename _Tp >
  inline ::std::const_mem_fun_t<_Ret, _Tp> mem_fun(_Ret (_Tp::*__f)() const );
  template < typename _Ret, typename _Tp >
  inline ::std::const_mem_fun_t<_Ret, _Tp> mem_fun(_Ret (_Tp::*__f)() const )
  {
    return ::std::const_mem_fun_t<_Ret, _Tp>(__f);
  }
  template < typename _Ret, typename _Tp >
  inline ::std::mem_fun_ref_t<_Ret, _Tp> mem_fun_ref(_Ret (_Tp::*__f)());
  template < typename _Ret, typename _Tp >
  inline ::std::mem_fun_ref_t<_Ret, _Tp> mem_fun_ref(_Ret (_Tp::*__f)())
  {
    return ::std::mem_fun_ref_t<_Ret, _Tp>(__f);
  }
  template < typename _Ret, typename _Tp >
  inline ::std::const_mem_fun_ref_t<_Ret, _Tp> mem_fun_ref(_Ret (_Tp::*__f)() const );
  template < typename _Ret, typename _Tp >
  inline ::std::const_mem_fun_ref_t<_Ret, _Tp> mem_fun_ref(_Ret (_Tp::*__f)() const )
  {
    return ::std::const_mem_fun_ref_t<_Ret, _Tp>(__f);
  }
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::mem_fun1_t<_Ret, _Tp, _Arg> mem_fun(_Ret (_Tp::*__f)(_Arg));
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::mem_fun1_t<_Ret, _Tp, _Arg> mem_fun(_Ret (_Tp::*__f)(_Arg))
  {
    return ::std::mem_fun1_t<_Ret, _Tp, _Arg>(__f);
  }
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::const_mem_fun1_t<_Ret, _Tp, _Arg> mem_fun(_Ret (_Tp::*__f)(_Arg) const );
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::const_mem_fun1_t<_Ret, _Tp, _Arg> mem_fun(_Ret (_Tp::*__f)(_Arg) const )
  {
    return ::std::const_mem_fun1_t<_Ret, _Tp, _Arg>(__f);
  }
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::mem_fun1_ref_t<_Ret, _Tp, _Arg> mem_fun_ref(_Ret (_Tp::*__f)(_Arg));
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::mem_fun1_ref_t<_Ret, _Tp, _Arg> mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
  {
    return ::std::mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f);
  }
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::const_mem_fun1_ref_t<_Ret, _Tp, _Arg> mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const );
  template < typename _Ret, typename _Tp, typename _Arg >
  inline ::std::const_mem_fun1_ref_t<_Ret, _Tp, _Arg> mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const )
  {
    return ::std::const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f);
  }
  template < typename _Operation >
  class __attribute__((__deprecated__))  binder1st : public ::std::unary_function<typename _Operation::second_argument_type, typename _Operation::result_type>
  {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;
    public:
      inline binder1st(const _Operation &__x, const typename _Operation::first_argument_type &__y)
        : op(__x), value(__y)
      {
      }
      inline typename _Operation::result_type operator ()(const typename _Operation::second_argument_type &__x) const 
      {
        return ::std::binder1st<_Operation>::op(::std::binder1st<_Operation>::value, __x);
      }
      inline typename _Operation::result_type operator ()(typename _Operation::second_argument_type &__x) const 
      {
        return ::std::binder1st<_Operation>::op(::std::binder1st<_Operation>::value, __x);
      }
  };
  template < typename _Operation, typename _Tp >
  inline ::std::binder1st<_Operation> bind1st(const _Operation &__fn, const _Tp &__x);
  template < typename _Operation, typename _Tp >
  inline ::std::binder1st<_Operation> bind1st(const _Operation &__fn, const _Tp &__x)
  {
    typedef typename _Operation::first_argument_type _Arg1_type;
    return ::std::binder1st<_Operation>(__fn, _Arg1_type(__x));
  }
  template < typename _Operation >
  class __attribute__((__deprecated__))  binder2nd : public ::std::unary_function<typename _Operation::first_argument_type, typename _Operation::result_type>
  {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;
    public:
      inline binder2nd(const _Operation &__x, const typename _Operation::second_argument_type &__y)
        : op(__x), value(__y)
      {
      }
      inline typename _Operation::result_type operator ()(const typename _Operation::first_argument_type &__x) const 
      {
        return ::std::binder2nd<_Operation>::op(__x, ::std::binder2nd<_Operation>::value);
      }
      inline typename _Operation::result_type operator ()(typename _Operation::first_argument_type &__x) const 
      {
        return ::std::binder2nd<_Operation>::op(__x, ::std::binder2nd<_Operation>::value);
      }
  };
  template < typename _Operation, typename _Tp >
  inline ::std::binder2nd<_Operation> bind2nd(const _Operation &__fn, const _Tp &__x);
  template < typename _Operation, typename _Tp >
  inline ::std::binder2nd<_Operation> bind2nd(const _Operation &__fn, const _Tp &__x)
  {
    typedef typename _Operation::second_argument_type _Arg2_type;
    return ::std::binder2nd<_Operation>(__fn, _Arg2_type(__x));
  }
  template < typename _Container >
  inline auto begin(_Container &__cont) -> decltype(__cont.begin());
  template < typename _Container >
  inline auto begin(_Container &__cont) -> decltype(__cont.begin())
  {
    return __cont.begin();
  }
  template < typename _Container >
  inline auto begin(const _Container &__cont) -> decltype(__cont.begin());
  template < typename _Container >
  inline auto begin(const _Container &__cont) -> decltype(__cont.begin())
  {
    return __cont.begin();
  }
  template < typename _Container >
  inline auto end(_Container &__cont) -> decltype(__cont.end());
  template < typename _Container >
  inline auto end(_Container &__cont) -> decltype(__cont.end())
  {
    return __cont.end();
  }
  template < typename _Container >
  inline auto end(const _Container &__cont) -> decltype(__cont.end());
  template < typename _Container >
  inline auto end(const _Container &__cont) -> decltype(__cont.end())
  {
    return __cont.end();
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline _Tp *begin(_Tp (&__arr)[_Nm]);
  template < typename _Tp, ::std::size_t _Nm >
  inline _Tp *begin(_Tp (&__arr)[_Nm])
  {
    return __arr;
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline _Tp *end(_Tp (&__arr)[_Nm]);
  template < typename _Tp, ::std::size_t _Nm >
  inline _Tp *end(_Tp (&__arr)[_Nm])
  {
    return __arr + _Nm;
  }
}
#pragma GCC visibility push(default)
namespace std __attribute__((__visibility__("default"))) {
  template < typename _E >
  class  initializer_list
  {
    public:
      typedef _E value_type;
      typedef const _E &reference;
      typedef const _E &const_reference;
      typedef ::std::size_t size_type;
      typedef const _E *iterator;
      typedef const _E *const_iterator;
    private:
      typename ::std::initializer_list<_E>::iterator _M_array;
      typename ::std::initializer_list<_E>::size_type _M_len;
      inline constexpr initializer_list(typename ::std::initializer_list<_E>::const_iterator __a, typename ::std::initializer_list<_E>::size_type __l)
        : _M_array(__a), _M_len(__l)
      {
      }
    public:
      inline constexpr initializer_list() noexcept(true)
        : _M_array(0), _M_len(0)
      {
      }
      inline constexpr typename ::std::initializer_list<_E>::size_type size() const  noexcept(true)
      {
        return ::std::initializer_list<_E>::_M_len;
      }
      inline constexpr typename ::std::initializer_list<_E>::const_iterator begin() const  noexcept(true)
      {
        return ::std::initializer_list<_E>::_M_array;
      }
      inline constexpr typename ::std::initializer_list<_E>::const_iterator end() const  noexcept(true)
      {
        return (*this).begin() + (*this).size();
      }
  };
  template < typename _Tp >
  inline constexpr const _Tp *begin(::std::initializer_list<_Tp> __ils) noexcept(true);
  template < typename _Tp >
  inline constexpr const _Tp *begin(::std::initializer_list<_Tp> __ils) noexcept(true)
  {
    return __ils.begin();
  }
  template < typename _Tp >
  inline constexpr const _Tp *end(::std::initializer_list<_Tp> __ils) noexcept(true);
  template < typename _Tp >
  inline constexpr const _Tp *end(::std::initializer_list<_Tp> __ils) noexcept(true)
  {
    return __ils.end();
  }
}
#pragma GCC visibility pop
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, ::__gnu_cxx::__numeric_traits_integer<int>, ::__gnu_cxx::__numeric_traits_floating<int> >' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_integer<int>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<int>' */ 
namespace std __attribute__((__visibility__("default"))) {
  template < typename _CharT, typename _Traits, typename _Alloc >
  class  basic_string
  {
      typedef typename _Alloc::template rebind< _CharT>::other _CharT_alloc_type;
    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _Alloc::template rebind< _CharT>::other::size_type size_type;
      typedef typename _Alloc::template rebind< _CharT>::other::difference_type difference_type;
      typedef typename _Alloc::template rebind< _CharT>::other::reference reference;
      typedef typename _Alloc::template rebind< _CharT>::other::const_reference const_reference;
      typedef typename _Alloc::template rebind< _CharT>::other::pointer pointer;
      typedef typename _Alloc::template rebind< _CharT>::other::const_pointer const_pointer;
      typedef ::__gnu_cxx::__normal_iterator<typename ::std::basic_string<_CharT, _Traits, _Alloc>::pointer, ::std::basic_string<_CharT, _Traits, _Alloc> > iterator;
      typedef ::__gnu_cxx::__normal_iterator<typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_pointer, ::std::basic_string<_CharT, _Traits, _Alloc> > const_iterator;
      typedef ::std::reverse_iterator<typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator> const_reverse_iterator;
      typedef ::std::reverse_iterator<typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator> reverse_iterator;
    private:
      struct  _Rep_base
      {
          typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _M_length;
          typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _M_capacity;
          ::_Atomic_word _M_refcount;
      };
      struct  _Rep : ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep_base
      {
          typedef typename _Alloc::template rebind< char>::other _Raw_bytes_alloc;
          static const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _S_max_size;
          static const _CharT _S_terminal;
          static typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _S_empty_rep_storage[(sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep_base) + sizeof(_CharT) + sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type) - 1) / sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type)];
          static inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep &_S_empty_rep()
          {
            void *__p(reinterpret_cast<void *>(&::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage));
            return *reinterpret_cast<typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *>(__p);
          }
          inline bool _M_is_leaked() const 
          {
            return this->_M_refcount < 0;
          }
          inline bool _M_is_shared() const 
          {
            return this->_M_refcount > 0;
          }
          inline void _M_set_leaked()
          {
            this->_M_refcount =  -1;
          }
          inline void _M_set_sharable()
          {
            this->_M_refcount = 0;
          }
          inline void _M_set_length_and_sharable(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
          {
            if (__builtin_expect(this != &_S_empty_rep(), false))
              {
                this->_M_set_sharable();
                this->_M_length = __n;
                traits_type::assign(this->_M_refdata()[__n], ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_terminal);
              }
          }
          inline _CharT *_M_refdata() throw()
          {
            return reinterpret_cast<_CharT *>(this + 1);
          }
          inline _CharT *_M_grab(const _Alloc &__alloc1, const _Alloc &__alloc2)
          {
            return !(*this)._M_is_leaked() && __alloc1 == __alloc2 ? (*this)._M_refcopy() : (*this)._M_clone(__alloc1);
          }
          static typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *_S_create(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __capacity, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __old_capacity, const _Alloc &__alloc);
          inline void _M_dispose(const _Alloc &__a)
          {
            if (__builtin_expect(this != &_S_empty_rep(), false))
              {
                ;
                if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,  -1) <= 0)
                  {
                    ;
                    (*this)._M_destroy(__a);
                  }
              }
          }
          void _M_destroy(const _Alloc &__a) throw();
          inline _CharT *_M_refcopy() throw()
          {
            if (__builtin_expect(this != &_S_empty_rep(), false))
              {
                __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
              }
            return (*this)._M_refdata();
          }
          _CharT *_M_clone(const _Alloc &__alloc, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __res  = (0));
      };
      struct  _Alloc_hider : _Alloc
      {
          inline _Alloc_hider(_CharT *__dat, const _Alloc &__a)
            : _Alloc(__a), _M_p(__dat)
          {
          }
          _CharT *_M_p;
      };
    public:
      static const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type npos = static_cast<typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type>( -1);
    private:
      mutable typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Alloc_hider _M_dataplus;
      inline _CharT *_M_data() const 
      {
        return ::std::basic_string<_CharT, _Traits, _Alloc>::_M_dataplus._M_p;
      }
      inline _CharT *_M_data(_CharT *__p)
      {
        return ::std::basic_string<_CharT, _Traits, _Alloc>::_M_dataplus._M_p = __p;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *_M_rep() const 
      {
        return &reinterpret_cast<typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *>((*this)._M_data())[ -1];
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator _M_ibegin() const 
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator _M_iend() const 
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data() + this->size())));
      }
      inline void _M_leak()
      {
        if (!(*this)._M_rep()->_M_is_leaked())
          {
            (*this)._M_leak_hard();
          }
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _M_check(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, const char *__s) const 
      {
        if (__pos > this->size())
          {
            ::std::__throw_out_of_range(__s);
          }
        return __pos;
      }
      inline void _M_check_length(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2, const char *__s) const 
      {
        if (this->max_size() - (this->size() - __n1) < __n2)
          {
            ::std::__throw_length_error(__s);
          }
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type _M_limit(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __off) const 
      {
        const bool __testoff = __off < this->size() - __pos;
        return __testoff ? __off : this->size() - __pos;
      }
      inline bool _M_disjunct(const _CharT *__s) const 
      {
        return ::std::less<const _CharT *>()(__s, (*this)._M_data()) || ::std::less<const _CharT *>()((*this)._M_data() + this->size(), __s);
      }
      static inline void _M_copy(_CharT *__d, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        if (__n == 1)
          {
            traits_type::assign(*__d, *__s);
          }
        else
          {
            traits_type::copy(__d, __s, __n);
          }
      }
      static inline void _M_move(_CharT *__d, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        if (__n == 1)
          {
            traits_type::assign(*__d, *__s);
          }
        else
          {
            traits_type::move(__d, __s, __n);
          }
      }
      static inline void _M_assign(_CharT *__d, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
      {
        if (__n == 1)
          {
            traits_type::assign(*__d, __c);
          }
        else
          {
            traits_type::assign(__d, __n, __c);
          }
      }
      template < typename _Iterator >
      static inline void _S_copy_chars(_CharT *__p, _Iterator __k1, _Iterator __k2)
      {
        for (; __k1 != __k2; ( ++__k1,  ++__p))
          {
            traits_type::assign(*__p, *__k1);
          }
      }
      static inline void _S_copy_chars(_CharT *__p, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __k1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __k2)
      {
        _S_copy_chars(__p, __k1.base(), __k2.base());
      }
      static inline void _S_copy_chars(_CharT *__p, typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator __k1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator __k2)
      {
        _S_copy_chars(__p, __k1.base(), __k2.base());
      }
      static inline void _S_copy_chars(_CharT *__p, _CharT *__k1, _CharT *__k2)
      {
        _M_copy(__p, __k1, __k2 - __k1);
      }
      static inline void _S_copy_chars(_CharT *__p, const _CharT *__k1, const _CharT *__k2)
      {
        _M_copy(__p, __k1, __k2 - __k1);
      }
      static inline int _S_compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::difference_type __d = ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::difference_type(__n1 - __n2)));
        if (__d > ::__gnu_cxx::__numeric_traits_integer<int>::__max)
          {
            return ::__gnu_cxx::__numeric_traits_integer<int>::__max;
          }
        else
          {
            if (__d < ::__gnu_cxx::__numeric_traits_integer<int>::__min)
              {
                return ::__gnu_cxx::__numeric_traits_integer<int>::__min;
              }
            else
              {
                return int(__d);
              }
          }
      }
      void _M_mutate(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len2);
      void _M_leak_hard();
      static inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep &_S_empty_rep()
      {
        return _Rep::_S_empty_rep();
      }
    public:
      inline basic_string()
        : _M_dataplus(_S_empty_rep()._M_refdata(), _Alloc())
      {
      }
      explicit basic_string(const _Alloc &__a);
      basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
      basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos));
      basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const _Alloc &__a);
      basic_string(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const _Alloc &__a  = (_Alloc()));
      basic_string(const _CharT *__s, const _Alloc &__a  = (_Alloc()));
      basic_string(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c, const _Alloc &__a  = (_Alloc()));
      inline basic_string(::std::basic_string<_CharT, _Traits, _Alloc> &&__str) noexcept(true)
        : _M_dataplus(__str._M_dataplus)
      {
        __str._M_data(_S_empty_rep()._M_refdata());
      }
      basic_string(::std::initializer_list<_CharT> __l, const _Alloc &__a  = (_Alloc()));
      template < typename _InputIterator >
      basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc &__a  = (_Alloc()));
      inline ~basic_string() noexcept(true)
      {
        (*this)._M_rep()->_M_dispose(this->get_allocator());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator =(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
      {
        return this->assign(__str);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator =(const _CharT *__s)
      {
        return this->assign(__s);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator =(_CharT __c)
      {
        this->assign(1, __c);
        return *this;
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator =(::std::basic_string<_CharT, _Traits, _Alloc> &&__str)
      {
        this->swap(__str);
        return *this;
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator =(::std::initializer_list<_CharT> __l)
      {
        this->assign(__l.begin(), __l.size());
        return *this;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator begin() noexcept(true)
      {
        (*this)._M_leak();
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator begin() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator((*this)._M_data())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator end() noexcept(true)
      {
        (*this)._M_leak();
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data() + this->size())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator end() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator((*this)._M_data() + this->size())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reverse_iterator rbegin() noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::reverse_iterator(this->end())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator rbegin() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator(this->end())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reverse_iterator rend() noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::reverse_iterator(this->begin())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator rend() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator(this->begin())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator cbegin() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator(this->_M_data())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator cend() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator(this->_M_data() + this->size())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator crbegin() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator(this->end())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator crend() const  noexcept(true)
      {
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reverse_iterator(this->begin())));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type size() const  noexcept(true)
      {
        return (*this)._M_rep()->_M_length;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type length() const  noexcept(true)
      {
        return (*this)._M_rep()->_M_length;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type max_size() const  noexcept(true)
      {
        return _Rep::_S_max_size;
      }
      void resize(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c);
      inline void resize(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        this->resize(__n, _CharT());
      }
      inline void shrink_to_fit()
      {
        if ((*this).capacity() > (*this).size())
          {
            try
            {
              (*this).reserve(0);
            }
            catch (...)
            {
            }
          }
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type capacity() const  noexcept(true)
      {
        return (*this)._M_rep()->_M_capacity;
      }
      void reserve(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __res  = (0));
      inline void clear() noexcept(true)
      {
        (*this)._M_mutate(0, this->size(), 0);
      }
      inline bool empty() const  noexcept(true)
      {
        return this->size() == 0;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reference operator [](typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const 
      {
        ;
        return (*this)._M_data()[__pos];
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reference operator [](typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos)
      {
        ;
        ;
        (*this)._M_leak();
        return (*this)._M_data()[__pos];
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reference at(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
      {
        if (__n >= this->size())
          {
            ::std::__throw_out_of_range("basic_string::at");
          }
        return (*this)._M_data()[__n];
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reference at(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        if (__n >= (*this).size())
          {
            ::std::__throw_out_of_range("basic_string::at");
          }
        (*this)._M_leak();
        return (*this)._M_data()[__n];
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reference front()
      {
        return (*this).operator [](0);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reference front() const 
      {
        return (*this).operator [](0);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::reference back()
      {
        return (*this).operator [](this->size() - 1);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_reference back() const 
      {
        return (*this).operator [](this->size() - 1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator +=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
      {
        return this->append(__str);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator +=(const _CharT *__s)
      {
        return this->append(__s);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator +=(_CharT __c)
      {
        this->push_back(__c);
        return *this;
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &operator +=(::std::initializer_list<_CharT> __l)
      {
        return this->append(__l.begin(), __l.size());
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &append(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
      ::std::basic_string<_CharT, _Traits, _Alloc> &append(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n);
      ::std::basic_string<_CharT, _Traits, _Alloc> &append(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &append(const _CharT *__s)
      {
        ;
        return this->append(__s, traits_type::length(__s));
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &append(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &append(::std::initializer_list<_CharT> __l)
      {
        return this->append(__l.begin(), __l.size());
      }
      template < typename _InputIterator >
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &append(_InputIterator __first, _InputIterator __last)
      {
        return this->replace((*this)._M_iend(), (*this)._M_iend(), __first, __last);
      }
      inline void push_back(_CharT __c)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = 1 + this->size();
        if (__len > this->capacity() || (*this)._M_rep()->_M_is_shared())
          {
            this->reserve(__len);
          }
        traits_type::assign((*this)._M_data()[this->size()], __c);
        (*this)._M_rep()->_M_set_length_and_sharable(__len);
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &assign(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(::std::basic_string<_CharT, _Traits, _Alloc> &&__str)
      {
        this->swap(__str);
        return *this;
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        return this->assign(__str._M_data() + __str._M_check(__pos, "basic_string::assign"), __str._M_limit(__pos, __n));
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &assign(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(const _CharT *__s)
      {
        ;
        return this->assign(__s, traits_type::length(__s));
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
      {
        return (*this)._M_replace_aux(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), this->size(), __n, __c);
      }
      template < typename _InputIterator >
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(_InputIterator __first, _InputIterator __last)
      {
        return this->replace((*this)._M_ibegin(), (*this)._M_iend(), __first, __last);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &assign(::std::initializer_list<_CharT> __l)
      {
        return this->assign(__l.begin(), __l.size());
      }
      inline void insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __p, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
      {
        this->replace(__p, __p, __n, __c);
      }
      template < typename _InputIterator >
      inline void insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __p, _InputIterator __beg, _InputIterator __end)
      {
        this->replace(__p, __p, __beg, __end);
      }
      inline void insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __p, ::std::initializer_list<_CharT> __l)
      {
        ;
        this->insert(__p - (*this)._M_ibegin(), __l.begin(), __l.size());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
      {
        return this->insert(__pos1, __str, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __str.size());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        return this->insert(__pos1, __str._M_data() + __str._M_check(__pos2, "basic_string::insert"), __str._M_limit(__pos2, __n));
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, const _CharT *__s)
      {
        ;
        return this->insert(__pos, __s, traits_type::length(__s));
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
      {
        return (*this)._M_replace_aux((*this)._M_check(__pos, "basic_string::insert"), ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __n, __c);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __p, _CharT __c)
      {
        ;
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos = __p - (*this)._M_ibegin();
        (*this)._M_replace_aux(__pos, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(1))), __c);
        (*this)._M_rep()->_M_set_leaked();
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data() + __pos)));
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &erase(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0), typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos))
      {
        (*this)._M_mutate((*this)._M_check(__pos, "basic_string::erase"), (*this)._M_limit(__pos, __n), ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))));
        return *this;
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator erase(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __position)
      {
        ;
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos = __position - (*this)._M_ibegin();
        (*this)._M_mutate(__pos, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(1))), ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))));
        (*this)._M_rep()->_M_set_leaked();
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data() + __pos)));
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator erase(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __first, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __last);
      inline void pop_back()
      {
        (*this).erase((*this).size() - 1, 1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
      {
        return this->replace(__pos, __n, __str._M_data(), __str.size());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2)
      {
        return this->replace(__pos1, __n1, __str._M_data() + __str._M_check(__pos2, "basic_string::replace"), __str._M_limit(__pos2, __n2));
      }
      ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s)
      {
        ;
        return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2, _CharT __c)
      {
        return (*this)._M_replace_aux((*this)._M_check(__pos, "basic_string::replace"), (*this)._M_limit(__pos, __n1), __n2, __c);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
      {
        return this->replace(__i1, __i2, __str._M_data(), __str.size());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
      {
        ;
        return this->replace(__i1 - (*this)._M_ibegin(), __i2 - __i1, __s, __n);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, const _CharT *__s)
      {
        ;
        return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
      {
        ;
        return (*this)._M_replace_aux(__i1 - (*this)._M_ibegin(), __i2 - __i1, __n, __c);
      }
      template < typename _InputIterator >
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, _InputIterator __k1, _InputIterator __k2)
      {
        ;
        ;
        typedef typename ::std::__is_integer<_InputIterator>::__type _Integral;
        return (*this)._M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, _CharT *__k1, _CharT *__k2)
      {
        ;
        ;
        return this->replace(__i1 - (*this)._M_ibegin(), __i2 - __i1, __k1, __k2 - __k1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, const _CharT *__k1, const _CharT *__k2)
      {
        ;
        ;
        return this->replace(__i1 - (*this)._M_ibegin(), __i2 - __i1, __k1, __k2 - __k1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __k1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __k2)
      {
        ;
        ;
        return this->replace(__i1 - (*this)._M_ibegin(), __i2 - __i1, __k1.base(), __k2 - __k1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator __k1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::const_iterator __k2)
      {
        ;
        ;
        return this->replace(__i1 - (*this)._M_ibegin(), __i2 - __i1, __k1.base(), __k2 - __k1);
      }
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, ::std::initializer_list<_CharT> __l)
      {
        return this->replace(__i1, __i2, __l.begin(), __l.end());
      }
    private:
      template < typename _Integer >
      inline ::std::basic_string<_CharT, _Traits, _Alloc> &_M_replace_dispatch(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, _Integer __n, _Integer __val, ::std::__true_type)
      {
        return (*this)._M_replace_aux(__i1 - (*this)._M_ibegin(), __i2 - __i1, __n, __val);
      }
      template < typename _InputIterator >
      ::std::basic_string<_CharT, _Traits, _Alloc> &_M_replace_dispatch(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, _InputIterator __k1, _InputIterator __k2, ::std::__false_type);
      ::std::basic_string<_CharT, _Traits, _Alloc> &_M_replace_aux(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2, _CharT __c);
      ::std::basic_string<_CharT, _Traits, _Alloc> &_M_replace_safe(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2);
      template < typename _InIterator >
      static inline _CharT *_S_construct_aux(_InIterator __beg, _InIterator __end, const _Alloc &__a, ::std::__false_type)
      {
        typedef typename ::std::iterator_traits<_InIterator>::iterator_category _Tag;
        return _S_construct(__beg, __end, __a, _Tag());
      }
      template < typename _Integer >
      static inline _CharT *_S_construct_aux(_Integer __beg, _Integer __end, const _Alloc &__a, ::std::__true_type)
      {
        return _S_construct_aux_2(static_cast<typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type>(__beg), __end, __a);
      }
      static inline _CharT *_S_construct_aux_2(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __req, _CharT __c, const _Alloc &__a)
      {
        return _S_construct(__req, __c, __a);
      }
      template < typename _InIterator >
      static inline _CharT *_S_construct(_InIterator __beg, _InIterator __end, const _Alloc &__a)
      {
        typedef typename ::std::__is_integer<_InIterator>::__type _Integral;
        return _S_construct_aux(__beg, __end, __a, _Integral());
      }
      template < typename _InIterator >
      static _CharT *_S_construct(_InIterator __beg, _InIterator __end, const _Alloc &__a, ::std::input_iterator_tag);
      template < typename _FwdIterator >
      static _CharT *_S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc &__a, ::std::forward_iterator_tag);
      static _CharT *_S_construct(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c, const _Alloc &__a);
    public:
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type copy(_CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const ;
      void swap(::std::basic_string<_CharT, _Traits, _Alloc> &__s);
      inline const _CharT *c_str() const  noexcept(true)
      {
        return (*this)._M_data();
      }
      inline const _CharT *data() const  noexcept(true)
      {
        return (*this)._M_data();
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::allocator_type get_allocator() const  noexcept(true)
      {
        return ::std::basic_string<_CharT, _Traits, _Alloc>::_M_dataplus;
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true)
      {
        return this->find(__str.data(), __pos, __str.size());
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const 
      {
        ;
        return this->find(__s, __pos, traits_type::length(__s));
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true);
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type rfind(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true)
      {
        return this->rfind(__str.data(), __pos, __str.size());
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type rfind(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type rfind(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const 
      {
        ;
        return this->rfind(__s, __pos, traits_type::length(__s));
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type rfind(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true);
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_of(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true)
      {
        return this->find_first_of(__str.data(), __pos, __str.size());
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const 
      {
        ;
        return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true)
      {
        return this->find(__c, __pos);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_of(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true)
      {
        return this->find_last_of(__str.data(), __pos, __str.size());
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const 
      {
        ;
        return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true)
      {
        return this->rfind(__c, __pos);
      }
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_not_of(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true)
      {
        return this->find_first_not_of(__str.data(), __pos, __str.size());
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const 
      {
        ;
        return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_first_not_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0)) const  noexcept(true);
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_not_of(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true)
      {
        return this->find_last_not_of(__str.data(), __pos, __str.size());
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const ;
      inline typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const 
      {
        ;
        return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
      typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type find_last_not_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const  noexcept(true);
      inline ::std::basic_string<_CharT, _Traits, _Alloc> substr(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos  = (0), typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n  = (::std::basic_string<_CharT, _Traits, _Alloc>::npos)) const 
      {
        return ::std::basic_string<_CharT, _Traits, _Alloc>(*this, (*this)._M_check(__pos, "basic_string::substr"), __n);
      }
      inline int compare(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str) const 
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __osize = __str.size();
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__size, __osize);
        int __r = traits_type::compare((*this)._M_data(), __str.data(), __len);
        if (!__r)
          {
            __r = _S_compare(__size, __osize);
          }
        return __r;
      }
      int compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str) const ;
      int compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2) const ;
      int compare(const _CharT *__s) const ;
      int compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s) const ;
      int compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2) const ;
  };
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    ::std::basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
    __str.append(__rhs);
    return __str;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(_CharT __lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    ::std::basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
    __str.append(__rhs);
    return __str;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, _CharT __rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, _CharT __rhs)
  {
    typedef ::std::basic_string<_CharT, _Traits, _Alloc> __string_type;
    typedef typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size_type;
    __string_type __str(__lhs);
    __str.append(__size_type(1), __rhs);
    return __str;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return std::move(__lhs.append(__rhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs)
  {
    return std::move(__rhs.insert(0, __lhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs)
  {
    auto __size = __lhs.size() + __rhs.size();
    const bool __cond = __size > __lhs.capacity() && __size <= __rhs.capacity();
    return __cond ? std::move(__rhs.insert(0, __lhs)) : std::move(__lhs.append(__rhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const _CharT *__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const _CharT *__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs)
  {
    return std::move(__rhs.insert(0, __lhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(_CharT __lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(_CharT __lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &&__rhs)
  {
    return std::move(__rhs.insert(0, 1, __lhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, const _CharT *__rhs)
  {
    return std::move(__lhs.append(__rhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, _CharT __rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_string<_CharT, _Traits, _Alloc> operator +(::std::basic_string<_CharT, _Traits, _Alloc> &&__lhs, _CharT __rhs)
  {
    return std::move(__lhs.append(1, __rhs));
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __lhs.compare(__rhs) == 0;
  }
  template < typename _CharT >
  inline typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type operator ==(const ::std::basic_string<_CharT> &__lhs, const ::std::basic_string<_CharT> &__rhs);
  template < typename _CharT >
  inline typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type operator ==(const ::std::basic_string<_CharT> &__lhs, const ::std::basic_string<_CharT> &__rhs)
  {
    return __lhs.size() == __rhs.size() && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(), __lhs.size());
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __rhs.compare(__lhs) == 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator ==(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return __lhs.compare(__rhs) == 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return !(__lhs == __rhs);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return !(__lhs == __rhs);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator !=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return !(__lhs == __rhs);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __lhs.compare(__rhs) < 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return __lhs.compare(__rhs) < 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __rhs.compare(__lhs) > 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __lhs.compare(__rhs) > 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return __lhs.compare(__rhs) > 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __rhs.compare(__lhs) < 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __lhs.compare(__rhs) <= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return __lhs.compare(__rhs) <= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator <=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __rhs.compare(__lhs) >= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __lhs.compare(__rhs) >= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const ::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, const _CharT *__rhs)
  {
    return __lhs.compare(__rhs) >= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline bool operator >=(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    return __rhs.compare(__lhs) <= 0;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline void swap(::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline void swap(::std::basic_string<_CharT, _Traits, _Alloc> &__lhs, ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    __lhs.swap(__rhs);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
  template <>
  ::std::basic_istream<char> &operator >><char, ::std::char_traits<char>, ::std::allocator<char> >(::std::basic_istream<char> &__is, ::std::basic_string<char> &__str);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__os, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__os, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
  {
    return __ostream_insert(__os, __str.data(), __str.size());
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_istream<_CharT, _Traits> &getline(::std::basic_istream<_CharT, _Traits> &__in, ::std::basic_string<_CharT, _Traits, _Alloc> &__str, _CharT __delim);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_istream<_CharT, _Traits> &getline(::std::basic_istream<_CharT, _Traits> &__is, ::std::basic_string<_CharT, _Traits, _Alloc> &__str);
  template < typename _CharT, typename _Traits, typename _Alloc >
  inline ::std::basic_istream<_CharT, _Traits> &getline(::std::basic_istream<_CharT, _Traits> &__is, ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
  {
    return getline(__is, __str, __is.widen('\n'));
  }
  template <>
  ::std::basic_istream<char> &getline<char, ::std::char_traits<char>, ::std::allocator<char> >(::std::basic_istream<char> &__in, ::std::basic_string<char> &__str, char __delim);
  template <>
  ::std::basic_istream<wchar_t> &getline<wchar_t, ::std::char_traits<wchar_t>, ::std::allocator<wchar_t> >(::std::basic_istream<wchar_t> &__in, ::std::basic_string<wchar_t> &__str, wchar_t __delim);
  using ::div_t;
  using ::ldiv_t;
  using ::abort;
  using ::abs;
  using ::atexit;
  using ::at_quick_exit;
  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;
  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;
  using ::qsort;
  using ::quick_exit;
  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;
  using ::wcstombs;
  using ::wctomb;
  inline long int abs(long int __i)
  {
    return __builtin_labs(__i);
  }
  inline ::ldiv_t div(long int __i, long int __j)
  {
    return ::std::ldiv(__i, __j);
  }
  inline long long int abs(long long int __x)
  {
    return __builtin_llabs(__x);
  }
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  using ::lldiv_t;
  using ::_Exit;
  using ::llabs;
  inline ::lldiv_t div(long long int __n, long long int __d)
  {
    ::lldiv_t __q /* () */ ;
    __q.quot = __n / __d;
    __q.rem = __n % __d;
    return __q;
  }
  using ::lldiv;
  using ::atoll;
  using ::strtoll;
  using ::strtoull;
  using ::strtof;
  using ::strtold;
}
namespace std __attribute__((__visibility__("default"))) {
  using ::__gnu_cxx::lldiv_t;
  using ::__gnu_cxx::_Exit;
  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;
  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}
struct  _G_fpos_t
{
    ::__off_t __pos;
    ::__mbstate_t __state;
};
struct  _G_fpos64_t
{
    ::__off64_t __pos;
    ::__mbstate_t __state;
};
struct _IO_jump_t;
typedef void _IO_lock_t;
struct _IO_marker;
struct  _IO_marker
{
    ::_IO_marker *_next;
    ::_IO_FILE *_sbuf;
    int _pos;
};
enum __codecvt_result
{
  __codecvt_ok = 0,
  __codecvt_partial = 1,
  __codecvt_error = 2,
  __codecvt_noconv = 3
};
struct  _IO_FILE
{
    int _flags;
    char *_IO_read_ptr;
    char *_IO_read_end;
    char *_IO_read_base;
    char *_IO_write_base;
    char *_IO_write_ptr;
    char *_IO_write_end;
    char *_IO_buf_base;
    char *_IO_buf_end;
    char *_IO_save_base;
    char *_IO_backup_base;
    char *_IO_save_end;
    ::_IO_marker *_markers;
    ::_IO_FILE *_chain;
    int _fileno;
    int _flags2;
    ::__off_t _old_offset;
    unsigned short int _cur_column;
    signed char _vtable_offset;
    char _shortbuf[1L];
    ::_IO_lock_t *_lock;
    ::__off64_t _offset;
    void *__pad1;
    void *__pad2;
    void *__pad3;
    void *__pad4;
    ::size_t __pad5;
    int _mode;
    char _unused2[20L];
};
struct _IO_FILE_plus;
extern "C"
{
  extern ::_IO_FILE_plus _IO_2_1_stdin_;
}
extern "C"
{
  extern ::_IO_FILE_plus _IO_2_1_stdout_;
}
extern "C"
{
  extern ::_IO_FILE_plus _IO_2_1_stderr_;
}
typedef ::__ssize_t __io_read_fn(void *, char *, ::size_t);
typedef ::__ssize_t __io_write_fn(void *, const char *, ::size_t);
typedef int __io_seek_fn(void *, ::__off64_t *, int);
typedef int __io_close_fn(void *);
typedef ::__io_read_fn cookie_read_function_t;
typedef ::__io_write_fn cookie_write_function_t;
typedef ::__io_seek_fn cookie_seek_function_t;
typedef ::__io_close_fn cookie_close_function_t;
struct  _IO_cookie_io_functions_t
{
    ::__io_read_fn (*read);
    ::__io_write_fn (*write);
    ::__io_seek_fn (*seek);
    ::__io_close_fn (*close);
};
typedef ::_IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
extern "C"
{
  extern void _IO_cookie_init(::_IO_cookie_file *__cfile, int __read_write, void *__cookie, ::_IO_cookie_io_functions_t __fns);
}
extern "C"
{
  extern int __underflow(::_IO_FILE *);
}
extern "C"
{
  extern int __uflow(::_IO_FILE *);
}
extern "C"
{
  extern int __overflow(::_IO_FILE *, int);
}
extern "C"
{
  extern int _IO_getc(::_IO_FILE *__fp);
}
extern "C"
{
  extern int _IO_putc(int __c, ::_IO_FILE *__fp);
}
extern "C"
{
  extern int _IO_feof(::_IO_FILE *__fp) throw();
}
extern "C"
{
  extern int _IO_ferror(::_IO_FILE *__fp) throw();
}
extern "C"
{
  extern int _IO_peekc_locked(::_IO_FILE *__fp);
}
extern "C"
{
  extern void _IO_flockfile(::_IO_FILE *) throw();
}
extern "C"
{
  extern void _IO_funlockfile(::_IO_FILE *) throw();
}
extern "C"
{
  extern int _IO_ftrylockfile(::_IO_FILE *) throw();
}
extern "C"
{
  extern int _IO_vfscanf(::_IO_FILE *__restrict , const char *__restrict , ::__gnuc_va_list, int *__restrict );
}
extern "C"
{
  extern int _IO_vfprintf(::_IO_FILE *__restrict , const char *__restrict , ::__gnuc_va_list);
}
extern "C"
{
  extern ::__ssize_t _IO_padn(::_IO_FILE *, int, ::__ssize_t);
}
extern "C"
{
  extern ::size_t _IO_sgetn(::_IO_FILE *, void *, ::size_t);
}
extern "C"
{
  extern ::__off64_t _IO_seekoff(::_IO_FILE *, ::__off64_t, int, int);
}
extern "C"
{
  extern ::__off64_t _IO_seekpos(::_IO_FILE *, ::__off64_t, int);
}
extern "C"
{
  extern void _IO_free_backup_area(::_IO_FILE *) throw();
}
typedef ::_G_fpos_t fpos_t;
typedef ::_G_fpos64_t fpos64_t;
extern "C"
{
  extern ::_IO_FILE *stdin;
}
extern "C"
{
  extern ::_IO_FILE *stdout;
}
extern "C"
{
  extern ::_IO_FILE *stderr;
}
extern "C"
{
  extern int remove(const char *__filename) throw();
}
extern "C"
{
  extern int rename(const char *__old, const char *__new) throw();
}
extern "C"
{
  extern int renameat(int __oldfd, const char *__old, int __newfd, const char *__new) throw();
}
extern "C"
{
  extern ::FILE *tmpfile();
}
extern "C"
{
  extern ::FILE *tmpfile64();
}
extern "C"
{
  extern char *tmpnam(char *__s) throw();
}
extern "C"
{
  extern char *tmpnam_r(char *__s) throw();
}
extern "C"
{
  extern char *tempnam(const char *__dir, const char *__pfx) throw() __attribute__((__malloc__));
}
extern "C"
{
  extern int fclose(::FILE *__stream);
}
extern "C"
{
  extern int fflush(::FILE *__stream);
}
extern "C"
{
  extern int fflush_unlocked(::FILE *__stream);
}
extern "C"
{
  extern int fcloseall();
}
extern "C"
{
  extern ::FILE *fopen(const char *__restrict __filename, const char *__restrict __modes);
}
extern "C"
{
  extern ::FILE *freopen(const char *__restrict __filename, const char *__restrict __modes, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::FILE *fopen64(const char *__restrict __filename, const char *__restrict __modes);
}
extern "C"
{
  extern ::FILE *freopen64(const char *__restrict __filename, const char *__restrict __modes, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::FILE *fdopen(int __fd, const char *__modes) throw();
}
extern "C"
{
  extern ::FILE *fopencookie(void *__restrict __magic_cookie, const char *__restrict __modes, ::_IO_cookie_io_functions_t __io_funcs) throw();
}
extern "C"
{
  extern ::FILE *fmemopen(void *__s, ::size_t __len, const char *__modes) throw();
}
extern "C"
{
  extern ::FILE *open_memstream(char **__bufloc, ::size_t *__sizeloc) throw();
}
extern "C"
{
  extern void setbuf(::FILE *__restrict __stream, char *__restrict __buf) throw();
}
extern "C"
{
  extern int setvbuf(::FILE *__restrict __stream, char *__restrict __buf, int __modes, ::size_t __n) throw();
}
extern "C"
{
  extern void setbuffer(::FILE *__restrict __stream, char *__restrict __buf, ::size_t __size) throw();
}
extern "C"
{
  extern void setlinebuf(::FILE *__stream) throw();
}
extern "C"
{
  extern int fprintf(::FILE *__restrict __stream, const char *__restrict __format, ...);
}
extern "C"
{
  extern int printf(const char *__restrict __format, ...);
}
extern "C"
{
  extern int sprintf(char *__restrict __s, const char *__restrict __format, ...) throw();
}
extern "C"
{
  extern int vfprintf(::FILE *__restrict __s, const char *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vprintf(const char *__restrict __format, ::__gnuc_va_list __arg);
}
extern "C"
{
  extern int vsprintf(char *__restrict __s, const char *__restrict __format, ::__gnuc_va_list __arg) throw();
}
extern "C"
{
  extern int snprintf(char *__restrict __s, ::size_t __maxlen, const char *__restrict __format, ...) throw() __attribute__((__format__(__printf__, 3, 4)));
}
extern "C"
{
  extern int vsnprintf(char *__restrict __s, ::size_t __maxlen, const char *__restrict __format, ::__gnuc_va_list __arg) throw() __attribute__((__format__(__printf__, 3, 0)));
}
extern "C"
{
  extern int vasprintf(char **__restrict __ptr, const char *__restrict __f, ::__gnuc_va_list __arg) throw() __attribute__((__format__(__printf__, 2, 0)));
}
extern "C"
{
  extern int __asprintf(char **__restrict __ptr, const char *__restrict __fmt, ...) throw() __attribute__((__format__(__printf__, 2, 3)));
}
extern "C"
{
  extern int asprintf(char **__restrict __ptr, const char *__restrict __fmt, ...) throw() __attribute__((__format__(__printf__, 2, 3)));
}
extern "C"
{
  extern int vdprintf(int __fd, const char *__restrict __fmt, ::__gnuc_va_list __arg) __attribute__((__format__(__printf__, 2, 0)));
}
extern "C"
{
  extern int dprintf(int __fd, const char *__restrict __fmt, ...) __attribute__((__format__(__printf__, 2, 3)));
}
extern "C"
{
  extern int fscanf(::FILE *__restrict __stream, const char *__restrict __format, ...);
}
extern "C"
{
  extern int scanf(const char *__restrict __format, ...);
}
extern "C"
{
  extern int sscanf(const char *__restrict __s, const char *__restrict __format, ...) throw();
}
extern "C"
{
  extern int vfscanf(::FILE *__restrict __s, const char *__restrict __format, ::__gnuc_va_list __arg) __attribute__((__format__(__scanf__, 2, 0)));
}
extern "C"
{
  extern int vscanf(const char *__restrict __format, ::__gnuc_va_list __arg) __attribute__((__format__(__scanf__, 1, 0)));
}
extern "C"
{
  extern int vsscanf(const char *__restrict __s, const char *__restrict __format, ::__gnuc_va_list __arg) throw() __attribute__((__format__(__scanf__, 2, 0)));
}
extern "C"
{
  extern int fgetc(::FILE *__stream);
}
extern "C"
{
  extern int getc(::FILE *__stream);
}
extern "C"
{
  extern int getchar();
}
extern "C"
{
  extern int getc_unlocked(::FILE *__stream);
}
extern "C"
{
  extern int getchar_unlocked();
}
extern "C"
{
  extern int fgetc_unlocked(::FILE *__stream);
}
extern "C"
{
  extern int fputc(int __c, ::FILE *__stream);
}
extern "C"
{
  extern int putc(int __c, ::FILE *__stream);
}
extern "C"
{
  extern int putchar(int __c);
}
extern "C"
{
  extern int fputc_unlocked(int __c, ::FILE *__stream);
}
extern "C"
{
  extern int putc_unlocked(int __c, ::FILE *__stream);
}
extern "C"
{
  extern int putchar_unlocked(int __c);
}
extern "C"
{
  extern int getw(::FILE *__stream);
}
extern "C"
{
  extern int putw(int __w, ::FILE *__stream);
}
extern "C"
{
  extern char *fgets(char *__restrict __s, int __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern char *gets(char *__s) __attribute__((__deprecated__));
}
extern "C"
{
  extern char *fgets_unlocked(char *__restrict __s, int __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::__ssize_t __getdelim(char **__restrict __lineptr, ::size_t *__restrict __n, int __delimiter, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::__ssize_t getdelim(char **__restrict __lineptr, ::size_t *__restrict __n, int __delimiter, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::__ssize_t getline(char **__restrict __lineptr, ::size_t *__restrict __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern int fputs(const char *__restrict __s, ::FILE *__restrict __stream);
}
extern "C"
{
  extern int puts(const char *__s);
}
extern "C"
{
  extern int ungetc(int __c, ::FILE *__stream);
}
extern "C"
{
  extern ::size_t fread(void *__restrict __ptr, ::size_t __size, ::size_t __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::size_t fwrite(const void *__restrict __ptr, ::size_t __size, ::size_t __n, ::FILE *__restrict __s);
}
extern "C"
{
  extern int fputs_unlocked(const char *__restrict __s, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::size_t fread_unlocked(void *__restrict __ptr, ::size_t __size, ::size_t __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern ::size_t fwrite_unlocked(const void *__restrict __ptr, ::size_t __size, ::size_t __n, ::FILE *__restrict __stream);
}
extern "C"
{
  extern int fseek(::FILE *__stream, long int __off, int __whence);
}
extern "C"
{
  extern long int ftell(::FILE *__stream);
}
extern "C"
{
  extern void rewind(::FILE *__stream);
}
extern "C"
{
  extern int fseeko(::FILE *__stream, ::__off_t __off, int __whence);
}
extern "C"
{
  extern ::__off_t ftello(::FILE *__stream);
}
extern "C"
{
  extern int fgetpos(::FILE *__restrict __stream, ::fpos_t *__restrict __pos);
}
extern "C"
{
  extern int fsetpos(::FILE *__stream, const ::fpos_t *__pos);
}
extern "C"
{
  extern int fseeko64(::FILE *__stream, ::__off64_t __off, int __whence);
}
extern "C"
{
  extern ::__off64_t ftello64(::FILE *__stream);
}
extern "C"
{
  extern int fgetpos64(::FILE *__restrict __stream, ::fpos64_t *__restrict __pos);
}
extern "C"
{
  extern int fsetpos64(::FILE *__stream, const ::fpos64_t *__pos);
}
extern "C"
{
  extern void clearerr(::FILE *__stream) throw();
}
extern "C"
{
  extern int feof(::FILE *__stream) throw();
}
extern "C"
{
  extern int ferror(::FILE *__stream) throw();
}
extern "C"
{
  extern void clearerr_unlocked(::FILE *__stream) throw();
}
extern "C"
{
  extern int feof_unlocked(::FILE *__stream) throw();
}
extern "C"
{
  extern int ferror_unlocked(::FILE *__stream) throw();
}
extern "C"
{
  extern void perror(const char *__s);
}
extern "C"
{
  extern int sys_nerr;
}
extern "C"
{
  extern const char *const sys_errlist[];
}
extern "C"
{
  extern int _sys_nerr;
}
extern "C"
{
  extern const char *const _sys_errlist[];
}
extern "C"
{
  extern int fileno(::FILE *__stream) throw();
}
extern "C"
{
  extern int fileno_unlocked(::FILE *__stream) throw();
}
extern "C"
{
  extern ::FILE *popen(const char *__command, const char *__modes);
}
extern "C"
{
  extern int pclose(::FILE *__stream);
}
extern "C"
{
  extern char *ctermid(char *__s) throw();
}
extern "C"
{
  extern char *cuserid(char *__s);
}
struct obstack;
extern "C"
{
  extern int obstack_printf(::obstack *__restrict __obstack, const char *__restrict __format, ...) throw() __attribute__((__format__(__printf__, 2, 3)));
}
extern "C"
{
  extern int obstack_vprintf(::obstack *__restrict __obstack, const char *__restrict __format, ::__gnuc_va_list __args) throw() __attribute__((__format__(__printf__, 2, 0)));
}
extern "C"
{
  extern void flockfile(::FILE *__stream) throw();
}
extern "C"
{
  extern int ftrylockfile(::FILE *__stream) throw();
}
extern "C"
{
  extern void funlockfile(::FILE *__stream) throw();
}
namespace std __attribute__((__visibility__("default"))) {
  using ::FILE;
  using ::fpos_t;
  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;
  using ::gets;
  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;
  using ::tmpnam;
  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;
}
namespace std __attribute__((__visibility__("default"))) {
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
}
extern "C"
{
  extern int *__errno_location() throw() __attribute__((__const__));
}
extern "C"
{
  extern char *program_invocation_name;
}
extern "C"
{
  extern char *program_invocation_short_name;
}
typedef int error_t;
namespace __gnu_cxx __attribute__((__visibility__("default"))) {
  template < typename _TRet, typename _Ret = _TRet, typename _CharT, typename ..._Base >
  _Ret __stoa(_TRet (*__convf)(const _CharT *, _CharT **, _Base ...), const char *__name, const _CharT *__str, ::std::size_t *__idx, _Base ...__base);
  template < typename _TRet, typename _Ret, typename _CharT, typename ..._Base >
  _Ret __stoa(_TRet (*__convf)(const _CharT *, _CharT **, _Base ...), const char *__name, const _CharT *__str, ::std::size_t *__idx, _Base ...__base)
  {
    _Ret __ret;
    _CharT *__endptr;
    *::__errno_location() = 0;
    const _TRet __tmp = __convf(__str, &__endptr, __base ...);
    if (__endptr == __str)
      {
        std::__throw_invalid_argument(__name);
      }
    else
      {
        if (*::__errno_location() == 34 || (std::__are_same<_Ret, int>::__value && (__tmp < ::__gnu_cxx::__numeric_traits_integer<int>::__min || __tmp > ::__gnu_cxx::__numeric_traits_integer<int>::__max)))
          {
            std::__throw_out_of_range(__name);
          }
        else
          {
            __ret = __tmp;
          }
      }
    if (__idx)
      {
        *__idx = __endptr - __str;
      }
    return __ret;
  }
  template < typename _String, typename _CharT = typename _String::value_type >
  _String __to_xstring(int (*__convf)(_CharT *, ::std::size_t, const _CharT *, ::__builtin_va_list), ::std::size_t __n, const _CharT *__fmt, ...);
  template < typename _String, typename _CharT >
  _String __to_xstring(int (*__convf)(_CharT *, ::std::size_t, const _CharT *, ::__builtin_va_list), ::std::size_t __n, const _CharT *__fmt, ...)
  {
    _CharT *__s = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __n));
    ::__builtin_va_list __args;
    __builtin_va_start(__args, __fmt);
    const int __len = __convf(__s, __n, __fmt, __args);
    __builtin_va_end(__args);
    return _String(__s, __s + __len);
  }
 /* Instantiation of class template '::__gnu_cxx::new_allocator<char>' */ 
 /* Instantiation of class template '::std::allocator<char>' */ 
 /* Instantiation of class template '::std::allocator<char>::rebind<char>' */ 
 /* Instantiation of class template '::std::basic_string<char>::_Alloc_hider' */ 
 /* Instantiation of class template '::std::basic_string<char>' */ 
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'int ::__gnu_cxx::__stoa<long int, int, char, int>(long int (*)(const char *, char **, int), const char *, const char *, unsigned long int *, int)' */ 
}
namespace std __attribute__((__visibility__("default"))) {
  inline int stoi(const ::std::string &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa<long int, int>(::strtol, "stoi", __str.::std::basic_string<char>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'long int ::__gnu_cxx::__stoa<long int, long int, char, int>(long int (*)(const char *, char **, int), const char *, const char *, unsigned long int *, int)' */ 
  inline long int stol(const ::std::string &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::strtol, "stol", __str.::std::basic_string<char>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'unsigned long int ::__gnu_cxx::__stoa<unsigned long int, unsigned long int, char, int>(unsigned long int (*)(const char *, char **, int), const char *, const char *, unsigned long int *, int)' */ 
  inline unsigned long int stoul(const ::std::string &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::strtoul, "stoul", __str.::std::basic_string<char>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'long long int ::__gnu_cxx::__stoa<long long int, long long int, char, int>(long long int (*)(const char *, char **, int), const char *, const char *, unsigned long int *, int)' */ 
  inline long long int stoll(const ::std::string &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::strtoll, "stoll", __str.::std::basic_string<char>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'unsigned long long int ::__gnu_cxx::__stoa<unsigned long long int, unsigned long long int, char, int>(unsigned long long int (*)(const char *, char **, int), const char *, const char *, unsigned long int *, int)' */ 
  inline unsigned long long int stoull(const ::std::string &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::strtoull, "stoull", __str.::std::basic_string<char>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'float ::__gnu_cxx::__stoa<float, float, char>(float (*)(const char *, char **), const char *, const char *, unsigned long int *)' */ 
  inline float stof(const ::std::string &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::strtof, "stof", __str.::std::basic_string<char>::c_str(), __idx);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'double ::__gnu_cxx::__stoa<double, double, char>(double (*)(const char *, char **), const char *, const char *, unsigned long int *)' */ 
  inline double stod(const ::std::string &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::strtod, "stod", __str.::std::basic_string<char>::c_str(), __idx);
  }
 /* Instantiation of template function 'const char *::std::basic_string<char>::c_str() const ' */ 
 /* Instantiation of template function 'long double ::__gnu_cxx::__stoa<long double, long double, char>(long double (*)(const char *, char **), const char *, const char *, unsigned long int *)' */ 
  inline long double stold(const ::std::string &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::strtold, "stold", __str.::std::basic_string<char>::c_str(), __idx);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of class template '::std::initializer_list<char>' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(int), "%d", __val);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(unsigned int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(unsigned int), "%u", __val);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(long int), "%ld", __val);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(unsigned long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(unsigned long int), "%lu", __val);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(long long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(long long int), "%lld", __val);
  }
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(unsigned long long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, 4 * sizeof(unsigned long long int), "%llu", __val);
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<false, ::__gnu_cxx::__numeric_traits_integer<float>, ::__gnu_cxx::__numeric_traits_floating<float> >' */ 
 /* Instantiation of class template '::std::__are_same<float, float>' */ 
 /* Instantiation of class template '::std::__are_same<float, double>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_floating<float>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<float>' */ 
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(float __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<float>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, __n, "%f", __val);
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<false, ::__gnu_cxx::__numeric_traits_integer<double>, ::__gnu_cxx::__numeric_traits_floating<double> >' */ 
 /* Instantiation of class template '::std::__are_same<double, float>' */ 
 /* Instantiation of class template '::std::__are_same<double, double>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_floating<double>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<double>' */ 
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(double __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<double>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, __n, "%f", __val);
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<false, ::__gnu_cxx::__numeric_traits_integer<long double>, ::__gnu_cxx::__numeric_traits_floating<long double> >' */ 
 /* Instantiation of class template '::std::__are_same<long double, float>' */ 
 /* Instantiation of class template '::std::__are_same<long double, double>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_floating<long double>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<long double>' */ 
 /* Instantiation of template function '::std::basic_string<char> ::__gnu_cxx::__to_xstring< ::std::basic_string<char>, char>(int (*)(char *, unsigned long int, const char *, __builtin_va_list), unsigned long int, const char *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<char>::basic_string(::std::basic_string<char> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<char>::~basic_string() const ' */ 
  inline ::std::string to_string(long double __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<long double>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::string>(::vsnprintf, __n, "%Lf", __val);
  }
 /* Instantiation of class template '::__gnu_cxx::new_allocator<wchar_t>' */ 
 /* Instantiation of class template '::std::allocator<wchar_t>' */ 
 /* Instantiation of class template '::std::allocator<wchar_t>::rebind<wchar_t>' */ 
 /* Instantiation of class template '::std::basic_string<wchar_t>::_Alloc_hider' */ 
 /* Instantiation of class template '::std::basic_string<wchar_t>' */ 
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'int ::__gnu_cxx::__stoa<long int, int, wchar_t, int>(long int (*)(const wchar_t *, wchar_t **, int), const char *, const wchar_t *, unsigned long int *, int)' */ 
  inline int stoi(const ::std::wstring &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa<long int, int>(::wcstol, "stoi", __str.::std::basic_string<wchar_t>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'long int ::__gnu_cxx::__stoa<long int, long int, wchar_t, int>(long int (*)(const wchar_t *, wchar_t **, int), const char *, const wchar_t *, unsigned long int *, int)' */ 
  inline long int stol(const ::std::wstring &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::wcstol, "stol", __str.::std::basic_string<wchar_t>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'unsigned long int ::__gnu_cxx::__stoa<unsigned long int, unsigned long int, wchar_t, int>(unsigned long int (*)(const wchar_t *, wchar_t **, int), const char *, const wchar_t *, unsigned long int *, int)' */ 
  inline unsigned long int stoul(const ::std::wstring &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::wcstoul, "stoul", __str.::std::basic_string<wchar_t>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'long long int ::__gnu_cxx::__stoa<long long int, long long int, wchar_t, int>(long long int (*)(const wchar_t *, wchar_t **, int), const char *, const wchar_t *, unsigned long int *, int)' */ 
  inline long long int stoll(const ::std::wstring &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::wcstoll, "stoll", __str.::std::basic_string<wchar_t>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'unsigned long long int ::__gnu_cxx::__stoa<unsigned long long int, unsigned long long int, wchar_t, int>(unsigned long long int (*)(const wchar_t *, wchar_t **, int), const char *, const wchar_t *, unsigned long int *, int)' */ 
  inline unsigned long long int stoull(const ::std::wstring &__str, ::std::size_t *__idx  = (0), int __base  = (10))
  {
    return __gnu_cxx::__stoa(::wcstoull, "stoull", __str.::std::basic_string<wchar_t>::c_str(), __idx, __base);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'float ::__gnu_cxx::__stoa<float, float, wchar_t>(float (*)(const wchar_t *, wchar_t **), const char *, const wchar_t *, unsigned long int *)' */ 
  inline float stof(const ::std::wstring &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::wcstof, "stof", __str.::std::basic_string<wchar_t>::c_str(), __idx);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'double ::__gnu_cxx::__stoa<double, double, wchar_t>(double (*)(const wchar_t *, wchar_t **), const char *, const wchar_t *, unsigned long int *)' */ 
  inline double stod(const ::std::wstring &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::wcstod, "stod", __str.::std::basic_string<wchar_t>::c_str(), __idx);
  }
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::c_str() const ' */ 
 /* Instantiation of template function 'long double ::__gnu_cxx::__stoa<long double, long double, wchar_t>(long double (*)(const wchar_t *, wchar_t **), const char *, const wchar_t *, unsigned long int *)' */ 
  inline long double stold(const ::std::wstring &__str, ::std::size_t *__idx  = (0))
  {
    return __gnu_cxx::__stoa(::wcstold, "stold", __str.::std::basic_string<wchar_t>::c_str(), __idx);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of class template '::std::initializer_list<wchar_t>' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(int), L"%d", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(unsigned int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(unsigned int), L"%u", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(long int), L"%ld", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(unsigned long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(unsigned long int), L"%lu", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(long long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(long long int), L"%lld", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(unsigned long long int __val)
  {
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, 4 * sizeof(unsigned long long int), L"%llu", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(float __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<float>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, __n, L"%f", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(double __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<double>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, __n, L"%f", __val);
  }
 /* Instantiation of template function '::std::basic_string<wchar_t> ::__gnu_cxx::__to_xstring< ::std::basic_string<wchar_t>, wchar_t>(int (*)(wchar_t *, unsigned long int, const wchar_t *, __builtin_va_list), unsigned long int, const wchar_t *, ...)' */ 
 /* Instantiation of template function '::std::basic_string<wchar_t>::basic_string(::std::basic_string<wchar_t> &&)' */ 
 /* Instantiation of template function 'void ::std::basic_string<wchar_t>::~basic_string() const ' */ 
  inline ::std::wstring to_wstring(long double __val)
  {
    const int __n(::__gnu_cxx::__numeric_traits_floating<long double>::__max_exponent10 + 20);
    return __gnu_cxx::__to_xstring< ::std::wstring>(::vswprintf, __n, L"%Lf", __val);
  }
  ::std::size_t _Hash_bytes(const void *__ptr, ::std::size_t __len, ::std::size_t __seed);
  ::std::size_t _Fnv_hash_bytes(const void *__ptr, ::std::size_t __len, ::std::size_t __seed);
  template < typename _Result, typename _Arg >
  struct  __hash_base
  {
      typedef _Result result_type;
      typedef _Arg argument_type;
  };
  template < typename _Tp >
  struct hash;
  template < typename _Tp >
  struct  hash<_Tp *> : ::std::__hash_base<unsigned long int, _Tp *>
  {
      inline ::std::size_t operator ()(_Tp *__p) const  noexcept(true)
      {
        return reinterpret_cast< ::std::size_t>(__p);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, bool>' */ 
  template <>
  struct  hash<bool> : ::std::__hash_base<unsigned long int, bool>
  {
      inline ::std::size_t operator ()(bool __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, char>' */ 
  template <>
  struct  hash<char> : ::std::__hash_base<unsigned long int, char>
  {
      inline ::std::size_t operator ()(char __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, signed char>' */ 
  template <>
  struct  hash<signed char> : ::std::__hash_base<unsigned long int, signed char>
  {
      inline ::std::size_t operator ()(signed char __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, unsigned char>' */ 
  template <>
  struct  hash<unsigned char> : ::std::__hash_base<unsigned long int, unsigned char>
  {
      inline ::std::size_t operator ()(unsigned char __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, wchar_t>' */ 
  template <>
  struct  hash<wchar_t> : ::std::__hash_base<unsigned long int, wchar_t>
  {
      inline ::std::size_t operator ()(wchar_t __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, char16_t>' */ 
  template <>
  struct  hash<char16_t> : ::std::__hash_base<unsigned long int, char16_t>
  {
      inline ::std::size_t operator ()(char16_t __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, char32_t>' */ 
  template <>
  struct  hash<char32_t> : ::std::__hash_base<unsigned long int, char32_t>
  {
      inline ::std::size_t operator ()(char32_t __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, short int>' */ 
  template <>
  struct  hash<short int> : ::std::__hash_base<unsigned long int, short int>
  {
      inline ::std::size_t operator ()(short int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, int>' */ 
  template <>
  struct  hash<int> : ::std::__hash_base<unsigned long int, int>
  {
      inline ::std::size_t operator ()(int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, long int>' */ 
  template <>
  struct  hash<long int> : ::std::__hash_base<unsigned long int, long int>
  {
      inline ::std::size_t operator ()(long int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, long long int>' */ 
  template <>
  struct  hash<long long int> : ::std::__hash_base<unsigned long int, long long int>
  {
      inline ::std::size_t operator ()(long long int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, unsigned short int>' */ 
  template <>
  struct  hash<unsigned short int> : ::std::__hash_base<unsigned long int, unsigned short int>
  {
      inline ::std::size_t operator ()(unsigned short int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, unsigned int>' */ 
  template <>
  struct  hash<unsigned int> : ::std::__hash_base<unsigned long int, unsigned int>
  {
      inline ::std::size_t operator ()(unsigned int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, unsigned long int>' */ 
  template <>
  struct  hash<unsigned long int> : ::std::__hash_base<unsigned long int, unsigned long int>
  {
      inline ::std::size_t operator ()(unsigned long int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, unsigned long long int>' */ 
  template <>
  struct  hash<unsigned long long int> : ::std::__hash_base<unsigned long int, unsigned long long int>
  {
      inline ::std::size_t operator ()(unsigned long long int __val) const  noexcept(true)
      {
        return static_cast< ::std::size_t>(__val);
      }
  };
  struct  _Hash_impl
  {
      static inline ::std::size_t hash(const void *__ptr, ::std::size_t __clength, ::std::size_t __seed  = (static_cast< ::std::size_t>(3339675911LU)))
      {
        return ::std::_Hash_bytes(__ptr, __clength, __seed);
      }
      template < typename _Tp >
      static inline ::std::size_t hash(const _Tp &__val)
      {
        return hash(&__val, sizeof(__val));
      }
      template < typename _Tp >
      static inline ::std::size_t __hash_combine(const _Tp &__val, ::std::size_t __hash)
      {
        return hash(&__val, sizeof(__val), __hash);
      }
  };
  struct  _Fnv_hash_impl
  {
      static inline ::std::size_t hash(const void *__ptr, ::std::size_t __clength, ::std::size_t __seed  = (static_cast< ::std::size_t>(2166136261LU)))
      {
        return ::std::_Fnv_hash_bytes(__ptr, __clength, __seed);
      }
      template < typename _Tp >
      static inline ::std::size_t hash(const _Tp &__val)
      {
        return hash(&__val, sizeof(__val));
      }
      template < typename _Tp >
      static inline ::std::size_t __hash_combine(const _Tp &__val, ::std::size_t __hash)
      {
        return hash(&__val, sizeof(__val), __hash);
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, float>' */ 
 /* Instantiation of template function 'unsigned long int ::std::_Hash_impl::hash<float>(const float &)' */ 
  template <>
  struct  hash<float> : ::std::__hash_base<unsigned long int, float>
  {
      inline ::std::size_t operator ()(float __val) const  noexcept(true)
      {
        return __val != 0.000000000000000000000000e+00f ? std::_Hash_impl::hash(__val) : 0;
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, double>' */ 
 /* Instantiation of template function 'unsigned long int ::std::_Hash_impl::hash<double>(const double &)' */ 
  template <>
  struct  hash<double> : ::std::__hash_base<unsigned long int, double>
  {
      inline ::std::size_t operator ()(double __val) const  noexcept(true)
      {
        return __val != 0.00000000000000000000000000000000000000000000000000000e+00 ? std::_Hash_impl::hash(__val) : 0;
      }
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, long double>' */ 
  template <>
  struct  hash<long double> : ::std::__hash_base<unsigned long int, long double>
  {
      ::std::size_t operator ()(long double __val) const  noexcept(true) __attribute__((__pure__));
  };
  template < typename _Hash >
  struct  __is_fast_hash : ::std::integral_constant<bool, true>
  {
  };
  template <>
  struct  __is_fast_hash< ::std::hash<long double> > : ::std::integral_constant<bool, false>
  {
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, ::std::basic_string<char> >' */ 
 /* Instantiation of template function 'const char *::std::basic_string<char>::data() const ' */ 
 /* Instantiation of template function '::std::allocator<char>::size_type ::std::basic_string<char>::length() const ' */ 
  template <>
  struct  hash< ::std::basic_string<char> > : ::std::__hash_base<unsigned long int, ::std::basic_string<char> >
  {
      inline ::std::size_t operator ()(const ::std::string &__s) const  noexcept(true)
      {
        return std::_Hash_impl::hash(__s.::std::basic_string<char>::data(), __s.::std::basic_string<char>::length() /* , static_cast<unsigned long int>(3339675911LU) */ );
      }
  };
  template <>
  struct  __is_fast_hash< ::std::hash< ::std::basic_string<char> > > : ::std::integral_constant<bool, false>
  {
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, ::std::basic_string<wchar_t> >' */ 
 /* Instantiation of template function 'const wchar_t *::std::basic_string<wchar_t>::data() const ' */ 
 /* Instantiation of template function '::std::allocator<wchar_t>::size_type ::std::basic_string<wchar_t>::length() const ' */ 
  template <>
  struct  hash< ::std::basic_string<wchar_t> > : ::std::__hash_base<unsigned long int, ::std::basic_string<wchar_t> >
  {
      inline ::std::size_t operator ()(const ::std::wstring &__s) const  noexcept(true)
      {
        return std::_Hash_impl::hash(__s.::std::basic_string<wchar_t>::data(), __s.::std::basic_string<wchar_t>::length() * sizeof(wchar_t) /* , static_cast<unsigned long int>(3339675911LU) */ );
      }
  };
  template <>
  struct  __is_fast_hash< ::std::hash< ::std::basic_string<wchar_t> > > : ::std::integral_constant<bool, false>
  {
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, ::std::basic_string<char16_t> >' */ 
 /* Instantiation of class template '::__gnu_cxx::new_allocator<char16_t>' */ 
 /* Instantiation of class template '::std::allocator<char16_t>' */ 
 /* Instantiation of class template '::std::allocator<char16_t>::rebind<char16_t>' */ 
 /* Instantiation of class template '::std::basic_string<char16_t>::_Alloc_hider' */ 
 /* Instantiation of class template '::std::basic_string<char16_t>' */ 
 /* Instantiation of template function 'const char16_t *::std::basic_string<char16_t>::data() const ' */ 
 /* Instantiation of template function '::std::allocator<char16_t>::size_type ::std::basic_string<char16_t>::length() const ' */ 
  template <>
  struct  hash< ::std::basic_string<char16_t> > : ::std::__hash_base<unsigned long int, ::std::basic_string<char16_t> >
  {
      inline ::std::size_t operator ()(const ::std::u16string &__s) const  noexcept(true)
      {
        return std::_Hash_impl::hash(__s.::std::basic_string<char16_t>::data(), __s.::std::basic_string<char16_t>::length() * sizeof(char16_t) /* , static_cast<unsigned long int>(3339675911LU) */ );
      }
  };
  template <>
  struct  __is_fast_hash< ::std::hash< ::std::basic_string<char16_t> > > : ::std::integral_constant<bool, false>
  {
  };
 /* Instantiation of class template '::std::__hash_base<unsigned long int, ::std::basic_string<char32_t> >' */ 
 /* Instantiation of class template '::__gnu_cxx::new_allocator<char32_t>' */ 
 /* Instantiation of class template '::std::allocator<char32_t>' */ 
 /* Instantiation of class template '::std::allocator<char32_t>::rebind<char32_t>' */ 
 /* Instantiation of class template '::std::basic_string<char32_t>::_Alloc_hider' */ 
 /* Instantiation of class template '::std::basic_string<char32_t>' */ 
 /* Instantiation of template function 'const char32_t *::std::basic_string<char32_t>::data() const ' */ 
 /* Instantiation of template function '::std::allocator<char32_t>::size_type ::std::basic_string<char32_t>::length() const ' */ 
  template <>
  struct  hash< ::std::basic_string<char32_t> > : ::std::__hash_base<unsigned long int, ::std::basic_string<char32_t> >
  {
      inline ::std::size_t operator ()(const ::std::u32string &__s) const  noexcept(true)
      {
        return std::_Hash_impl::hash(__s.::std::basic_string<char32_t>::data(), __s.::std::basic_string<char32_t>::length() * sizeof(char32_t) /* , static_cast<unsigned long int>(3339675911LU) */ );
      }
  };
  template <>
  struct  __is_fast_hash< ::std::hash< ::std::basic_string<char32_t> > > : ::std::integral_constant<bool, false>
  {
  };
  template < typename _CharT, typename _Traits, typename _Alloc >
  const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_max_size = ((::std::basic_string<_CharT, _Traits, _Alloc>::npos - sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep_base)) / sizeof(_CharT) - 1) / 4;
  template < typename _CharT, typename _Traits, typename _Alloc >
  const _CharT basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_terminal = _CharT();
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[(sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep_base) + sizeof(_CharT) + sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type) - 1) / sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type)];
  template < typename _CharT, typename _Traits, typename _Alloc >
  template < typename _InIterator >
  _CharT *basic_string<_CharT, _Traits, _Alloc>::_S_construct(_InIterator __beg, _InIterator __end, const _Alloc &__a, ::std::input_iterator_tag)
  {
    if (__beg == __end && __a == _Alloc())
      {
        return _S_empty_rep()._M_refdata();
      }
    _CharT __buf[128L];
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = 0;
    while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
      {
        __buf[__len++] = *__beg;
         ++__beg;
      }
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__r = _Rep::_S_create(__len, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __a);
    _M_copy(__r->_M_refdata(), __buf, __len);
    try
    {
      while (__beg != __end)
        {
          if (__len == __r->_M_capacity)
            {
              typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__another = _Rep::_S_create(__len + 1, __len, __a);
              _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
              __r->_M_destroy(__a);
              __r = __another;
            }
          __r->_M_refdata()[__len++] = *__beg;
           ++__beg;
        }
    }
    catch (...)
    {
      __r->_M_destroy(__a);
      throw;
    }
    __r->_M_set_length_and_sharable(__len);
    return __r->_M_refdata();
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  template < typename _InIterator >
  _CharT *basic_string<_CharT, _Traits, _Alloc>::_S_construct(_InIterator __beg, _InIterator __end, const _Alloc &__a, ::std::forward_iterator_tag)
  {
    if (__beg == __end && __a == _Alloc())
      {
        return _S_empty_rep()._M_refdata();
      }
    if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
      {
        ::std::__throw_logic_error("basic_string::_S_construct null not valid");
      }
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __dnew = static_cast<typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type>(std::distance(__beg, __end));
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__r = _Rep::_S_create(__dnew, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __a);
    try
    {
      _S_copy_chars(__r->_M_refdata(), __beg, __end);
    }
    catch (...)
    {
      __r->_M_destroy(__a);
      throw;
    }
    __r->_M_set_length_and_sharable(__dnew);
    return __r->_M_refdata();
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  _CharT *basic_string<_CharT, _Traits, _Alloc>::_S_construct(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c, const _Alloc &__a)
  {
    if (__n == 0 && __a == _Alloc())
      {
        return _S_empty_rep()._M_refdata();
      }
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__r = _Rep::_S_create(__n, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __a);
    if (__n)
      {
        _M_assign(__r->_M_refdata(), __n, __c);
      }
    __r->_M_set_length_and_sharable(__n);
    return __r->_M_refdata();
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()), __str.get_allocator()), __str.get_allocator())
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const _Alloc &__a)
    : _M_dataplus(_S_construct(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type())), _CharT(), __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
    : _M_dataplus(_S_construct(__str._M_data() + __str._M_check(__pos, "basic_string::basic_string"), __str._M_data() + __str._M_limit(__pos, __n) + __pos, _Alloc()), _Alloc())
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const _Alloc &__a)
    : _M_dataplus(_S_construct(__str._M_data() + __str._M_check(__pos, "basic_string::basic_string"), __str._M_data() + __str._M_limit(__pos, __n) + __pos, __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const _Alloc &__a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(const _CharT *__s, const _Alloc &__a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) : __s + ::std::basic_string<_CharT, _Traits, _Alloc>::npos, __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c, const _Alloc &__a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  template < typename _InputIterator >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc &__a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  basic_string<_CharT, _Traits, _Alloc>::basic_string(::std::initializer_list<_CharT> __l, const _Alloc &__a)
    : _M_dataplus(_S_construct(__l.begin(), __l.end(), __a), __a)
  {
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::assign(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
  {
    if ((*this)._M_rep() != __str._M_rep())
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::allocator_type __a = this->get_allocator();
        _CharT *__tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
        (*this)._M_rep()->_M_dispose(__a);
        (*this)._M_data(__tmp);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::assign(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
  {
    ;
    (*this)._M_check_length(this->size(), __n, "basic_string::assign");
    if ((*this)._M_disjunct(__s) || (*this)._M_rep()->_M_is_shared())
      {
        return (*this)._M_replace_safe(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), this->size(), __s, __n);
      }
    else
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos = __s - (*this)._M_data();
        if (__pos >= __n)
          {
            _M_copy((*this)._M_data(), __s, __n);
          }
        else
          {
            if (__pos)
              {
                _M_move((*this)._M_data(), __s, __n);
              }
          }
        (*this)._M_rep()->_M_set_length_and_sharable(__n);
        return *this;
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::append(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
  {
    if (__n)
      {
        (*this)._M_check_length(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __n, "basic_string::append");
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = __n + this->size();
        if (__len > this->capacity() || (*this)._M_rep()->_M_is_shared())
          {
            this->reserve(__len);
          }
        _M_assign((*this)._M_data() + this->size(), __n, __c);
        (*this)._M_rep()->_M_set_length_and_sharable(__len);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::append(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
  {
    ;
    if (__n)
      {
        (*this)._M_check_length(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __n, "basic_string::append");
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = __n + this->size();
        if (__len > this->capacity() || (*this)._M_rep()->_M_is_shared())
          {
            if ((*this)._M_disjunct(__s))
              {
                this->reserve(__len);
              }
            else
              {
                const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __off = __s - (*this)._M_data();
                this->reserve(__len);
                __s = (*this)._M_data() + __off;
              }
          }
        _M_copy((*this)._M_data() + this->size(), __s, __n);
        (*this)._M_rep()->_M_set_length_and_sharable(__len);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::append(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
  {
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = __str.size();
    if (__size)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = __size + this->size();
        if (__len > this->capacity() || (*this)._M_rep()->_M_is_shared())
          {
            this->reserve(__len);
          }
        _M_copy((*this)._M_data() + this->size(), __str._M_data(), __size);
        (*this)._M_rep()->_M_set_length_and_sharable(__len);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::append(const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
  {
    __str._M_check(__pos, "basic_string::append");
    __n = __str._M_limit(__pos, __n);
    if (__n)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = __n + this->size();
        if (__len > this->capacity() || (*this)._M_rep()->_M_is_shared())
          {
            this->reserve(__len);
          }
        _M_copy((*this)._M_data() + this->size(), __str._M_data() + __pos, __n);
        (*this)._M_rep()->_M_set_length_and_sharable(__len);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::insert(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n)
  {
    ;
    (*this)._M_check(__pos, "basic_string::insert");
    (*this)._M_check_length(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __n, "basic_string::insert");
    if ((*this)._M_disjunct(__s) || (*this)._M_rep()->_M_is_shared())
      {
        return (*this)._M_replace_safe(__pos, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))), __s, __n);
      }
    else
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __off = __s - (*this)._M_data();
        (*this)._M_mutate(__pos, 0, __n);
        __s = (*this)._M_data() + __off;
        _CharT *__p = (*this)._M_data() + __pos;
        if (__s + __n <= __p)
          {
            _M_copy(__p, __s, __n);
          }
        else
          {
            if (__s >= __p)
              {
                _M_copy(__p, __s + __n, __n);
              }
            else
              {
                const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __nleft = __p - __s;
                _M_copy(__p, __s, __nleft);
                _M_copy(__p + __nleft, __p + __n, __n - __nleft);
              }
          }
        return *this;
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator basic_string<_CharT, _Traits, _Alloc>::erase(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __first, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __last)
  {
    ;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = __last - __first;
    if (__size)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos = __first - (*this)._M_ibegin();
        (*this)._M_mutate(__pos, __size, ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(0))));
        (*this)._M_rep()->_M_set_leaked();
        return ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator((*this)._M_data() + __pos)));
      }
    else
      {
        return __first;
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::replace(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2)
  {
    ;
    (*this)._M_check(__pos, "basic_string::replace");
    __n1 = (*this)._M_limit(__pos, __n1);
    (*this)._M_check_length(__n1, __n2, "basic_string::replace");
    bool __left;
    if ((*this)._M_disjunct(__s) || (*this)._M_rep()->_M_is_shared())
      {
        return (*this)._M_replace_safe(__pos, __n1, __s, __n2);
      }
    else
      {
        if ((__left = __s + __n2 <= (*this)._M_data() + __pos) || (*this)._M_data() + __pos + __n1 <= __s)
          {
            typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __off = __s - (*this)._M_data();
            __left ? __off : __off += __n2 - __n1;
            (*this)._M_mutate(__pos, __n1, __n2);
            _M_copy((*this)._M_data() + __pos, (*this)._M_data() + __off, __n2);
            return *this;
          }
        else
          {
            const ::std::basic_string<_CharT, _Traits, _Alloc> __tmp(__s, __n2);
            return (*this)._M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
          }
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::_Rep::_M_destroy(const _Alloc &__a) throw()
  {
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep_base) + (this->_M_capacity + 1) * sizeof(_CharT);
    ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_Raw_bytes_alloc(__a))).deallocate(reinterpret_cast<char *>(this), __size);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::_M_leak_hard()
  {
    if ((*this)._M_rep() == &_S_empty_rep())
      {
        return ;
      }
    if ((*this)._M_rep()->_M_is_shared())
      {
        (*this)._M_mutate(0, 0, 0);
      }
    (*this)._M_rep()->_M_set_leaked();
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::_M_mutate(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len2)
  {
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __old_size = this->size();
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __new_size = __old_size + __len2 - __len1;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __how_much = __old_size - __pos - __len1;
    if (__new_size > this->capacity() || (*this)._M_rep()->_M_is_shared())
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::allocator_type __a = (*this).get_allocator();
        typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__r = _Rep::_S_create(__new_size, this->capacity(), __a);
        if (__pos)
          {
            _M_copy(__r->_M_refdata(), (*this)._M_data(), __pos);
          }
        if (__how_much)
          {
            _M_copy(__r->_M_refdata() + __pos + __len2, (*this)._M_data() + __pos + __len1, __how_much);
          }
        (*this)._M_rep()->_M_dispose(__a);
        (*this)._M_data(__r->_M_refdata());
      }
    else
      {
        if (__how_much && __len1 != __len2)
          {
            _M_move((*this)._M_data() + __pos + __len2, (*this)._M_data() + __pos + __len1, __how_much);
          }
      }
    (*this)._M_rep()->_M_set_length_and_sharable(__new_size);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::reserve(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __res)
  {
    if (__res != this->capacity() || (*this)._M_rep()->_M_is_shared())
      {
        if (__res < this->size())
          {
            __res = this->size();
          }
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::allocator_type __a = (*this).get_allocator();
        _CharT *__tmp = (*this)._M_rep()->_M_clone(__a, __res - this->size());
        (*this)._M_rep()->_M_dispose(__a);
        (*this)._M_data(__tmp);
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::swap(::std::basic_string<_CharT, _Traits, _Alloc> &__s)
  {
    if ((*this)._M_rep()->_M_is_leaked())
      {
        (*this)._M_rep()->_M_set_sharable();
      }
    if (__s._M_rep()->_M_is_leaked())
      {
        __s._M_rep()->_M_set_sharable();
      }
    if (this->get_allocator() == __s.get_allocator())
      {
        _CharT *__tmp = (*this)._M_data();
        (*this)._M_data(__s._M_data());
        __s._M_data(__tmp);
      }
    else
      {
        const ::std::basic_string<_CharT, _Traits, _Alloc> __tmp1((*this)._M_ibegin(), (*this)._M_iend(), __s.get_allocator());
        const ::std::basic_string<_CharT, _Traits, _Alloc> __tmp2(__s._M_ibegin(), __s._M_iend(), this->get_allocator());
        *this = __tmp2;
        __s = __tmp1;
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_create(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __capacity, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __old_capacity, const _Alloc &__alloc)
  {
    if (__capacity > ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_max_size)
      {
        ::std::__throw_length_error("basic_string::_S_create");
      }
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pagesize = 4096;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __malloc_header_size = 4 * sizeof(void *);
    if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
      {
        __capacity = 2 * __old_capacity;
      }
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __adj_size = __size + __malloc_header_size;
    if (__adj_size > __pagesize && __capacity > __old_capacity)
      {
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __extra = __pagesize - __adj_size % __pagesize;
        __capacity += __extra / sizeof(_CharT);
        if (__capacity > ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_max_size)
          {
            __capacity = ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_max_size;
          }
        __size = (__capacity + 1) * sizeof(_CharT) + sizeof(typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep);
      }
    void *__place = ((typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep::_Raw_bytes_alloc(__alloc))).allocate(__size);
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__p = new (__place)typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep();
    __p->_M_capacity = __capacity;
    __p->_M_set_sharable();
    return __p;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  _CharT *basic_string<_CharT, _Traits, _Alloc>::_Rep::_M_clone(const _Alloc &__alloc, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __res)
  {
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __requested_cap = this->_M_length + __res;
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::_Rep *__r = _Rep::_S_create(__requested_cap, this->_M_capacity, __alloc);
    if (this->_M_length)
      {
        _M_copy(__r->_M_refdata(), (*this)._M_refdata(), this->_M_length);
      }
    __r->_M_set_length_and_sharable(this->_M_length);
    return __r->_M_refdata();
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  void basic_string<_CharT, _Traits, _Alloc>::resize(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, _CharT __c)
  {
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    (*this)._M_check_length(__size, __n, "basic_string::resize");
    if (__size < __n)
      {
        this->append(__n - __size, __c);
      }
    else
      {
        if (__n < __size)
          {
            this->erase(__n);
          }
      }
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  template < typename _InputIterator >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::_M_replace_dispatch(typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::iterator __i2, _InputIterator __k1, _InputIterator __k2, ::std::__false_type)
  {
    const ::std::basic_string<_CharT, _Traits, _Alloc> __s(__k1, __k2);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1 = __i2 - __i1;
    (*this)._M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
    return (*this)._M_replace_safe(__i1 - (*this)._M_ibegin(), __n1, __s._M_data(), __s.size());
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::_M_replace_aux(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2, _CharT __c)
  {
    (*this)._M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
    (*this)._M_mutate(__pos1, __n1, __n2);
    if (__n2)
      {
        _M_assign((*this)._M_data() + __pos1, __n2, __c);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> &basic_string<_CharT, _Traits, _Alloc>::_M_replace_safe(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2)
  {
    (*this)._M_mutate(__pos1, __n1, __n2);
    if (__n2)
      {
        _M_copy((*this)._M_data() + __pos1, __s, __n2);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(const _CharT *__lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    ;
    typedef ::std::basic_string<_CharT, _Traits, _Alloc> __string_type;
    typedef typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size_type;
    const __size_type __len = _Traits::length(__lhs);
    __string_type __str;
    __str.reserve(__len + __rhs.size());
    __str.append(__lhs, __len);
    __str.append(__rhs);
    return __str;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_string<_CharT, _Traits, _Alloc> operator +(_CharT __lhs, const ::std::basic_string<_CharT, _Traits, _Alloc> &__rhs)
  {
    typedef ::std::basic_string<_CharT, _Traits, _Alloc> __string_type;
    typedef typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size_type;
    __string_type __str;
    const __size_type __len = __rhs.size();
    __str.reserve(__len + 1);
    __str.append(__size_type(1), __lhs);
    __str.append(__rhs);
    return __str;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::copy(_CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const 
  {
    (*this)._M_check(__pos, "basic_string::copy");
    __n = (*this)._M_limit(__pos, __n);
    ;
    if (__n)
      {
        _M_copy(__s, (*this)._M_data() + __pos, __n);
      }
    return __n;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    const _CharT *__data = (*this)._M_data();
    if (__n == 0)
      {
        return __pos <= __size ? __pos : ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
      }
    if (__n <= __size)
      {
        for (; __pos <= __size - __n;  ++__pos)
          {
            if (traits_type::eq(__data[__pos], __s[0]) && traits_type::compare(__data + __pos + 1, __s + 1, __n - 1) == 0)
              {
                return __pos;
              }
          }
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const  noexcept(true)
  {
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __ret = ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__pos < __size)
      {
        const _CharT *__data = (*this)._M_data();
        const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n = __size - __pos;
        const _CharT *__p = traits_type::find(__data + __pos, __n, __c);
        if (__p)
          {
            __ret = __p - __data;
          }
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::rfind(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__n <= __size)
      {
        __pos = std::min(((typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type(__size - __n))), __pos);
        const _CharT *__data = (*this)._M_data();
        do
          {
            if (traits_type::compare(__data + __pos, __s, __n) == 0)
              {
                return __pos;
              }
          }
        while (__pos-- > 0);
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::rfind(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const  noexcept(true)
  {
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__size)
      {
        if ( --__size > __pos)
          {
            __size = __pos;
          }
        for ( ++__size; __size-- > 0; )
          {
            if (traits_type::eq((*this)._M_data()[__size], __c))
              {
                return __size;
              }
          }
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_first_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    for (; __n && __pos < this->size();  ++__pos)
      {
        const _CharT *__p = traits_type::find(__s, __n, (*this)._M_data()[__pos]);
        if (__p)
          {
            return __pos;
          }
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_last_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__size && __n)
      {
        if ( --__size > __pos)
          {
            __size = __pos;
          }
        do
          {
            if (traits_type::find(__s, __n, (*this)._M_data()[__size]))
              {
                return __size;
              }
          }
        while (__size-- != 0);
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_first_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    for (; __pos < this->size();  ++__pos)
      {
        if (!traits_type::find(__s, __n, (*this)._M_data()[__pos]))
          {
            return __pos;
          }
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_first_not_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const  noexcept(true)
  {
    for (; __pos < this->size();  ++__pos)
      {
        if (!traits_type::eq((*this)._M_data()[__pos], __c))
          {
            return __pos;
          }
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_last_not_of(const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n) const 
  {
    ;
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__size)
      {
        if ( --__size > __pos)
          {
            __size = __pos;
          }
        do
          {
            if (!traits_type::find(__s, __n, (*this)._M_data()[__size]))
              {
                return __size;
              }
          }
        while (__size--);
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type basic_string<_CharT, _Traits, _Alloc>::find_last_not_of(_CharT __c, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos) const  noexcept(true)
  {
    typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    if (__size)
      {
        if ( --__size > __pos)
          {
            __size = __pos;
          }
        do
          {
            if (!traits_type::eq((*this)._M_data()[__size], __c))
              {
                return __size;
              }
          }
        while (__size--);
      }
    return ::std::basic_string<_CharT, _Traits, _Alloc>::npos;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  int basic_string<_CharT, _Traits, _Alloc>::compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str) const 
  {
    (*this)._M_check(__pos, "basic_string::compare");
    __n = (*this)._M_limit(__pos, __n);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __osize = __str.size();
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__n, __osize);
    int __r = traits_type::compare((*this)._M_data() + __pos, __str.data(), __len);
    if (!__r)
      {
        __r = _S_compare(__n, __osize);
      }
    return __r;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  int basic_string<_CharT, _Traits, _Alloc>::compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos1, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__str, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos2, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2) const 
  {
    (*this)._M_check(__pos1, "basic_string::compare");
    __str._M_check(__pos2, "basic_string::compare");
    __n1 = (*this)._M_limit(__pos1, __n1);
    __n2 = __str._M_limit(__pos2, __n2);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__n1, __n2);
    int __r = traits_type::compare((*this)._M_data() + __pos1, __str.data() + __pos2, __len);
    if (!__r)
      {
        __r = _S_compare(__n1, __n2);
      }
    return __r;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  int basic_string<_CharT, _Traits, _Alloc>::compare(const _CharT *__s) const 
  {
    ;
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size = this->size();
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __osize = traits_type::length(__s);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__size, __osize);
    int __r = traits_type::compare((*this)._M_data(), __s, __len);
    if (!__r)
      {
        __r = _S_compare(__size, __osize);
      }
    return __r;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  int basic_string<_CharT, _Traits, _Alloc>::compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s) const 
  {
    ;
    (*this)._M_check(__pos, "basic_string::compare");
    __n1 = (*this)._M_limit(__pos, __n1);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __osize = traits_type::length(__s);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__n1, __osize);
    int __r = traits_type::compare((*this)._M_data() + __pos, __s, __len);
    if (!__r)
      {
        __r = _S_compare(__n1, __osize);
      }
    return __r;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  int basic_string<_CharT, _Traits, _Alloc>::compare(typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __pos, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n1, const _CharT *__s, typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __n2) const 
  {
    ;
    (*this)._M_check(__pos, "basic_string::compare");
    __n1 = (*this)._M_limit(__pos, __n1);
    const typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __len = std::min(__n1, __n2);
    int __r = traits_type::compare((*this)._M_data() + __pos, __s, __len);
    if (!__r)
      {
        __r = _S_compare(__n1, __n2);
      }
    return __r;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, ::std::basic_string<_CharT, _Traits, _Alloc> &__str)
  {
    typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
    typedef ::std::basic_string<_CharT, _Traits, _Alloc> __string_type;
    typedef typename ::std::basic_istream<_CharT, _Traits>::ios_base __ios_base;
    typedef typename ::std::basic_istream<_CharT, _Traits>::int_type __int_type;
    typedef typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size_type;
    typedef ::std::ctype<_CharT> __ctype_type;
    typedef typename ::std::ctype<_CharT>::ctype_base __ctype_base;
    __size_type __extracted = 0;
    typename ::std::basic_istream<_CharT, _Traits>::ios_base::iostate __err = __ios_base::goodbit;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(__in, false);
    if (__cerb)
      {
        try
        {
          __str.erase();
          _CharT __buf[128L];
          __size_type __len = 0;
          const ::std::streamsize __w = __in.width();
          const __size_type __n = __w > 0 ? static_cast<__size_type>(__w) : __str.max_size();
          const __ctype_type &__ct = use_facet<__ctype_type>(__in.getloc());
          const __int_type __eof = _Traits::eof();
          __int_type __c = __in.rdbuf()->sgetc();
          while ((__extracted < __n && !_Traits::eq_int_type(__c, __eof)) && !__ct.is(__ctype_base::space, _Traits::to_char_type(__c)))
            {
              if (__len == sizeof(__buf) / sizeof(_CharT))
                {
                  __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
                  __len = 0;
                }
              __buf[__len++] = _Traits::to_char_type(__c);
               ++__extracted;
              __c = __in.rdbuf()->snextc();
            }
          __str.append(__buf, __len);
          if (_Traits::eq_int_type(__c, __eof))
            {
              __err |= __ios_base::eofbit;
            }
          __in.width(0);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __in._M_setstate(__ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __in._M_setstate(__ios_base::badbit);
        }
      }
    if (!__extracted)
      {
        __err |= __ios_base::failbit;
      }
    if (__err)
      {
        __in.setstate(__err);
      }
    return __in;
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  ::std::basic_istream<_CharT, _Traits> &getline(::std::basic_istream<_CharT, _Traits> &__in, ::std::basic_string<_CharT, _Traits, _Alloc> &__str, _CharT __delim)
  {
    typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
    typedef ::std::basic_string<_CharT, _Traits, _Alloc> __string_type;
    typedef typename ::std::basic_istream<_CharT, _Traits>::ios_base __ios_base;
    typedef typename ::std::basic_istream<_CharT, _Traits>::int_type __int_type;
    typedef typename ::std::basic_string<_CharT, _Traits, _Alloc>::size_type __size_type;
    __size_type __extracted = 0;
    const __size_type __n = __str.max_size();
    typename ::std::basic_istream<_CharT, _Traits>::ios_base::iostate __err = __ios_base::goodbit;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(__in, true);
    if (__cerb)
      {
        try
        {
          __str.erase();
          const __int_type __idelim = _Traits::to_int_type(__delim);
          const __int_type __eof = _Traits::eof();
          __int_type __c = __in.rdbuf()->sgetc();
          while ((__extracted < __n && !_Traits::eq_int_type(__c, __eof)) && !_Traits::eq_int_type(__c, __idelim))
            {
              __str += _Traits::to_char_type(__c);
               ++__extracted;
              __c = __in.rdbuf()->snextc();
            }
          if (_Traits::eq_int_type(__c, __eof))
            {
              __err |= __ios_base::eofbit;
            }
          else
            {
              if (_Traits::eq_int_type(__c, __idelim))
                {
                   ++__extracted;
                  __in.rdbuf()->sbumpc();
                }
              else
                {
                  __err |= __ios_base::failbit;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __in._M_setstate(__ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __in._M_setstate(__ios_base::badbit);
        }
      }
    if (!__extracted)
      {
        __err |= __ios_base::failbit;
      }
    if (__err)
      {
        __in.setstate(__err);
      }
    return __in;
  }
  extern template class ::std::basic_string<char>;
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, ::std::basic_string<char> &);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, const ::std::basic_string<char> &);
  extern template ::std::basic_istream<char> &getline(::std::basic_istream<char> &, ::std::basic_string<char> &, char);
  extern template ::std::basic_istream<char> &getline(::std::basic_istream<char> &, ::std::basic_string<char> &);
  extern template class ::std::basic_string<wchar_t>;
  extern template ::std::basic_istream<wchar_t> &operator >>(::std::basic_istream<wchar_t> &, ::std::basic_string<wchar_t> &);
  extern template ::std::basic_ostream<wchar_t> &operator <<(::std::basic_ostream<wchar_t> &, const ::std::basic_string<wchar_t> &);
  extern template ::std::basic_istream<wchar_t> &getline(::std::basic_istream<wchar_t> &, ::std::basic_string<wchar_t> &, wchar_t);
  extern template ::std::basic_istream<wchar_t> &getline(::std::basic_istream<wchar_t> &, ::std::basic_string<wchar_t> &);
  class  locale
  {
    public:
      typedef int category;
      class facet;
      class id;
      class _Impl;
      static const ::std::locale::category none = 0;
      static const ::std::locale::category ctype = 1L << 0;
      static const ::std::locale::category numeric = 1L << 1;
      static const ::std::locale::category collate = 1L << 2;
      static const ::std::locale::category time = 1L << 3;
      static const ::std::locale::category monetary = 1L << 4;
      static const ::std::locale::category messages = 1L << 5;
      static const ::std::locale::category all = ((((::std::locale::ctype | ::std::locale::numeric) | ::std::locale::collate) | ::std::locale::time) | ::std::locale::monetary) | ::std::locale::messages;
      locale() throw();
      locale(const ::std::locale &__other) throw();
      explicit locale(const char *__s);
      locale(const ::std::locale &__base, const char *__s, ::std::locale::category __cat);
      locale(const ::std::locale &__base, const ::std::locale &__add, ::std::locale::category __cat);
      template < typename _Facet >
      locale(const ::std::locale &__other, _Facet *__f);
      ~locale() throw();
      const ::std::locale &operator =(const ::std::locale &__other) throw();
      template < typename _Facet >
      ::std::locale combine(const ::std::locale &__other) const ;
      ::std::string name() const ;
      bool operator ==(const ::std::locale &__other) const  throw();
      inline bool operator !=(const ::std::locale &__other) const  throw()
      {
        return !(*this).::std::locale::operator ==(__other);
      }
      template < typename _Char, typename _Traits, typename _Alloc >
      bool operator ()(const ::std::basic_string<_Char, _Traits, _Alloc> &__s1, const ::std::basic_string<_Char, _Traits, _Alloc> &__s2) const ;
      static ::std::locale global(const ::std::locale &__loc);
      static const ::std::locale &classic();
    private:
      ::std::locale::_Impl *_M_impl;
      static ::std::locale::_Impl *_S_classic;
      static ::std::locale::_Impl *_S_global;
      static const char *const *const _S_categories;
      enum mcc_enum_anon_50
      {
        _S_categories_size = 6 + 6
      };
      static ::__gthread_once_t _S_once;
      explicit locale(::std::locale::_Impl *) throw();
      static void _S_initialize();
      static void _S_initialize_once() throw();
      static ::std::locale::category _S_normalize_category(::std::locale::category);
      void _M_coalesce(const ::std::locale &__base, const ::std::locale &__add, ::std::locale::category __cat);
    friend class ::std::locale::facet;
    friend class ::std::locale::_Impl;
    template < typename _Facet >
    friend bool (::std::has_facet)(const ::std::locale &) throw();
    template < typename _Facet >
    friend const _Facet &(::std::use_facet)(const ::std::locale &);
    template < typename _Cache >
    friend struct __use_cache;
  };
  class  locale::facet
  {
      mutable ::_Atomic_word _M_refcount;
      static ::std::__c_locale _S_c_locale;
      static const char _S_c_name[2L];
      static ::__gthread_once_t _S_once;
      static void _S_initialize_once();
    protected:
      inline explicit facet(::std::size_t __refs  = (0)) throw()
        : _M_refcount(__refs ? 1 : 0)
      {
      }
      virtual ~facet();
      static void _S_create_c_locale(::std::__c_locale &__cloc, const char *__s, ::std::__c_locale __old  = (0));
      static ::std::__c_locale _S_clone_c_locale(::std::__c_locale &__cloc) throw();
      static void _S_destroy_c_locale(::std::__c_locale &__cloc);
      static ::std::__c_locale _S_lc_ctype_c_locale(::std::__c_locale __cloc, const char *__s);
      static ::std::__c_locale _S_get_c_locale();
      static const char *_S_get_c_name() throw() __attribute__((__const__));
    private:
      inline void _M_add_reference() const  throw()
      {
        __gnu_cxx::__atomic_add_dispatch(&(*this)._M_refcount, 1);
      }
      inline void _M_remove_reference() const  throw()
      {
        ;
        if (__gnu_cxx::__exchange_and_add_dispatch(&(*this)._M_refcount,  -1) == 1)
          {
            ;
            try
            {
              delete this;
            }
            catch (...)
            {
            }
          }
      }
      facet(const ::std::locale::facet &);
      ::std::locale::facet &operator =(const ::std::locale::facet &);
    friend class locale;
    friend class ::std::locale::_Impl;
  };
  class  locale::id
  {
      mutable ::std::size_t _M_index;
      static ::_Atomic_word _S_refcount;
      void operator =(const ::std::locale::id &);
      id(const ::std::locale::id &);
    public:
      inline id()
      {
      }
      ::std::size_t _M_id() const  throw();
    friend class locale;
    friend class ::std::locale::_Impl;
    template < typename _Facet >
    friend const _Facet &(::std::use_facet)(const ::std::locale &);
    template < typename _Facet >
    friend bool (::std::has_facet)(const ::std::locale &) throw();
  };
  class  locale::_Impl
  {
      ::_Atomic_word _M_refcount;
      const ::std::locale::facet **_M_facets;
      ::std::size_t _M_facets_size;
      const ::std::locale::facet **_M_caches;
      char **_M_names;
      static const ::std::locale::id *const _S_id_ctype[];
      static const ::std::locale::id *const _S_id_numeric[];
      static const ::std::locale::id *const _S_id_collate[];
      static const ::std::locale::id *const _S_id_time[];
      static const ::std::locale::id *const _S_id_monetary[];
      static const ::std::locale::id *const _S_id_messages[];
      static const ::std::locale::id *const *const _S_facet_categories[];
      inline void _M_add_reference() throw()
      {
        __gnu_cxx::__atomic_add_dispatch(&(*this)._M_refcount, 1);
      }
      inline void _M_remove_reference() throw()
      {
        ;
        if (__gnu_cxx::__exchange_and_add_dispatch(&(*this)._M_refcount,  -1) == 1)
          {
            ;
            try
            {
              delete this;
            }
            catch (...)
            {
            }
          }
      }
      _Impl(const ::std::locale::_Impl &, ::std::size_t);
      _Impl(const char *, ::std::size_t);
      _Impl(::std::size_t) throw();
      ~_Impl() throw();
      _Impl(const ::std::locale::_Impl &);
      void operator =(const ::std::locale::_Impl &);
      inline bool _M_check_same_name()
      {
        bool __ret(true);
        if ((*this)._M_names[1])
          {
            for (::std::size_t __i(0); __ret && __i < ::std::locale::_S_categories_size - 1;  ++__i)
              {
                __ret = __builtin_strcmp((*this)._M_names[__i], (*this)._M_names[__i + 1]) == 0;
              }
          }
        return __ret;
      }
      void _M_replace_categories(const ::std::locale::_Impl *, ::std::locale::category);
      void _M_replace_category(const ::std::locale::_Impl *, const ::std::locale::id *const *);
      void _M_replace_facet(const ::std::locale::_Impl *, const ::std::locale::id *);
      void _M_install_facet(const ::std::locale::id *, const ::std::locale::facet *);
      template < typename _Facet >
      inline void _M_init_facet(_Facet *__facet)
      {
        _M_install_facet(&_Facet::id, __facet);
      }
      void _M_install_cache(const ::std::locale::facet *, ::std::size_t);
    friend class locale;
    friend class ::std::locale::facet;
    template < typename _Facet >
    friend bool (::std::has_facet)(const ::std::locale &) throw();
    template < typename _Facet >
    friend const _Facet &(::std::use_facet)(const ::std::locale &);
    template < typename _Cache >
    friend struct __use_cache;
  };
  template < typename _CharT >
  class  collate : public ::std::locale::facet
  {
    public:
      typedef _CharT char_type;
      typedef ::std::basic_string<_CharT> string_type;
    protected:
      ::std::__c_locale _M_c_locale_collate;
    public:
      static ::std::locale::id id;
      inline explicit collate(::std::size_t __refs  = (0))
        : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      {
      }
      inline explicit collate(::std::__c_locale __cloc, ::std::size_t __refs  = (0))
        : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      {
      }
      inline int compare(const _CharT *__lo1, const _CharT *__hi1, const _CharT *__lo2, const _CharT *__hi2) const 
      {
        return this->do_compare(__lo1, __hi1, __lo2, __hi2);
      }
      inline typename ::std::collate<_CharT>::string_type transform(const _CharT *__lo, const _CharT *__hi) const 
      {
        return this->do_transform(__lo, __hi);
      }
      inline long int hash(const _CharT *__lo, const _CharT *__hi) const 
      {
        return this->do_hash(__lo, __hi);
      }
      int _M_compare(const _CharT *, const _CharT *) const  throw();
      ::std::size_t _M_transform(_CharT *, const _CharT *, ::std::size_t) const  throw();
    protected:
      inline virtual ~collate()
      {
        _S_destroy_c_locale(::std::collate<_CharT>::_M_c_locale_collate);
      }
      virtual int do_compare(const _CharT *__lo1, const _CharT *__hi1, const _CharT *__lo2, const _CharT *__hi2) const ;
      virtual typename ::std::collate<_CharT>::string_type do_transform(const _CharT *__lo, const _CharT *__hi) const ;
      virtual long int do_hash(const _CharT *__lo, const _CharT *__hi) const ;
  };
  template < typename _CharT >
  ::std::locale::id collate<_CharT>::id;
 /* Instantiation of class template '::std::collate<char>' */ 
  template <>
  int collate<char>::_M_compare(const char *, const char *) const  throw();
  template <>
  unsigned long int collate<char>::_M_transform(char *, const char *, unsigned long int) const  throw();
 /* Instantiation of class template '::std::collate<wchar_t>' */ 
  template <>
  int collate<wchar_t>::_M_compare(const wchar_t *, const wchar_t *) const  throw();
  template <>
  unsigned long int collate<wchar_t>::_M_transform(wchar_t *, const wchar_t *, unsigned long int) const  throw();
  template < typename _CharT >
  class  collate_byname : public ::std::collate<_CharT>
  {
    public:
      typedef _CharT char_type;
      typedef ::std::basic_string<_CharT> string_type;
      inline explicit collate_byname(const char *__s, ::std::size_t __refs  = (0))
        : collate<_CharT>(__refs)
      {
        if (__builtin_strcmp(__s, "C") != 0 && __builtin_strcmp(__s, "POSIX") != 0)
          {
            this->_S_destroy_c_locale(this->_M_c_locale_collate);
            this->_S_create_c_locale(this->_M_c_locale_collate, __s);
          }
      }
    protected:
      inline virtual ~collate_byname()
      {
      }
  };
  template < typename _Facet >
  locale::locale(const ::std::locale &__other, _Facet *__f)
  {
    (*this)._M_impl = new (::std::locale::_Impl)((*__other._M_impl), (1));
    try
    {
      (*(*this)._M_impl)._M_install_facet(&_Facet::id, __f);
    }
    catch (...)
    {
      (*(*this)._M_impl).::std::locale::_Impl::_M_remove_reference();
      throw;
    }
    delete[] (*(*this)._M_impl)._M_names[0];
    (*(*this)._M_impl)._M_names[0] = 0;
  }
  template < typename _Facet >
  ::std::locale locale::combine(const ::std::locale &__other) const 
  {
    ::std::locale::_Impl *__tmp(new (::std::locale::_Impl)((*(*this)._M_impl), (1)));
    try
    {
      (*__tmp)._M_replace_facet(__other._M_impl, &_Facet::id);
    }
    catch (...)
    {
      (*__tmp).::std::locale::_Impl::_M_remove_reference();
      throw;
    }
    return ::std::locale(__tmp);
  }
  template < typename _CharT, typename _Traits, typename _Alloc >
  bool locale::operator ()(const ::std::basic_string<_CharT, _Traits, _Alloc> &__s1, const ::std::basic_string<_CharT, _Traits, _Alloc> &__s2) const 
  {
    typedef ::std::collate<_CharT> __collate_type;
    const __collate_type &__collate = use_facet<__collate_type>(*this);
    return __collate.compare(__s1.data(), __s1.data() + __s1.length(), __s2.data(), __s2.data() + __s2.length()) < 0;
  }
  template < typename _Facet >
  bool has_facet(const ::std::locale &__loc) throw()
  {
    const ::std::size_t __i = _Facet::id._M_id();
    const ::std::locale::facet **__facets((*__loc._M_impl)._M_facets);
    return __i < (*__loc._M_impl)._M_facets_size && dynamic_cast<const _Facet *>(__facets[__i]);
  }
  template < typename _Facet >
  const _Facet &use_facet(const ::std::locale &__loc)
  {
    const ::std::size_t __i = _Facet::id._M_id();
    const ::std::locale::facet **__facets((*__loc._M_impl)._M_facets);
    if (__i >= (*__loc._M_impl)._M_facets_size || !__facets[__i])
      {
        ::std::__throw_bad_cast();
      }
    return dynamic_cast<const _Facet &>(*__facets[__i]);
  }
  template < typename _CharT >
  int collate<_CharT>::_M_compare(const _CharT *, const _CharT *) const  throw()
  {
    return 0;
  }
  template < typename _CharT >
  ::std::size_t collate<_CharT>::_M_transform(_CharT *, const _CharT *, ::std::size_t) const  throw()
  {
    return 0;
  }
  template < typename _CharT >
  int collate<_CharT>::do_compare(const _CharT *__lo1, const _CharT *__hi1, const _CharT *__lo2, const _CharT *__hi2) const 
  {
    const typename ::std::collate<_CharT>::string_type __one(__lo1, __hi1);
    const typename ::std::collate<_CharT>::string_type __two(__lo2, __hi2);
    const _CharT *__p = __one.c_str();
    const _CharT *__pend = __one.data() + __one.length();
    const _CharT *__q = __two.c_str();
    const _CharT *__qend = __two.data() + __two.length();
    for (; ; )
      {
        const int __res = (*this)._M_compare(__p, __q);
        if (__res)
          {
            return __res;
          }
        __p += char_traits<_CharT>::length(__p);
        __q += char_traits<_CharT>::length(__q);
        if (__p == __pend && __q == __qend)
          {
            return 0;
          }
        else
          {
            if (__p == __pend)
              {
                return  -1;
              }
            else
              {
                if (__q == __qend)
                  {
                    return 1;
                  }
              }
          }
        __p++;
        __q++;
      }
  }
  template < typename _CharT >
  typename ::std::collate<_CharT>::string_type collate<_CharT>::do_transform(const _CharT *__lo, const _CharT *__hi) const 
  {
    typename ::std::collate<_CharT>::string_type __ret;
    const typename ::std::collate<_CharT>::string_type __str(__lo, __hi);
    const _CharT *__p = __str.c_str();
    const _CharT *__pend = __str.data() + __str.length();
    ::std::size_t __len = (__hi - __lo) * 2;
    _CharT *__c = new _CharT [__len];
    try
    {
      for (; ; )
        {
          ::std::size_t __res = (*this)._M_transform(__c, __p, __len);
          if (__res >= __len)
            {
              __len = __res + 1;
              (delete[] __c, __c = 0);
              __c = (new _CharT [__len]);
              __res = (*this)._M_transform(__c, __p, __len);
            }
          __ret.append(__c, __res);
          __p += char_traits<_CharT>::length(__p);
          if (__p == __pend)
            {
              break;
            }
          __p++;
          __ret.push_back(_CharT());
        }
    }
    catch (...)
    {
      delete[] __c;
      throw;
    }
    delete[] __c;
    return __ret;
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, ::__gnu_cxx::__numeric_traits_integer<unsigned long int>, ::__gnu_cxx::__numeric_traits_floating<unsigned long int> >' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_integer<unsigned long int>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<unsigned long int>' */ 
  template < typename _CharT >
  long int collate<_CharT>::do_hash(const _CharT *__lo, const _CharT *__hi) const 
  {
    unsigned long int __val(0);
    for (; __lo < __hi;  ++__lo)
      {
        __val = *__lo + (__val << 7 | __val >> (::__gnu_cxx::__numeric_traits_integer<unsigned long int>::__digits - 7));
      }
    return static_cast<long int>(__val);
  }
  extern template class ::std::collate<char>;
  extern template class ::std::collate_byname<char>;
  extern template const ::std::collate<char> &use_facet< ::std::collate<char> >(const ::std::locale &);
  extern template bool has_facet< ::std::collate<char> >(const ::std::locale &);
  extern template class ::std::collate<wchar_t>;
  extern template class ::std::collate_byname<wchar_t>;
  extern template const ::std::collate<wchar_t> &use_facet< ::std::collate<wchar_t> >(const ::std::locale &);
  extern template bool has_facet< ::std::collate<wchar_t> >(const ::std::locale &);
  enum _Ios_Fmtflags
  {
    _S_boolalpha = 1L << 0,
    _S_dec = 1L << 1,
    _S_fixed = 1L << 2,
    _S_hex = 1L << 3,
    _S_internal = 1L << 4,
    _S_left = 1L << 5,
    _S_oct = 1L << 6,
    _S_right = 1L << 7,
    _S_scientific = 1L << 8,
    _S_showbase = 1L << 9,
    _S_showpoint = 1L << 10,
    _S_showpos = 1L << 11,
    _S_skipws = 1L << 12,
    _S_unitbuf = 1L << 13,
    _S_uppercase = 1L << 14,
    _S_adjustfield = (::std::_S_left | ::std::_S_right) | ::std::_S_internal,
    _S_basefield = (::std::_S_dec | ::std::_S_oct) | ::std::_S_hex,
    _S_floatfield = ::std::_S_scientific | ::std::_S_fixed,
    _S_ios_fmtflags_end = 1L << 16,
    _S_ios_fmtflags_max = 2147483647,
    _S_ios_fmtflags_min = ~2147483647
  };
  inline constexpr ::std::_Ios_Fmtflags operator &(::std::_Ios_Fmtflags __a, ::std::_Ios_Fmtflags __b)
  {
    return (::std::_Ios_Fmtflags)(static_cast<int>(__a) & static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Fmtflags operator |(::std::_Ios_Fmtflags __a, ::std::_Ios_Fmtflags __b)
  {
    return (::std::_Ios_Fmtflags)(static_cast<int>(__a) | static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Fmtflags operator ^(::std::_Ios_Fmtflags __a, ::std::_Ios_Fmtflags __b)
  {
    return (::std::_Ios_Fmtflags)(static_cast<int>(__a) ^ static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Fmtflags operator ~(::std::_Ios_Fmtflags __a)
  {
    return (::std::_Ios_Fmtflags)~static_cast<int>(__a);
  }
  inline const ::std::_Ios_Fmtflags &operator |=(::std::_Ios_Fmtflags &__a, ::std::_Ios_Fmtflags __b)
  {
    return __a = __a | __b;
  }
  inline const ::std::_Ios_Fmtflags &operator &=(::std::_Ios_Fmtflags &__a, ::std::_Ios_Fmtflags __b)
  {
    return __a = __a & __b;
  }
  inline const ::std::_Ios_Fmtflags &operator ^=(::std::_Ios_Fmtflags &__a, ::std::_Ios_Fmtflags __b)
  {
    return __a = __a ^ __b;
  }
  enum _Ios_Openmode
  {
    _S_app = 1L << 0,
    _S_ate = 1L << 1,
    _S_bin = 1L << 2,
    _S_in = 1L << 3,
    _S_out = 1L << 4,
    _S_trunc = 1L << 5,
    _S_ios_openmode_end = 1L << 16,
    _S_ios_openmode_max = 2147483647,
    _S_ios_openmode_min = ~2147483647
  };
  inline constexpr ::std::_Ios_Openmode operator &(::std::_Ios_Openmode __a, ::std::_Ios_Openmode __b)
  {
    return (::std::_Ios_Openmode)(static_cast<int>(__a) & static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Openmode operator |(::std::_Ios_Openmode __a, ::std::_Ios_Openmode __b)
  {
    return (::std::_Ios_Openmode)(static_cast<int>(__a) | static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Openmode operator ^(::std::_Ios_Openmode __a, ::std::_Ios_Openmode __b)
  {
    return (::std::_Ios_Openmode)(static_cast<int>(__a) ^ static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Openmode operator ~(::std::_Ios_Openmode __a)
  {
    return (::std::_Ios_Openmode)~static_cast<int>(__a);
  }
  inline const ::std::_Ios_Openmode &operator |=(::std::_Ios_Openmode &__a, ::std::_Ios_Openmode __b)
  {
    return __a = __a | __b;
  }
  inline const ::std::_Ios_Openmode &operator &=(::std::_Ios_Openmode &__a, ::std::_Ios_Openmode __b)
  {
    return __a = __a & __b;
  }
  inline const ::std::_Ios_Openmode &operator ^=(::std::_Ios_Openmode &__a, ::std::_Ios_Openmode __b)
  {
    return __a = __a ^ __b;
  }
  enum _Ios_Iostate
  {
    _S_goodbit = 0,
    _S_badbit = 1L << 0,
    _S_eofbit = 1L << 1,
    _S_failbit = 1L << 2,
    _S_ios_iostate_end = 1L << 16,
    _S_ios_iostate_max = 2147483647,
    _S_ios_iostate_min = ~2147483647
  };
  inline constexpr ::std::_Ios_Iostate operator &(::std::_Ios_Iostate __a, ::std::_Ios_Iostate __b)
  {
    return (::std::_Ios_Iostate)(static_cast<int>(__a) & static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Iostate operator |(::std::_Ios_Iostate __a, ::std::_Ios_Iostate __b)
  {
    return (::std::_Ios_Iostate)(static_cast<int>(__a) | static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Iostate operator ^(::std::_Ios_Iostate __a, ::std::_Ios_Iostate __b)
  {
    return (::std::_Ios_Iostate)(static_cast<int>(__a) ^ static_cast<int>(__b));
  }
  inline constexpr ::std::_Ios_Iostate operator ~(::std::_Ios_Iostate __a)
  {
    return (::std::_Ios_Iostate)~static_cast<int>(__a);
  }
  inline const ::std::_Ios_Iostate &operator |=(::std::_Ios_Iostate &__a, ::std::_Ios_Iostate __b)
  {
    return __a = __a | __b;
  }
  inline const ::std::_Ios_Iostate &operator &=(::std::_Ios_Iostate &__a, ::std::_Ios_Iostate __b)
  {
    return __a = __a & __b;
  }
  inline const ::std::_Ios_Iostate &operator ^=(::std::_Ios_Iostate &__a, ::std::_Ios_Iostate __b)
  {
    return __a = __a ^ __b;
  }
  enum _Ios_Seekdir
  {
    _S_beg = 0,
    _S_cur = 1,
    _S_end = 2,
    _S_ios_seekdir_end = 1L << 16
  };
  class  ios_base
  {
    public:
      class  failure : public ::std::exception
      {
        public:
          explicit failure(const ::std::string &__str) throw();
          virtual ~failure() throw();
          virtual const char *what() const  throw();
        private:
          ::std::string _M_msg;
        public:
      };
      typedef ::std::_Ios_Fmtflags fmtflags;
      static const ::std::ios_base::fmtflags boolalpha = ::std::_S_boolalpha;
      static const ::std::ios_base::fmtflags dec = ::std::_S_dec;
      static const ::std::ios_base::fmtflags fixed = ::std::_S_fixed;
      static const ::std::ios_base::fmtflags hex = ::std::_S_hex;
      static const ::std::ios_base::fmtflags internal = ::std::_S_internal;
      static const ::std::ios_base::fmtflags left = ::std::_S_left;
      static const ::std::ios_base::fmtflags oct = ::std::_S_oct;
      static const ::std::ios_base::fmtflags right = ::std::_S_right;
      static const ::std::ios_base::fmtflags scientific = ::std::_S_scientific;
      static const ::std::ios_base::fmtflags showbase = ::std::_S_showbase;
      static const ::std::ios_base::fmtflags showpoint = ::std::_S_showpoint;
      static const ::std::ios_base::fmtflags showpos = ::std::_S_showpos;
      static const ::std::ios_base::fmtflags skipws = ::std::_S_skipws;
      static const ::std::ios_base::fmtflags unitbuf = ::std::_S_unitbuf;
      static const ::std::ios_base::fmtflags uppercase = ::std::_S_uppercase;
      static const ::std::ios_base::fmtflags adjustfield = ::std::_S_adjustfield;
      static const ::std::ios_base::fmtflags basefield = ::std::_S_basefield;
      static const ::std::ios_base::fmtflags floatfield = ::std::_S_floatfield;
      typedef ::std::_Ios_Iostate iostate;
      static const ::std::ios_base::iostate badbit = ::std::_S_badbit;
      static const ::std::ios_base::iostate eofbit = ::std::_S_eofbit;
      static const ::std::ios_base::iostate failbit = ::std::_S_failbit;
      static const ::std::ios_base::iostate goodbit = ::std::_S_goodbit;
      typedef ::std::_Ios_Openmode openmode;
      static const ::std::ios_base::openmode app = ::std::_S_app;
      static const ::std::ios_base::openmode ate = ::std::_S_ate;
      static const ::std::ios_base::openmode binary = ::std::_S_bin;
      static const ::std::ios_base::openmode in = ::std::_S_in;
      static const ::std::ios_base::openmode out = ::std::_S_out;
      static const ::std::ios_base::openmode trunc = ::std::_S_trunc;
      typedef ::std::_Ios_Seekdir seekdir;
      static const ::std::ios_base::seekdir beg = ::std::_S_beg;
      static const ::std::ios_base::seekdir cur = ::std::_S_cur;
      static const ::std::ios_base::seekdir end = ::std::_S_end;
      typedef int io_state;
      typedef int open_mode;
      typedef int seek_dir;
      typedef ::std::streampos streampos;
      typedef ::std::streamoff streamoff;
      enum event
      {
        erase_event = 0,
        imbue_event = 1,
        copyfmt_event = 2
      };
      typedef void (*event_callback)(::std::ios_base::event, ::std::ios_base &, int);
      void register_callback(::std::ios_base::event_callback __fn, int __index);
    protected:
      ::std::streamsize _M_precision;
      ::std::streamsize _M_width;
      ::std::ios_base::fmtflags _M_flags;
      ::std::ios_base::iostate _M_exception;
      ::std::ios_base::iostate _M_streambuf_state;
      struct  _Callback_list
      {
          ::std::ios_base::_Callback_list *_M_next;
          ::std::ios_base::event_callback _M_fn;
          int _M_index;
          ::_Atomic_word _M_refcount;
          inline _Callback_list(::std::ios_base::event_callback __fn, int __index, ::std::ios_base::_Callback_list *__cb)
            : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0)
          {
          }
          inline void _M_add_reference()
          {
            __gnu_cxx::__atomic_add_dispatch(&(*this)._M_refcount, 1);
          }
          inline int _M_remove_reference()
          {
            ;
            int __res(__gnu_cxx::__exchange_and_add_dispatch(&(*this)._M_refcount,  -1));
            if (__res == 0)
              {
                ;
              }
            return __res;
          }
      };
      ::std::ios_base::_Callback_list *_M_callbacks;
      void _M_call_callbacks(::std::ios_base::event __ev) throw();
      void _M_dispose_callbacks() throw();
      struct  _Words
      {
          void *_M_pword;
          long int _M_iword;
          inline _Words()
            : _M_pword(0), _M_iword(0)
          {
          }
      };
      ::std::ios_base::_Words _M_word_zero;
      enum mcc_enum_anon_51
      {
        _S_local_word_size = 8
      };
      ::std::ios_base::_Words _M_local_word[8L];
      int _M_word_size;
      ::std::ios_base::_Words *_M_word;
      ::std::ios_base::_Words &_M_grow_words(int __index, bool __iword);
      ::std::locale _M_ios_locale;
      void _M_init() throw();
    public:
      class  Init
      {
        public:
          Init();
          ~Init();
        private:
          static ::_Atomic_word _S_refcount;
          static bool _S_synced_with_stdio;
        public:
        friend class ios_base;
      };
      inline ::std::ios_base::fmtflags flags() const 
      {
        return (*this)._M_flags;
      }
      inline ::std::ios_base::fmtflags flags(::std::ios_base::fmtflags __fmtfl)
      {
        ::std::ios_base::fmtflags __old((*this)._M_flags);
        (*this)._M_flags = __fmtfl;
        return __old;
      }
      inline ::std::ios_base::fmtflags setf(::std::ios_base::fmtflags __fmtfl)
      {
        ::std::ios_base::fmtflags __old((*this)._M_flags);
        (*this)._M_flags |= __fmtfl;
        return __old;
      }
      inline ::std::ios_base::fmtflags setf(::std::ios_base::fmtflags __fmtfl, ::std::ios_base::fmtflags __mask)
      {
        ::std::ios_base::fmtflags __old((*this)._M_flags);
        (*this)._M_flags &=  ~__mask;
        (*this)._M_flags |= __fmtfl & __mask;
        return __old;
      }
      inline void unsetf(::std::ios_base::fmtflags __mask)
      {
        (*this)._M_flags &=  ~__mask;
      }
      inline ::std::streamsize precision() const 
      {
        return (*this)._M_precision;
      }
      inline ::std::streamsize precision(::std::streamsize __prec)
      {
        ::std::streamsize __old((*this)._M_precision);
        (*this)._M_precision = __prec;
        return __old;
      }
      inline ::std::streamsize width() const 
      {
        return (*this)._M_width;
      }
      inline ::std::streamsize width(::std::streamsize __wide)
      {
        ::std::streamsize __old((*this)._M_width);
        (*this)._M_width = __wide;
        return __old;
      }
      static bool sync_with_stdio(bool __sync  = (true));
      ::std::locale imbue(const ::std::locale &__loc) throw();
      inline ::std::locale getloc() const 
      {
        return (*this)._M_ios_locale;
      }
      inline const ::std::locale &_M_getloc() const 
      {
        return (*this)._M_ios_locale;
      }
      static int xalloc() throw();
      inline long int &iword(int __ix)
      {
        ::std::ios_base::_Words &__word(__ix < (*this)._M_word_size ? (*this)._M_word[__ix] : (*this).::std::ios_base::_M_grow_words(__ix, true));
        return __word._M_iword;
      }
      inline void *&pword(int __ix)
      {
        ::std::ios_base::_Words &__word(__ix < (*this)._M_word_size ? (*this)._M_word[__ix] : (*this).::std::ios_base::_M_grow_words(__ix, false));
        return __word._M_pword;
      }
      virtual ~ios_base();
    protected:
      ios_base() throw();
    private:
      ios_base(const ::std::ios_base &);
      ::std::ios_base &operator =(const ::std::ios_base &);
  };
  inline ::std::ios_base &boolalpha(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::boolalpha);
    return __base;
  }
  inline ::std::ios_base &noboolalpha(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::boolalpha);
    return __base;
  }
  inline ::std::ios_base &showbase(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::showbase);
    return __base;
  }
  inline ::std::ios_base &noshowbase(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::showbase);
    return __base;
  }
  inline ::std::ios_base &showpoint(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::showpoint);
    return __base;
  }
  inline ::std::ios_base &noshowpoint(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::showpoint);
    return __base;
  }
  inline ::std::ios_base &showpos(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::showpos);
    return __base;
  }
  inline ::std::ios_base &noshowpos(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::showpos);
    return __base;
  }
  inline ::std::ios_base &skipws(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::skipws);
    return __base;
  }
  inline ::std::ios_base &noskipws(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::skipws);
    return __base;
  }
  inline ::std::ios_base &uppercase(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::uppercase);
    return __base;
  }
  inline ::std::ios_base &nouppercase(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::uppercase);
    return __base;
  }
  inline ::std::ios_base &unitbuf(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::unitbuf);
    return __base;
  }
  inline ::std::ios_base &nounitbuf(::std::ios_base &__base)
  {
    __base.::std::ios_base::unsetf(::std::ios_base::unitbuf);
    return __base;
  }
  inline ::std::ios_base &internal(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::internal, ::std::ios_base::adjustfield);
    return __base;
  }
  inline ::std::ios_base &left(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::left, ::std::ios_base::adjustfield);
    return __base;
  }
  inline ::std::ios_base &right(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::right, ::std::ios_base::adjustfield);
    return __base;
  }
  inline ::std::ios_base &dec(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::dec, ::std::ios_base::basefield);
    return __base;
  }
  inline ::std::ios_base &hex(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::hex, ::std::ios_base::basefield);
    return __base;
  }
  inline ::std::ios_base &oct(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::oct, ::std::ios_base::basefield);
    return __base;
  }
  inline ::std::ios_base &fixed(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::fixed, ::std::ios_base::floatfield);
    return __base;
  }
  inline ::std::ios_base &scientific(::std::ios_base &__base)
  {
    __base.::std::ios_base::setf(::std::ios_base::scientific, ::std::ios_base::floatfield);
    return __base;
  }
  template < typename _CharT, typename _Traits >
  ::std::streamsize __copy_streambufs_eof(::std::basic_streambuf<_CharT, _Traits> *__sbin, ::std::basic_streambuf<_CharT, _Traits> *__sbout, bool &__ineof);
  template < typename _CharT, typename _Traits >
  class  basic_streambuf
  {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef ::std::basic_streambuf<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type> __streambuf_type;
    protected:
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_in_beg;
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_in_cur;
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_in_end;
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_out_beg;
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_out_cur;
      typename ::std::basic_streambuf<_CharT, _Traits>::char_type *_M_out_end;
      ::std::locale _M_buf_locale;
    public:
      inline virtual ~basic_streambuf()
      {
      }
      inline ::std::locale pubimbue(const ::std::locale &__loc)
      {
        ::std::locale __tmp(this->getloc());
        this->imbue(__loc);
        ::std::basic_streambuf<_CharT, _Traits>::_M_buf_locale = __loc;
        return __tmp;
      }
      inline ::std::locale getloc() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_buf_locale;
      }
      inline ::std::basic_streambuf<_CharT, _Traits> *pubsetbuf(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        return this->setbuf(__s, __n);
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::pos_type pubseekoff(typename ::std::basic_streambuf<_CharT, _Traits>::off_type __off, ::std::ios_base::seekdir __way, ::std::ios_base::openmode __mode  = (::std::ios_base::in | ::std::ios_base::out))
      {
        return this->seekoff(__off, __way, __mode);
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::pos_type pubseekpos(typename ::std::basic_streambuf<_CharT, _Traits>::pos_type __sp, ::std::ios_base::openmode __mode  = (::std::ios_base::in | ::std::ios_base::out))
      {
        return this->seekpos(__sp, __mode);
      }
      inline int pubsync()
      {
        return this->sync();
      }
      inline ::std::streamsize in_avail()
      {
        const ::std::streamsize __ret = this->egptr() - this->gptr();
        return __ret ? __ret : this->showmanyc();
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type snextc()
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret = traits_type::eof();
        if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(), __ret), true))
          {
            __ret = this->sgetc();
          }
        return __ret;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type sbumpc()
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret;
        if (__builtin_expect(this->gptr() < this->egptr(), true))
          {
            __ret = traits_type::to_int_type(*this->gptr());
            this->gbump(1);
          }
        else
          {
            __ret = this->uflow();
          }
        return __ret;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type sgetc()
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret;
        if (__builtin_expect(this->gptr() < this->egptr(), true))
          {
            __ret = traits_type::to_int_type(*this->gptr());
          }
        else
          {
            __ret = this->underflow();
          }
        return __ret;
      }
      inline ::std::streamsize sgetn(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        return this->xsgetn(__s, __n);
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type sputbackc(typename ::std::basic_streambuf<_CharT, _Traits>::char_type __c)
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret;
        const bool __testpos = this->eback() < this->gptr();
        if (__builtin_expect(!__testpos || !traits_type::eq(__c, this->gptr()[ -1]), false))
          {
            __ret = this->pbackfail(traits_type::to_int_type(__c));
          }
        else
          {
            this->gbump( -1);
            __ret = traits_type::to_int_type(*this->gptr());
          }
        return __ret;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type sungetc()
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret;
        if (__builtin_expect(this->eback() < this->gptr(), true))
          {
            this->gbump( -1);
            __ret = traits_type::to_int_type(*this->gptr());
          }
        else
          {
            __ret = this->pbackfail();
          }
        return __ret;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::int_type sputc(typename ::std::basic_streambuf<_CharT, _Traits>::char_type __c)
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret;
        if (__builtin_expect(this->pptr() < this->epptr(), true))
          {
            *this->pptr() = __c;
            this->pbump(1);
            __ret = traits_type::to_int_type(__c);
          }
        else
          {
            __ret = this->overflow(traits_type::to_int_type(__c));
          }
        return __ret;
      }
      inline ::std::streamsize sputn(const typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        return this->xsputn(__s, __n);
      }
    protected:
      inline basic_streambuf()
        : _M_in_beg(0), _M_in_cur(0), _M_in_end(0), _M_out_beg(0), _M_out_cur(0), _M_out_end(0), _M_buf_locale(::std::locale())
      {
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *eback() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_in_beg;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *gptr() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_in_cur;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *egptr() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_in_end;
      }
      inline void gbump(int __n)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_in_cur += __n;
      }
      inline void setg(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__gbeg, typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__gnext, typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__gend)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_in_beg = __gbeg;
        ::std::basic_streambuf<_CharT, _Traits>::_M_in_cur = __gnext;
        ::std::basic_streambuf<_CharT, _Traits>::_M_in_end = __gend;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *pbase() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_out_beg;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *pptr() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_out_cur;
      }
      inline typename ::std::basic_streambuf<_CharT, _Traits>::char_type *epptr() const 
      {
        return ::std::basic_streambuf<_CharT, _Traits>::_M_out_end;
      }
      inline void pbump(int __n)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_out_cur += __n;
      }
      inline void setp(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__pbeg, typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__pend)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_out_beg = ::std::basic_streambuf<_CharT, _Traits>::_M_out_cur = __pbeg;
        ::std::basic_streambuf<_CharT, _Traits>::_M_out_end = __pend;
      }
      inline virtual void imbue(const ::std::locale &__loc)
      {
      }
      inline virtual ::std::basic_streambuf<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, _Traits> *setbuf(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *, ::std::streamsize)
      {
        return this;
      }
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::pos_type seekoff(typename ::std::basic_streambuf<_CharT, _Traits>::off_type, ::std::ios_base::seekdir, ::std::ios_base::openmode  = (::std::ios_base::in | ::std::ios_base::out))
      {
        return ((typename ::std::basic_streambuf<_CharT, _Traits>::pos_type(((typename ::std::basic_streambuf<_CharT, _Traits>::off_type( -1))))));
      }
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::pos_type seekpos(typename ::std::basic_streambuf<_CharT, _Traits>::pos_type, ::std::ios_base::openmode  = (::std::ios_base::in | ::std::ios_base::out))
      {
        return ((typename ::std::basic_streambuf<_CharT, _Traits>::pos_type(((typename ::std::basic_streambuf<_CharT, _Traits>::off_type( -1))))));
      }
      inline virtual int sync()
      {
        return 0;
      }
      inline virtual ::std::streamsize showmanyc()
      {
        return 0;
      }
      virtual ::std::streamsize xsgetn(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n);
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::int_type underflow()
      {
        return traits_type::eof();
      }
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::int_type uflow()
      {
        typename ::std::basic_streambuf<_CharT, _Traits>::int_type __ret = traits_type::eof();
        const bool __testeof = traits_type::eq_int_type(this->underflow(), __ret);
        if (!__testeof)
          {
            __ret = traits_type::to_int_type(*this->gptr());
            this->gbump(1);
          }
        return __ret;
      }
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::int_type pbackfail(typename ::std::basic_streambuf<_CharT, _Traits>::int_type __c  = (traits_type::eof()))
      {
        return traits_type::eof();
      }
      virtual ::std::streamsize xsputn(const typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n);
      inline virtual typename ::std::basic_streambuf<_CharT, _Traits>::int_type overflow(typename ::std::basic_streambuf<_CharT, _Traits>::int_type __c  = (traits_type::eof()))
      {
        return traits_type::eof();
      }
    public:
      inline void stossc()
      {
        if (this->gptr() < this->egptr())
          {
            this->gbump(1);
          }
        else
          {
            this->uflow();
          }
      }
      inline void __safe_gbump(::std::streamsize __n)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_in_cur += __n;
      }
      inline void __safe_pbump(::std::streamsize __n)
      {
        ::std::basic_streambuf<_CharT, _Traits>::_M_out_cur += __n;
      }
    private:
      inline basic_streambuf(const ::std::basic_streambuf<_CharT, _Traits> &__sb)
        : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur), _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg), _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur), _M_buf_locale(__sb._M_buf_locale)
      {
      }
      inline ::std::basic_streambuf<_CharT, _Traits> &operator =(const ::std::basic_streambuf<_CharT, _Traits> &)
      {
        return *this;
      }
    friend class ::std::basic_ios<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type>;
    friend class ::std::basic_istream<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type>;
    friend class ::std::basic_ostream<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type>;
    friend class ::std::istreambuf_iterator<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type>;
    friend class ::std::ostreambuf_iterator<typename ::std::basic_streambuf<_CharT, _Traits>::char_type, typename ::std::basic_streambuf<_CharT, _Traits>::traits_type>;
    friend ::std::streamsize __copy_streambufs_eof<>(::std::basic_streambuf<_CharT, _Traits> *, ::std::basic_streambuf<_CharT, _Traits> *, bool &);
    template < bool _IsMove, typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, _CharT2 *>::__type __copy_move_a2(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, _CharT2 *);
    template < typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, ::std::istreambuf_iterator<_CharT2> >::__type find(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, const _CharT2 &);
    template < typename _CharT2, typename _Traits2 >
    friend ::std::basic_istream<_CharT2, _Traits2> &operator >>(::std::basic_istream<_CharT2, _Traits2> &, _CharT2 *);
    template < typename _CharT2, typename _Traits2, typename _Alloc >
    friend ::std::basic_istream<_CharT2, _Traits2> &operator >>(::std::basic_istream<_CharT2, _Traits2> &, ::std::basic_string<_CharT2, _Traits2, _Alloc> &);
    template < typename _CharT2, typename _Traits2, typename _Alloc >
    friend ::std::basic_istream<_CharT2, _Traits2> &getline(::std::basic_istream<_CharT2, _Traits2> &, ::std::basic_string<_CharT2, _Traits2, _Alloc> &, _CharT2);
  };
  template <>
  long int __copy_streambufs_eof<char, ::std::char_traits<char> >(::std::basic_streambuf<char> *__sbin, ::std::basic_streambuf<char> *__sbout, bool &__ineof);
  template <>
  long int __copy_streambufs_eof<wchar_t, ::std::char_traits<wchar_t> >(::std::basic_streambuf<wchar_t> *__sbin, ::std::basic_streambuf<wchar_t> *__sbout, bool &__ineof);
  template < typename _CharT, typename _Traits >
  ::std::streamsize basic_streambuf<_CharT, _Traits>::xsgetn(typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
  {
    ::std::streamsize __ret(0);
    while (__ret < __n)
      {
        const ::std::streamsize __buf_len = this->egptr() - this->gptr();
        if (__buf_len)
          {
            const ::std::streamsize __remaining(__n - __ret);
            const ::std::streamsize __len = std::min(__buf_len, __remaining);
            traits_type::copy(__s, this->gptr(), __len);
            __ret += __len;
            __s += __len;
            this->__safe_gbump(__len);
          }
        if (__ret < __n)
          {
            const typename ::std::basic_streambuf<_CharT, _Traits>::int_type __c = this->uflow();
            if (!traits_type::eq_int_type(__c, traits_type::eof()))
              {
                traits_type::assign(*__s++, traits_type::to_char_type(__c));
                 ++__ret;
              }
            else
              {
                break;
              }
          }
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  ::std::streamsize basic_streambuf<_CharT, _Traits>::xsputn(const typename ::std::basic_streambuf<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
  {
    ::std::streamsize __ret(0);
    while (__ret < __n)
      {
        const ::std::streamsize __buf_len = this->epptr() - this->pptr();
        if (__buf_len)
          {
            const ::std::streamsize __remaining(__n - __ret);
            const ::std::streamsize __len = std::min(__buf_len, __remaining);
            traits_type::copy(this->pptr(), __s, __len);
            __ret += __len;
            __s += __len;
            this->__safe_pbump(__len);
          }
        if (__ret < __n)
          {
            typename ::std::basic_streambuf<_CharT, _Traits>::int_type __c = this->overflow(traits_type::to_int_type(*__s));
            if (!traits_type::eq_int_type(__c, traits_type::eof()))
              {
                 ++__ret;
                 ++__s;
              }
            else
              {
                break;
              }
          }
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  ::std::streamsize __copy_streambufs_eof(::std::basic_streambuf<_CharT, _Traits> *__sbin, ::std::basic_streambuf<_CharT, _Traits> *__sbout, bool &__ineof)
  {
    ::std::streamsize __ret(0);
    __ineof = true;
    typename _Traits::int_type __c = __sbin->sgetc();
    while (!_Traits::eq_int_type(__c, _Traits::eof()))
      {
        __c = __sbout->sputc(_Traits::to_char_type(__c));
        if (_Traits::eq_int_type(__c, _Traits::eof()))
          {
            __ineof = false;
            break;
          }
         ++__ret;
        __c = __sbin->snextc();
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  inline ::std::streamsize __copy_streambufs(::std::basic_streambuf<_CharT, _Traits> *__sbin, ::std::basic_streambuf<_CharT, _Traits> *__sbout);
  template < typename _CharT, typename _Traits >
  inline ::std::streamsize __copy_streambufs(::std::basic_streambuf<_CharT, _Traits> *__sbin, ::std::basic_streambuf<_CharT, _Traits> *__sbout)
  {
    bool __ineof;
    return __copy_streambufs_eof(__sbin, __sbout, __ineof);
  }
  extern template class ::std::basic_streambuf<char>;
  extern template long int __copy_streambufs(::std::basic_streambuf<char> *, ::std::basic_streambuf<char> *);
  extern template long int __copy_streambufs_eof(::std::basic_streambuf<char> *, ::std::basic_streambuf<char> *, bool &);
  extern template class ::std::basic_streambuf<wchar_t>;
  extern template long int __copy_streambufs(::std::basic_streambuf<wchar_t> *, ::std::basic_streambuf<wchar_t> *);
  extern template long int __copy_streambufs_eof(::std::basic_streambuf<wchar_t> *, ::std::basic_streambuf<wchar_t> *, bool &);
}
typedef unsigned long int wctype_t;
enum mcc_enum_anon_52
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,
  _ISwupper = ::__ISwupper < 8 ? (int)(1LU << ::__ISwupper << 24) : ::__ISwupper < 16 ? (int)(1LU << ::__ISwupper << 8) : ::__ISwupper < 24 ? (int)(1LU << ::__ISwupper >> 8) : (int)(1LU << ::__ISwupper >> 24),
  _ISwlower = ::__ISwlower < 8 ? (int)(1LU << ::__ISwlower << 24) : ::__ISwlower < 16 ? (int)(1LU << ::__ISwlower << 8) : ::__ISwlower < 24 ? (int)(1LU << ::__ISwlower >> 8) : (int)(1LU << ::__ISwlower >> 24),
  _ISwalpha = ::__ISwalpha < 8 ? (int)(1LU << ::__ISwalpha << 24) : ::__ISwalpha < 16 ? (int)(1LU << ::__ISwalpha << 8) : ::__ISwalpha < 24 ? (int)(1LU << ::__ISwalpha >> 8) : (int)(1LU << ::__ISwalpha >> 24),
  _ISwdigit = ::__ISwdigit < 8 ? (int)(1LU << ::__ISwdigit << 24) : ::__ISwdigit < 16 ? (int)(1LU << ::__ISwdigit << 8) : ::__ISwdigit < 24 ? (int)(1LU << ::__ISwdigit >> 8) : (int)(1LU << ::__ISwdigit >> 24),
  _ISwxdigit = ::__ISwxdigit < 8 ? (int)(1LU << ::__ISwxdigit << 24) : ::__ISwxdigit < 16 ? (int)(1LU << ::__ISwxdigit << 8) : ::__ISwxdigit < 24 ? (int)(1LU << ::__ISwxdigit >> 8) : (int)(1LU << ::__ISwxdigit >> 24),
  _ISwspace = ::__ISwspace < 8 ? (int)(1LU << ::__ISwspace << 24) : ::__ISwspace < 16 ? (int)(1LU << ::__ISwspace << 8) : ::__ISwspace < 24 ? (int)(1LU << ::__ISwspace >> 8) : (int)(1LU << ::__ISwspace >> 24),
  _ISwprint = ::__ISwprint < 8 ? (int)(1LU << ::__ISwprint << 24) : ::__ISwprint < 16 ? (int)(1LU << ::__ISwprint << 8) : ::__ISwprint < 24 ? (int)(1LU << ::__ISwprint >> 8) : (int)(1LU << ::__ISwprint >> 24),
  _ISwgraph = ::__ISwgraph < 8 ? (int)(1LU << ::__ISwgraph << 24) : ::__ISwgraph < 16 ? (int)(1LU << ::__ISwgraph << 8) : ::__ISwgraph < 24 ? (int)(1LU << ::__ISwgraph >> 8) : (int)(1LU << ::__ISwgraph >> 24),
  _ISwblank = ::__ISwblank < 8 ? (int)(1LU << ::__ISwblank << 24) : ::__ISwblank < 16 ? (int)(1LU << ::__ISwblank << 8) : ::__ISwblank < 24 ? (int)(1LU << ::__ISwblank >> 8) : (int)(1LU << ::__ISwblank >> 24),
  _ISwcntrl = ::__ISwcntrl < 8 ? (int)(1LU << ::__ISwcntrl << 24) : ::__ISwcntrl < 16 ? (int)(1LU << ::__ISwcntrl << 8) : ::__ISwcntrl < 24 ? (int)(1LU << ::__ISwcntrl >> 8) : (int)(1LU << ::__ISwcntrl >> 24),
  _ISwpunct = ::__ISwpunct < 8 ? (int)(1LU << ::__ISwpunct << 24) : ::__ISwpunct < 16 ? (int)(1LU << ::__ISwpunct << 8) : ::__ISwpunct < 24 ? (int)(1LU << ::__ISwpunct >> 8) : (int)(1LU << ::__ISwpunct >> 24),
  _ISwalnum = ::__ISwalnum < 8 ? (int)(1LU << ::__ISwalnum << 24) : ::__ISwalnum < 16 ? (int)(1LU << ::__ISwalnum << 8) : ::__ISwalnum < 24 ? (int)(1LU << ::__ISwalnum >> 8) : (int)(1LU << ::__ISwalnum >> 24)
};
extern "C"
{
  extern int iswalnum(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswalpha(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswcntrl(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswdigit(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswgraph(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswlower(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswprint(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswpunct(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswspace(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswupper(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswxdigit(::wint_t __wc) throw();
}
extern "C"
{
  extern int iswblank(::wint_t __wc) throw();
}
extern "C"
{
  extern ::wctype_t wctype(const char *__property) throw();
}
extern "C"
{
  extern int iswctype(::wint_t __wc, ::wctype_t __desc) throw();
}
typedef const ::__int32_t *wctrans_t;
extern "C"
{
  extern ::wint_t towlower(::wint_t __wc) throw();
}
extern "C"
{
  extern ::wint_t towupper(::wint_t __wc) throw();
}
extern "C"
{
  extern ::wctrans_t wctrans(const char *__property) throw();
}
extern "C"
{
  extern ::wint_t towctrans(::wint_t __wc, ::wctrans_t __desc) throw();
}
extern "C"
{
  extern int iswalnum_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswalpha_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswcntrl_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswdigit_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswgraph_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswlower_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswprint_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswpunct_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswspace_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswupper_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswxdigit_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswblank_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern ::wctype_t wctype_l(const char *__property, ::__locale_t __locale) throw();
}
extern "C"
{
  extern int iswctype_l(::wint_t __wc, ::wctype_t __desc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern ::wint_t towlower_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern ::wint_t towupper_l(::wint_t __wc, ::__locale_t __locale) throw();
}
extern "C"
{
  extern ::wctrans_t wctrans_l(const char *__property, ::__locale_t __locale) throw();
}
extern "C"
{
  extern ::wint_t towctrans_l(::wint_t __wc, ::wctrans_t __desc, ::__locale_t __locale) throw();
}
namespace std __attribute__((__visibility__("default"))) {
  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;
  using ::iswalnum;
  using ::iswalpha;
  using ::iswblank;
  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;
  struct  ctype_base
  {
      typedef const int *__to_type;
      typedef unsigned short int mask;
      static const ::std::ctype_base::mask upper = ::_ISupper;
      static const ::std::ctype_base::mask lower = ::_ISlower;
      static const ::std::ctype_base::mask alpha = ::_ISalpha;
      static const ::std::ctype_base::mask digit = ::_ISdigit;
      static const ::std::ctype_base::mask xdigit = ::_ISxdigit;
      static const ::std::ctype_base::mask space = ::_ISspace;
      static const ::std::ctype_base::mask print = ::_ISprint;
      static const ::std::ctype_base::mask graph = (::_ISalpha | ::_ISdigit) | ::_ISpunct;
      static const ::std::ctype_base::mask cntrl = ::_IScntrl;
      static const ::std::ctype_base::mask punct = ::_ISpunct;
      static const ::std::ctype_base::mask alnum = ::_ISalpha | ::_ISdigit;
  };
  template < typename _CharT, typename _Traits >
  class  istreambuf_iterator : public ::std::iterator< ::std::input_iterator_tag, _CharT, typename _Traits::off_type, _CharT *, _CharT>
  {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef ::std::basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef ::std::basic_istream<_CharT, _Traits> istream_type;
    private:
      mutable typename ::std::istreambuf_iterator<_CharT, _Traits>::streambuf_type *_M_sbuf;
      mutable typename ::std::istreambuf_iterator<_CharT, _Traits>::int_type _M_c;
    public:
      inline constexpr istreambuf_iterator() noexcept(true)
        : _M_sbuf(0), _M_c(traits_type::eof())
      {
      }
      istreambuf_iterator(const ::std::istreambuf_iterator<_CharT, _Traits> &) noexcept(true) = default ;
      ~istreambuf_iterator() = default ;
      inline istreambuf_iterator(typename ::std::istreambuf_iterator<_CharT, _Traits>::istream_type &__s) noexcept(true)
        : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof())
      {
      }
      inline istreambuf_iterator(typename ::std::istreambuf_iterator<_CharT, _Traits>::streambuf_type *__s) noexcept(true)
        : _M_sbuf(__s), _M_c(traits_type::eof())
      {
      }
      inline typename ::std::istreambuf_iterator<_CharT, _Traits>::char_type operator *() const 
      {
        return traits_type::to_char_type((*this)._M_get());
      }
      inline ::std::istreambuf_iterator<_CharT, _Traits> &operator ++()
      {
        ;
        if (::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf)
          {
            ::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf->sbumpc();
            ::std::istreambuf_iterator<_CharT, _Traits>::_M_c = traits_type::eof();
          }
        return *this;
      }
      inline ::std::istreambuf_iterator<_CharT, _Traits> operator ++(int)
      {
        ;
        ::std::istreambuf_iterator<_CharT, _Traits> __old = *this;
        if (::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf)
          {
            __old._M_c = ::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf->sbumpc();
            ::std::istreambuf_iterator<_CharT, _Traits>::_M_c = traits_type::eof();
          }
        return __old;
      }
      inline bool equal(const ::std::istreambuf_iterator<_CharT, _Traits> &__b) const 
      {
        return (*this)._M_at_eof() == __b._M_at_eof();
      }
    private:
      inline typename ::std::istreambuf_iterator<_CharT, _Traits>::int_type _M_get() const 
      {
        const typename ::std::istreambuf_iterator<_CharT, _Traits>::int_type __eof = traits_type::eof();
        typename ::std::istreambuf_iterator<_CharT, _Traits>::int_type __ret = __eof;
        if (::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf)
          {
            if (!traits_type::eq_int_type(::std::istreambuf_iterator<_CharT, _Traits>::_M_c, __eof))
              {
                __ret = ::std::istreambuf_iterator<_CharT, _Traits>::_M_c;
              }
            else
              {
                if (!traits_type::eq_int_type(__ret = ::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf->sgetc(), __eof))
                  {
                    ::std::istreambuf_iterator<_CharT, _Traits>::_M_c = __ret;
                  }
                else
                  {
                    ::std::istreambuf_iterator<_CharT, _Traits>::_M_sbuf = 0;
                  }
              }
          }
        return __ret;
      }
      inline bool _M_at_eof() const 
      {
        const typename ::std::istreambuf_iterator<_CharT, _Traits>::int_type __eof = traits_type::eof();
        return traits_type::eq_int_type((*this)._M_get(), __eof);
      }
    template < typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, ::std::ostreambuf_iterator<_CharT2> >::__type copy(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, ::std::ostreambuf_iterator<_CharT2>);
    template < bool _IsMove, typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, _CharT2 *>::__type __copy_move_a2(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, _CharT2 *);
    template < typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, ::std::istreambuf_iterator<_CharT2> >::__type find(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, const _CharT2 &);
  };
  template < typename _CharT, typename _Traits >
  inline bool operator ==(const ::std::istreambuf_iterator<_CharT, _Traits> &__a, const ::std::istreambuf_iterator<_CharT, _Traits> &__b);
  template < typename _CharT, typename _Traits >
  inline bool operator ==(const ::std::istreambuf_iterator<_CharT, _Traits> &__a, const ::std::istreambuf_iterator<_CharT, _Traits> &__b)
  {
    return __a.equal(__b);
  }
  template < typename _CharT, typename _Traits >
  inline bool operator !=(const ::std::istreambuf_iterator<_CharT, _Traits> &__a, const ::std::istreambuf_iterator<_CharT, _Traits> &__b);
  template < typename _CharT, typename _Traits >
  inline bool operator !=(const ::std::istreambuf_iterator<_CharT, _Traits> &__a, const ::std::istreambuf_iterator<_CharT, _Traits> &__b)
  {
    return !__a.equal(__b);
  }
  template < typename _CharT, typename _Traits >
  class  ostreambuf_iterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>
  {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef ::std::basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef ::std::basic_ostream<_CharT, _Traits> ostream_type;
    private:
      typename ::std::ostreambuf_iterator<_CharT, _Traits>::streambuf_type *_M_sbuf;
      bool _M_failed;
    public:
      inline ostreambuf_iterator(typename ::std::ostreambuf_iterator<_CharT, _Traits>::ostream_type &__s) noexcept(true)
        : _M_sbuf(__s.rdbuf()), _M_failed(!::std::ostreambuf_iterator<_CharT, _Traits>::_M_sbuf)
      {
      }
      inline ostreambuf_iterator(typename ::std::ostreambuf_iterator<_CharT, _Traits>::streambuf_type *__s) noexcept(true)
        : _M_sbuf(__s), _M_failed(!::std::ostreambuf_iterator<_CharT, _Traits>::_M_sbuf)
      {
      }
      inline ::std::ostreambuf_iterator<_CharT, _Traits> &operator =(_CharT __c)
      {
        if (!::std::ostreambuf_iterator<_CharT, _Traits>::_M_failed && _Traits::eq_int_type(::std::ostreambuf_iterator<_CharT, _Traits>::_M_sbuf->sputc(__c), _Traits::eof()))
          {
            ::std::ostreambuf_iterator<_CharT, _Traits>::_M_failed = true;
          }
        return *this;
      }
      inline ::std::ostreambuf_iterator<_CharT, _Traits> &operator *()
      {
        return *this;
      }
      inline ::std::ostreambuf_iterator<_CharT, _Traits> &operator ++(int)
      {
        return *this;
      }
      inline ::std::ostreambuf_iterator<_CharT, _Traits> &operator ++()
      {
        return *this;
      }
      inline bool failed() const  noexcept(true)
      {
        return ::std::ostreambuf_iterator<_CharT, _Traits>::_M_failed;
      }
      inline ::std::ostreambuf_iterator<_CharT, _Traits> &_M_put(const _CharT *__ws, ::std::streamsize __len)
      {
        if (__builtin_expect(!::std::ostreambuf_iterator<_CharT, _Traits>::_M_failed, true) && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len, false))
          {
            ::std::ostreambuf_iterator<_CharT, _Traits>::_M_failed = true;
          }
        return *this;
      }
    template < typename _CharT2 >
    friend typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, ::std::ostreambuf_iterator<_CharT2> >::__type copy(::std::istreambuf_iterator<_CharT2>, ::std::istreambuf_iterator<_CharT2>, ::std::ostreambuf_iterator<_CharT2>);
  };
  template < typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT> >::__type copy(::std::istreambuf_iterator<_CharT> __first, ::std::istreambuf_iterator<_CharT> __last, ::std::ostreambuf_iterator<_CharT> __result);
  template < typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT> >::__type copy(::std::istreambuf_iterator<_CharT> __first, ::std::istreambuf_iterator<_CharT> __last, ::std::ostreambuf_iterator<_CharT> __result)
  {
    if ((__first._M_sbuf && !__last._M_sbuf) && !__result._M_failed)
      {
        bool __ineof;
        __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
        if (!__ineof)
          {
            __result._M_failed = true;
          }
      }
    return __result;
  }
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > >::__type __copy_move_a2(_CharT *__first, _CharT *__last, ::std::ostreambuf_iterator<_CharT> __result)
  {
    const ::std::streamsize __num = __last - __first;
    if (__num > 0)
      {
        __result._M_put(__first, __num);
      }
    return __result;
  }
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::ostreambuf_iterator<_CharT, ::std::char_traits<_CharT> > >::__type __copy_move_a2(const _CharT *__first, const _CharT *__last, ::std::ostreambuf_iterator<_CharT> __result)
  {
    const ::std::streamsize __num = __last - __first;
    if (__num > 0)
      {
        __result._M_put(__first, __num);
      }
    return __result;
  }
  template < bool _IsMove, typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, _CharT *>::__type __copy_move_a2(::std::istreambuf_iterator<_CharT> __first, ::std::istreambuf_iterator<_CharT> __last, _CharT *__result)
  {
    typedef ::std::istreambuf_iterator<_CharT> __is_iterator_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::traits_type traits_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::streambuf_type streambuf_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::traits_type::int_type int_type;
    if (__first._M_sbuf && !__last._M_sbuf)
      {
        streambuf_type *__sb = __first._M_sbuf;
        int_type __c = __sb->sgetc();
        while (!traits_type::eq_int_type(__c, traits_type::eof()))
          {
            const ::std::streamsize __n = __sb->egptr() - __sb->gptr();
            if (__n > 1)
              {
                traits_type::copy(__result, __sb->gptr(), __n);
                __sb->__safe_gbump(__n);
                __result += __n;
                __c = __sb->underflow();
              }
            else
              {
                *__result++ = traits_type::to_char_type(__c);
                __c = __sb->snextc();
              }
          }
      }
    return __result;
  }
  template < typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::istreambuf_iterator<_CharT> >::__type find(::std::istreambuf_iterator<_CharT> __first, ::std::istreambuf_iterator<_CharT> __last, const _CharT &__val);
  template < typename _CharT >
  typename ::__gnu_cxx::__enable_if<__is_char<_CharT>::__value, ::std::istreambuf_iterator<_CharT> >::__type find(::std::istreambuf_iterator<_CharT> __first, ::std::istreambuf_iterator<_CharT> __last, const _CharT &__val)
  {
    typedef ::std::istreambuf_iterator<_CharT> __is_iterator_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::traits_type traits_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::streambuf_type streambuf_type;
    typedef typename ::std::istreambuf_iterator<_CharT>::traits_type::int_type int_type;
    if (__first._M_sbuf && !__last._M_sbuf)
      {
        const int_type __ival = traits_type::to_int_type(__val);
        streambuf_type *__sb = __first._M_sbuf;
        int_type __c = __sb->sgetc();
        while (!traits_type::eq_int_type(__c, traits_type::eof()) && !traits_type::eq_int_type(__c, __ival))
          {
            ::std::streamsize __n = __sb->egptr() - __sb->gptr();
            if (__n > 1)
              {
                const _CharT *__p = traits_type::find(__sb->gptr(), __n, __val);
                if (__p)
                  {
                    __n = __p - __sb->gptr();
                  }
                __sb->__safe_gbump(__n);
                __c = __sb->sgetc();
              }
            else
              {
                __c = __sb->snextc();
              }
          }
        if (!traits_type::eq_int_type(__c, traits_type::eof()))
          {
            __first._M_c = __c;
          }
        else
          {
            __first._M_sbuf = 0;
          }
      }
    return __first;
  }
  template < typename _Tp >
  void __convert_to_v(const char *, _Tp &, ::std::ios_base::iostate &, const ::std::__c_locale &) throw();
  template <>
  void __convert_to_v<float>(const char *, float &, ::std::_Ios_Iostate &, ::__locale_struct *const &) throw();
  template <>
  void __convert_to_v<double>(const char *, double &, ::std::_Ios_Iostate &, ::__locale_struct *const &) throw();
  template <>
  void __convert_to_v<long double>(const char *, long double &, ::std::_Ios_Iostate &, ::__locale_struct *const &) throw();
  template < typename _CharT, typename _Traits >
  struct  __pad
  {
      static void _S_pad(::std::ios_base &__io, _CharT __fill, _CharT *__news, const _CharT *__olds, ::std::streamsize __newlen, ::std::streamsize __oldlen);
  };
  template < typename _CharT >
  _CharT *__add_grouping(_CharT *__s, _CharT __sep, const char *__gbeg, ::std::size_t __gsize, const _CharT *__first, const _CharT *__last);
  template < typename _CharT >
  inline ::std::ostreambuf_iterator<_CharT> __write(::std::ostreambuf_iterator<_CharT> __s, const _CharT *__ws, int __len);
  template < typename _CharT >
  inline ::std::ostreambuf_iterator<_CharT> __write(::std::ostreambuf_iterator<_CharT> __s, const _CharT *__ws, int __len)
  {
    __s._M_put(__ws, __len);
    return __s;
  }
  template < typename _CharT, typename _OutIter >
  inline _OutIter __write(_OutIter __s, const _CharT *__ws, int __len);
  template < typename _CharT, typename _OutIter >
  inline _OutIter __write(_OutIter __s, const _CharT *__ws, int __len)
  {
    for (int __j(0); __j < __len; (__j++,  ++__s))
      {
        *__s = __ws[__j];
      }
    return __s;
  }
  template < typename _CharT >
  class  __ctype_abstract_base : public ::std::locale::facet, public ::std::ctype_base
  {
    public:
      typedef _CharT char_type;
      inline bool is(::std::ctype_base::mask __m, typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const 
      {
        return this->do_is(__m, __c);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *is(const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi, ::std::ctype_base::mask *__vec) const 
      {
        return this->do_is(__lo, __hi, __vec);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *scan_is(::std::ctype_base::mask __m, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const 
      {
        return this->do_scan_is(__m, __lo, __hi);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *scan_not(::std::ctype_base::mask __m, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const 
      {
        return this->do_scan_not(__m, __lo, __hi);
      }
      inline typename ::std::__ctype_abstract_base<_CharT>::char_type toupper(typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const 
      {
        return this->do_toupper(__c);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *toupper(typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const 
      {
        return this->do_toupper(__lo, __hi);
      }
      inline typename ::std::__ctype_abstract_base<_CharT>::char_type tolower(typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const 
      {
        return this->do_tolower(__c);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *tolower(typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const 
      {
        return this->do_tolower(__lo, __hi);
      }
      inline typename ::std::__ctype_abstract_base<_CharT>::char_type widen(char __c) const 
      {
        return this->do_widen(__c);
      }
      inline const char *widen(const char *__lo, const char *__hi, typename ::std::__ctype_abstract_base<_CharT>::char_type *__to) const 
      {
        return this->do_widen(__lo, __hi, __to);
      }
      inline char narrow(typename ::std::__ctype_abstract_base<_CharT>::char_type __c, char __dfault) const 
      {
        return this->do_narrow(__c, __dfault);
      }
      inline const typename ::std::__ctype_abstract_base<_CharT>::char_type *narrow(const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi, char __dfault, char *__to) const 
      {
        return this->do_narrow(__lo, __hi, __dfault, __to);
      }
    protected:
      inline explicit __ctype_abstract_base(::std::size_t __refs  = (0))
        : facet(__refs)
      {
      }
      inline virtual ~__ctype_abstract_base()
      {
      }
      virtual bool do_is(::std::ctype_base::mask __m, typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_is(const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi, ::std::ctype_base::mask *__vec) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_scan_is(::std::ctype_base::mask __m, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_scan_not(::std::ctype_base::mask __m, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const  = 0 ;
      virtual typename ::std::__ctype_abstract_base<_CharT>::char_type do_toupper(typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_toupper(typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const  = 0 ;
      virtual typename ::std::__ctype_abstract_base<_CharT>::char_type do_tolower(typename ::std::__ctype_abstract_base<_CharT>::char_type __c) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_tolower(typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi) const  = 0 ;
      virtual typename ::std::__ctype_abstract_base<_CharT>::char_type do_widen(char __c) const  = 0 ;
      virtual const char *do_widen(const char *__lo, const char *__hi, typename ::std::__ctype_abstract_base<_CharT>::char_type *__to) const  = 0 ;
      virtual char do_narrow(typename ::std::__ctype_abstract_base<_CharT>::char_type __c, char __dfault) const  = 0 ;
      virtual const typename ::std::__ctype_abstract_base<_CharT>::char_type *do_narrow(const typename ::std::__ctype_abstract_base<_CharT>::char_type *__lo, const typename ::std::__ctype_abstract_base<_CharT>::char_type *__hi, char __dfault, char *__to) const  = 0 ;
  };
  template < typename _CharT >
  class  ctype : public ::std::__ctype_abstract_base<_CharT>
  {
    public:
      typedef _CharT char_type;
      typedef typename ::std::__ctype_abstract_base<_CharT>::mask mask;
      static ::std::locale::id id;
      inline explicit ctype(::std::size_t __refs  = (0))
        : __ctype_abstract_base<_CharT>(__refs)
      {
      }
    protected:
      virtual ~ctype();
      virtual bool do_is(typename ::std::ctype<_CharT>::mask __m, typename ::std::ctype<_CharT>::char_type __c) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_is(const typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi, typename ::std::ctype<_CharT>::mask *__vec) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_scan_is(typename ::std::ctype<_CharT>::mask __m, const typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_scan_not(typename ::std::ctype<_CharT>::mask __m, const typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi) const ;
      virtual typename ::std::ctype<_CharT>::char_type do_toupper(typename ::std::ctype<_CharT>::char_type __c) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_toupper(typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi) const ;
      virtual typename ::std::ctype<_CharT>::char_type do_tolower(typename ::std::ctype<_CharT>::char_type __c) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_tolower(typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi) const ;
      virtual typename ::std::ctype<_CharT>::char_type do_widen(char __c) const ;
      virtual const char *do_widen(const char *__lo, const char *__hi, typename ::std::ctype<_CharT>::char_type *__dest) const ;
      virtual char do_narrow(typename ::std::ctype<_CharT>::char_type, char __dfault) const ;
      virtual const typename ::std::ctype<_CharT>::char_type *do_narrow(const typename ::std::ctype<_CharT>::char_type *__lo, const typename ::std::ctype<_CharT>::char_type *__hi, char __dfault, char *__to) const ;
  };
  template < typename _CharT >
  ::std::locale::id ctype<_CharT>::id;
  template <>
  class  ctype<char> : public ::std::locale::facet, public ::std::ctype_base
  {
    public:
      typedef char char_type;
    protected:
      ::std::__c_locale _M_c_locale_ctype;
      bool _M_del;
      ::std::ctype_base::__to_type _M_toupper;
      ::std::ctype_base::__to_type _M_tolower;
      const ::std::ctype_base::mask *_M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[256L];
      mutable char _M_narrow[256L];
      mutable char _M_narrow_ok;
    public:
      static ::std::locale::id id;
      static const ::std::size_t table_size = 1 + static_cast<unsigned char>( -1);
      explicit ctype(const ::std::ctype_base::mask *__table  = (0), bool __del  = (false), ::std::size_t __refs  = (0));
      explicit ctype(::std::__c_locale __cloc, const ::std::ctype_base::mask *__table  = (0), bool __del  = (false), ::std::size_t __refs  = (0));
      inline bool is(::std::ctype_base::mask __m, char __c) const ;
      inline const char *is(const char *__low, const char *__high, ::std::ctype_base::mask *__vec) const ;
      inline const char *scan_is(::std::ctype_base::mask __m, const char *__low, const char *__high) const ;
      inline const char *scan_not(::std::ctype_base::mask __m, const char *__low, const char *__high) const ;
      inline ::std::ctype<char>::char_type toupper(::std::ctype<char>::char_type __c) const 
      {
        return (*this).do_toupper(__c);
      }
      inline const ::std::ctype<char>::char_type *toupper(::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi) const 
      {
        return (*this).do_toupper(__lo, __hi);
      }
      inline ::std::ctype<char>::char_type tolower(::std::ctype<char>::char_type __c) const 
      {
        return (*this).do_tolower(__c);
      }
      inline const ::std::ctype<char>::char_type *tolower(::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi) const 
      {
        return (*this).do_tolower(__lo, __hi);
      }
      inline ::std::ctype<char>::char_type widen(char __c) const 
      {
        if ((*this)._M_widen_ok)
          {
            return (*this)._M_widen[static_cast<unsigned char>(__c)];
          }
        (*this).::std::ctype<char>::_M_widen_init();
        return (*this).do_widen(__c);
      }
      inline const char *widen(const char *__lo, const char *__hi, ::std::ctype<char>::char_type *__to) const 
      {
        if ((*this)._M_widen_ok == 1)
          {
            __builtin_memcpy(__to, __lo, __hi - __lo);
            return __hi;
          }
        if (!(*this)._M_widen_ok)
          {
            (*this).::std::ctype<char>::_M_widen_init();
          }
        return (*this).do_widen(__lo, __hi, __to);
      }
      inline char narrow(::std::ctype<char>::char_type __c, char __dfault) const 
      {
        if ((*this)._M_narrow[static_cast<unsigned char>(__c)])
          {
            return (*this)._M_narrow[static_cast<unsigned char>(__c)];
          }
        const char __t((*this).do_narrow(__c, __dfault));
        if (__t != __dfault)
          {
            (*this)._M_narrow[static_cast<unsigned char>(__c)] = __t;
          }
        return __t;
      }
      inline const ::std::ctype<char>::char_type *narrow(const ::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi, char __dfault, char *__to) const 
      {
        if (__builtin_expect((*this)._M_narrow_ok == 1, true))
          {
            __builtin_memcpy(__to, __lo, __hi - __lo);
            return __hi;
          }
        if (!(*this)._M_narrow_ok)
          {
            (*this).::std::ctype<char>::_M_narrow_init();
          }
        return (*this).do_narrow(__lo, __hi, __dfault, __to);
      }
      inline const ::std::ctype_base::mask *table() const  throw()
      {
        return (*this)._M_table;
      }
      static const ::std::ctype_base::mask *classic_table() throw();
    protected:
      virtual ~ctype();
      virtual ::std::ctype<char>::char_type do_toupper(::std::ctype<char>::char_type __c) const ;
      virtual const ::std::ctype<char>::char_type *do_toupper(::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi) const ;
      virtual ::std::ctype<char>::char_type do_tolower(::std::ctype<char>::char_type __c) const ;
      virtual const ::std::ctype<char>::char_type *do_tolower(::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi) const ;
      virtual inline ::std::ctype<char>::char_type do_widen(char __c) const 
      {
        return __c;
      }
      virtual inline const char *do_widen(const char *__lo, const char *__hi, ::std::ctype<char>::char_type *__to) const 
      {
        __builtin_memcpy(__to, __lo, __hi - __lo);
        return __hi;
      }
      virtual inline char do_narrow(::std::ctype<char>::char_type __c, char __dfault) const 
      {
        return __c;
      }
      virtual inline const ::std::ctype<char>::char_type *do_narrow(const ::std::ctype<char>::char_type *__lo, const ::std::ctype<char>::char_type *__hi, char __dfault, char *__to) const 
      {
        __builtin_memcpy(__to, __lo, __hi - __lo);
        return __hi;
      }
    private:
      void _M_narrow_init() const ;
      void _M_widen_init() const ;
    public:
  };
 /* Instantiation of class template '::std::__ctype_abstract_base<wchar_t>' */ 
  template <>
  class  ctype<wchar_t> : public ::std::__ctype_abstract_base<wchar_t>
  {
    public:
      typedef wchar_t char_type;
      typedef ::wctype_t __wmask_type;
    protected:
      ::std::__c_locale _M_c_locale_ctype;
      bool _M_narrow_ok;
      char _M_narrow[128L];
      ::wint_t _M_widen[256L];
      ::std::ctype_base::mask _M_bit[16L];
      ::std::ctype<wchar_t>::__wmask_type _M_wmask[16L];
    public:
      static ::std::locale::id id;
      explicit ctype(::std::size_t __refs  = (0));
      explicit ctype(::std::__c_locale __cloc, ::std::size_t __refs  = (0));
    protected:
      ::std::ctype<wchar_t>::__wmask_type _M_convert_to_wmask(const ::std::ctype_base::mask __m) const  throw();
      virtual ~ctype();
      virtual bool do_is(::std::ctype_base::mask __m, ::std::ctype<wchar_t>::char_type __c) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_is(const ::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi, ::std::ctype_base::mask *__vec) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_scan_is(::std::ctype_base::mask __m, const ::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_scan_not(::std::ctype_base::mask __m, const ::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi) const ;
      virtual ::std::ctype<wchar_t>::char_type do_toupper(::std::ctype<wchar_t>::char_type __c) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_toupper(::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi) const ;
      virtual ::std::ctype<wchar_t>::char_type do_tolower(::std::ctype<wchar_t>::char_type __c) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_tolower(::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi) const ;
      virtual ::std::ctype<wchar_t>::char_type do_widen(char __c) const ;
      virtual const char *do_widen(const char *__lo, const char *__hi, ::std::ctype<wchar_t>::char_type *__to) const ;
      virtual char do_narrow(::std::ctype<wchar_t>::char_type __c, char __dfault) const ;
      virtual const ::std::ctype<wchar_t>::char_type *do_narrow(const ::std::ctype<wchar_t>::char_type *__lo, const ::std::ctype<wchar_t>::char_type *__hi, char __dfault, char *__to) const ;
      void _M_initialize_ctype() throw();
    public:
  };
  template < typename _CharT >
  class  ctype_byname : public ::std::ctype<_CharT>
  {
    public:
      typedef typename ::std::ctype<_CharT>::mask mask;
      explicit ctype_byname(const char *__s, ::std::size_t __refs  = (0));
    protected:
      inline virtual ~ctype_byname()
      {
      }
  };
  template <>
  class  ctype_byname<char> : public ::std::ctype<char>
  {
    public:
      explicit ctype_byname(const char *__s, ::std::size_t __refs  = (0));
    protected:
      virtual ~ctype_byname();
    public:
  };
  template <>
  class  ctype_byname<wchar_t> : public ::std::ctype<wchar_t>
  {
    public:
      explicit ctype_byname(const char *__s, ::std::size_t __refs  = (0));
    protected:
      virtual ~ctype_byname();
    public:
  };
  inline bool ctype<char>::is(::std::ctype_base::mask __m, char __c) const 
  {
    return (*this)._M_table[static_cast<unsigned char>(__c)] & __m;
  }
  inline const char *ctype<char>::is(const char *__low, const char *__high, ::std::ctype_base::mask *__vec) const 
  {
    while (__low < __high)
      {
        *__vec++ = (*this)._M_table[static_cast<unsigned char>(*__low++)];
      }
    return __high;
  }
  inline const char *ctype<char>::scan_is(::std::ctype_base::mask __m, const char *__low, const char *__high) const 
  {
    while (__low < __high && !((*this)._M_table[static_cast<unsigned char>(*__low)] & __m))
      {
         ++__low;
      }
    return __low;
  }
  inline const char *ctype<char>::scan_not(::std::ctype_base::mask __m, const char *__low, const char *__high) const 
  {
    while (__low < __high && ((*this)._M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      {
         ++__low;
      }
    return __low;
  }
  class  __num_base
  {
    public:
      enum mcc_enum_anon_53
      {
        _S_ominus = 0,
        _S_oplus = 1,
        _S_ox = 2,
        _S_oX = 3,
        _S_odigits = 4,
        _S_odigits_end = ::std::__num_base::_S_odigits + 16,
        _S_oudigits = ::std::__num_base::_S_odigits_end,
        _S_oudigits_end = ::std::__num_base::_S_oudigits + 16,
        _S_oe = ::std::__num_base::_S_odigits + 14,
        _S_oE = ::std::__num_base::_S_oudigits + 14,
        _S_oend = ::std::__num_base::_S_oudigits_end
      };
      static const char *_S_atoms_out;
      static const char *_S_atoms_in;
      enum mcc_enum_anon_54
      {
        _S_iminus = 0,
        _S_iplus = 1,
        _S_ix = 2,
        _S_iX = 3,
        _S_izero = 4,
        _S_ie = ::std::__num_base::_S_izero + 14,
        _S_iE = ::std::__num_base::_S_izero + 20,
        _S_iend = 26
      };
      static void _S_format_float(const ::std::ios_base &__io, char *__fptr, char __mod) throw();
  };
  template < typename _CharT >
  struct  __numpunct_cache : ::std::locale::facet
  {
      const char *_M_grouping;
      ::std::size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT *_M_truename;
      ::std::size_t _M_truename_size;
      const _CharT *_M_falsename;
      ::std::size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;
      _CharT _M_atoms_out[36L];
      _CharT _M_atoms_in[26L];
      bool _M_allocated;
      inline __numpunct_cache(::std::size_t __refs  = (0))
        : facet(__refs), _M_grouping(0), _M_grouping_size(0), _M_use_grouping(false), _M_truename(0), _M_truename_size(0), _M_falsename(0), _M_falsename_size(0), _M_decimal_point(_CharT()), _M_thousands_sep(_CharT()), _M_allocated(false)
      {
      }
      virtual ~__numpunct_cache();
      void _M_cache(const ::std::locale &__loc);
    private:
      ::std::__numpunct_cache<_CharT> &operator =(const ::std::__numpunct_cache<_CharT> &);
      explicit __numpunct_cache(const ::std::__numpunct_cache<_CharT> &);
  };
  template < typename _CharT >
  __numpunct_cache<_CharT>::~__numpunct_cache()
  {
    if (::std::__numpunct_cache<_CharT>::_M_allocated)
      {
        delete[] ::std::__numpunct_cache<_CharT>::_M_grouping;
        delete[] ::std::__numpunct_cache<_CharT>::_M_truename;
        delete[] ::std::__numpunct_cache<_CharT>::_M_falsename;
      }
  }
  template < typename _CharT >
  class  numpunct : public ::std::locale::facet
  {
    public:
      typedef _CharT char_type;
      typedef ::std::basic_string<_CharT> string_type;
      typedef ::std::__numpunct_cache<_CharT> __cache_type;
    protected:
      typename ::std::numpunct<_CharT>::__cache_type *_M_data;
    public:
      static ::std::locale::id id;
      inline explicit numpunct(::std::size_t __refs  = (0))
        : facet(__refs), _M_data(0)
      {
        (*this)._M_initialize_numpunct();
      }
      inline explicit numpunct(typename ::std::numpunct<_CharT>::__cache_type *__cache, ::std::size_t __refs  = (0))
        : facet(__refs), _M_data(__cache)
      {
        (*this)._M_initialize_numpunct();
      }
      inline explicit numpunct(::std::__c_locale __cloc, ::std::size_t __refs  = (0))
        : facet(__refs), _M_data(0)
      {
        (*this)._M_initialize_numpunct(__cloc);
      }
      inline typename ::std::numpunct<_CharT>::char_type decimal_point() const 
      {
        return this->do_decimal_point();
      }
      inline typename ::std::numpunct<_CharT>::char_type thousands_sep() const 
      {
        return this->do_thousands_sep();
      }
      inline ::std::string grouping() const 
      {
        return this->do_grouping();
      }
      inline typename ::std::numpunct<_CharT>::string_type truename() const 
      {
        return this->do_truename();
      }
      inline typename ::std::numpunct<_CharT>::string_type falsename() const 
      {
        return this->do_falsename();
      }
    protected:
      virtual ~numpunct();
      inline virtual typename ::std::numpunct<_CharT>::char_type do_decimal_point() const 
      {
        return ::std::numpunct<_CharT>::_M_data->_M_decimal_point;
      }
      inline virtual typename ::std::numpunct<_CharT>::char_type do_thousands_sep() const 
      {
        return ::std::numpunct<_CharT>::_M_data->_M_thousands_sep;
      }
      inline virtual ::std::string do_grouping() const 
      {
        return ::std::numpunct<_CharT>::_M_data->_M_grouping;
      }
      inline virtual typename ::std::numpunct<_CharT>::string_type do_truename() const 
      {
        return ::std::numpunct<_CharT>::_M_data->_M_truename;
      }
      inline virtual typename ::std::numpunct<_CharT>::string_type do_falsename() const 
      {
        return ::std::numpunct<_CharT>::_M_data->_M_falsename;
      }
      void _M_initialize_numpunct(::std::__c_locale __cloc  = (0));
  };
  template < typename _CharT >
  ::std::locale::id numpunct<_CharT>::id;
 /* Instantiation of class template '::std::numpunct<char>' */ 
  template <>
  numpunct<char>::~numpunct();
  template <>
  void numpunct<char>::_M_initialize_numpunct(::__locale_struct *__cloc);
 /* Instantiation of class template '::std::numpunct<wchar_t>' */ 
  template <>
  numpunct<wchar_t>::~numpunct();
  template <>
  void numpunct<wchar_t>::_M_initialize_numpunct(::__locale_struct *__cloc);
  template < typename _CharT >
  class  numpunct_byname : public ::std::numpunct<_CharT>
  {
    public:
      typedef _CharT char_type;
      typedef ::std::basic_string<_CharT> string_type;
      inline explicit numpunct_byname(const char *__s, ::std::size_t __refs  = (0))
        : numpunct<_CharT>(__refs)
      {
        if (__builtin_strcmp(__s, "C") != 0 && __builtin_strcmp(__s, "POSIX") != 0)
          {
            ::std::__c_locale __tmp;
            this->_S_create_c_locale(__tmp, __s);
            this->_M_initialize_numpunct(__tmp);
            this->_S_destroy_c_locale(__tmp);
          }
      }
    protected:
      inline virtual ~numpunct_byname()
      {
      }
  };
  template < typename _CharT, typename _InIter >
  class  num_get : public ::std::locale::facet
  {
    public:
      typedef _CharT char_type;
      typedef _InIter iter_type;
      static ::std::locale::id id;
      inline explicit num_get(::std::size_t __refs  = (0))
        : facet(__refs)
      {
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, bool &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned short int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned long int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long long int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned long long int &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, float &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, double &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long double &__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
      inline typename ::std::num_get<_CharT, _InIter>::iter_type get(typename ::std::num_get<_CharT, _InIter>::iter_type __in, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, void *&__v) const 
      {
        return this->do_get(__in, __end, __io, __err, __v);
      }
    protected:
      inline virtual ~num_get()
      {
      }
      typename ::std::num_get<_CharT, _InIter>::iter_type _M_extract_float(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, ::std::string &__xtrc) const ;
      template < typename _ValueT >
      typename ::std::num_get<_CharT, _InIter>::iter_type _M_extract_int(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, _ValueT &__v) const ;
      template < typename _CharT2 >
      inline typename ::__gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type _M_find(const _CharT2 *, ::std::size_t __len, _CharT2 __c) const 
      {
        int __ret( -1);
        if (__len <= 10)
          {
            if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
              {
                __ret = __c - _CharT2('0');
              }
          }
        else
          {
            if (__c >= _CharT2('0') && __c <= _CharT2('9'))
              {
                __ret = __c - _CharT2('0');
              }
            else
              {
                if (__c >= _CharT2('a') && __c <= _CharT2('f'))
                  {
                    __ret = 10 + (__c - _CharT2('a'));
                  }
                else
                  {
                    if (__c >= _CharT2('A') && __c <= _CharT2('F'))
                      {
                        __ret = 10 + (__c - _CharT2('A'));
                      }
                  }
              }
          }
        return __ret;
      }
      template < typename _CharT2 >
      inline typename ::__gnu_cxx::__enable_if<!__is_char<_CharT2>::__value, int>::__type _M_find(const _CharT2 *__zero, ::std::size_t __len, _CharT2 __c) const 
      {
        int __ret( -1);
        const typename ::std::num_get<_CharT, _InIter>::char_type *__q = char_traits<_CharT2>::find(__zero, __len, __c);
        if (__q)
          {
            __ret = __q - __zero;
            if (__ret > 15)
              {
                __ret -= 6;
              }
          }
        return __ret;
      }
      virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, bool &__v) const ;
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned short int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned long int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long long int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      inline virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, unsigned long long int &__v) const 
      {
        return (*this)._M_extract_int(__beg, __end, __io, __err, __v);
      }
      virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, float &__v) const ;
      virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, double &__v) const ;
      virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long double &__v) const ;
      virtual typename ::std::num_get<_CharT, _InIter>::iter_type do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, void *&__v) const ;
  };
  template < typename _CharT, typename _InIter >
  ::std::locale::id num_get<_CharT, _InIter>::id;
  template < typename _CharT, typename _OutIter >
  class  num_put : public ::std::locale::facet
  {
    public:
      typedef _CharT char_type;
      typedef _OutIter iter_type;
      static ::std::locale::id id;
      inline explicit num_put(::std::size_t __refs  = (0))
        : facet(__refs)
      {
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, bool __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long int __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, unsigned long int __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long long int __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, unsigned long long int __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, double __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long double __v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
      inline typename ::std::num_put<_CharT, _OutIter>::iter_type put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, const void *__v) const 
      {
        return this->do_put(__s, __io, __fill, __v);
      }
    protected:
      template < typename _ValueT >
      typename ::std::num_put<_CharT, _OutIter>::iter_type _M_insert_float(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, char __mod, _ValueT __v) const ;
      void _M_group_float(const char *__grouping, ::std::size_t __grouping_size, typename ::std::num_put<_CharT, _OutIter>::char_type __sep, const typename ::std::num_put<_CharT, _OutIter>::char_type *__p, typename ::std::num_put<_CharT, _OutIter>::char_type *__new, typename ::std::num_put<_CharT, _OutIter>::char_type *__cs, int &__len) const ;
      template < typename _ValueT >
      typename ::std::num_put<_CharT, _OutIter>::iter_type _M_insert_int(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, _ValueT __v) const ;
      void _M_group_int(const char *__grouping, ::std::size_t __grouping_size, typename ::std::num_put<_CharT, _OutIter>::char_type __sep, ::std::ios_base &, typename ::std::num_put<_CharT, _OutIter>::char_type *__new, typename ::std::num_put<_CharT, _OutIter>::char_type *__cs, int &__len) const ;
      void _M_pad(typename ::std::num_put<_CharT, _OutIter>::char_type __fill, ::std::streamsize __w, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type *__new, const typename ::std::num_put<_CharT, _OutIter>::char_type *__cs, int &__len) const ;
      inline virtual ~num_put()
      {
      }
      virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, bool __v) const ;
      inline virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long int __v) const 
      {
        return (*this)._M_insert_int(__s, __io, __fill, __v);
      }
      inline virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, unsigned long int __v) const 
      {
        return (*this)._M_insert_int(__s, __io, __fill, __v);
      }
      inline virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long long int __v) const 
      {
        return (*this)._M_insert_int(__s, __io, __fill, __v);
      }
      inline virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, unsigned long long int __v) const 
      {
        return (*this)._M_insert_int(__s, __io, __fill, __v);
      }
      virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, double __v) const ;
      virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long double __v) const ;
      virtual typename ::std::num_put<_CharT, _OutIter>::iter_type do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, const void *__v) const ;
  };
  template < typename _CharT, typename _OutIter >
  ::std::locale::id num_put<_CharT, _OutIter>::id;
  template < typename _CharT >
  inline bool isspace(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::space, __c);
  }
  template < typename _CharT >
  inline bool isprint(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::print, __c);
  }
  template < typename _CharT >
  inline bool iscntrl(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::cntrl, __c);
  }
  template < typename _CharT >
  inline bool isupper(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::upper, __c);
  }
  template < typename _CharT >
  inline bool islower(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::lower, __c);
  }
  template < typename _CharT >
  inline bool isalpha(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::alpha, __c);
  }
  template < typename _CharT >
  inline bool isdigit(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::digit, __c);
  }
  template < typename _CharT >
  inline bool ispunct(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::punct, __c);
  }
  template < typename _CharT >
  inline bool isxdigit(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::xdigit, __c);
  }
  template < typename _CharT >
  inline bool isalnum(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::alnum, __c);
  }
  template < typename _CharT >
  inline bool isgraph(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).is(::std::ctype_base::graph, __c);
  }
  template < typename _CharT >
  inline _CharT toupper(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).toupper(__c);
  }
  template < typename _CharT >
  inline _CharT tolower(_CharT __c, const ::std::locale &__loc)
  {
    return use_facet< ::std::ctype<_CharT> >(__loc).tolower(__c);
  }
  template < typename _Facet >
  struct  __use_cache
  {
      const _Facet *operator ()(const ::std::locale &__loc) const ;
  };
  template < typename _CharT >
  struct  __use_cache< ::std::__numpunct_cache<_CharT> >
  {
      inline const ::std::__numpunct_cache<_CharT> *operator ()(const ::std::locale &__loc) const 
      {
        const ::std::size_t __i = numpunct<_CharT>::id._M_id();
        const ::std::locale::facet **__caches((*__loc._M_impl)._M_caches);
        if (!__caches[__i])
          {
            ::std::__numpunct_cache<_CharT> *__tmp = 0;
            try
            {
              __tmp = (new ::std::__numpunct_cache<_CharT>());
              __tmp->_M_cache(__loc);
            }
            catch (...)
            {
              delete __tmp;
              throw;
            }
            (*__loc._M_impl)._M_install_cache(__tmp, __i);
          }
        return static_cast<const ::std::__numpunct_cache<_CharT> *>(__caches[__i]);
      }
  };
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, ::__gnu_cxx::__numeric_traits_integer<char>, ::__gnu_cxx::__numeric_traits_floating<char> >' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_integer<char>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<char>' */ 
  template < typename _CharT >
  void __numpunct_cache<_CharT>::_M_cache(const ::std::locale &__loc)
  {
    ::std::__numpunct_cache<_CharT>::_M_allocated = true;
    const ::std::numpunct<_CharT> &__np = use_facet< ::std::numpunct<_CharT> >(__loc);
    char *__grouping(0);
    _CharT *__truename = 0;
    _CharT *__falsename = 0;
    try
    {
      ::std::__numpunct_cache<_CharT>::_M_grouping_size = __np.grouping().size();
      __grouping = (new char [::std::__numpunct_cache<_CharT>::_M_grouping_size]);
      __np.grouping().copy(__grouping, ::std::__numpunct_cache<_CharT>::_M_grouping_size);
      ::std::__numpunct_cache<_CharT>::_M_grouping = __grouping;
      ::std::__numpunct_cache<_CharT>::_M_use_grouping = (::std::__numpunct_cache<_CharT>::_M_grouping_size && static_cast<signed char>(::std::__numpunct_cache<_CharT>::_M_grouping[0]) > 0) && ::std::__numpunct_cache<_CharT>::_M_grouping[0] != ::__gnu_cxx::__numeric_traits_integer<char>::__max;
      ::std::__numpunct_cache<_CharT>::_M_truename_size = __np.truename().size();
      __truename = (new _CharT [::std::__numpunct_cache<_CharT>::_M_truename_size]);
      __np.truename().copy(__truename, ::std::__numpunct_cache<_CharT>::_M_truename_size);
      ::std::__numpunct_cache<_CharT>::_M_truename = __truename;
      ::std::__numpunct_cache<_CharT>::_M_falsename_size = __np.falsename().size();
      __falsename = (new _CharT [::std::__numpunct_cache<_CharT>::_M_falsename_size]);
      __np.falsename().copy(__falsename, ::std::__numpunct_cache<_CharT>::_M_falsename_size);
      ::std::__numpunct_cache<_CharT>::_M_falsename = __falsename;
      ::std::__numpunct_cache<_CharT>::_M_decimal_point = __np.decimal_point();
      ::std::__numpunct_cache<_CharT>::_M_thousands_sep = __np.thousands_sep();
      const ::std::ctype<_CharT> &__ct = use_facet< ::std::ctype<_CharT> >(__loc);
      __ct.widen(::std::__num_base::_S_atoms_out, ::std::__num_base::_S_atoms_out + ::std::__num_base::_S_oend, ::std::__numpunct_cache<_CharT>::_M_atoms_out);
      __ct.widen(::std::__num_base::_S_atoms_in, ::std::__num_base::_S_atoms_in + ::std::__num_base::_S_iend, ::std::__numpunct_cache<_CharT>::_M_atoms_in);
    }
    catch (...)
    {
      delete[] __grouping;
      delete[] __truename;
      delete[] __falsename;
      throw;
    }
  }
  bool __verify_grouping(const char *__grouping, ::std::size_t __grouping_size, const ::std::string &__grouping_tmp) throw() __attribute__((__pure__));
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::_M_extract_float(_InIter __beg, _InIter __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, ::std::string &__xtrc) const 
  {
    typedef ::std::char_traits<_CharT> __traits_type;
    typedef ::std::__numpunct_cache<_CharT> __cache_type;
    ::std::__use_cache<__cache_type> __uc;
    const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
    const __cache_type *__lc = __uc(__loc);
    const _CharT *__lit = __lc->_M_atoms_in;
    typename ::std::num_get<_CharT, _InIter>::char_type __c = ((typename ::std::num_get<_CharT, _InIter>::char_type()));
    bool __testeof = __beg == __end;
    if (!__testeof)
      {
        __c = *__beg;
        const bool __plus = __c == __lit[::std::__num_base::_S_iplus];
        if (((__plus || __c == __lit[::std::__num_base::_S_iminus]) && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)) && !(__c == __lc->_M_decimal_point))
          {
            __xtrc += __plus ? '+' : '-';
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    bool __found_mantissa(false);
    int __sep_pos(0);
    while (!__testeof)
      {
        if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep) || __c == __lc->_M_decimal_point)
          {
            break;
          }
        else
          {
            if (__c == __lit[::std::__num_base::_S_izero])
              {
                if (!__found_mantissa)
                  {
                    __xtrc += '0';
                    __found_mantissa = true;
                  }
                 ++__sep_pos;
                if ( ++__beg != __end)
                  {
                    __c = *__beg;
                  }
                else
                  {
                    __testeof = true;
                  }
              }
            else
              {
                break;
              }
          }
      }
    bool __found_dec(false);
    bool __found_sci(false);
    ::std::string __found_grouping /* () */ ;
    if (__lc->_M_use_grouping)
      {
        __found_grouping.::std::basic_string<char>::reserve(32);
      }
    const typename ::std::num_get<_CharT, _InIter>::char_type *__lit_zero = __lit + ::std::__num_base::_S_izero;
    if (!__lc->_M_allocated)
      {
        while (!__testeof)
          {
            const int __digit = (*this)._M_find(__lit_zero, 10, __c);
            if (__digit !=  -1)
              {
                __xtrc += '0' + __digit;
                __found_mantissa = true;
              }
            else
              {
                if ((__c == __lc->_M_decimal_point && !__found_dec) && !__found_sci)
                  {
                    __xtrc += '.';
                    __found_dec = true;
                  }
                else
                  {
                    if (((__c == __lit[::std::__num_base::_S_ie] || __c == __lit[::std::__num_base::_S_iE]) && !__found_sci) && __found_mantissa)
                      {
                        __xtrc += 'e';
                        __found_sci = true;
                        if ( ++__beg != __end)
                          {
                            __c = *__beg;
                            const bool __plus = __c == __lit[::std::__num_base::_S_iplus];
                            if (__plus || __c == __lit[::std::__num_base::_S_iminus])
                              {
                                __xtrc += __plus ? '+' : '-';
                              }
                            else
                              {
                                continue;
                              }
                          }
                        else
                          {
                            __testeof = true;
                            break;
                          }
                      }
                    else
                      {
                        break;
                      }
                  }
              }
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    else
      {
        while (!__testeof)
          {
            if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
              {
                if (!__found_dec && !__found_sci)
                  {
                    if (__sep_pos)
                      {
                        __found_grouping += static_cast<char>(__sep_pos);
                        __sep_pos = 0;
                      }
                    else
                      {
                        __xtrc.::std::basic_string<char>::clear();
                        break;
                      }
                  }
                else
                  {
                    break;
                  }
              }
            else
              {
                if (__c == __lc->_M_decimal_point)
                  {
                    if (!__found_dec && !__found_sci)
                      {
                        if (__found_grouping.::std::basic_string<char>::size())
                          {
                            __found_grouping += static_cast<char>(__sep_pos);
                          }
                        __xtrc += '.';
                        __found_dec = true;
                      }
                    else
                      {
                        break;
                      }
                  }
                else
                  {
                    const typename ::std::num_get<_CharT, _InIter>::char_type *__q = __traits_type::find(__lit_zero, 10, __c);
                    if (__q)
                      {
                        __xtrc += '0' + (__q - __lit_zero);
                        __found_mantissa = true;
                         ++__sep_pos;
                      }
                    else
                      {
                        if (((__c == __lit[::std::__num_base::_S_ie] || __c == __lit[::std::__num_base::_S_iE]) && !__found_sci) && __found_mantissa)
                          {
                            if (__found_grouping.::std::basic_string<char>::size() && !__found_dec)
                              {
                                __found_grouping += static_cast<char>(__sep_pos);
                              }
                            __xtrc += 'e';
                            __found_sci = true;
                            if ( ++__beg != __end)
                              {
                                __c = *__beg;
                                const bool __plus = __c == __lit[::std::__num_base::_S_iplus];
                                if (((__plus || __c == __lit[::std::__num_base::_S_iminus]) && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)) && !(__c == __lc->_M_decimal_point))
                                  {
                                    __xtrc += __plus ? '+' : '-';
                                  }
                                else
                                  {
                                    continue;
                                  }
                              }
                            else
                              {
                                __testeof = true;
                                break;
                              }
                          }
                        else
                          {
                            break;
                          }
                      }
                  }
              }
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    if (__found_grouping.::std::basic_string<char>::size())
      {
        if (!__found_dec && !__found_sci)
          {
            __found_grouping += static_cast<char>(__sep_pos);
          }
        if (!std::__verify_grouping(__lc->_M_grouping, __lc->_M_grouping_size, __found_grouping))
          {
            __err = ::std::ios_base::failbit;
          }
      }
    return __beg;
  }
  template < typename _CharT, typename _InIter >
  template < typename _ValueT >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::_M_extract_int(_InIter __beg, _InIter __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, _ValueT &__v) const 
  {
    typedef ::std::char_traits<_CharT> __traits_type;
    using ::__gnu_cxx::__add_unsigned;
    typedef typename ::__gnu_cxx::__add_unsigned<_ValueT>::__type __unsigned_type;
    typedef ::std::__numpunct_cache<_CharT> __cache_type;
    ::std::__use_cache<__cache_type> __uc;
    const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
    const __cache_type *__lc = __uc(__loc);
    const _CharT *__lit = __lc->_M_atoms_in;
    typename ::std::num_get<_CharT, _InIter>::char_type __c = ((typename ::std::num_get<_CharT, _InIter>::char_type()));
    const ::std::ios_base::fmtflags __basefield(__io.::std::ios_base::flags() & ::std::ios_base::basefield);
    const bool __oct(__basefield == ::std::ios_base::oct);
    int __base(__oct ? 8 : __basefield == ::std::ios_base::hex ? 16 : 10);
    bool __testeof = __beg == __end;
    bool __negative(false);
    if (!__testeof)
      {
        __c = *__beg;
        __negative = __c == __lit[::std::__num_base::_S_iminus];
        if (((__negative || __c == __lit[::std::__num_base::_S_iplus]) && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)) && !(__c == __lc->_M_decimal_point))
          {
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    bool __found_zero(false);
    int __sep_pos(0);
    while (!__testeof)
      {
        if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep) || __c == __lc->_M_decimal_point)
          {
            break;
          }
        else
          {
            if (__c == __lit[::std::__num_base::_S_izero] && (!__found_zero || __base == 10))
              {
                __found_zero = true;
                 ++__sep_pos;
                if (__basefield == 0)
                  {
                    __base = 8;
                  }
                if (__base == 8)
                  {
                    __sep_pos = 0;
                  }
              }
            else
              {
                if (__found_zero && (__c == __lit[::std::__num_base::_S_ix] || __c == __lit[::std::__num_base::_S_iX]))
                  {
                    if (__basefield == 0)
                      {
                        __base = 16;
                      }
                    if (__base == 16)
                      {
                        __found_zero = false;
                        __sep_pos = 0;
                      }
                    else
                      {
                        break;
                      }
                  }
                else
                  {
                    break;
                  }
              }
          }
        if ( ++__beg != __end)
          {
            __c = *__beg;
            if (!__found_zero)
              {
                break;
              }
          }
        else
          {
            __testeof = true;
          }
      }
    const ::std::size_t __len(__base == 16 ? ::std::__num_base::_S_iend - ::std::__num_base::_S_izero : __base);
    ::std::string __found_grouping /* () */ ;
    if (__lc->_M_use_grouping)
      {
        __found_grouping.::std::basic_string<char>::reserve(32);
      }
    bool __testfail(false);
    bool __testoverflow(false);
    const __unsigned_type __max = __negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed ?  -__gnu_cxx::__numeric_traits<_ValueT>::__min : __gnu_cxx::__numeric_traits<_ValueT>::__max;
    const __unsigned_type __smax = __max / __base;
    __unsigned_type __result = 0;
    int __digit(0);
    const typename ::std::num_get<_CharT, _InIter>::char_type *__lit_zero = __lit + ::std::__num_base::_S_izero;
    if (!__lc->_M_allocated)
      {
        while (!__testeof)
          {
            __digit = (*this)._M_find(__lit_zero, __len, __c);
            if (__digit ==  -1)
              {
                break;
              }
            if (__result > __smax)
              {
                __testoverflow = true;
              }
            else
              {
                __result *= __base;
                __testoverflow |= __result > __max - __digit;
                __result += __digit;
                 ++__sep_pos;
              }
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    else
      {
        while (!__testeof)
          {
            if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
              {
                if (__sep_pos)
                  {
                    __found_grouping += static_cast<char>(__sep_pos);
                    __sep_pos = 0;
                  }
                else
                  {
                    __testfail = true;
                    break;
                  }
              }
            else
              {
                if (__c == __lc->_M_decimal_point)
                  {
                    break;
                  }
                else
                  {
                    const typename ::std::num_get<_CharT, _InIter>::char_type *__q = __traits_type::find(__lit_zero, __len, __c);
                    if (!__q)
                      {
                        break;
                      }
                    __digit = __q - __lit_zero;
                    if (__digit > 15)
                      {
                        __digit -= 6;
                      }
                    if (__result > __smax)
                      {
                        __testoverflow = true;
                      }
                    else
                      {
                        __result *= __base;
                        __testoverflow |= __result > __max - __digit;
                        __result += __digit;
                         ++__sep_pos;
                      }
                  }
              }
            if ( ++__beg != __end)
              {
                __c = *__beg;
              }
            else
              {
                __testeof = true;
              }
          }
      }
    if (__found_grouping.::std::basic_string<char>::size())
      {
        __found_grouping += static_cast<char>(__sep_pos);
        if (!std::__verify_grouping(__lc->_M_grouping, __lc->_M_grouping_size, __found_grouping))
          {
            __err = ::std::ios_base::failbit;
          }
      }
    if (((!__sep_pos && !__found_zero) && !__found_grouping.::std::basic_string<char>::size()) || __testfail)
      {
        __v = 0;
        __err = ::std::ios_base::failbit;
      }
    else
      {
        if (__testoverflow)
          {
            if (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
              {
                __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
              }
            else
              {
                __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
              }
            __err = ::std::ios_base::failbit;
          }
        else
          {
            __v = __negative ?  -__result : __result;
          }
      }
    if (__testeof)
      {
        __err |= ::std::ios_base::eofbit;
      }
    return __beg;
  }
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, bool &__v) const 
  {
    if (!(__io.::std::ios_base::flags() & ::std::ios_base::boolalpha))
      {
        long int __l( -1);
        __beg = (*this)._M_extract_int(__beg, __end, __io, __err, __l);
        if (__l == 0 || __l == 1)
          {
            __v = (bool)__l;
          }
        else
          {
            __v = true;
            __err = ::std::ios_base::failbit;
            if (__beg == __end)
              {
                __err |= ::std::ios_base::eofbit;
              }
          }
      }
    else
      {
        typedef ::std::__numpunct_cache<_CharT> __cache_type;
        ::std::__use_cache<__cache_type> __uc;
        const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
        const __cache_type *__lc = __uc(__loc);
        bool __testf(true);
        bool __testt(true);
        bool __donef = __lc->_M_falsename_size == 0;
        bool __donet = __lc->_M_truename_size == 0;
        bool __testeof(false);
        ::std::size_t __n(0);
        while (!__donef || !__donet)
          {
            if (__beg == __end)
              {
                __testeof = true;
                break;
              }
            const typename ::std::num_get<_CharT, _InIter>::char_type __c = *__beg;
            if (!__donef)
              {
                __testf = __c == __lc->_M_falsename[__n];
              }
            if (!__testf && __donet)
              {
                break;
              }
            if (!__donet)
              {
                __testt = __c == __lc->_M_truename[__n];
              }
            if (!__testt && __donef)
              {
                break;
              }
            if (!__testt && !__testf)
              {
                break;
              }
             ++__n;
             ++__beg;
            __donef = !__testf || __n >= __lc->_M_falsename_size;
            __donet = !__testt || __n >= __lc->_M_truename_size;
          }
        if ((__testf && __n == __lc->_M_falsename_size) && __n)
          {
            __v = false;
            if (__testt && __n == __lc->_M_truename_size)
              {
                __err = ::std::ios_base::failbit;
              }
            else
              {
                __err = __testeof ? ::std::ios_base::eofbit : ::std::ios_base::goodbit;
              }
          }
        else
          {
            if ((__testt && __n == __lc->_M_truename_size) && __n)
              {
                __v = true;
                __err = __testeof ? ::std::ios_base::eofbit : ::std::ios_base::goodbit;
              }
            else
              {
                __v = false;
                __err = ::std::ios_base::failbit;
                if (__testeof)
                  {
                    __err |= ::std::ios_base::eofbit;
                  }
              }
          }
      }
    return __beg;
  }
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, float &__v) const 
  {
    ::std::string __xtrc /* () */ ;
    __xtrc.::std::basic_string<char>::reserve(32);
    __beg = (*this)._M_extract_float(__beg, __end, __io, __err, __xtrc);
    std::__convert_to_v(__xtrc.::std::basic_string<char>::c_str(), __v, __err, _S_get_c_locale());
    if (__beg == __end)
      {
        __err |= ::std::ios_base::eofbit;
      }
    return __beg;
  }
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, double &__v) const 
  {
    ::std::string __xtrc /* () */ ;
    __xtrc.::std::basic_string<char>::reserve(32);
    __beg = (*this)._M_extract_float(__beg, __end, __io, __err, __xtrc);
    std::__convert_to_v(__xtrc.::std::basic_string<char>::c_str(), __v, __err, _S_get_c_locale());
    if (__beg == __end)
      {
        __err |= ::std::ios_base::eofbit;
      }
    return __beg;
  }
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, long double &__v) const 
  {
    ::std::string __xtrc /* () */ ;
    __xtrc.::std::basic_string<char>::reserve(32);
    __beg = (*this)._M_extract_float(__beg, __end, __io, __err, __xtrc);
    std::__convert_to_v(__xtrc.::std::basic_string<char>::c_str(), __v, __err, _S_get_c_locale());
    if (__beg == __end)
      {
        __err |= ::std::ios_base::eofbit;
      }
    return __beg;
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, unsigned long int, unsigned long long int>' */ 
  template < typename _CharT, typename _InIter >
  typename ::std::num_get<_CharT, _InIter>::iter_type num_get<_CharT, _InIter>::do_get(typename ::std::num_get<_CharT, _InIter>::iter_type __beg, typename ::std::num_get<_CharT, _InIter>::iter_type __end, ::std::ios_base &__io, ::std::ios_base::iostate &__err, void *&__v) const 
  {
    typedef ::std::ios_base::fmtflags fmtflags;
    const fmtflags __fmt(__io.::std::ios_base::flags());
    __io.::std::ios_base::flags(__fmt &  ~::std::ios_base::basefield | ::std::ios_base::hex);
    typedef ::__gnu_cxx::__conditional_type<true, unsigned long int, unsigned long long int>::__type _UIntPtrType;
    _UIntPtrType __ul;
    __beg = (*this)._M_extract_int(__beg, __end, __io, __err, __ul);
    __io.::std::ios_base::flags(__fmt);
    __v = reinterpret_cast<void *>(__ul);
    return __beg;
  }
  template < typename _CharT, typename _OutIter >
  void num_put<_CharT, _OutIter>::_M_pad(_CharT __fill, ::std::streamsize __w, ::std::ios_base &__io, _CharT *__new, const _CharT *__cs, int &__len) const 
  {
    __pad<_CharT, ::std::char_traits<_CharT> >::_S_pad(__io, __fill, __new, __cs, __w, __len);
    __len = static_cast<int>(__w);
  }
  template < typename _CharT, typename _ValueT >
  int __int_to_char(_CharT *__bufend, _ValueT __v, const _CharT *__lit, ::std::ios_base::fmtflags __flags, bool __dec);
  template < typename _CharT, typename _ValueT >
  int __int_to_char(_CharT *__bufend, _ValueT __v, const _CharT *__lit, ::std::ios_base::fmtflags __flags, bool __dec)
  {
    _CharT *__buf = __bufend;
    if (__builtin_expect(__dec, true))
      {
        do
          {
            * --__buf = __lit[__v % 10 + ::std::__num_base::_S_odigits];
            __v /= 10;
          }
        while (__v != 0);
      }
    else
      {
        if ((__flags & ::std::ios_base::basefield) == ::std::ios_base::oct)
          {
            do
              {
                * --__buf = __lit[(__v & 7) + ::std::__num_base::_S_odigits];
                __v >>= 3;
              }
            while (__v != 0);
          }
        else
          {
            const bool __uppercase(__flags & ::std::ios_base::uppercase);
            const int __case_offset(__uppercase ? ::std::__num_base::_S_oudigits : ::std::__num_base::_S_odigits);
            do
              {
                * --__buf = __lit[(__v & 15) + __case_offset];
                __v >>= 4;
              }
            while (__v != 0);
          }
      }
    return __bufend - __buf;
  }
  template < typename _CharT, typename _OutIter >
  void num_put<_CharT, _OutIter>::_M_group_int(const char *__grouping, ::std::size_t __grouping_size, _CharT __sep, ::std::ios_base &, _CharT *__new, _CharT *__cs, int &__len) const 
  {
    _CharT *__p = std::__add_grouping(__new, __sep, __grouping, __grouping_size, __cs, __cs + __len);
    __len = __p - __new;
  }
  template < typename _CharT, typename _OutIter >
  template < typename _ValueT >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::_M_insert_int(_OutIter __s, ::std::ios_base &__io, _CharT __fill, _ValueT __v) const 
  {
    using ::__gnu_cxx::__add_unsigned;
    typedef typename ::__gnu_cxx::__add_unsigned<_ValueT>::__type __unsigned_type;
    typedef ::std::__numpunct_cache<_CharT> __cache_type;
    ::std::__use_cache<__cache_type> __uc;
    const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
    const __cache_type *__lc = __uc(__loc);
    const _CharT *__lit = __lc->_M_atoms_out;
    const ::std::ios_base::fmtflags __flags(__io.::std::ios_base::flags());
    const int __ilen = 5 * sizeof(_ValueT);
    _CharT *__cs = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __ilen));
    const ::std::ios_base::fmtflags __basefield(__flags & ::std::ios_base::basefield);
    const bool __dec(__basefield != ::std::ios_base::oct && __basefield != ::std::ios_base::hex);
    const __unsigned_type __u = __v > 0 || !__dec ? __unsigned_type(__v) :  -__unsigned_type(__v);
    int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
    __cs += __ilen - __len;
    if (__lc->_M_use_grouping)
      {
        _CharT *__cs2 = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * (__len + 1) * 2));
        (*this)._M_group_int(__lc->_M_grouping, __lc->_M_grouping_size, __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
        __cs = __cs2 + 2;
      }
    if (__builtin_expect(__dec, true))
      {
        if (__v >= 0)
          {
            if ((bool)(__flags & ::std::ios_base::showpos) && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
              {
                (* --__cs = __lit[::std::__num_base::_S_oplus],  ++__len);
              }
          }
        else
          {
            (* --__cs = __lit[::std::__num_base::_S_ominus],  ++__len);
          }
      }
    else
      {
        if ((bool)(__flags & ::std::ios_base::showbase) && __v)
          {
            if (__basefield == ::std::ios_base::oct)
              {
                (* --__cs = __lit[::std::__num_base::_S_odigits],  ++__len);
              }
            else
              {
                const bool __uppercase(__flags & ::std::ios_base::uppercase);
                * --__cs = __lit[::std::__num_base::_S_ox + __uppercase];
                * --__cs = __lit[::std::__num_base::_S_odigits];
                __len += 2;
              }
          }
      }
    const ::std::streamsize __w(__io.::std::ios_base::width());
    if (__w > static_cast< ::std::streamsize>(__len))
      {
        _CharT *__cs3 = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __w));
        (*this)._M_pad(__fill, __w, __io, __cs3, __cs, __len);
        __cs = __cs3;
      }
    __io.::std::ios_base::width(0);
    return std::__write(__s, __cs, __len);
  }
  template < typename _CharT, typename _OutIter >
  void num_put<_CharT, _OutIter>::_M_group_float(const char *__grouping, ::std::size_t __grouping_size, _CharT __sep, const _CharT *__p, _CharT *__new, _CharT *__cs, int &__len) const 
  {
    const int __declen = __p ? __p - __cs : __len;
    _CharT *__p2 = std::__add_grouping(__new, __sep, __grouping, __grouping_size, __cs, __cs + __declen);
    int __newlen = __p2 - __new;
    if (__p)
      {
        char_traits<_CharT>::copy(__p2, __p, __len - __declen);
        __newlen += __len - __declen;
      }
    __len = __newlen;
  }
  template < typename _CharT, typename _OutIter >
  template < typename _ValueT >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::_M_insert_float(_OutIter __s, ::std::ios_base &__io, _CharT __fill, char __mod, _ValueT __v) const 
  {
    typedef ::std::__numpunct_cache<_CharT> __cache_type;
    ::std::__use_cache<__cache_type> __uc;
    const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
    const __cache_type *__lc = __uc(__loc);
    const ::std::streamsize __prec(__io.::std::ios_base::precision() < 0 ? 6 : __io.::std::ios_base::precision());
    const int __max_digits = __gnu_cxx::__numeric_traits<_ValueT>::__digits10;
    int __len;
    char __fbuf[16L];
    __num_base::_S_format_float(__io, __fbuf, __mod);
    int __cs_size = __max_digits * 3;
    char *__cs(static_cast<char *>(__builtin_alloca(__cs_size)));
    __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __prec, __v);
    if (__len >= __cs_size)
      {
        __cs_size = __len + 1;
        __cs = static_cast<char *>(__builtin_alloca(__cs_size));
        __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __prec, __v);
      }
    const ::std::ctype<_CharT> &__ctype = use_facet< ::std::ctype<_CharT> >(__loc);
    _CharT *__ws = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __len));
    __ctype.widen(__cs, __cs + __len, __ws);
    _CharT *__wp = 0;
    const char *__p = char_traits<char>::find(__cs, __len, '.');
    if (__p)
      {
        __wp = __ws + (__p - __cs);
        *__wp = __lc->_M_decimal_point;
      }
    if (__lc->_M_use_grouping && ((__wp || __len < 3) || (((__cs[1] <= '9' && __cs[2] <= '9') && __cs[1] >= '0') && __cs[2] >= '0')))
      {
        _CharT *__ws2 = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __len * 2));
        ::std::streamsize __off(0);
        if (__cs[0] == '-' || __cs[0] == '+')
          {
            __off = 1;
            __ws2[0] = __ws[0];
            __len -= 1;
          }
        (*this)._M_group_float(__lc->_M_grouping, __lc->_M_grouping_size, __lc->_M_thousands_sep, __wp, __ws2 + __off, __ws + __off, __len);
        __len += __off;
        __ws = __ws2;
      }
    const ::std::streamsize __w(__io.::std::ios_base::width());
    if (__w > static_cast< ::std::streamsize>(__len))
      {
        _CharT *__ws3 = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __w));
        (*this)._M_pad(__fill, __w, __io, __ws3, __ws, __len);
        __ws = __ws3;
      }
    __io.::std::ios_base::width(0);
    return std::__write(__s, __ws, __len);
  }
  template < typename _CharT, typename _OutIter >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, bool __v) const 
  {
    const ::std::ios_base::fmtflags __flags(__io.::std::ios_base::flags());
    if ((__flags & ::std::ios_base::boolalpha) == 0)
      {
        const long int __l(__v);
        __s = (*this)._M_insert_int(__s, __io, __fill, __l);
      }
    else
      {
        typedef ::std::__numpunct_cache<_CharT> __cache_type;
        ::std::__use_cache<__cache_type> __uc;
        const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
        const __cache_type *__lc = __uc(__loc);
        const _CharT *__name = __v ? __lc->_M_truename : __lc->_M_falsename;
        int __len = __v ? __lc->_M_truename_size : __lc->_M_falsename_size;
        const ::std::streamsize __w(__io.::std::ios_base::width());
        if (__w > static_cast< ::std::streamsize>(__len))
          {
            const ::std::streamsize __plen = __w - __len;
            _CharT *__ps = static_cast<_CharT *>(__builtin_alloca(sizeof(_CharT) * __plen));
            char_traits<_CharT>::assign(__ps, __plen, __fill);
            __io.::std::ios_base::width(0);
            if ((__flags & ::std::ios_base::adjustfield) == ::std::ios_base::left)
              {
                __s = std::__write(__s, __name, __len);
                __s = std::__write(__s, __ps, __plen);
              }
            else
              {
                __s = std::__write(__s, __ps, __plen);
                __s = std::__write(__s, __name, __len);
              }
            return __s;
          }
        __io.::std::ios_base::width(0);
        __s = std::__write(__s, __name, __len);
      }
    return __s;
  }
  template < typename _CharT, typename _OutIter >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, double __v) const 
  {
    return (*this)._M_insert_float(__s, __io, __fill, char(), __v);
  }
  template < typename _CharT, typename _OutIter >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, long double __v) const 
  {
    return (*this)._M_insert_float(__s, __io, __fill, 'L', __v);
  }
  template < typename _CharT, typename _OutIter >
  typename ::std::num_put<_CharT, _OutIter>::iter_type num_put<_CharT, _OutIter>::do_put(typename ::std::num_put<_CharT, _OutIter>::iter_type __s, ::std::ios_base &__io, typename ::std::num_put<_CharT, _OutIter>::char_type __fill, const void *__v) const 
  {
    const ::std::ios_base::fmtflags __flags(__io.::std::ios_base::flags());
    const ::std::ios_base::fmtflags __fmt( ~(::std::ios_base::basefield | ::std::ios_base::uppercase));
    __io.::std::ios_base::flags(__flags & __fmt | (::std::ios_base::hex | ::std::ios_base::showbase));
    typedef ::__gnu_cxx::__conditional_type<true, unsigned long int, unsigned long long int>::__type _UIntPtrType;
    __s = (*this)._M_insert_int(__s, __io, __fill, reinterpret_cast<_UIntPtrType>(__v));
    __io.::std::ios_base::flags(__flags);
    return __s;
  }
  template < typename _CharT, typename _Traits >
  void __pad<_CharT, _Traits>::_S_pad(::std::ios_base &__io, _CharT __fill, _CharT *__news, const _CharT *__olds, ::std::streamsize __newlen, ::std::streamsize __oldlen)
  {
    const ::std::size_t __plen(static_cast< ::std::size_t>(__newlen - __oldlen));
    const ::std::ios_base::fmtflags __adjust(__io.::std::ios_base::flags() & ::std::ios_base::adjustfield);
    if (__adjust == ::std::ios_base::left)
      {
        _Traits::copy(__news, __olds, __oldlen);
        _Traits::assign(__news + __oldlen, __plen, __fill);
        return ;
      }
    ::std::size_t __mod(0);
    if (__adjust == ::std::ios_base::internal)
      {
        const ::std::locale &__loc(__io.::std::ios_base::_M_getloc());
        const ::std::ctype<_CharT> &__ctype = use_facet< ::std::ctype<_CharT> >(__loc);
        if (__ctype.widen('-') == __olds[0] || __ctype.widen('+') == __olds[0])
          {
            __news[0] = __olds[0];
            __mod = 1;
             ++__news;
          }
        else
          {
            if ((__ctype.widen('0') == __olds[0] && __oldlen > 1) && (__ctype.widen('x') == __olds[1] || __ctype.widen('X') == __olds[1]))
              {
                __news[0] = __olds[0];
                __news[1] = __olds[1];
                __mod = 2;
                __news += 2;
              }
          }
      }
    _Traits::assign(__news, __plen, __fill);
    _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
  }
  template < typename _CharT >
  _CharT *__add_grouping(_CharT *__s, _CharT __sep, const char *__gbeg, ::std::size_t __gsize, const _CharT *__first, const _CharT *__last)
  {
    ::std::size_t __idx(0);
    ::std::size_t __ctr(0);
    while ((__last - __first > __gbeg[__idx] && static_cast<signed char>(__gbeg[__idx]) > 0) && __gbeg[__idx] != ::__gnu_cxx::__numeric_traits_integer<char>::__max)
      {
        __last -= __gbeg[__idx];
        __idx < __gsize - 1 ?  ++__idx :  ++__ctr;
      }
    while (__first != __last)
      {
        *__s++ = *__first++;
      }
    while (__ctr--)
      {
        *__s++ = __sep;
        for (char __i(__gbeg[__idx]); __i > 0;  --__i)
          {
            *__s++ = *__first++;
          }
      }
    while (__idx--)
      {
        *__s++ = __sep;
        for (char __i(__gbeg[__idx]); __i > 0;  --__i)
          {
            *__s++ = *__first++;
          }
      }
    return __s;
  }
  extern template class ::std::numpunct<char>;
  extern template class ::std::numpunct_byname<char>;
  extern template class ::std::num_get<char>;
  extern template class ::std::num_put<char>;
  extern template class ::std::ctype_byname<char>;
  extern template const ::std::ctype<char> &use_facet< ::std::ctype<char> >(const ::std::locale &);
  extern template const ::std::numpunct<char> &use_facet< ::std::numpunct<char> >(const ::std::locale &);
  extern template const ::std::num_put<char> &use_facet< ::std::num_put<char> >(const ::std::locale &);
  extern template const ::std::num_get<char> &use_facet< ::std::num_get<char> >(const ::std::locale &);
  extern template bool has_facet< ::std::ctype<char> >(const ::std::locale &);
  extern template bool has_facet< ::std::numpunct<char> >(const ::std::locale &);
  extern template bool has_facet< ::std::num_put<char> >(const ::std::locale &);
  extern template bool has_facet< ::std::num_get<char> >(const ::std::locale &);
  extern template class ::std::numpunct<wchar_t>;
  extern template class ::std::numpunct_byname<wchar_t>;
  extern template class ::std::num_get<wchar_t>;
  extern template class ::std::num_put<wchar_t>;
  extern template class ::std::ctype_byname<wchar_t>;
  extern template const ::std::ctype<wchar_t> &use_facet< ::std::ctype<wchar_t> >(const ::std::locale &);
  extern template const ::std::numpunct<wchar_t> &use_facet< ::std::numpunct<wchar_t> >(const ::std::locale &);
  extern template const ::std::num_put<wchar_t> &use_facet< ::std::num_put<wchar_t> >(const ::std::locale &);
  extern template const ::std::num_get<wchar_t> &use_facet< ::std::num_get<wchar_t> >(const ::std::locale &);
  extern template bool has_facet< ::std::ctype<wchar_t> >(const ::std::locale &);
  extern template bool has_facet< ::std::numpunct<wchar_t> >(const ::std::locale &);
  extern template bool has_facet< ::std::num_put<wchar_t> >(const ::std::locale &);
  extern template bool has_facet< ::std::num_get<wchar_t> >(const ::std::locale &);
  template < typename _Facet >
  inline const _Facet &__check_facet(const _Facet *__f);
  template < typename _Facet >
  inline const _Facet &__check_facet(const _Facet *__f)
  {
    if (!__f)
      {
        ::std::__throw_bad_cast();
      }
    return *__f;
  }
  template < typename _CharT, typename _Traits >
  class  basic_ios : public ::std::ios_base
  {
    public:
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
      typedef ::std::ctype<_CharT> __ctype_type;
      typedef ::std::num_put<_CharT, ::std::ostreambuf_iterator<_CharT, _Traits> > __num_put_type;
      typedef ::std::num_get<_CharT, ::std::istreambuf_iterator<_CharT, _Traits> > __num_get_type;
    protected:
      ::std::basic_ostream<_CharT, _Traits> *_M_tie;
      mutable typename ::std::basic_ios<_CharT, _Traits>::char_type _M_fill;
      mutable bool _M_fill_init;
      ::std::basic_streambuf<_CharT, _Traits> *_M_streambuf;
      const typename ::std::basic_ios<_CharT, _Traits>::__ctype_type *_M_ctype;
      const typename ::std::basic_ios<_CharT, _Traits>::__num_put_type *_M_num_put;
      const typename ::std::basic_ios<_CharT, _Traits>::__num_get_type *_M_num_get;
    public:
      inline operator void *() const 
      {
        return this->fail() ? 0 : const_cast< ::std::basic_ios<_CharT, _Traits> *>(this);
      }
      inline bool operator !() const 
      {
        return this->fail();
      }
      inline ::std::ios_base::iostate rdstate() const 
      {
        return (*this)._M_streambuf_state;
      }
      void clear(::std::ios_base::iostate __state  = (::std::ios_base::goodbit));
      inline void setstate(::std::ios_base::iostate __state)
      {
        this->clear(this->rdstate() | __state);
      }
      inline void _M_setstate(::std::ios_base::iostate __state)
      {
        (*this)._M_streambuf_state |= __state;
        if (this->exceptions() & __state)
          {
            throw;
          }
      }
      inline bool good() const 
      {
        return this->rdstate() == 0;
      }
      inline bool eof() const 
      {
        return (this->rdstate() & ::std::ios_base::eofbit) != 0;
      }
      inline bool fail() const 
      {
        return (this->rdstate() & (::std::ios_base::badbit | ::std::ios_base::failbit)) != 0;
      }
      inline bool bad() const 
      {
        return (this->rdstate() & ::std::ios_base::badbit) != 0;
      }
      inline ::std::ios_base::iostate exceptions() const 
      {
        return (*this)._M_exception;
      }
      inline void exceptions(::std::ios_base::iostate __except)
      {
        (*this)._M_exception = __except;
        this->clear((*this)._M_streambuf_state);
      }
      inline explicit basic_ios(::std::basic_streambuf<_CharT, _Traits> *__sb)
        : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      {
        this->init(__sb);
      }
      inline virtual ~basic_ios()
      {
      }
      inline ::std::basic_ostream<_CharT, _Traits> *tie() const 
      {
        return ::std::basic_ios<_CharT, _Traits>::_M_tie;
      }
      inline ::std::basic_ostream<_CharT, _Traits> *tie(::std::basic_ostream<_CharT, _Traits> *__tiestr)
      {
        ::std::basic_ostream<_CharT, _Traits> *__old = ::std::basic_ios<_CharT, _Traits>::_M_tie;
        ::std::basic_ios<_CharT, _Traits>::_M_tie = __tiestr;
        return __old;
      }
      inline ::std::basic_streambuf<_CharT, _Traits> *rdbuf() const 
      {
        return ::std::basic_ios<_CharT, _Traits>::_M_streambuf;
      }
      ::std::basic_streambuf<_CharT, _Traits> *rdbuf(::std::basic_streambuf<_CharT, _Traits> *__sb);
      ::std::basic_ios<_CharT, _Traits> &copyfmt(const ::std::basic_ios<_CharT, _Traits> &__rhs);
      inline typename ::std::basic_ios<_CharT, _Traits>::char_type fill() const 
      {
        if (!::std::basic_ios<_CharT, _Traits>::_M_fill_init)
          {
            ::std::basic_ios<_CharT, _Traits>::_M_fill = this->widen(' ');
            ::std::basic_ios<_CharT, _Traits>::_M_fill_init = true;
          }
        return ::std::basic_ios<_CharT, _Traits>::_M_fill;
      }
      inline typename ::std::basic_ios<_CharT, _Traits>::char_type fill(typename ::std::basic_ios<_CharT, _Traits>::char_type __ch)
      {
        typename ::std::basic_ios<_CharT, _Traits>::char_type __old = this->fill();
        ::std::basic_ios<_CharT, _Traits>::_M_fill = __ch;
        return __old;
      }
      ::std::locale imbue(const ::std::locale &__loc);
      inline char narrow(typename ::std::basic_ios<_CharT, _Traits>::char_type __c, char __dfault) const 
      {
        return __check_facet(::std::basic_ios<_CharT, _Traits>::_M_ctype).narrow(__c, __dfault);
      }
      inline typename ::std::basic_ios<_CharT, _Traits>::char_type widen(char __c) const 
      {
        return __check_facet(::std::basic_ios<_CharT, _Traits>::_M_ctype).widen(__c);
      }
    protected:
      inline basic_ios()
        : ios_base(), _M_tie(0), _M_fill(((typename ::std::basic_ios<_CharT, _Traits>::char_type()))), _M_fill_init(false), _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      {
      }
      void init(::std::basic_streambuf<_CharT, _Traits> *__sb);
      void _M_cache_locale(const ::std::locale &__loc);
  };
  template < typename _CharT, typename _Traits >
  void basic_ios<_CharT, _Traits>::clear(::std::ios_base::iostate __state)
  {
    if (this->rdbuf())
      {
        (*this)._M_streambuf_state = __state;
      }
    else
      {
        (*this)._M_streambuf_state = __state | ::std::ios_base::badbit;
      }
    if (this->exceptions() & this->rdstate())
      {
        ::std::__throw_ios_failure("basic_ios::clear");
      }
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_streambuf<_CharT, _Traits> *basic_ios<_CharT, _Traits>::rdbuf(::std::basic_streambuf<_CharT, _Traits> *__sb)
  {
    ::std::basic_streambuf<_CharT, _Traits> *__old = ::std::basic_ios<_CharT, _Traits>::_M_streambuf;
    ::std::basic_ios<_CharT, _Traits>::_M_streambuf = __sb;
    this->clear();
    return __old;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_ios<_CharT, _Traits> &basic_ios<_CharT, _Traits>::copyfmt(const ::std::basic_ios<_CharT, _Traits> &__rhs)
  {
    if (this != &__rhs)
      {
        ::std::ios_base::_Words *__words = __rhs._M_word_size <= ::std::ios_base::_S_local_word_size ? (*this)._M_local_word : new ::std::ios_base::_Words [__rhs._M_word_size];
        ::std::ios_base::_Callback_list *__cb = __rhs._M_callbacks;
        if (__cb)
          {
            (*__cb).::std::ios_base::_Callback_list::_M_add_reference();
          }
        (*this)._M_call_callbacks(::std::ios_base::erase_event);
        if ((*this)._M_word != (*this)._M_local_word)
          {
            delete[] (*this)._M_word;
            (*this)._M_word = 0;
          }
        (*this)._M_dispose_callbacks();
        (*this)._M_callbacks = __cb;
        for (int __i(0); __i < __rhs._M_word_size;  ++__i)
          {
            __words[__i] = __rhs._M_word[__i];
          }
        (*this)._M_word = __words;
        (*this)._M_word_size = __rhs._M_word_size;
        this->flags(__rhs.flags());
        this->width(__rhs.width());
        this->precision(__rhs.precision());
        this->tie(__rhs.tie());
        this->fill(__rhs.fill());
        (*this)._M_ios_locale = __rhs.getloc();
        (*this)._M_cache_locale((*this)._M_ios_locale);
        (*this)._M_call_callbacks(::std::ios_base::copyfmt_event);
        this->exceptions(__rhs.exceptions());
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  ::std::locale basic_ios<_CharT, _Traits>::imbue(const ::std::locale &__loc)
  {
    ::std::locale __old(this->getloc());
    ios_base::imbue(__loc);
    (*this)._M_cache_locale(__loc);
    if (this->rdbuf() != 0)
      {
        this->rdbuf()->pubimbue(__loc);
      }
    return __old;
  }
  template < typename _CharT, typename _Traits >
  void basic_ios<_CharT, _Traits>::init(::std::basic_streambuf<_CharT, _Traits> *__sb)
  {
    ios_base::_M_init();
    (*this)._M_cache_locale((*this)._M_ios_locale);
    ::std::basic_ios<_CharT, _Traits>::_M_fill = _CharT();
    ::std::basic_ios<_CharT, _Traits>::_M_fill_init = false;
    ::std::basic_ios<_CharT, _Traits>::_M_tie = 0;
    (*this)._M_exception = ::std::ios_base::goodbit;
    ::std::basic_ios<_CharT, _Traits>::_M_streambuf = __sb;
    (*this)._M_streambuf_state = __sb ? ::std::ios_base::goodbit : ::std::ios_base::badbit;
  }
  template < typename _CharT, typename _Traits >
  void basic_ios<_CharT, _Traits>::_M_cache_locale(const ::std::locale &__loc)
  {
    if (__builtin_expect(has_facet<typename ::std::basic_ios<_CharT, _Traits>::__ctype_type>(__loc), true))
      {
        ::std::basic_ios<_CharT, _Traits>::_M_ctype = &use_facet<typename ::std::basic_ios<_CharT, _Traits>::__ctype_type>(__loc);
      }
    else
      {
        ::std::basic_ios<_CharT, _Traits>::_M_ctype = 0;
      }
    if (__builtin_expect(has_facet<typename ::std::basic_ios<_CharT, _Traits>::__num_put_type>(__loc), true))
      {
        ::std::basic_ios<_CharT, _Traits>::_M_num_put = &use_facet<typename ::std::basic_ios<_CharT, _Traits>::__num_put_type>(__loc);
      }
    else
      {
        ::std::basic_ios<_CharT, _Traits>::_M_num_put = 0;
      }
    if (__builtin_expect(has_facet<typename ::std::basic_ios<_CharT, _Traits>::__num_get_type>(__loc), true))
      {
        ::std::basic_ios<_CharT, _Traits>::_M_num_get = &use_facet<typename ::std::basic_ios<_CharT, _Traits>::__num_get_type>(__loc);
      }
    else
      {
        ::std::basic_ios<_CharT, _Traits>::_M_num_get = 0;
      }
  }
  extern template class ::std::basic_ios<char>;
  extern template class ::std::basic_ios<wchar_t>;
  template < typename _CharT, typename _Traits >
  class  basic_ostream : virtual public ::std::basic_ios<_CharT, _Traits>
  {
    public:
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
      typedef ::std::basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef ::std::basic_ios<_CharT, _Traits> __ios_type;
      typedef ::std::basic_ostream<_CharT, _Traits> __ostream_type;
      typedef ::std::num_put<_CharT, ::std::ostreambuf_iterator<_CharT, _Traits> > __num_put_type;
      typedef ::std::ctype<_CharT> __ctype_type;
      inline explicit basic_ostream(typename ::std::basic_ostream<_CharT, _Traits>::__streambuf_type *__sb)
      {
        this->init(__sb);
      }
      inline virtual ~basic_ostream()
      {
      }
      class sentry;
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &(*__pf)(typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &))
      {
        return __pf(*this);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(typename ::std::basic_ostream<_CharT, _Traits>::__ios_type &(*__pf)(typename ::std::basic_ostream<_CharT, _Traits>::__ios_type &))
      {
        __pf(*this);
        return *this;
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(::std::ios_base &(*__pf)(::std::ios_base &))
      {
        __pf(*this);
        return *this;
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(long int __n)
      {
        return (*this)._M_insert(__n);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(unsigned long int __n)
      {
        return (*this)._M_insert(__n);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(bool __n)
      {
        return (*this)._M_insert(__n);
      }
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(short int __n);
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(unsigned short int __n)
      {
        return (*this)._M_insert(static_cast<unsigned long int>(__n));
      }
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(int __n);
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(unsigned int __n)
      {
        return (*this)._M_insert(static_cast<unsigned long int>(__n));
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(long long int __n)
      {
        return (*this)._M_insert(__n);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(unsigned long long int __n)
      {
        return (*this)._M_insert(__n);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(double __f)
      {
        return (*this)._M_insert(__f);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(float __f)
      {
        return (*this)._M_insert(static_cast<double>(__f));
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(long double __f)
      {
        return (*this)._M_insert(__f);
      }
      inline typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(const void *__p)
      {
        return (*this)._M_insert(__p);
      }
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &operator <<(typename ::std::basic_ostream<_CharT, _Traits>::__streambuf_type *__sbin);
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &put(typename ::std::basic_ostream<_CharT, _Traits>::char_type __c);
      inline void _M_write(const typename ::std::basic_ostream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        const ::std::streamsize __put = this->rdbuf()->sputn(__s, __n);
        if (__put != __n)
          {
            this->setstate(::std::ios_base::badbit);
          }
      }
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &write(const typename ::std::basic_ostream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n);
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &flush();
      typename ::std::basic_ostream<_CharT, _Traits>::pos_type tellp();
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &seekp(typename ::std::basic_ostream<_CharT, _Traits>::pos_type __pos);
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &seekp(typename ::std::basic_ostream<_CharT, _Traits>::off_type __off, ::std::ios_base::seekdir __dir);
    protected:
      inline basic_ostream()
      {
        this->init(0);
      }
      template < typename _ValueT >
      typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &_M_insert(_ValueT __v);
    friend class sentry;
  };
  template < typename _CharT, typename _Traits >
  class  basic_ostream<_CharT, _Traits>::sentry
  {
      bool _M_ok;
      ::std::basic_ostream<_CharT, _Traits> &_M_os;
    public:
      explicit sentry(::std::basic_ostream<_CharT, _Traits> &__os);
      inline ~sentry()
      {
        if (bool(::std::basic_ostream<_CharT, _Traits>::sentry::_M_os.flags() & ::std::ios_base::unitbuf) && !::std::uncaught_exception())
          {
            if (::std::basic_ostream<_CharT, _Traits>::sentry::_M_os.rdbuf() && ::std::basic_ostream<_CharT, _Traits>::sentry::_M_os.rdbuf()->pubsync() ==  -1)
              {
                ::std::basic_ostream<_CharT, _Traits>::sentry::_M_os.setstate(::std::ios_base::badbit);
              }
          }
      }
      inline explicit operator bool() const 
      {
        return ::std::basic_ostream<_CharT, _Traits>::sentry::_M_ok;
      }
  };
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, _CharT __c);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, _CharT __c)
  {
    return __ostream_insert(__out, &__c, 1);
  }
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, char __c);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, char __c)
  {
    return __out << __out.widen(__c);
  }
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, char __c);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, char __c)
  {
    return __ostream_insert(__out, &__c, 1);
  }
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, signed char __c);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, signed char __c)
  {
    return __out << static_cast<char>(__c);
  }
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, unsigned char __c);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, unsigned char __c)
  {
    return __out << static_cast<char>(__c);
  }
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, const _CharT *__s)
  {
    if (!__s)
      {
        __out.setstate(::std::ios_base::badbit);
      }
    else
      {
        __ostream_insert(__out, __s, static_cast< ::std::streamsize>(_Traits::length(__s)));
      }
    return __out;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, const char *__s);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const char *__s);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const char *__s)
  {
    if (!__s)
      {
        __out.setstate(::std::ios_base::badbit);
      }
    else
      {
        __ostream_insert(__out, __s, static_cast< ::std::streamsize>(_Traits::length(__s)));
      }
    return __out;
  }
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const signed char *__s);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const signed char *__s)
  {
    return __out << reinterpret_cast<const char *>(__s);
  }
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const unsigned char *__s);
  template < typename _Traits >
  inline ::std::basic_ostream<char, _Traits> &operator <<(::std::basic_ostream<char, _Traits> &__out, const unsigned char *__s)
  {
    return __out << reinterpret_cast<const char *>(__s);
  }
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &endl(::std::basic_ostream<_CharT, _Traits> &__os);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &endl(::std::basic_ostream<_CharT, _Traits> &__os)
  {
    return flush(__os.put(__os.widen('\n')));
  }
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &ends(::std::basic_ostream<_CharT, _Traits> &__os);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &ends(::std::basic_ostream<_CharT, _Traits> &__os)
  {
    return __os.put(_CharT());
  }
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &flush(::std::basic_ostream<_CharT, _Traits> &__os);
  template < typename _CharT, typename _Traits >
  inline ::std::basic_ostream<_CharT, _Traits> &flush(::std::basic_ostream<_CharT, _Traits> &__os)
  {
    return __os.flush();
  }
  template < typename _CharT, typename _Traits, typename _Tp >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &&__os, const _Tp &__x);
  template < typename _CharT, typename _Traits, typename _Tp >
  inline ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &&__os, const _Tp &__x)
  {
    __os << __x;
    return __os;
  }
  template < typename _CharT, typename _Traits >
  basic_ostream<_CharT, _Traits>::sentry::sentry(::std::basic_ostream<_CharT, _Traits> &__os)
    : _M_ok(false), _M_os(__os)
  {
    if (__os.tie() && __os.good())
      {
        __os.tie()->flush();
      }
    if (__os.good())
      {
        ::std::basic_ostream<_CharT, _Traits>::sentry::_M_ok = true;
      }
    else
      {
        __os.setstate(::std::ios_base::failbit);
      }
  }
  template < typename _CharT, typename _Traits >
  template < typename _ValueT >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::_M_insert(_ValueT __v)
  {
    typename ::std::basic_ostream<_CharT, _Traits>::sentry __cerb(*this);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_ostream<_CharT, _Traits>::__num_put_type &__np = __check_facet(this->_M_num_put);
          if (__np.put(*this, *this, this->fill(), __v).failed())
            {
              __err |= ::std::ios_base::badbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::operator <<(short int __n)
  {
    const ::std::ios_base::fmtflags __fmt = this->flags() & ::std::ios_base::basefield;
    if (__fmt == ::std::ios_base::oct || __fmt == ::std::ios_base::hex)
      {
        return (*this)._M_insert(static_cast<long int>(static_cast<unsigned short int>(__n)));
      }
    else
      {
        return (*this)._M_insert(static_cast<long int>(__n));
      }
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::operator <<(int __n)
  {
    const ::std::ios_base::fmtflags __fmt = this->flags() & ::std::ios_base::basefield;
    if (__fmt == ::std::ios_base::oct || __fmt == ::std::ios_base::hex)
      {
        return (*this)._M_insert(static_cast<long int>(static_cast<unsigned int>(__n)));
      }
    else
      {
        return (*this)._M_insert(static_cast<long int>(__n));
      }
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::operator <<(typename ::std::basic_ostream<_CharT, _Traits>::__streambuf_type *__sbin)
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_ostream<_CharT, _Traits>::sentry __cerb(*this);
    if (__cerb && __sbin)
      {
        try
        {
          if (!__copy_streambufs(__sbin, this->rdbuf()))
            {
              __err |= ::std::ios_base::failbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::failbit);
        }
      }
    else
      {
        if (!__sbin)
          {
            __err |= ::std::ios_base::badbit;
          }
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::put(typename ::std::basic_ostream<_CharT, _Traits>::char_type __c)
  {
    typename ::std::basic_ostream<_CharT, _Traits>::sentry __cerb(*this);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_ostream<_CharT, _Traits>::int_type __put = this->rdbuf()->sputc(__c);
          if (traits_type::eq_int_type(__put, traits_type::eof()))
            {
              __err |= ::std::ios_base::badbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::write(const _CharT *__s, ::std::streamsize __n)
  {
    typename ::std::basic_ostream<_CharT, _Traits>::sentry __cerb(*this);
    if (__cerb)
      {
        try
        {
          (*this)._M_write(__s, __n);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::flush()
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    try
    {
      if (this->rdbuf() && this->rdbuf()->pubsync() ==  -1)
        {
          __err |= ::std::ios_base::badbit;
        }
    }
    catch (::__cxxabiv1::__forced_unwind &)
    {
      this->_M_setstate(::std::ios_base::badbit);
      throw;
    }
    catch (...)
    {
      this->_M_setstate(::std::ios_base::badbit);
    }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::pos_type basic_ostream<_CharT, _Traits>::tellp()
  {
    typename ::std::basic_ostream<_CharT, _Traits>::pos_type __ret = ((typename ::std::basic_ostream<_CharT, _Traits>::pos_type( -1)));
    try
    {
      if (!this->fail())
        {
          __ret = this->rdbuf()->pubseekoff(0, ::std::ios_base::cur, ::std::ios_base::out);
        }
    }
    catch (::__cxxabiv1::__forced_unwind &)
    {
      this->_M_setstate(::std::ios_base::badbit);
      throw;
    }
    catch (...)
    {
      this->_M_setstate(::std::ios_base::badbit);
    }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::seekp(typename ::std::basic_ostream<_CharT, _Traits>::pos_type __pos)
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    try
    {
      if (!this->fail())
        {
          const typename ::std::basic_ostream<_CharT, _Traits>::pos_type __p = this->rdbuf()->pubseekpos(__pos, ::std::ios_base::out);
          if (__p == ((typename ::std::basic_ostream<_CharT, _Traits>::pos_type(((typename ::std::basic_ostream<_CharT, _Traits>::off_type( -1)))))))
            {
              __err |= ::std::ios_base::failbit;
            }
        }
    }
    catch (::__cxxabiv1::__forced_unwind &)
    {
      this->_M_setstate(::std::ios_base::badbit);
      throw;
    }
    catch (...)
    {
      this->_M_setstate(::std::ios_base::badbit);
    }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_ostream<_CharT, _Traits>::__ostream_type &basic_ostream<_CharT, _Traits>::seekp(typename ::std::basic_ostream<_CharT, _Traits>::off_type __off, ::std::ios_base::seekdir __dir)
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    try
    {
      if (!this->fail())
        {
          const typename ::std::basic_ostream<_CharT, _Traits>::pos_type __p = this->rdbuf()->pubseekoff(__off, __dir, ::std::ios_base::out);
          if (__p == ((typename ::std::basic_ostream<_CharT, _Traits>::pos_type(((typename ::std::basic_ostream<_CharT, _Traits>::off_type( -1)))))))
            {
              __err |= ::std::ios_base::failbit;
            }
        }
    }
    catch (::__cxxabiv1::__forced_unwind &)
    {
      this->_M_setstate(::std::ios_base::badbit);
      throw;
    }
    catch (...)
    {
      this->_M_setstate(::std::ios_base::badbit);
    }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_ostream<_CharT, _Traits> &operator <<(::std::basic_ostream<_CharT, _Traits> &__out, const char *__s)
  {
    if (!__s)
      {
        __out.setstate(::std::ios_base::badbit);
      }
    else
      {
        const ::std::size_t __clen(char_traits<char>::length(__s));
        try
        {
          struct  __ptr_guard
          {
              _CharT *__p;
              inline __ptr_guard(_CharT *__ip)
                : __p(__ip)
              {
              }
              inline ~__ptr_guard()
              {
                delete[] __ptr_guard::__p;
              }
              inline _CharT *__get()
              {
                return __ptr_guard::__p;
              }
          };
          __ptr_guard __pg(new _CharT [__clen]);
          _CharT *__ws = __pg.__get();
          for (::std::size_t __i(0); __i < __clen;  ++__i)
            {
              __ws[__i] = __out.widen(__s[__i]);
            }
          __ostream_insert(__out, __ws, __clen);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __out._M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __out._M_setstate(::std::ios_base::badbit);
        }
      }
    return __out;
  }
  extern template class ::std::basic_ostream<char>;
  extern template ::std::basic_ostream<char> &endl(::std::basic_ostream<char> &);
  extern template ::std::basic_ostream<char> &ends(::std::basic_ostream<char> &);
  extern template ::std::basic_ostream<char> &flush(::std::basic_ostream<char> &);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, char);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, unsigned char);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, signed char);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, const char *);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, const unsigned char *);
  extern template ::std::basic_ostream<char> &operator <<(::std::basic_ostream<char> &, const signed char *);
 /* Instantiation of class template '::std::basic_ios<char>' */ 
 /* Instantiation of class template '::std::basic_ostream<char>' */ 
  extern template ::std::basic_ostream<char> &ostream::_M_insert(long int);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(unsigned long int);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(bool);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(long long int);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(unsigned long long int);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(double);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(long double);
  extern template ::std::basic_ostream<char> &ostream::_M_insert(const void *);
  extern template class ::std::basic_ostream<wchar_t>;
  extern template ::std::basic_ostream<wchar_t> &endl(::std::basic_ostream<wchar_t> &);
  extern template ::std::basic_ostream<wchar_t> &ends(::std::basic_ostream<wchar_t> &);
  extern template ::std::basic_ostream<wchar_t> &flush(::std::basic_ostream<wchar_t> &);
  extern template ::std::basic_ostream<wchar_t> &operator <<(::std::basic_ostream<wchar_t> &, wchar_t);
  extern template ::std::basic_ostream<wchar_t> &operator <<(::std::basic_ostream<wchar_t> &, char);
  extern template ::std::basic_ostream<wchar_t> &operator <<(::std::basic_ostream<wchar_t> &, const wchar_t *);
  extern template ::std::basic_ostream<wchar_t> &operator <<(::std::basic_ostream<wchar_t> &, const char *);
 /* Instantiation of class template '::std::basic_ios<wchar_t>' */ 
 /* Instantiation of class template '::std::basic_ostream<wchar_t>' */ 
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(long int);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(unsigned long int);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(bool);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(long long int);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(unsigned long long int);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(double);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(long double);
  extern template ::std::basic_ostream<wchar_t> &wostream::_M_insert(const void *);
  template < typename _CharT, typename _Traits >
  class  basic_istream : virtual public ::std::basic_ios<_CharT, _Traits>
  {
    public:
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
      typedef ::std::basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef ::std::basic_ios<_CharT, _Traits> __ios_type;
      typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
      typedef ::std::num_get<_CharT, ::std::istreambuf_iterator<_CharT, _Traits> > __num_get_type;
      typedef ::std::ctype<_CharT> __ctype_type;
    protected:
      ::std::streamsize _M_gcount;
    public:
      inline explicit basic_istream(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb)
        : _M_gcount((long int)0)
      {
        this->init(__sb);
      }
      inline virtual ~basic_istream()
      {
        ::std::basic_istream<_CharT, _Traits>::_M_gcount = (long int)0;
      }
      class sentry;
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(typename ::std::basic_istream<_CharT, _Traits>::__istream_type &(*__pf)(typename ::std::basic_istream<_CharT, _Traits>::__istream_type &))
      {
        return __pf(*this);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(typename ::std::basic_istream<_CharT, _Traits>::__ios_type &(*__pf)(typename ::std::basic_istream<_CharT, _Traits>::__ios_type &))
      {
        __pf(*this);
        return *this;
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(::std::ios_base &(*__pf)(::std::ios_base &))
      {
        __pf(*this);
        return *this;
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(bool &__n)
      {
        return (*this)._M_extract(__n);
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(short int &__n);
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(unsigned short int &__n)
      {
        return (*this)._M_extract(__n);
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(int &__n);
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(unsigned int &__n)
      {
        return (*this)._M_extract(__n);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(long int &__n)
      {
        return (*this)._M_extract(__n);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(unsigned long int &__n)
      {
        return (*this)._M_extract(__n);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(long long int &__n)
      {
        return (*this)._M_extract(__n);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(unsigned long long int &__n)
      {
        return (*this)._M_extract(__n);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(float &__f)
      {
        return (*this)._M_extract(__f);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(double &__f)
      {
        return (*this)._M_extract(__f);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(long double &__f)
      {
        return (*this)._M_extract(__f);
      }
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(void *&__p)
      {
        return (*this)._M_extract(__p);
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &operator >>(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sbout);
      inline ::std::streamsize gcount() const 
      {
        return ::std::basic_istream<_CharT, _Traits>::_M_gcount;
      }
      typename ::std::basic_istream<_CharT, _Traits>::int_type get();
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &get(typename ::std::basic_istream<_CharT, _Traits>::char_type &__c);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &get(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim);
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &get(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        return this->get(__s, __n, this->widen('\n'));
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &get(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type &__sb, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim);
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &get(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type &__sb)
      {
        return this->get(__sb, this->widen('\n'));
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &getline(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim);
      inline typename ::std::basic_istream<_CharT, _Traits>::__istream_type &getline(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
      {
        return this->getline(__s, __n, this->widen('\n'));
      }
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &ignore(::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::int_type __delim);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &ignore(::std::streamsize __n);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &ignore();
      typename ::std::basic_istream<_CharT, _Traits>::int_type peek();
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &read(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n);
      ::std::streamsize readsome(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &putback(typename ::std::basic_istream<_CharT, _Traits>::char_type __c);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &unget();
      int sync();
      typename ::std::basic_istream<_CharT, _Traits>::pos_type tellg();
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &seekg(typename ::std::basic_istream<_CharT, _Traits>::pos_type __pos);
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &seekg(typename ::std::basic_istream<_CharT, _Traits>::off_type __off, ::std::ios_base::seekdir __dir);
    protected:
      inline basic_istream()
        : _M_gcount((long int)0)
      {
        this->init(0);
      }
      template < typename _ValueT >
      typename ::std::basic_istream<_CharT, _Traits>::__istream_type &_M_extract(_ValueT &__v);
    friend class sentry;
  };
 /* Instantiation of class template '::std::basic_istream<char>' */ 
  template <>
  ::std::basic_istream<char> &basic_istream<char>::getline(char *__s, long int __n, char __delim);
  template <>
  ::std::basic_istream<char> &basic_istream<char>::ignore(long int __n);
  template <>
  ::std::basic_istream<char> &basic_istream<char>::ignore(long int __n, ::std::char_traits<char>::int_type __delim);
 /* Instantiation of class template '::std::basic_istream<wchar_t>' */ 
  template <>
  ::std::basic_istream<wchar_t> &basic_istream<wchar_t>::getline(wchar_t *__s, long int __n, wchar_t __delim);
  template <>
  ::std::basic_istream<wchar_t> &basic_istream<wchar_t>::ignore(long int __n);
  template <>
  ::std::basic_istream<wchar_t> &basic_istream<wchar_t>::ignore(long int __n, ::std::char_traits<wchar_t>::int_type __delim);
  template < typename _CharT, typename _Traits >
  class  basic_istream<_CharT, _Traits>::sentry
  {
      bool _M_ok;
    public:
      typedef _Traits traits_type;
      typedef ::std::basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
      typedef typename ::std::basic_istream<_CharT, _Traits>::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
      explicit sentry(::std::basic_istream<_CharT, _Traits> &__in, bool __noskip  = (false));
      inline explicit operator bool() const 
      {
        return ::std::basic_istream<_CharT, _Traits>::sentry::_M_ok;
      }
  };
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, _CharT &__c);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, unsigned char &__c);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, unsigned char &__c)
  {
    return __in >> reinterpret_cast<char &>(__c);
  }
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, signed char &__c);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, signed char &__c)
  {
    return __in >> reinterpret_cast<char &>(__c);
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, _CharT *__s);
  template <>
  ::std::basic_istream<char> &operator >><char, ::std::char_traits<char> >(::std::basic_istream<char> &__in, char *__s);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, unsigned char *__s);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, unsigned char *__s)
  {
    return __in >> reinterpret_cast<char *>(__s);
  }
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, signed char *__s);
  template < typename _Traits >
  inline ::std::basic_istream<char, _Traits> &operator >>(::std::basic_istream<char, _Traits> &__in, signed char *__s)
  {
    return __in >> reinterpret_cast<char *>(__s);
  }
  template < typename _CharT, typename _Traits >
  class  basic_iostream : public ::std::basic_istream<_CharT, _Traits>, public ::std::basic_ostream<_CharT, _Traits>
  {
    public:
      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;
      typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
      typedef ::std::basic_ostream<_CharT, _Traits> __ostream_type;
      inline explicit basic_iostream(::std::basic_streambuf<_CharT, _Traits> *__sb)
        : __istream_type(__sb), __ostream_type(__sb)
      {
      }
      inline virtual ~basic_iostream()
      {
      }
    protected:
      inline basic_iostream()
        : __istream_type(), __ostream_type()
      {
      }
  };
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &ws(::std::basic_istream<_CharT, _Traits> &__in);
  template < typename _CharT, typename _Traits, typename _Tp >
  inline ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &&__is, _Tp &__x);
  template < typename _CharT, typename _Traits, typename _Tp >
  inline ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &&__is, _Tp &__x)
  {
    __is >> __x;
    return __is;
  }
  template < typename _CharT, typename _Traits >
  basic_istream<_CharT, _Traits>::sentry::sentry(::std::basic_istream<_CharT, _Traits> &__in, bool __noskip)
    : _M_ok(false)
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    if (__in.good())
      {
        if (__in.tie())
          {
            __in.tie()->flush();
          }
        if (!__noskip && bool(__in.flags() & ::std::ios_base::skipws))
          {
            const typename ::std::basic_istream<_CharT, _Traits>::sentry::__int_type __eof = traits_type::eof();
            typename ::std::basic_istream<_CharT, _Traits>::sentry::__streambuf_type *__sb = __in.rdbuf();
            typename ::std::basic_istream<_CharT, _Traits>::sentry::__int_type __c = __sb->sgetc();
            const typename ::std::basic_istream<_CharT, _Traits>::sentry::__ctype_type &__ct = __check_facet(__in._M_ctype);
            while (!traits_type::eq_int_type(__c, __eof) && __ct.is(::std::ctype_base::space, traits_type::to_char_type(__c)))
              {
                __c = __sb->snextc();
              }
            if (traits_type::eq_int_type(__c, __eof))
              {
                __err |= ::std::ios_base::eofbit;
              }
          }
      }
    if (__in.good() && __err == ::std::ios_base::goodbit)
      {
        ::std::basic_istream<_CharT, _Traits>::sentry::_M_ok = true;
      }
    else
      {
        __err |= ::std::ios_base::failbit;
        __in.setstate(__err);
      }
  }
  template < typename _CharT, typename _Traits >
  template < typename _ValueT >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::_M_extract(_ValueT &__v)
  {
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, false);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::__num_get_type &__ng = __check_facet(this->_M_num_get);
          __ng.get(*this, 0, *this, __err, __v);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, ::__gnu_cxx::__numeric_traits_integer<short int>, ::__gnu_cxx::__numeric_traits_floating<short int> >' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_integer<short int>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<short int>' */ 
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::operator >>(short int &__n)
  {
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, false);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          long int __l;
          const typename ::std::basic_istream<_CharT, _Traits>::__num_get_type &__ng = __check_facet(this->_M_num_get);
          __ng.get(*this, 0, *this, __err, __l);
          if (__l < ::__gnu_cxx::__numeric_traits_integer<short int>::__min)
            {
              __err |= ::std::ios_base::failbit;
              __n = ::__gnu_cxx::__numeric_traits_integer<short int>::__min;
            }
          else
            {
              if (__l > ::__gnu_cxx::__numeric_traits_integer<short int>::__max)
                {
                  __err |= ::std::ios_base::failbit;
                  __n = ::__gnu_cxx::__numeric_traits_integer<short int>::__max;
                }
              else
                {
                  __n = (short int)__l;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::operator >>(int &__n)
  {
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, false);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          long int __l;
          const typename ::std::basic_istream<_CharT, _Traits>::__num_get_type &__ng = __check_facet(this->_M_num_get);
          __ng.get(*this, 0, *this, __err, __l);
          if (__l < ::__gnu_cxx::__numeric_traits_integer<int>::__min)
            {
              __err |= ::std::ios_base::failbit;
              __n = ::__gnu_cxx::__numeric_traits_integer<int>::__min;
            }
          else
            {
              if (__l > ::__gnu_cxx::__numeric_traits_integer<int>::__max)
                {
                  __err |= ::std::ios_base::failbit;
                  __n = ::__gnu_cxx::__numeric_traits_integer<int>::__max;
                }
              else
                {
                  __n = (int)__l;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::operator >>(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sbout)
  {
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, false);
    if (__cerb && __sbout)
      {
        try
        {
          bool __ineof;
          if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
            {
              __err |= ::std::ios_base::failbit;
            }
          if (__ineof)
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::failbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::failbit);
        }
      }
    else
      {
        if (!__sbout)
          {
            __err |= ::std::ios_base::failbit;
          }
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::int_type basic_istream<_CharT, _Traits>::get()
  {
    const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
    typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __eof;
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          __c = this->rdbuf()->sbumpc();
          if (!traits_type::eq_int_type(__c, __eof))
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = 1;
            }
          else
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    if (!::std::basic_istream<_CharT, _Traits>::_M_gcount)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return __c;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::get(typename ::std::basic_istream<_CharT, _Traits>::char_type &__c)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __cb = this->rdbuf()->sbumpc();
          if (!traits_type::eq_int_type(__cb, traits_type::eof()))
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = 1;
              __c = traits_type::to_char_type(__cb);
            }
          else
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    if (!::std::basic_istream<_CharT, _Traits>::_M_gcount)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::get(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __idelim = traits_type::to_int_type(__delim);
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __sb->sgetc();
          while ((::std::basic_istream<_CharT, _Traits>::_M_gcount + 1 < __n && !traits_type::eq_int_type(__c, __eof)) && !traits_type::eq_int_type(__c, __idelim))
            {
              *__s++ = traits_type::to_char_type(__c);
               ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
              __c = __sb->snextc();
            }
          if (traits_type::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    if (__n > 0)
      {
        *__s = ((typename ::std::basic_istream<_CharT, _Traits>::char_type()));
      }
    if (!::std::basic_istream<_CharT, _Traits>::_M_gcount)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::get(typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type &__sb, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __idelim = traits_type::to_int_type(__delim);
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__this_sb = this->rdbuf();
          typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __this_sb->sgetc();
          typename ::std::basic_istream<_CharT, _Traits>::char_type __c2 = traits_type::to_char_type(__c);
          while ((!traits_type::eq_int_type(__c, __eof) && !traits_type::eq_int_type(__c, __idelim)) && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
            {
               ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
              __c = __this_sb->snextc();
              __c2 = traits_type::to_char_type(__c);
            }
          if (traits_type::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    if (!::std::basic_istream<_CharT, _Traits>::_M_gcount)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::getline(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::char_type __delim)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __idelim = traits_type::to_int_type(__delim);
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __sb->sgetc();
          while ((::std::basic_istream<_CharT, _Traits>::_M_gcount + 1 < __n && !traits_type::eq_int_type(__c, __eof)) && !traits_type::eq_int_type(__c, __idelim))
            {
              *__s++ = traits_type::to_char_type(__c);
              __c = __sb->snextc();
               ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
            }
          if (traits_type::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
          else
            {
              if (traits_type::eq_int_type(__c, __idelim))
                {
                  __sb->sbumpc();
                   ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
                }
              else
                {
                  __err |= ::std::ios_base::failbit;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    if (__n > 0)
      {
        *__s = ((typename ::std::basic_istream<_CharT, _Traits>::char_type()));
      }
    if (!::std::basic_istream<_CharT, _Traits>::_M_gcount)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        this->setstate(__err);
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::ignore()
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
          else
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = 1;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
 /* Instantiation of class template '::__gnu_cxx::__conditional_type<true, ::__gnu_cxx::__numeric_traits_integer<long int>, ::__gnu_cxx::__numeric_traits_floating<long int> >' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits_integer<long int>' */ 
 /* Instantiation of class template '::__gnu_cxx::__numeric_traits<long int>' */ 
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::ignore(::std::streamsize __n)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb && __n > 0)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __sb->sgetc();
          bool __large_ignore(false);
          while (true)
            {
              while (::std::basic_istream<_CharT, _Traits>::_M_gcount < __n && !traits_type::eq_int_type(__c, __eof))
                {
                   ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
                  __c = __sb->snextc();
                }
              if (__n == ::__gnu_cxx::__numeric_traits_integer<long int>::__max && !traits_type::eq_int_type(__c, __eof))
                {
                  ::std::basic_istream<_CharT, _Traits>::_M_gcount = ::__gnu_cxx::__numeric_traits_integer<long int>::__min;
                  __large_ignore = true;
                }
              else
                {
                  break;
                }
            }
          if (__large_ignore)
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = ::__gnu_cxx::__numeric_traits_integer<long int>::__max;
            }
          if (traits_type::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::ignore(::std::streamsize __n, typename ::std::basic_istream<_CharT, _Traits>::int_type __delim)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb && __n > 0)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          typename ::std::basic_istream<_CharT, _Traits>::int_type __c = __sb->sgetc();
          bool __large_ignore(false);
          while (true)
            {
              while ((::std::basic_istream<_CharT, _Traits>::_M_gcount < __n && !traits_type::eq_int_type(__c, __eof)) && !traits_type::eq_int_type(__c, __delim))
                {
                   ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
                  __c = __sb->snextc();
                }
              if ((__n == ::__gnu_cxx::__numeric_traits_integer<long int>::__max && !traits_type::eq_int_type(__c, __eof)) && !traits_type::eq_int_type(__c, __delim))
                {
                  ::std::basic_istream<_CharT, _Traits>::_M_gcount = ::__gnu_cxx::__numeric_traits_integer<long int>::__min;
                  __large_ignore = true;
                }
              else
                {
                  break;
                }
            }
          if (__large_ignore)
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = ::__gnu_cxx::__numeric_traits_integer<long int>::__max;
            }
          if (traits_type::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
          else
            {
              if (traits_type::eq_int_type(__c, __delim))
                {
                  if (::std::basic_istream<_CharT, _Traits>::_M_gcount < ::__gnu_cxx::__numeric_traits_integer<long int>::__max)
                    {
                       ++::std::basic_istream<_CharT, _Traits>::_M_gcount;
                    }
                  __sb->sbumpc();
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::int_type basic_istream<_CharT, _Traits>::peek()
  {
    typename ::std::basic_istream<_CharT, _Traits>::int_type __c = traits_type::eof();
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          __c = this->rdbuf()->sgetc();
          if (traits_type::eq_int_type(__c, traits_type::eof()))
            {
              __err |= ::std::ios_base::eofbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return __c;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::read(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          ::std::basic_istream<_CharT, _Traits>::_M_gcount = this->rdbuf()->sgetn(__s, __n);
          if (::std::basic_istream<_CharT, _Traits>::_M_gcount != __n)
            {
              __err |= ::std::ios_base::eofbit | ::std::ios_base::failbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  ::std::streamsize basic_istream<_CharT, _Traits>::readsome(typename ::std::basic_istream<_CharT, _Traits>::char_type *__s, ::std::streamsize __n)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const ::std::streamsize __num = this->rdbuf()->in_avail();
          if (__num > 0)
            {
              ::std::basic_istream<_CharT, _Traits>::_M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
            }
          else
            {
              if (__num ==  -1)
                {
                  __err |= ::std::ios_base::eofbit;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return ::std::basic_istream<_CharT, _Traits>::_M_gcount;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::putback(typename ::std::basic_istream<_CharT, _Traits>::char_type __c)
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    this->clear(this->rdstate() &  ~::std::ios_base::eofbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          if (!__sb || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
            {
              __err |= ::std::ios_base::badbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::unget()
  {
    ::std::basic_istream<_CharT, _Traits>::_M_gcount = 0;
    this->clear(this->rdstate() &  ~::std::ios_base::eofbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const typename ::std::basic_istream<_CharT, _Traits>::int_type __eof = traits_type::eof();
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          if (!__sb || traits_type::eq_int_type(__sb->sungetc(), __eof))
            {
              __err |= ::std::ios_base::badbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  int basic_istream<_CharT, _Traits>::sync()
  {
    int __ret( -1);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          typename ::std::basic_istream<_CharT, _Traits>::__streambuf_type *__sb = this->rdbuf();
          if (__sb)
            {
              if (__sb->pubsync() ==  -1)
                {
                  __err |= ::std::ios_base::badbit;
                }
              else
                {
                  __ret = 0;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::pos_type basic_istream<_CharT, _Traits>::tellg()
  {
    typename ::std::basic_istream<_CharT, _Traits>::pos_type __ret = ((typename ::std::basic_istream<_CharT, _Traits>::pos_type( -1)));
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        try
        {
          if (!this->fail())
            {
              __ret = this->rdbuf()->pubseekoff(0, ::std::ios_base::cur, ::std::ios_base::in);
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
      }
    return __ret;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::seekg(typename ::std::basic_istream<_CharT, _Traits>::pos_type __pos)
  {
    this->clear(this->rdstate() &  ~::std::ios_base::eofbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          if (!this->fail())
            {
              const typename ::std::basic_istream<_CharT, _Traits>::pos_type __p = this->rdbuf()->pubseekpos(__pos, ::std::ios_base::in);
              if (__p == ((typename ::std::basic_istream<_CharT, _Traits>::pos_type(((typename ::std::basic_istream<_CharT, _Traits>::off_type( -1)))))))
                {
                  __err |= ::std::ios_base::failbit;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  typename ::std::basic_istream<_CharT, _Traits>::__istream_type &basic_istream<_CharT, _Traits>::seekg(typename ::std::basic_istream<_CharT, _Traits>::off_type __off, ::std::ios_base::seekdir __dir)
  {
    this->clear(this->rdstate() &  ~::std::ios_base::eofbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(*this, true);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          if (!this->fail())
            {
              const typename ::std::basic_istream<_CharT, _Traits>::pos_type __p = this->rdbuf()->pubseekoff(__off, __dir, ::std::ios_base::in);
              if (__p == ((typename ::std::basic_istream<_CharT, _Traits>::pos_type(((typename ::std::basic_istream<_CharT, _Traits>::off_type( -1)))))))
                {
                  __err |= ::std::ios_base::failbit;
                }
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          this->_M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          this->_M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            this->setstate(__err);
          }
      }
    return *this;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, _CharT &__c)
  {
    typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
    typedef typename ::std::basic_istream<_CharT, _Traits>::int_type __int_type;
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(__in, false);
    if (__cerb)
      {
        ::std::ios_base::iostate __err(::std::ios_base::goodbit);
        try
        {
          const __int_type __cb = __in.rdbuf()->sbumpc();
          if (!_Traits::eq_int_type(__cb, _Traits::eof()))
            {
              __c = _Traits::to_char_type(__cb);
            }
          else
            {
              __err |= ::std::ios_base::eofbit | ::std::ios_base::failbit;
            }
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __in._M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __in._M_setstate(::std::ios_base::badbit);
        }
        if (__err)
          {
            __in.setstate(__err);
          }
      }
    return __in;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &operator >>(::std::basic_istream<_CharT, _Traits> &__in, _CharT *__s)
  {
    typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
    typedef ::std::basic_streambuf<_CharT, _Traits> __streambuf_type;
    typedef typename _Traits::int_type int_type;
    typedef _CharT char_type;
    typedef ::std::ctype<_CharT> __ctype_type;
    ::std::streamsize __extracted(0);
    ::std::ios_base::iostate __err(::std::ios_base::goodbit);
    typename ::std::basic_istream<_CharT, _Traits>::sentry __cerb(__in, false);
    if (__cerb)
      {
        try
        {
          ::std::streamsize __num = __in.width();
          if (__num <= 0)
            {
              __num = ::__gnu_cxx::__numeric_traits_integer<long int>::__max;
            }
          const __ctype_type &__ct = use_facet<__ctype_type>(__in.getloc());
          const int_type __eof = _Traits::eof();
          __streambuf_type *__sb = __in.rdbuf();
          int_type __c = __sb->sgetc();
          while ((__extracted < __num - 1 && !_Traits::eq_int_type(__c, __eof)) && !__ct.is(::std::ctype_base::space, _Traits::to_char_type(__c)))
            {
              *__s++ = _Traits::to_char_type(__c);
               ++__extracted;
              __c = __sb->snextc();
            }
          if (_Traits::eq_int_type(__c, __eof))
            {
              __err |= ::std::ios_base::eofbit;
            }
          *__s = char_type();
          __in.width(0);
        }
        catch (::__cxxabiv1::__forced_unwind &)
        {
          __in._M_setstate(::std::ios_base::badbit);
          throw;
        }
        catch (...)
        {
          __in._M_setstate(::std::ios_base::badbit);
        }
      }
    if (!__extracted)
      {
        __err |= ::std::ios_base::failbit;
      }
    if (__err)
      {
        __in.setstate(__err);
      }
    return __in;
  }
  template < typename _CharT, typename _Traits >
  ::std::basic_istream<_CharT, _Traits> &ws(::std::basic_istream<_CharT, _Traits> &__in)
  {
    typedef ::std::basic_istream<_CharT, _Traits> __istream_type;
    typedef ::std::basic_streambuf<_CharT, _Traits> __streambuf_type;
    typedef typename ::std::basic_istream<_CharT, _Traits>::int_type __int_type;
    typedef ::std::ctype<_CharT> __ctype_type;
    const __ctype_type &__ct = use_facet<__ctype_type>(__in.getloc());
    const __int_type __eof = _Traits::eof();
    __streambuf_type *__sb = __in.rdbuf();
    __int_type __c = __sb->sgetc();
    while (!_Traits::eq_int_type(__c, __eof) && __ct.is(::std::ctype_base::space, _Traits::to_char_type(__c)))
      {
        __c = __sb->snextc();
      }
    if (_Traits::eq_int_type(__c, __eof))
      {
        __in.setstate(::std::ios_base::eofbit);
      }
    return __in;
  }
  extern template class ::std::basic_istream<char>;
  extern template ::std::basic_istream<char> &ws(::std::basic_istream<char> &);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, char &);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, char *);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, unsigned char &);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, signed char &);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, unsigned char *);
  extern template ::std::basic_istream<char> &operator >>(::std::basic_istream<char> &, signed char *);
  extern template ::std::basic_istream<char> &istream::_M_extract(unsigned short int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(unsigned int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(long int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(unsigned long int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(bool &);
  extern template ::std::basic_istream<char> &istream::_M_extract(long long int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(unsigned long long int &);
  extern template ::std::basic_istream<char> &istream::_M_extract(float &);
  extern template ::std::basic_istream<char> &istream::_M_extract(double &);
  extern template ::std::basic_istream<char> &istream::_M_extract(long double &);
  extern template ::std::basic_istream<char> &istream::_M_extract(void *&);
  extern template class ::std::basic_iostream<char>;
  extern template class ::std::basic_istream<wchar_t>;
  extern template ::std::basic_istream<wchar_t> &ws(::std::basic_istream<wchar_t> &);
  extern template ::std::basic_istream<wchar_t> &operator >>(::std::basic_istream<wchar_t> &, wchar_t &);
  extern template ::std::basic_istream<wchar_t> &operator >>(::std::basic_istream<wchar_t> &, wchar_t *);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(unsigned short int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(unsigned int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(long int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(unsigned long int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(bool &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(long long int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(unsigned long long int &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(float &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(double &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(long double &);
  extern template ::std::basic_istream<wchar_t> &wistream::_M_extract(void *&);
  extern template class ::std::basic_iostream<wchar_t>;
  extern ::std::istream cin;
  extern ::std::ostream cout;
  extern ::std::ostream cerr;
  extern ::std::ostream clog;
  extern ::std::wistream wcin;
  extern ::std::wostream wcout;
  extern ::std::wostream wcerr;
  extern ::std::wostream wclog;
  static ::std::ios_base::Init __ioinit /* () */ ;
  class  logic_error : public ::std::exception
  {
      ::std::string _M_msg;
    public:
      explicit logic_error(const ::std::string &__arg);
      virtual ~logic_error() noexcept(true);
      virtual const char *what() const  noexcept(true);
  };
  class  domain_error : public ::std::logic_error
  {
    public:
      explicit domain_error(const ::std::string &__arg);
      virtual ~domain_error() noexcept(true);
  };
  class  invalid_argument : public ::std::logic_error
  {
    public:
      explicit invalid_argument(const ::std::string &__arg);
      virtual ~invalid_argument() noexcept(true);
  };
  class  length_error : public ::std::logic_error
  {
    public:
      explicit length_error(const ::std::string &__arg);
      virtual ~length_error() noexcept(true);
  };
  class  out_of_range : public ::std::logic_error
  {
    public:
      explicit out_of_range(const ::std::string &__arg);
      virtual ~out_of_range() noexcept(true);
  };
  class  runtime_error : public ::std::exception
  {
      ::std::string _M_msg;
    public:
      explicit runtime_error(const ::std::string &__arg);
      virtual ~runtime_error() noexcept(true);
      virtual const char *what() const  noexcept(true);
  };
  class  range_error : public ::std::runtime_error
  {
    public:
      explicit range_error(const ::std::string &__arg);
      virtual ~range_error() noexcept(true);
  };
  class  overflow_error : public ::std::runtime_error
  {
    public:
      explicit overflow_error(const ::std::string &__arg);
      virtual ~overflow_error() noexcept(true);
  };
  class  underflow_error : public ::std::runtime_error
  {
    public:
      explicit underflow_error(const ::std::string &__arg);
      virtual ~underflow_error() noexcept(true);
  };
  template < typename _Tp, ::std::size_t _Nm >
  struct  __array_traits
  {
      typedef _Tp _Type[_Nm];
      static inline constexpr _Tp &_S_ref(const _Tp (&__t)[_Nm], ::std::size_t __n) noexcept(true)
      {
        return const_cast<_Tp &>(__t[__n]);
      }
  };
  template < typename _Tp >
  struct  __array_traits<_Tp, 0LU>
  {
      struct  _Type
      {
      };
      static inline constexpr _Tp &_S_ref(const typename ::std::__array_traits<_Tp, 0LU>::_Type &, ::std::size_t) noexcept(true)
      {
        return *static_cast<_Tp *>(nullptr);
      }
  };
  template < typename _Tp, ::std::size_t _Nm >
  struct  array
  {
      typedef _Tp value_type;
      typedef typename ::std::array<_Tp, _Nm>::value_type *pointer;
      typedef const typename ::std::array<_Tp, _Nm>::value_type *const_pointer;
      typedef typename ::std::array<_Tp, _Nm>::value_type &reference;
      typedef const typename ::std::array<_Tp, _Nm>::value_type &const_reference;
      typedef typename ::std::array<_Tp, _Nm>::value_type *iterator;
      typedef const typename ::std::array<_Tp, _Nm>::value_type *const_iterator;
      typedef ::std::size_t size_type;
      typedef ::std::ptrdiff_t difference_type;
      typedef ::std::reverse_iterator<typename ::std::array<_Tp, _Nm>::iterator> reverse_iterator;
      typedef ::std::reverse_iterator<typename ::std::array<_Tp, _Nm>::const_iterator> const_reverse_iterator;
      typedef ::std::__array_traits<_Tp, _Nm> _AT_Type;
      typename ::std::__array_traits<_Tp, _Nm>::_Type _M_elems;
      inline void fill(const typename ::std::array<_Tp, _Nm>::value_type &__u)
      {
        std::fill_n((*this).begin(), (*this).size(), __u);
      }
      inline void swap(::std::array<_Tp, _Nm> &__other) noexcept(noexcept(swap(std::declval<_Tp &>(), std::declval<_Tp &>())))
      {
        std::swap_ranges((*this).begin(), (*this).end(), __other.begin());
      }
      inline typename ::std::array<_Tp, _Nm>::iterator begin() noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::iterator((*this).data())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_iterator begin() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_iterator((*this).data())));
      }
      inline typename ::std::array<_Tp, _Nm>::iterator end() noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::iterator((*this).data() + _Nm)));
      }
      inline typename ::std::array<_Tp, _Nm>::const_iterator end() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_iterator((*this).data() + _Nm)));
      }
      inline typename ::std::array<_Tp, _Nm>::reverse_iterator rbegin() noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::reverse_iterator((*this).end())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_reverse_iterator rbegin() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_reverse_iterator((*this).end())));
      }
      inline typename ::std::array<_Tp, _Nm>::reverse_iterator rend() noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::reverse_iterator((*this).begin())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_reverse_iterator rend() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_reverse_iterator((*this).begin())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_iterator cbegin() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_iterator((*this).data())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_iterator cend() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_iterator((*this).data() + _Nm)));
      }
      inline typename ::std::array<_Tp, _Nm>::const_reverse_iterator crbegin() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_reverse_iterator((*this).end())));
      }
      inline typename ::std::array<_Tp, _Nm>::const_reverse_iterator crend() const  noexcept(true)
      {
        return ((typename ::std::array<_Tp, _Nm>::const_reverse_iterator((*this).begin())));
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::size_type size() const  noexcept(true)
      {
        return _Nm;
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::size_type max_size() const  noexcept(true)
      {
        return _Nm;
      }
      inline constexpr bool empty() const  noexcept(true)
      {
        return (*this).size() == 0;
      }
      inline typename ::std::array<_Tp, _Nm>::reference operator [](typename ::std::array<_Tp, _Nm>::size_type __n)
      {
        return _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, __n);
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::const_reference operator [](typename ::std::array<_Tp, _Nm>::size_type __n) const  noexcept(true)
      {
        return _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, __n);
      }
      inline typename ::std::array<_Tp, _Nm>::reference at(typename ::std::array<_Tp, _Nm>::size_type __n)
      {
        if (__n >= _Nm)
          {
            std::__throw_out_of_range("array::at");
          }
        return _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, __n);
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::const_reference at(typename ::std::array<_Tp, _Nm>::size_type __n) const 
      {
        return __n < _Nm ? _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, __n) : ((std::__throw_out_of_range("array::at"), _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, 0)));
      }
      inline typename ::std::array<_Tp, _Nm>::reference front()
      {
        return *(*this).begin();
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::const_reference front() const 
      {
        return _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, 0);
      }
      inline typename ::std::array<_Tp, _Nm>::reference back()
      {
        return _Nm ? *((*this).end() - 1) : *(*this).end();
      }
      inline constexpr typename ::std::array<_Tp, _Nm>::const_reference back() const 
      {
        return _Nm ? _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, _Nm - 1) : _AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, 0);
      }
      inline typename ::std::array<_Tp, _Nm>::pointer data() noexcept(true)
      {
        return std::__addressof(_AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, 0));
      }
      inline typename ::std::array<_Tp, _Nm>::const_pointer data() const  noexcept(true)
      {
        return std::__addressof(_AT_Type::_S_ref(::std::array<_Tp, _Nm>::_M_elems, 0));
      }
  };
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator ==(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator ==(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two)
  {
    return std::equal(__one.begin(), __one.end(), __two.begin());
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator !=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator !=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two)
  {
    return !(__one == __two);
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator <(const ::std::array<_Tp, _Nm> &__a, const ::std::array<_Tp, _Nm> &__b);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator <(const ::std::array<_Tp, _Nm> &__a, const ::std::array<_Tp, _Nm> &__b)
  {
    return std::lexicographical_compare(__a.begin(), __a.end(), __b.begin(), __b.end());
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator >(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator >(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two)
  {
    return __two < __one;
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator <=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator <=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two)
  {
    return !(__one > __two);
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator >=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two);
  template < typename _Tp, ::std::size_t _Nm >
  inline bool operator >=(const ::std::array<_Tp, _Nm> &__one, const ::std::array<_Tp, _Nm> &__two)
  {
    return !(__one < __two);
  }
  template < typename _Tp, ::std::size_t _Nm >
  inline void swap(::std::array<_Tp, _Nm> &__one, ::std::array<_Tp, _Nm> &__two) noexcept(noexcept(__one.swap(__two)));
  template < typename _Tp, ::std::size_t _Nm >
  inline void swap(::std::array<_Tp, _Nm> &__one, ::std::array<_Tp, _Nm> &__two) noexcept(noexcept(__one.swap(__two)))
  {
    __one.swap(__two);
  }
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr _Tp &get(::std::array<_Tp, _Nm> &__arr) noexcept(true);
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr _Tp &get(::std::array<_Tp, _Nm> &__arr) noexcept(true)
  {
    static_assert(_Int < _Nm, "index is out of bounds");
    return std::__array_traits<_Tp, _Nm>::_S_ref(__arr._M_elems, _Int);
  }
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr _Tp &&get(::std::array<_Tp, _Nm> &&__arr) noexcept(true);
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr _Tp &&get(::std::array<_Tp, _Nm> &&__arr) noexcept(true)
  {
    static_assert(_Int < _Nm, "index is out of bounds");
    return std::move(get<_Int>(__arr));
  }
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr const _Tp &get(const ::std::array<_Tp, _Nm> &__arr) noexcept(true);
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  inline constexpr const _Tp &get(const ::std::array<_Tp, _Nm> &__arr) noexcept(true)
  {
    static_assert(_Int < _Nm, "index is out of bounds");
    return std::__array_traits<_Tp, _Nm>::_S_ref(__arr._M_elems, _Int);
  }
  template < typename _Tp >
  class tuple_size;
  template < typename _Tp, ::std::size_t _Nm >
  struct  tuple_size< ::std::array<_Tp, _Nm> > : ::std::integral_constant<unsigned long int, _Nm>
  {
  };
  template < ::std::size_t _Int, typename _Tp >
  class tuple_element;
  template < ::std::size_t _Int, typename _Tp, ::std::size_t _Nm >
  struct  tuple_element<_Int, ::std::array<_Tp, _Nm> >
  {
      static_assert(_Int < _Nm, "index is out of bounds");
      typedef _Tp type;
  };
}
int size(10);
int main(int, char **)
{
  ::tareador_ON();
  int a;
  int b;
  ::__runtimeTareador_StartSection("function;task1;task1;main.cpp;9");
  ::__runtimeTareador_OMPSS_StartTask("function;task1;task1;main.cpp;9");
  ::__runtimeTareador_OMPSS_Firstprivate("a", &a, sizeof(int));
  ::__runtimeTareador_OMPSS_Shared("size", &::size, sizeof(int));
  {
    a = ::size;
  }
  ::__runtimeTareador_OMPSS_EndTask("function;task1;task1;main.cpp;9");
  ::__runtimeTareador_EndSection("function;task1;task1;main.cpp;9");
  ::__runtimeTareador_StartSection("function;task2;task2;main.cpp;14");
  ::__runtimeTareador_OMPSS_StartTask("function;task2;task2;main.cpp;14");
  ::__runtimeTareador_OMPSS_Firstprivate("b", &b, sizeof(int));
  ::__runtimeTareador_OMPSS_Firstprivate("a", &a, sizeof(int));
  {
    b = a;
  }
  ::__runtimeTareador_OMPSS_EndTask("function;task2;task2;main.cpp;14");
  ::__runtimeTareador_EndSection("function;task2;task2;main.cpp;14");
  ::tareador_OFF();
  return 0;
}
