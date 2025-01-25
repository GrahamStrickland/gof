#ifndef SCANNER_H
#define SCANNER_H

#include <iostream>

class Token;

class Scanner {
public:
  Scanner(std::istream &);
  virtual ~Scanner();

  virtual Token &Scan();

private:
  std::istream &_inputStream;
};
#endif // SCANNER_H
