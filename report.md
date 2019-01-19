## COMP0019 CW2 Grade Report
Report for commit SHA: d31a662dfe453301650366fe6068c036795c9c28

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
                     malloc size:  active 8843970843722645504   total          0   fail          0`
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
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000000d65018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f0b5e6f57e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f0b5e6fe37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f0b5e70253c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f0b5e69e830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    00d65000-00d86000 rw-p 00000000 00:00 0                                  [heap]
    7f0b58000000-7f0b58021000 rw-p 00000000 00:00 0 
    7f0b58021000-7f0b5c000000 ---p 00000000 00:00 0 
    7f0b5e468000-7f0b5e47e000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0b5e47e000-7f0b5e67d000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0b5e67d000-7f0b5e67e000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0b5e67e000-7f0b5e83e000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0b5e83e000-7f0b5ea3e000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0b5ea3e000-7f0b5ea42000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0b5ea42000-7f0b5ea44000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0b5ea44000-7f0b5ea48000 rw-p 00000000 00:00 0 
    7f0b5ea48000-7f0b5eb50000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0b5eb50000-7f0b5ed4f000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0b5ed4f000-7f0b5ed50000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0b5ed50000-7f0b5ed51000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0b5ed51000-7f0b5ed77000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0b5ef64000-7f0b5ef67000 rw-p 00000000 00:00 0 
    7f0b5ef73000-7f0b5ef76000 rw-p 00000000 00:00 0 
    7f0b5ef76000-7f0b5ef77000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0b5ef77000-7f0b5ef78000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0b5ef78000-7f0b5ef79000 rw-p 00000000 00:00 0 
    7ffeda204000-7ffeda225000 rw-p 00000000 00:00 0                          [stack]
    7ffeda393000-7ffeda395000 r--p 00000000 00:00 0                          [vvar]
    7ffeda395000-7ffeda397000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 1
    *** Error in `./hhtest': free(): invalid pointer: 0x000000000173f018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f37ca3d17e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f37ca3da37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f37ca3de53c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f37ca37a830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    0173f000-01760000 rw-p 00000000 00:00 0                                  [heap]
    7f37c4000000-7f37c4021000 rw-p 00000000 00:00 0 
    7f37c4021000-7f37c8000000 ---p 00000000 00:00 0 
    7f37ca144000-7f37ca15a000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f37ca15a000-7f37ca359000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f37ca359000-7f37ca35a000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f37ca35a000-7f37ca51a000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f37ca51a000-7f37ca71a000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f37ca71a000-7f37ca71e000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f37ca71e000-7f37ca720000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f37ca720000-7f37ca724000 rw-p 00000000 00:00 0 
    7f37ca724000-7f37ca82c000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f37ca82c000-7f37caa2b000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f37caa2b000-7f37caa2c000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f37caa2c000-7f37caa2d000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f37caa2d000-7f37caa53000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f37cac40000-7f37cac43000 rw-p 00000000 00:00 0 
    7f37cac4f000-7f37cac52000 rw-p 00000000 00:00 0 
    7f37cac52000-7f37cac53000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f37cac53000-7f37cac54000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f37cac54000-7f37cac55000 rw-p 00000000 00:00 0 
    7fff6f0f0000-7fff6f111000 rw-p 00000000 00:00 0                          [stack]
    7fff6f158000-7fff6f15a000 r--p 00000000 00:00 0                          [vvar]
    7fff6f15a000-7fff6f15c000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 0.4
    Aborted
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000002530018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fba1abd37e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fba1abdc37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fba1abe053c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fba1ab7c830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    02530000-02551000 rw-p 00000000 00:00 0                                  [heap]
    7fba14000000-7fba14021000 rw-p 00000000 00:00 0 
    7fba14021000-7fba18000000 ---p 00000000 00:00 0 
    7fba1a946000-7fba1a95c000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fba1a95c000-7fba1ab5b000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fba1ab5b000-7fba1ab5c000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fba1ab5c000-7fba1ad1c000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fba1ad1c000-7fba1af1c000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fba1af1c000-7fba1af20000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fba1af20000-7fba1af22000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fba1af22000-7fba1af26000 rw-p 00000000 00:00 0 
    7fba1af26000-7fba1b02e000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fba1b02e000-7fba1b22d000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fba1b22d000-7fba1b22e000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fba1b22e000-7fba1b22f000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fba1b22f000-7fba1b255000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fba1b442000-7fba1b445000 rw-p 00000000 00:00 0 
    7fba1b451000-7fba1b454000 rw-p 00000000 00:00 0 
    7fba1b454000-7fba1b455000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fba1b455000-7fba1b456000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fba1b456000-7fba1b457000 rw-p 00000000 00:00 0 
    7ffce9978000-7ffce9999000 rw-p 00000000 00:00 0                          [stack]
    7ffce99ba000-7ffce99bc000 r--p 00000000 00:00 0                          [vvar]
    7ffce99bc000-7ffce99be000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -0.4
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000006c1018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7fb8b8c657e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7fb8b8c6e37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7fb8b8c7253c]
    ./hhtest[0x4015da]
    ./hhtest[0x400a41]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7fb8b8c0e830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    006c1000-006e2000 rw-p 00000000 00:00 0                                  [heap]
    7fb8b4000000-7fb8b4021000 rw-p 00000000 00:00 0 
    7fb8b4021000-7fb8b8000000 ---p 00000000 00:00 0 
    7fb8b89d8000-7fb8b89ee000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fb8b89ee000-7fb8b8bed000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fb8b8bed000-7fb8b8bee000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7fb8b8bee000-7fb8b8dae000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fb8b8dae000-7fb8b8fae000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fb8b8fae000-7fb8b8fb2000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fb8b8fb2000-7fb8b8fb4000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7fb8b8fb4000-7fb8b8fb8000 rw-p 00000000 00:00 0 
    7fb8b8fb8000-7fb8b90c0000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fb8b90c0000-7fb8b92bf000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fb8b92bf000-7fb8b92c0000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fb8b92c0000-7fb8b92c1000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7fb8b92c1000-7fb8b92e7000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fb8b94d4000-7fb8b94d7000 rw-p 00000000 00:00 0 
    7fb8b94e3000-7fb8b94e6000 rw-p 00000000 00:00 0 
    7fb8b94e6000-7fb8b94e7000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fb8b94e7000-7fb8b94e8000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7fb8b94e8000-7fb8b94e9000 rw-p 00000000 00:00 0 
    7ffe74623000-7ffe74644000 rw-p 00000000 00:00 0                          [stack]
    7ffe74711000-7ffe74713000 r--p 00000000 00:00 0                          [vvar]
    7ffe74713000-7ffe74715000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -l
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x000000000117c018 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f31b46317e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f31b463a37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f31b463e53c]
    ./hhtest[0x401461]
    ./hhtest[0x400ab7]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f31b45da830]
    ./hhtest[0x400b19]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 422343                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 422343                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 422343                             /home/user/hhtest
    0117c000-0119d000 rw-p 00000000 00:00 0                                  [heap]
    7f31b0000000-7f31b0021000 rw-p 00000000 00:00 0 
    7f31b0021000-7f31b4000000 ---p 00000000 00:00 0 
    7f31b43a4000-7f31b43ba000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f31b43ba000-7f31b45b9000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f31b45b9000-7f31b45ba000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f31b45ba000-7f31b477a000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f31b477a000-7f31b497a000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f31b497a000-7f31b497e000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f31b497e000-7f31b4980000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f31b4980000-7f31b4984000 rw-p 00000000 00:00 0 
    7f31b4984000-7f31b4a8c000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f31b4a8c000-7f31b4c8b000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f31b4c8b000-7f31b4c8c000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f31b4c8c000-7f31b4c8d000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f31b4c8d000-7f31b4cb3000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f31b4ea0000-7f31b4ea3000 rw-p 00000000 00:00 0 
    7f31b4eaf000-7f31b4eb2000 rw-p 00000000 00:00 0 
    7f31b4eb2000-7f31b4eb3000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f31b4eb3000-7f31b4eb4000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f31b4eb4000-7f31b4eb5000 rw-p 00000000 00:00 0 
    7ffd4090e000-7ffd4092f000 rw-p 00000000 00:00 0                          [stack]
    7ffd409a8000-7ffd409aa000 r--p 00000000 00:00 0                          [vvar]
    7ffd409aa000-7ffd409ac000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    hhtests complete. Check the results to see if they look OK.
    


### Marking

Heavy hitter marks: 0.0/20

Total score: (13/38) * 80.0 + 0.0 = 27.0/100

