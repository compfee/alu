#ifndef ALUTEST_H
#define ALUTEST_H

#include "Operations.h"

#include <systemc.h>

SC_MODULE(AluTest) {

      sc_out < sc_uint<32> > opA,opB; // interafce signals
      sc_out < char > op; //interface signal

      void aluTestGen(); //generates signals

      SC_CTOR(AluTest) // constructor of test class
      {
            SC_THREAD(aluTestGen);
      }
};

#endif
