/*
 * filename: fcd.h
 */

#include <sys/stat.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
#include <fcntl.h>
#include <errno.h>
#include "err_handle.h"
#include "convNum.h"

#define MOD_NUM 1000000
#define DIR_MODE (S_IXUSR | S_IRUSR | S_IWUSR | S_IROTH | S_IWOTH | S_IRGRP)

#define FAILURE -1
#define SUCCESS 0

int create_files();
int remove_files();
