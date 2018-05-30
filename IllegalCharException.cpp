#include "IllegalCharException.h"
IllegalCharException::IllegalCharException(char c) {
    this->c=c;
}
char IllegalCharException::theChar() const {
    return this->c;
}