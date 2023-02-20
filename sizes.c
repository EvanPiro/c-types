#include <sys/types.h>
#include <stdio.h>

/*
 * Running this will produce a table of the name of a type and the number of bytes
 * it needs in memory.
 */
int main() {
  printf("| type                      | bytes     |\n");
  printf("| ------------------------- | --------- |\n");
  printf("| blkcnt_t                  | %4li      |\n", sizeof(blkcnt_t));
  printf("| blksize_t                 | %4li      |\n", sizeof(blksize_t));
  printf("| clock_t                   | %4li      |\n", sizeof(clock_t));
  printf("| dev_t                     | %4li      |\n", sizeof(dev_t));
  printf("| fsblkcnt_t                | %4li      |\n", sizeof(fsblkcnt_t));
  printf("| fsfilcnt_t                | %4li      |\n", sizeof(fsfilcnt_t));
  printf("| gid_t                     | %4li      |\n", sizeof(gid_t));
  printf("| id_t                      | %4li      |\n", sizeof(id_t));
  printf("| ino_t                     | %4li      |\n", sizeof(ino_t));
  printf("| key_t                     | %4li      |\n", sizeof(key_t));
  printf("| mode_t                    | %4li      |\n", sizeof(mode_t));
  printf("| nlink_t                   | %4li      |\n", sizeof(nlink_t));
  printf("| pid_t                     | %4li      |\n", sizeof(pid_t));
  printf("| pthread_attr_t            | %4li      |\n", sizeof(pthread_attr_t));
  printf("| pthread_barrier_t         | %4li      |\n", sizeof(pthread_barrier_t));
  printf("| pthread_barrierattr_t     | %4li      |\n", sizeof(pthread_barrierattr_t));
  printf("| pthread_cond_t            | %4li      |\n", sizeof(pthread_cond_t));
  printf("| pthread_condattr_t        | %4li      |\n", sizeof(pthread_condattr_t));
  printf("| pthread_key_t             | %4li      |\n", sizeof(pthread_key_t));
  printf("| pthread_mutex_t           | %4li      |\n", sizeof(pthread_mutex_t));
  printf("| pthread_mutexattr_t       | %4li      |\n", sizeof(pthread_mutexattr_t));
  printf("| pthread_once_t            | %4li      |\n", sizeof(pthread_once_t));
  printf("| pthread_rwlock_t          | %4li      |\n", sizeof(pthread_rwlock_t));
  printf("| pthread_rwlockattr_t      | %4li      |\n", sizeof(pthread_rwlockattr_t));
  printf("| ssize_tpthread_spinlock_t | %4li      |\n", sizeof(pthread_spinlock_t));
  printf("| pthread_t                 | %4li      |\n", sizeof(pthread_t));
  printf("| size_t                    | %4li      |\n", sizeof(size_t));
  printf("| ssize_t                   | %4li      |\n", sizeof(ssize_t));
  printf("| suseconds_t               | %4li      |\n", sizeof(suseconds_t));
  printf("| time_t                    | %4li      |\n", sizeof(time_t));
  printf("| timer_t                   | %4li      |\n", sizeof(timer_t));
  printf("| uid_t                     | %4li      |\n", sizeof(uid_t));
  printf("| suseconds_t               | %4li      |\n", sizeof(suseconds_t));
}

