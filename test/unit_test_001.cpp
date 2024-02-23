//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
//    DATE: 2024-02-22
// PURPOSE: unit tests for the ACD10 library
//     URL: https://github.com/RobTillaart/74HC138
//

// supported assertions
// https://github.com/Arduino-CI/arduino_ci/blob/master/cpp/unittest/Assertion.h#L33-L42
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)
// assertNotNull(actual)

#include <ArduinoUnitTests.h>


#include "74HC138.h"


unittest_setup()
{
  fprintf(stderr, "LIB_74HC138_VERSION: %s\n", (char *) LIB_74HC138_VERSION);
}


unittest_teardown()
{
}


unittest(test_setLine)
{
  DEV_74HC138 dev;

  for (int i = 0; i < 7; i++)
  {
    assertTrue(dev.setLine(i));
    assertEqual(i, dev.getLine());
  }
  assertFalse(dev.setLine(8));
}


unittest_main()


//  -- END OF FILE --

