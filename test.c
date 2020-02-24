#include <fcntl.h>
#include <linux/falloc.h>
int main() {
   int fd = open("/tmp/f.data", O_CREAT | O_RDWR);
   fallocate(fd, FALLOC_FL_KEEP_SIZE, 0, 1024);
}
