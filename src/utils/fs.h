#ifndef _UTILS_IO_H_
#define _UTILS_IO_H_

#include <common/types.h>

bool utilFileExists(const char* szFilePath);
uint32_t utilGetFileSize(const char* szFilePath);

#endif /* _UTILS_IO_H_ */
