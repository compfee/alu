#include "AluTest.h"

void AluTest::aluTestGen() {
      opA.write(0b100);
      opB.write(0b001);
      op.write(operations::PLUS);

      wait(10,SC_NS);
      opA.write(0b111);
      opB.write(0b001);
      op.write(operations::MINUS);

      wait(10,SC_NS);
      opA.write(0b001);
      opB.write(0b001);
      op.write(operations::BOR);

      wait(10,SC_NS);
      opA.write(0b111);
      opB.write(0b101);
      op.write(operations::BOR);

      wait(10,SC_NS);
      opA.write(0b101);
      opB.write(0b001);
      op.write(operations::BAND);

      wait(10,SC_NS);
      wait(10,SC_NS);
}
