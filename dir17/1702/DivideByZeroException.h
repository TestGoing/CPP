//class DivideByZeraoException definition
#include <stdexcept>

//DivideByZeroException objects should be thrown by functions
//upon detecting division-by-zero exceptions

class DivideByZeroException : public std::runtime_error
{
   //constructor specifies default error message
public:
   DivideByZeroException()
      : std::runtime_error("attempted to divide by zero")
   {

   }
};
