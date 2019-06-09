# Using LLVM for Summer Research

While working on LLVM, I used LLVM 8.0.0.

**Folders I worked on:**
* llvm2019/build/bin/examples
* llvm2019/build/lib/Transforms/Hello
* llvm2019/source/llvm/lib/Transforms/Hello
* LLVMHello.so
* LLVMParserAST

**Things I did:**
* Installed/built LLVM from source
* Read about Lattner's big idea and more background
* Learned how to emit LLVM’s intermediate form (use clang++ to emit LLVM IR)
* Converting .ll to a .bc file
* Compile IR to assembly
* Run the different passes described below
* Implement a parser and AST

**Passes I wrote:**
* Module pass and Function passes using the Hello folder that comes with the program - 
* Wrote a function pass to print functions from program
    - I wrote a simple “Hello World” program and a loops program and printed the functions from it
    - Run first pass with opt on hello.bc
* Wrote a second function pass to print stats from a program
    - It prints the function name
    - It counts basic blocks and instruction counts
    - Compile and Test loops.cpp and use loops.ll on -hello pass
    - ./../opt -load ./../../lib/LLVMHello.so -hello2 < loops.ll > /dev/null
* Third function pass prints out direct function calls
    - ./../opt -load ./../../lib/LLVMHello.so -hello3 < loops.ll > /dev/null
    - For example: Direct call to function: printf from main
* Outputting control flow graphs using xdot
* Wrote a module pass to instrument code
* LLVM tools used:
    - clang/clang++
    - llvm-as - Takes LLVM IR in assembly form and converts it to bitcode format
    - llvm-dis - Converts bitcode to text readable llvm assembly
    - llvm-link - Links two or more llvm bitcode files into one file.
    - lli - Directly executes programs bit-code using JIT
    - llc - Static compiler that takes llvm input (assembly or bitcode) and generates assembly code
    - opt - LLVM analyzer and optimizer which runs certain optimizations and analysis on files
    - llvm-config 
    - --ldflags 
    - --libs
* Resources I used to learn
    - http://www.mshah.io/LLVM/NortheasternMITIntroduction%20to%20LLVM.pdf
    - https://llvm.org/docs/tutorial/LangImpl02.html#full-code-listing

