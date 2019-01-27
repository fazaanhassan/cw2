## COMP0019 CW2 Grade Report
Report for commit SHA: b87d6e251bc20abfdcb69bd5bc5a3f5276f39399

### Output


      CLEAN 
      COMPILE cs0019.c
    cs0019.c: In function ‘cs0019_malloc’:
    cs0019.c:156:20: warning: passing argument 3 of ‘addNode’ discards ‘const’ qualifier from pointer target type [-Wdiscarded-qualifiers]
       addNode(ptr, sz, file, line);
                        ^
    cs0019.c:42:6: note: expected ‘char *’ but argument is of type ‘const char *’
     void addNode(void *ptr, size_t allocationSize, char *file, int line ) {
          ^
    cs0019.c: In function ‘search_forSize’:
    cs0019.c:118:3: warning: control reaches end of non-void function [-Wreturn-type]
       }
       ^
    cs0019.c: In function ‘checkOverWritten’:
    cs0019.c:137:1: warning: control reaches end of non-void function [-Wreturn-type]
     }
     ^
      COMPILE basealloc.c
      COMPILE test001.c
      LINK test001 
      COMPILE test002.c
      LINK test002 
      COMPILE test003.c
      LINK test003 
      COMPILE test004.c
      LINK test004 
      COMPILE test005.c
      LINK test005 
      COMPILE test006.c
      LINK test006 
      COMPILE test007.c
      LINK test007 
      COMPILE test008.c
      LINK test008 
      COMPILE test009.c
      LINK test009 
      COMPILE test010.c
      LINK test010 
      COMPILE test011.c
      LINK test011 
      COMPILE test012.c
      LINK test012 
      COMPILE test013.c
      LINK test013 
      COMPILE test014.c
      LINK test014 
      COMPILE test015.c
      LINK test015 
      COMPILE test016.c
      LINK test016 
      COMPILE test017.c
      LINK test017 
      COMPILE test018.c
      LINK test018 
      COMPILE test019.c
      LINK test019 
      COMPILE test020.c
      LINK test020 
      COMPILE test021.c
      LINK test021 
      COMPILE test022.c
      LINK test022 
      COMPILE test023.c
      LINK test023 
      COMPILE test024.c
      LINK test024 
      COMPILE test025.c
      LINK test025 
      COMPILE test026.c
      LINK test026 
      COMPILE test027.c
      LINK test027 
      COMPILE test028.c
      LINK test028 
      COMPILE test029.c
      LINK test029 
      COMPILE test030.c
      LINK test030 
      COMPILE test031.c
      LINK test031 
      COMPILE test032.c
      LINK test032 
      COMPILE test033.c
      LINK test033 
      COMPILE test034.c
      LINK test034 
      COMPILE test035.c
      LINK test035 
      COMPILE test036.c
      LINK test036 
      COMPILE test037.c
      LINK test037 
      COMPILE test038.c
      LINK test038 
      COMPILE hhtest.c
      LINK hhtest 
    *** Run 'make check' or 'make check-all' to check your work.
    test001 OK
    test002 OK
    test003 OK
    test004 OK
    test005 OK
    test006 OK
    test007 OK
    test008 OK
    test009 OK
    test010 OK
    test011 OK
    test012 OK
    test013 OK
    test014 OK
    test015 OK
    test016 OK
    test017 OK
    test018 OK
    test019 OK
    test020 OK
    test021 OK
    test022 OK
    test023 OK
    test024 OK
    test025 OK
    test026 OK
    test027 OK
    test028 OK
    test029 OK
    test030 OK
    test031 FAIL: Unexpected output starting on line 1
      test031.c:33: Expected `OK`
      output:1: Got `MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     LEAK CHECK: test031.c:18: allocated object 0xa1c010 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c060 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c0b0 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c100 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c150 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c1a0 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c1f0 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c240 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c290 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c2e0 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c330 with size 8
                     LEAK CHECK: test031.c:18: allocated object 0xa1c380 with size 8
                     OK`
    test032 FAIL: Unexpected output starting on line 1
      test032.c:39: Expected `EXPECTED LEAK: ??{0x\w*}=pointer?? with size ??{\d+}=size??`
      output:1: Got `MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     MEMORY BUG???: invalid free of pointer ???, not in heap
                     EXPECTED LEAK: 0x1173d20 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172010 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172060 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x11720b0 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172100 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172150 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x11721a0 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x11721f0 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172240 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172290 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x11722e0 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172330 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x1172380 with size 8
                     LEAK CHECK: test032.c:18: allocated object 0x11723d0 with size 8`
    test033 FAIL: Missing output starting on line 6
      test033.c:37: Expected `LEAK CHECK: test???.c:18: allocated object ??{\w+}?? with size 19`
    test034 FAIL: Unexpected output starting on line 2
      test034.c:14: Expected `  test???.c:8: ??? is 128 bytes inside a 2001 byte region allocated here`
      output:2: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test035 OK
    test036 FAIL: Unexpected output starting on line 1
      test036.c:20: Expected `MEMORY BUG???: ??? free of pointer ???`
      output:1: Got `malloc count: active          2   total          4   fail          0
                     malloc size:  active       3350   total       3450   fail          0`
    test037 OK
    test038 OK
    33 of 38 tests passed
    make: 'hhtest' is up to date.
    ./hhtest 0
    
    ========================
    ./hhtest 1
    
    ========================
    ./hhtest 0.4
    
    ========================
    ./hhtest -0.4
    
    ========================
    ./hhtest -l
    hhtests complete. Check the results to see if they look OK.
    


### Marking

Heavy hitter marks: 0.0/20

Total score: (33/38) * 80.0 + 0.0 = 69.0/100

