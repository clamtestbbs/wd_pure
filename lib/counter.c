#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define SEM_ENTER      -1      /* enter semaphore */
#define SEM_LEAVE      1       /* leave semaphore */
#define SEM_RESET      0       /* reset semaphore */
#define C_SEMKEY	2222

/* �p�ƾ� wildcat */

int counter_semid;

void
counter(filename,modes,n)
  char *filename;
  char *modes;
  int n;
{
  FILE *fp;
  unsigned long visited=0;
//  char buf[1024];

  sem_init(C_SEMKEY,&counter_semid);
  sem_lock(SEM_ENTER,counter_semid);
  if(fp = fopen(filename,"r"))
  {
    fscanf(fp,"%lu",&visited);
    fclose(fp);
  }

  prints("\x1b[1;46m �i  \x1b[33m�z�O%s��\x1b[37m %-10ld \x1b[33m�� %s ���ϥΪ�                         \x1b[0;36m�o�n�m�l\x1b[m",
  n ? "����" : "    ",++visited,modes);
  unlink(filename);

  if(fp = fopen(filename,"w"))
  {
    fprintf(fp,"%ld",visited);
    fclose(fp);
  }
  sem_lock(SEM_LEAVE,counter_semid);
}