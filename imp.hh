#ifndef imp_h
#define imp_h

#include <stdio.h>
#include <string>
#include <vector>

const std::string &LastError();
unsigned ErrVal(); /** returns -1 */
unsigned GetCap();
unsigned SetCap(unsigned);
unsigned Append(const char *);
unsigned Remove(unsigned, unsigned);
unsigned Swap(unsigned, unsigned);
unsigned Set(unsigned, const char *);
unsigned Pop();

const std::string Get(unsigned);
const std::vector<std::string> &GetAll();

#endif
