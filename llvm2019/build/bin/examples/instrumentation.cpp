#include <stdio.h>

// Function called at start of program
// Called right after main
// "dummyValue" does nothing except demonstrate
// how to pass a single argument in our pass
void __initMain(int dummyValue){
    printf("Hello, you are running an instrumented binary.\nPerformance may vary while running an instrumented binary.\n");
    // Do more work here...
}