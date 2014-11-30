#include <Asserter.h>
#include <stdio.h>

const char Asserter::ASSERT_PASSED_OUTPUT[] = "\e[32m(*) passed: %s\e[0m\n";
const char Asserter::ASSERT_FAILED_OUTPUT[] = "\e[31m(*) failed: %s\e[0m\n";
const char Asserter::ASSERT_EQUAL_FAILED_OUTPUT[] = "\e[31m(F) failed: %s (expected %d to be equal %d)\e[0m\n";
const char Asserter::ASSERT_NOT_EQUAL_FAILED_OUTPUT[] = "\e[31m(F) failed: %s (expected %d to not be equal %d)\e[0m\n";

Asserter::Counter Asserter::counter = {0, 0};

void Asserter::reset() {
  counter.success = 0;
  counter.error = 0;
}

bool Asserter::assert(bool assertion, const char *msg) {
  bool passed = true;
  if (assertion) {
    counter.success++;
    printf(ASSERT_PASSED_OUTPUT, msg);
  } else {
    passed = false;
    counter.error++;
    printf(ASSERT_FAILED_OUTPUT, msg);
  }
  return passed;
}

bool Asserter::assertEqual(unsigned char a, unsigned char b, const char *msg) {
  bool passed = true;
  if(a == b) {
    counter.success++;
    printf(ASSERT_PASSED_OUTPUT, msg);
  } else {
    passed = false;
    counter.error++;
    printf(ASSERT_EQUAL_FAILED_OUTPUT, msg, a, b);
  }
  return passed;
}

bool Asserter::assertNotEqual(unsigned char a, unsigned char b, const char *msg) {
  bool passed = true;
  if(a != b) {
    counter.success++;
    printf(ASSERT_PASSED_OUTPUT, msg);
  } else {
    passed = false;
    counter.error++;
    printf(ASSERT_NOT_EQUAL_FAILED_OUTPUT, msg, a, b);
  }
  return passed;
}
