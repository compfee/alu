#include "Alu.h"

void Alu::operate()
{
        dataA = opA.read();
        dataB = opB.read();

        switch(op.read())
        {
              case operations::BAND:
              {
                res = dataA & dataB;
              }
              break;

              case operations::BOR:
              {
                res = dataA | dataB;
              }
              break;

              case operations::PLUS:
              {
                res = dataA + dataB;
              }
              break;

              case operations::MINUS:
              {
                res = dataA - dataB;
              }
              break;
        }
        result.write(res);
}
