#include <systemc.h>
#include "AluTest.h"
#include "Alu.h"

int sc_main(int argc, char* argv[]) {
      sc_signal < sc_uint<32> > A,B,F;
      sc_signal < char > O;

      AluTest AluTest1("Stimulus");
      AluTest1.opA(A);
      AluTest1.opB(B);
      AluTest1.op(O);

      Alu A1("A");
      A1.opA(A);
      A1.opB(B);
      A1.op(O);
      A1.result(F);

      // create output trace file
      sc_trace_file *tf = sc_create_vcd_trace_file("lab1_ind");
      tf->set_time_unit(1,SC_NS);

      // all changed in signals will be auto output'ed to trace file
      sc_trace(tf,A,"A");
      sc_trace(tf,B,"B");
      sc_trace(tf,O,"operation");
      sc_trace(tf,F,"result");

      sc_start(100,SC_NS);

      sc_close_vcd_trace_file(tf);


      return 0;
}
