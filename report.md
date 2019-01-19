## COMP0019 CW2 Grade Report
Report for commit SHA: a16d81f885186181e84b929bbf2d44a69de6a7bb

### Output


      CLEAN 
      COMPILE cs0019.c
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
    test005 FAIL: Missing output starting on line 2
      test005.c:33: Expected `malloc count: active          5   total         10   fail          1`
    test006 OK
    test007 OK
    test008 OK
    test009 OK
    test010 OK
    test011 OK
    test012 FAIL: Unexpected output starting on line 1
      test012.c:20: Expected `malloc count: active          5   total         10   fail          1`
      output:1: Got `malloc count: active         11   total         11   fail          1
                     malloc size:  active         54   total         54   fail 18446744073709551615`
    test013 FAIL: Unexpected output starting on line 1
      test013.c:21: Expected `malloc count: active          0   total          2   fail          0`
      output:1: Got `test013: test013.c:15: main: Assertion `memcmp(data, p, 10) == 0' failed.`
    test014 FAIL: Unexpected output starting on line 1
      test014.c:20: Expected `malloc count: active          0   total          2   fail          0`
      output:1: Got `test014: test014.c:15: main: Assertion `memcmp(data, p, 8) == 0' failed.`
    test015 OK
    test016 FAIL: Unexpected output starting on line 1
      test016.c:14: Expected `malloc count: active          0   total          0   fail          1`
      output:1: Got `test016: test016.c:10: main: Assertion `p == NULL' failed.`
    test017 FAIL: Missing output starting on line 0
      test017.c:12: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
    test018 FAIL: Missing output starting on line 0
      test018.c:19: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
    test019 FAIL: Unexpected output starting on line 1
      test019.c:13: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
      output:1: Got `malloc count: active 18446744073709551615   total          0   fail          0
                     malloc size:  active 10316712655619883008   total          0   fail          0`
    test020 FAIL: Unexpected output starting on line 1
      test020.c:14: Expected `MEMORY BUG???: invalid free of pointer ???`
      output:1: Got `malloc count: active 18446744073709551615   total          1   fail          0
                     malloc size:  active 18446744073709549615   total       2001   fail          0`
    test021 FAIL: Unexpected output starting on line 1
      test021.c:13: Expected `MEMORY BUG???: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test022 FAIL: Unexpected output starting on line 1
      test022.c:13: Expected `MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test023 FAIL: Unexpected output starting on line 1
      test023.c:13: Expected `MEMORY BUG: test???.c:9: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test024 FAIL: Unexpected output starting on line 1
      test024.c:18: Expected `malloc count: active          0   total         10   fail          0`
      output:1: Got `malloc count: active          9   total         10   fail          0
                     malloc size:  active        360   total        400   fail          0`
    test025 FAIL: Unexpected output starting on line 1
      test025.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          1   total          2   fail          0
                     malloc size:  active       4001   total       4001   fail          0`
    test026 FAIL: Unexpected output starting on line 1
      test026.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          1   total          2   fail          0
                     malloc size:  active 18446744073705359602   total       4005   fail          0`
    test027 FAIL: Unexpected output starting on line 1
      test027.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          1   total          2   fail          0
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
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active       2001   total       2001   fail          0`
    test035 FAIL: Unexpected output starting on line 1
      test035.c:18: Expected `MEMORY BUG???: invalid free of pointer ???, not allocated`
      output:1: Got `malloc count: active          3   total          4   fail          0
                     malloc size:  active       3400   total       3450   fail          0`
    test036 FAIL: Unexpected output starting on line 1
      test036.c:20: Expected `MEMORY BUG???: ??? free of pointer ???`
      output:1: Got `malloc count: active          2   total          4   fail          0
                     malloc size:  active       3350   total       3450   fail          0`
    test037 FAIL: Missing output starting on line 0
      test037.c:13: Expected `malloc count: active          0   total          0   fail          1`
    test038 OK
    13 of 38 tests passed
    make: 'hhtest' is up to date.
    ./hhtest 0
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000000be2018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f1ad25c37e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f1ad25cc37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f1ad25d053c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f1ad256c830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421594                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421594                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421594                             /home/user/hhtest
    00be2000-00c03000 rw-p 00000000 00:00 0                                  [heap]
    7f1acc000000-7f1acc021000 rw-p 00000000 00:00 0 
    7f1acc021000-7f1ad0000000 ---p 00000000 00:00 0 
    7f1ad2336000-7f1ad234c000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f1ad234c000-7f1ad254b000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f1ad254b000-7f1ad254c000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f1ad254c000-7f1ad270c000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f1ad270c000-7f1ad290c000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f1ad290c000-7f1ad2910000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f1ad2910000-7f1ad2912000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f1ad2912000-7f1ad2916000 rw-p 00000000 00:00 0 
    7f1ad2916000-7f1ad2a1e000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f1ad2a1e000-7f1ad2c1d000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f1ad2c1d000-7f1ad2c1e000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f1ad2c1e000-7f1ad2c1f000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f1ad2c1f000-7f1ad2c45000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f1ad2e32000-7f1ad2e35000 rw-p 00000000 00:00 0 
    7f1ad2e41000-7f1ad2e44000 rw-p 00000000 00:00 0 
    7f1ad2e44000-7f1ad2e45000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f1ad2e45000-7f1ad2e46000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f1ad2e46000-7f1ad2e47000 rw-p 00000000 00:00 0 
    7fff7e969000-7fff7e98a000 rw-p 00000000 00:00 0                          [stack]
    7fff7e9b4000-7fff7e9b6000 r--p 00000000 00:00 0                          [vvar]
    7fff7e9b6000-7fff7e9b8000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 1
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000000969018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f379df597e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f379df6237a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f379df6653c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f379df02830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421594                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421594                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421594                             /home/user/hhtest
    00969000-0098a000 rw-p 00000000 00:00 0                                  [heap]
    7f3798000000-7f3798021000 rw-p 00000000 00:00 0 
    7f3798021000-7f379c000000 ---p 00000000 00:00 0 
    7f379dccc000-7f379dce2000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f379dce2000-7f379dee1000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f379dee1000-7f379dee2000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f379dee2000-7f379e0a2000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f379e0a2000-7f379e2a2000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f379e2a2000-7f379e2a6000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f379e2a6000-7f379e2a8000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f379e2a8000-7f379e2ac000 rw-p 00000000 00:00 0 
    7f379e2ac000-7f379e3b4000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f379e3b4000-7f379e5b3000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f379e5b3000-7f379e5b4000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f379e5b4000-7f379e5b5000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f379e5b5000-7f379e5db000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f379e7c8000-7f379e7cb000 rw-p 00000000 00:00 0 
    7f379e7d7000-7f379e7da000 rw-p 00000000 00:00 0 
    7f379e7da000-7f379e7db000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f379e7db000-7f379e7dc000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f379e7dc000-7f379e7dd000 rw-p 00000000 00:00 0 
    7ffde7f41000-7ffde7f62000 rw-p 00000000 00:00 0                          [stack]
    7ffde7f92000-7ffde7f94000 r--p 00000000 00:00 0                          [vvar]
    7ffde7f94000-7ffde7f96000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 0.4
    Aborted
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000000ddd018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fe5ba52d7e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fe5ba53637a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fe5ba53a53c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fe5ba4d6830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421594                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421594                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421594                             /home/user/hhtest
    00ddd000-00dfe000 rw-p 00000000 00:00 0                                  [heap]
    7fe5b4000000-7fe5b4021000 rw-p 00000000 00:00 0 
    7fe5b4021000-7fe5b8000000 ---p 00000000 00:00 0 
    7fe5ba2a0000-7fe5ba2b6000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fe5ba2b6000-7fe5ba4b5000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fe5ba4b5000-7fe5ba4b6000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fe5ba4b6000-7fe5ba676000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fe5ba676000-7fe5ba876000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fe5ba876000-7fe5ba87a000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fe5ba87a000-7fe5ba87c000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fe5ba87c000-7fe5ba880000 rw-p 00000000 00:00 0 
    7fe5ba880000-7fe5ba988000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fe5ba988000-7fe5bab87000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fe5bab87000-7fe5bab88000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fe5bab88000-7fe5bab89000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fe5bab89000-7fe5babaf000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fe5bad9c000-7fe5bad9f000 rw-p 00000000 00:00 0 
    7fe5badab000-7fe5badae000 rw-p 00000000 00:00 0 
    7fe5badae000-7fe5badaf000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fe5badaf000-7fe5badb0000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fe5badb0000-7fe5badb1000 rw-p 00000000 00:00 0 
    7ffe0e017000-7ffe0e038000 rw-p 00000000 00:00 0                          [stack]
    7ffe0e0a4000-7ffe0e0a6000 r--p 00000000 00:00 0                          [vvar]
    7ffe0e0a6000-7ffe0e0a8000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -0.4
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000020b4018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f78c5a547e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f78c5a5d37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f78c5a6153c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f78c59fd830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421594                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421594                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421594                             /home/user/hhtest
    020b4000-020d5000 rw-p 00000000 00:00 0                                  [heap]
    7f78c0000000-7f78c0021000 rw-p 00000000 00:00 0 
    7f78c0021000-7f78c4000000 ---p 00000000 00:00 0 
    7f78c57c7000-7f78c57dd000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f78c57dd000-7f78c59dc000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f78c59dc000-7f78c59dd000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f78c59dd000-7f78c5b9d000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f78c5b9d000-7f78c5d9d000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f78c5d9d000-7f78c5da1000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f78c5da1000-7f78c5da3000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f78c5da3000-7f78c5da7000 rw-p 00000000 00:00 0 
    7f78c5da7000-7f78c5eaf000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f78c5eaf000-7f78c60ae000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f78c60ae000-7f78c60af000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f78c60af000-7f78c60b0000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f78c60b0000-7f78c60d6000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f78c62c3000-7f78c62c6000 rw-p 00000000 00:00 0 
    7f78c62d2000-7f78c62d5000 rw-p 00000000 00:00 0 
    7f78c62d5000-7f78c62d6000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f78c62d6000-7f78c62d7000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f78c62d7000-7f78c62d8000 rw-p 00000000 00:00 0 
    7ffece164000-7ffece185000 rw-p 00000000 00:00 0                          [stack]
    7ffece1ee000-7ffece1f0000 r--p 00000000 00:00 0                          [vvar]
    7ffece1f0000-7ffece1f2000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -l
    Aborted
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000001565018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fd8b21377e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fd8b214037a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fd8b214453c]
    ./hhtest[0x401461]
    ./hhtest[0x400ab7]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fd8b20e0830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421594                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421594                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421594                             /home/user/hhtest
    01565000-01586000 rw-p 00000000 00:00 0                                  [heap]
    7fd8ac000000-7fd8ac021000 rw-p 00000000 00:00 0 
    7fd8ac021000-7fd8b0000000 ---p 00000000 00:00 0 
    7fd8b1eaa000-7fd8b1ec0000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fd8b1ec0000-7fd8b20bf000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fd8b20bf000-7fd8b20c0000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fd8b20c0000-7fd8b2280000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fd8b2280000-7fd8b2480000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fd8b2480000-7fd8b2484000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fd8b2484000-7fd8b2486000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fd8b2486000-7fd8b248a000 rw-p 00000000 00:00 0 
    7fd8b248a000-7fd8b2592000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fd8b2592000-7fd8b2791000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fd8b2791000-7fd8b2792000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fd8b2792000-7fd8b2793000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fd8b2793000-7fd8b27b9000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fd8b29a6000-7fd8b29a9000 rw-p 00000000 00:00 0 
    7fd8b29b5000-7fd8b29b8000 rw-p 00000000 00:00 0 
    7fd8b29b8000-7fd8b29b9000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fd8b29b9000-7fd8b29ba000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fd8b29ba000-7fd8b29bb000 rw-p 00000000 00:00 0 
    7ffdc7f0d000-7ffdc7f2e000 rw-p 00000000 00:00 0                          [stack]
    7ffdc7f4a000-7ffdc7f4c000 r--p 00000000 00:00 0                          [vvar]
    7ffdc7f4c000-7ffdc7f4e000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    hhtests complete. Check the results to see if they look OK.
    


### Marking

Heavy hitter marks: 0.0/20

Total score: (13/38) * 80.0 + 0.0 = 27.0/100

