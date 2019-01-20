## COMP0019 CW2 Grade Report
Report for commit SHA: b1d583a2f7c43546e3a9b004668d39fd191171a9

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
      output:1: Got `malloc count: active         10   total         10   fail          1
                     malloc size:  active         54   total         54   fail 18446744073709551615`
    test013 OK
    test014 OK
    test015 OK
    test016 OK
    test017 FAIL: Missing output starting on line 0
      test017.c:12: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
    test018 FAIL: Missing output starting on line 0
      test018.c:19: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
    test019 FAIL: Unexpected output starting on line 1
      test019.c:13: Expected `MEMORY BUG???: invalid free of pointer ???, not in heap`
      output:1: Got `malloc count: active 18446744073709551615   total          0   fail          0
                     malloc size:  active 4856603333026086915   total          0   fail          0`
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
                     malloc size:  active       4000   total       4005   fail          0`
    test027 FAIL: Unexpected output starting on line 1
      test027.c:13: Expected `MEMORY BUG???: invalid ??{realloc|free}?? of pointer ???`
      output:1: Got `malloc count: active          1   total          2   fail          0
                     malloc size:  active       4005   total       4005   fail          0`
    test028 FAIL: Unexpected output starting on line 1
      test028.c:16: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `test028: malloc.c:2394: sysmalloc: Assertion `(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)' failed.`
    test029 FAIL: Unexpected output starting on line 1
      test029.c:17: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `malloc count: active          0   total          1   fail          0
                     malloc size:  active          0   total         63   fail          0`
    test030 FAIL: Unexpected output starting on line 1
      test030.c:16: Expected `MEMORY BUG???: detected wild write during free of pointer ???`
      output:1: Got `test030: malloc.c:2394: sysmalloc: Assertion `(old_top == initial_top (av) && old_size == 0) || ((unsigned long) (old_size) >= MINSIZE && prev_inuse (old_top) && ((unsigned long) old_end & (pagesize - 1)) == 0)' failed.`
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
    16 of 38 tests passed
    make: 'hhtest' is up to date.
    ./hhtest 0
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000025a4050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fa82d0747e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fa82d07d37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fa82d08153c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fa82d01d830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    025a4000-025c5000 rw-p 00000000 00:00 0                                  [heap]
    7fa828000000-7fa828021000 rw-p 00000000 00:00 0 
    7fa828021000-7fa82c000000 ---p 00000000 00:00 0 
    7fa82cde7000-7fa82cdfd000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fa82cdfd000-7fa82cffc000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fa82cffc000-7fa82cffd000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fa82cffd000-7fa82d1bd000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fa82d1bd000-7fa82d3bd000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fa82d3bd000-7fa82d3c1000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fa82d3c1000-7fa82d3c3000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fa82d3c3000-7fa82d3c7000 rw-p 00000000 00:00 0 
    7fa82d3c7000-7fa82d4cf000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fa82d4cf000-7fa82d6ce000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fa82d6ce000-7fa82d6cf000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fa82d6cf000-7fa82d6d0000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fa82d6d0000-7fa82d6f6000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fa82d8e3000-7fa82d8e6000 rw-p 00000000 00:00 0 
    7fa82d8f2000-7fa82d8f5000 rw-p 00000000 00:00 0 
    7fa82d8f5000-7fa82d8f6000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fa82d8f6000-7fa82d8f7000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fa82d8f7000-7fa82d8f8000 rw-p 00000000 00:00 0 
    7fff41e1e000-7fff41e3f000 rw-p 00000000 00:00 0                          [stack]
    7fff41f1c000-7fff41f1e000 r--p 00000000 00:00 0                          [vvar]
    7fff41f1e000-7fff41f20000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 1
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x000000000152d050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f9c703007e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f9c7030937a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f9c7030d53c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f9c702a9830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    0152d000-0154e000 rw-p 00000000 00:00 0                                  [heap]
    7f9c6c000000-7f9c6c021000 rw-p 00000000 00:00 0 
    7f9c6c021000-7f9c70000000 ---p 00000000 00:00 0 
    7f9c70073000-7f9c70089000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f9c70089000-7f9c70288000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f9c70288000-7f9c70289000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f9c70289000-7f9c70449000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f9c70449000-7f9c70649000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f9c70649000-7f9c7064d000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f9c7064d000-7f9c7064f000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f9c7064f000-7f9c70653000 rw-p 00000000 00:00 0 
    7f9c70653000-7f9c7075b000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f9c7075b000-7f9c7095a000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f9c7095a000-7f9c7095b000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f9c7095b000-7f9c7095c000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f9c7095c000-7f9c70982000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f9c70b6f000-7f9c70b72000 rw-p 00000000 00:00 0 
    7f9c70b7e000-7f9c70b81000 rw-p 00000000 00:00 0 
    7f9c70b81000-7f9c70b82000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f9c70b82000-7f9c70b83000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f9c70b83000-7f9c70b84000 rw-p 00000000 00:00 0 
    7ffe060aa000-7ffe060cb000 rw-p 00000000 00:00 0                          [stack]
    7ffe0619c000-7ffe0619e000 r--p 00000000 00:00 0                          [vvar]
    7ffe0619e000-7ffe061a0000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 0.4
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x000000000232d050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f76d9cd57e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f76d9cde37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f76d9ce253c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f76d9c7e830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    0232d000-0234e000 rw-p 00000000 00:00 0                                  [heap]
    7f76d4000000-7f76d4021000 rw-p 00000000 00:00 0 
    7f76d4021000-7f76d8000000 ---p 00000000 00:00 0 
    7f76d9a48000-7f76d9a5e000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f76d9a5e000-7f76d9c5d000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f76d9c5d000-7f76d9c5e000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f76d9c5e000-7f76d9e1e000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f76d9e1e000-7f76da01e000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f76da01e000-7f76da022000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f76da022000-7f76da024000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f76da024000-7f76da028000 rw-p 00000000 00:00 0 
    7f76da028000-7f76da130000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f76da130000-7f76da32f000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f76da32f000-7f76da330000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f76da330000-7f76da331000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f76da331000-7f76da357000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f76da544000-7f76da547000 rw-p 00000000 00:00 0 
    7f76da553000-7f76da556000 rw-p 00000000 00:00 0 
    7f76da556000-7f76da557000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f76da557000-7f76da558000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f76da558000-7f76da559000 rw-p 00000000 00:00 0 
    7fff5554e000-7fff5556f000 rw-p 00000000 00:00 0                          [stack]
    7fff555e2000-7fff555e4000 r--p 00000000 00:00 0                          [vvar]
    7fff555e4000-7fff555e6000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -0.4
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000001d2e050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7ff5fb0637e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7ff5fb06c37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7ff5fb07053c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7ff5fb00c830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    01d2e000-01d4f000 rw-p 00000000 00:00 0                                  [heap]
    7ff5f4000000-7ff5f4021000 rw-p 00000000 00:00 0 
    7ff5f4021000-7ff5f8000000 ---p 00000000 00:00 0 
    7ff5fadd6000-7ff5fadec000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff5fadec000-7ff5fafeb000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff5fafeb000-7ff5fafec000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff5fafec000-7ff5fb1ac000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff5fb1ac000-7ff5fb3ac000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff5fb3ac000-7ff5fb3b0000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff5fb3b0000-7ff5fb3b2000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff5fb3b2000-7ff5fb3b6000 rw-p 00000000 00:00 0 
    7ff5fb3b6000-7ff5fb4be000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff5fb4be000-7ff5fb6bd000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff5fb6bd000-7ff5fb6be000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff5fb6be000-7ff5fb6bf000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff5fb6bf000-7ff5fb6e5000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff5fb8d2000-7ff5fb8d5000 rw-p 00000000 00:00 0 
    7ff5fb8e1000-7ff5fb8e4000 rw-p 00000000 00:00 0 
    7ff5fb8e4000-7ff5fb8e5000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff5fb8e5000-7ff5fb8e6000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff5fb8e6000-7ff5fb8e7000 rw-p 00000000 00:00 0 
    7ffe2984a000-7ffe2986b000 rw-p 00000000 00:00 0                          [stack]
    7ffe298d7000-7ffe298d9000 r--p 00000000 00:00 0                          [vvar]
    7ffe298d9000-7ffe298db000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -l
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000021cd050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7ff6258837e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7ff62588c37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7ff62589053c]
    ./hhtest[0x4014d1]
    ./hhtest[0x400b27]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7ff62582c830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    021cd000-021ee000 rw-p 00000000 00:00 0                                  [heap]
    7ff620000000-7ff620021000 rw-p 00000000 00:00 0 
    7ff620021000-7ff624000000 ---p 00000000 00:00 0 
    7ff6255f6000-7ff62560c000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff62560c000-7ff62580b000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff62580b000-7ff62580c000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7ff62580c000-7ff6259cc000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff6259cc000-7ff625bcc000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff625bcc000-7ff625bd0000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff625bd0000-7ff625bd2000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7ff625bd2000-7ff625bd6000 rw-p 00000000 00:00 0 
    7ff625bd6000-7ff625cde000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff625cde000-7ff625edd000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff625edd000-7ff625ede000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff625ede000-7ff625edf000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7ff625edf000-7ff625f05000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff6260f2000-7ff6260f5000 rw-p 00000000 00:00 0 
    7ff626101000-7ff626104000 rw-p 00000000 00:00 0 
    7ff626104000-7ff626105000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff626105000-7ff626106000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7ff626106000-7ff626107000 rw-p 00000000 00:00 0 
    7ffcf35f0000-7ffcf3611000 rw-p 00000000 00:00 0                          [stack]
    7ffcf379f000-7ffcf37a1000 r--p 00000000 00:00 0                          [vvar]
    7ffcf37a1000-7ffcf37a3000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    hhtests complete. Check the results to see if they look OK.
    


### Marking

Heavy hitter marks: 0.0/20

Total score: (16/38) * 80.0 + 0.0 = 34.0/100

