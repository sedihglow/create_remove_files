/*
 * Written by: James Ross
 */

#include "fcd.h"

// $cmd -n num -p dirnam
int main(int argc, char *argv[])
{
    int opt;
    int nf;
    char *dname;

    if (argc != 5) {
        errnum_msg(EINVAL, "main: ");
        exit(EXIT_FAILURE);
    }

    while((opt = getopt(argc, argv, "n:p:")) != -1) {
        switch (opt) {
            case 'n':
                convInt(optarg, CN_BASE_10, "NF");
                break;
            case 'p':
                dname = optarg;
                break;
            default:
                exit(EXIT_FAILURE);
        }
    } 
    
    mkdir(dname, DIR_MODE);
    chdir(dname);

    create_files(nf);
    remove_files();

    exit(EXIT_SUCCESS);
}
