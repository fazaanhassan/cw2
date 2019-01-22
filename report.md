## COMP0019 CW2 Grade Report
Report for commit SHA: 056ad54ea56fa7564606ab26395d257bb63c6802

### Output


      CLEAN 
      COMPILE cs0019.c
    cs0019.c: In function ‘search_forSize’:
    cs0019.c:99:3: warning: control reaches end of non-void function [-Wreturn-type]
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
    test017 FAIL: Unexpected output starting on line 1
      test017.c:12: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
      output:1: Got `malloc count: active          0   total          0   fail          0
                     malloc size:  active          0   total          0   fail          0`
    test018 FAIL: Unexpected output starting on line 1
      test018.c:19: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
      output:1: Got `malloc count: active          5   total         10   fail          0
                     malloc size:  active         40   total         55   fail          0`
    test019 FAIL: Unexpected output starting on line 1
      test019.c:13: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
      output:1: Got `malloc count: active          0   total          0   fail          0
                     malloc size:  active          0   total          0   fail          0`
    test020 FAIL: Unexpected output starting on line 1
      test020.c:14: Expected `MEMORY BUG???: invalid free of pointer ???`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active          0   total       2001   fail          0`
    test021 FAIL: Unexpected output starting on line 1
      test021.c:13: Expected `MEMORY BUG???: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test022 FAIL: Unexpected output starting on line 1
      test022.c:13: Expected `MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test023 FAIL: Unexpected output starting on line 1
      test023.c:13: Expected `MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test024 FAIL: Unexpected output starting on line 1
      test024.c:18: Expected `malloc count: active          0   total         10   fail          0`
      output:1: Got `malloc count: active          9   total         10   fail          0
                     malloc size:  active        360   total        400   fail          0`
    test025 FAIL: Unexpected output starting on line 1
      test025.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          2   total          2   fail          0
                     malloc size:  active       4001   total       4001   fail          0`
    test026 FAIL: Missing output starting on line 0
      test026.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
    test027 FAIL: Unexpected output starting on line 1
      test027.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          2   total          2   fail          0
                     malloc size:  active       4005   total       4005   fail          0`
    test028 FAIL: Unexpected output starting on line 1
      test028.c:16: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active          0   total         40   fail          0`
    test029 FAIL: Unexpected output starting on line 1
      test029.c:17: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active          0   total         63   fail          0`
    test030 FAIL: Unexpected output starting on line 1
      test030.c:16: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active          0   total          3   fail          0`
    test031 OK
    test032 FAIL: Missing output starting on line 1
      test032.c:40: Expected `LEAK CHECK: test???.c:18: allocated object ??pointer?? with size ??size??`
    test033 FAIL: Missing output starting on line 0
      test033.c:31: Expected `LEAK CHECK: test???.c:10: allocated object ??{\w+}?? with size 11`
    test034 FAIL: Unexpected output starting on line 1
      test034.c:13: Expected `MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test035 FAIL: Unexpected output starting on line 1
      test035.c:18: Expected `MEMORY BUG???: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          4   total          4   fail          0
                     malloc size:  active       3450   total       3450   fail          0`
    test036 FAIL: Unexpected output starting on line 1
      test036.c:20: Expected `MEMORY BUG???: ??? free of pointer ???`
      output:1: Got `malloc count: active          2   total          4   fail          0
                     malloc size:  active       3350   total       3450   fail          0`
    test037 FAIL: Unexpected output starting on line 1
      test037.c:13: Expected `malloc count: active          0   total          0   fail          1`
      output:1: Got `malloc count: active          1   total          1   fail          0
                     malloc size:  active 12884901890   total 12884901890   fail          0`
    test038 OK
    18 of 38 tests passed
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

Total score: (18/38) * 80.0 + 0.0 = 38.0/100

