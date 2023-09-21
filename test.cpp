#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>


int main()
{
    const char *doc_root="/home/cnic/Documents/linuxC/threadpool/root/welcomm.html";
    char m_real_file[100];
    struct stat m_file_stat;
    strcpy(m_real_file, doc_root);
    int len=strlen(doc_root);

    if(stat(m_real_file, &m_file_stat)<0)
    {
        printf("------------------no RESOURCE");
        return 1;
    }
    printf("File size: %lld bytes\n", (long long)m_file_stat.st_size);
    printf("Last modified time: %ld\n", (long)m_file_stat.st_mtime);
    return 0;
}