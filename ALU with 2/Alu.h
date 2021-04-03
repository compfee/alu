#ifndef ALU_H
#define ALU_H

#include "Operations.h"
#include <systemc.h>

SC_MODULE(Alu)
{
      sc_in < char > op; // input operation
      sc_in < sc_uint<32> > opA,opB; // input operands
      sc_out < sc_uint<32> > result; // output result
      sc_uint< 32 > dataA, dataB, res; // temporary varibles

      void operate(); // main method for ALU

      SC_CTOR(Alu) //consturtor of ALU
      {
          	SC_METHOD(operate);
          	sensitive << opA << opB << op;
      }
};

#endif
