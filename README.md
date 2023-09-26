

**How to run the tests**

To generate the test code, run:

$ python3 c:/cxxtest-4.4/cxxtest-4.4/bin/cxxtestgen --error-printer -o myrunner.cpp mytest.h

then to create an object file, run:

$ g++ -c -o Complex.o Complex.cpp

then compile the testrunner and link it with object file:

$  g++ -o mytest_runner myrunner.cpp -Ic:/cxxtest-4.4/cxxtest-4.4

run the tests with:

./mytest_runner
