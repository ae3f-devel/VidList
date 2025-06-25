#ifndef imp_h
#define imp_h

#include <stdio.h>
#include <string>
#include <vector>

#define unsigned unsigned int

const std::string &LastError();
unsigned ErrVal(); /** returns -1 */
unsigned GetCap();
void SetCap(unsigned);

unsigned Size();
unsigned Append(const char *);
unsigned Remove(unsigned, unsigned);
unsigned Swap(unsigned, unsigned);
unsigned Set(unsigned, const char *);
const std::string &Get(unsigned);
const std::vector<std::string> GetAll();

#define prefix ""
#define dbg_puts(s) puts(prefix s)
#define dbg_printf(s, ...) printf(s "", __VA_ARGS__)

#endif
