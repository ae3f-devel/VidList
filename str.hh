#ifndef str_hh
#define str_hh

#include <cstdlib>
#include <string>

extern std::string LastErrMsg;

struct str {
  std::string *a;

  inline str(const char *a = "") {
    this->a = new std::string(a);
    if (!a) {
      LastErrMsg = "[str::str] String Allocation has failed.";
    }
  }
  inline void swap(str &_a) {
    std::string *tmp = a;
    this->a = _a.a;
    _a.a = tmp;
  }

  inline str(const str &&_a) {
    if (a)
      delete a;
    this->a = _a.a;
  }

  inline ~str() {
    if (a)
      delete a;
  }
};

#endif
