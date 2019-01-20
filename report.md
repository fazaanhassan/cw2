## COMP0019 CW2 Grade Report
Report for commit SHA: 35aeb970cdf25c065845ca5d88a6c55a0fef6769

### Output


      CLEAN 
      COMPILE cs0019.c
    cs0019.c: In function ‘cs0019_free’:
    cs0019.c:107:15: warning: comparison of distinct pointer types lacks a cast
           if (ptr >= myHeap_min && ptr <= myHeap_max) {
                   ^
    cs0019.c:107:36: warning: comparison of distinct pointer types lacks a cast
           if (ptr >= myHeap_min && ptr <= myHeap_max) {
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
    test017 OK
    test018 OK
    test019 OK
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
    test026 OK
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
    20 of 38 tests passed
    make: 'hhtest' is up to date.
    ./hhtest 0
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000020f3050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f7458cb17e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f7458cba37a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f7458cbe53c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f7458c5a830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421324                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421324                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421324                             /home/user/hhtest
    020f3000-02114000 rw-p 00000000 00:00 0                                  [heap]
    7f7454000000-7f7454021000 rw-p 00000000 00:00 0 
    7f7454021000-7f7458000000 ---p 00000000 00:00 0 
    7f7458a24000-7f7458a3a000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f7458a3a000-7f7458c39000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f7458c39000-7f7458c3a000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f7458c3a000-7f7458dfa000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f7458dfa000-7f7458ffa000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f7458ffa000-7f7458ffe000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f7458ffe000-7f7459000000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f7459000000-7f7459004000 rw-p 00000000 00:00 0 
    7f7459004000-7f745910c000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f745910c000-7f745930b000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f745930b000-7f745930c000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f745930c000-7f745930d000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f745930d000-7f7459333000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f7459520000-7f7459523000 rw-p 00000000 00:00 0 
    7f745952f000-7f7459532000 rw-p 00000000 00:00 0 
    7f7459532000-7f7459533000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f7459533000-7f7459534000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f7459534000-7f7459535000 rw-p 00000000 00:00 0 
    7ffc13b96000-7ffc13bb7000 rw-p 00000000 00:00 0                          [stack]
    7ffc13bc1000-7ffc13bc3000 r--p 00000000 00:00 0                          [vvar]
    7ffc13bc3000-7ffc13bc5000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 1
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000007e4050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f0be856d7e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f0be857637a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f0be857a53c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f0be8516830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421324                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421324                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421324                             /home/user/hhtest
    007e4000-00805000 rw-p 00000000 00:00 0                                  [heap]
    7f0be4000000-7f0be4021000 rw-p 00000000 00:00 0 
    7f0be4021000-7f0be8000000 ---p 00000000 00:00 0 
    7f0be82e0000-7f0be82f6000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0be82f6000-7f0be84f5000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0be84f5000-7f0be84f6000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0be84f6000-7f0be86b6000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0be86b6000-7f0be88b6000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0be88b6000-7f0be88ba000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0be88ba000-7f0be88bc000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0be88bc000-7f0be88c0000 rw-p 00000000 00:00 0 
    7f0be88c0000-7f0be89c8000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0be89c8000-7f0be8bc7000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0be8bc7000-7f0be8bc8000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0be8bc8000-7f0be8bc9000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f0be8bc9000-7f0be8bef000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0be8ddc000-7f0be8ddf000 rw-p 00000000 00:00 0 
    7f0be8deb000-7f0be8dee000 rw-p 00000000 00:00 0 
    7f0be8dee000-7f0be8def000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0be8def000-7f0be8df0000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f0be8df0000-7f0be8df1000 rw-p 00000000 00:00 0 
    7fff1f8fc000-7fff1f91d000 rw-p 00000000 00:00 0                          [stack]
    7fff1f9e6000-7fff1f9e8000 r--p 00000000 00:00 0                          [vvar]
    7fff1f9e8000-7fff1f9ea000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest 0.4
    Aborted
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x0000000001b34050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f3614e277e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f3614e3037a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f3614e3453c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f3614dd0830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421324                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421324                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421324                             /home/user/hhtest
    01b34000-01b55000 rw-p 00000000 00:00 0                                  [heap]
    7f3610000000-7f3610021000 rw-p 00000000 00:00 0 
    7f3610021000-7f3614000000 ---p 00000000 00:00 0 
    7f3614b9a000-7f3614bb0000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f3614bb0000-7f3614daf000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f3614daf000-7f3614db0000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f3614db0000-7f3614f70000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f3614f70000-7f3615170000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f3615170000-7f3615174000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f3615174000-7f3615176000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f3615176000-7f361517a000 rw-p 00000000 00:00 0 
    7f361517a000-7f3615282000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f3615282000-7f3615481000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f3615481000-7f3615482000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f3615482000-7f3615483000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f3615483000-7f36154a9000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f3615696000-7f3615699000 rw-p 00000000 00:00 0 
    7f36156a5000-7f36156a8000 rw-p 00000000 00:00 0 
    7f36156a8000-7f36156a9000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f36156a9000-7f36156aa000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f36156aa000-7f36156ab000 rw-p 00000000 00:00 0 
    7fff2a401000-7fff2a422000 rw-p 00000000 00:00 0                          [stack]
    7fff2a538000-7fff2a53a000 r--p 00000000 00:00 0                          [vvar]
    7fff2a53a000-7fff2a53c000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -0.4
    Aborted
    *** Error in `./hhtest': free(): invalid pointer: 0x000000000073b050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7f07381497e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7f073815237a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7f073815653c]
    ./hhtest[0x40164a]
    ./hhtest[0x400ab1]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7f07380f2830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421324                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421324                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421324                             /home/user/hhtest
    0073b000-0075c000 rw-p 00000000 00:00 0                                  [heap]
    7f0733dea000-7f0733e00000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0733e00000-7f0733fff000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0733fff000-7f0734000000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7f0734000000-7f0734021000 rw-p 00000000 00:00 0 
    7f0734021000-7f0738000000 ---p 00000000 00:00 0 
    7f07380d2000-7f0738292000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0738292000-7f0738492000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0738492000-7f0738496000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0738496000-7f0738498000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7f0738498000-7f073849c000 rw-p 00000000 00:00 0 
    7f073849c000-7f07385a4000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f07385a4000-7f07387a3000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f07387a3000-7f07387a4000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f07387a4000-7f07387a5000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7f07387a5000-7f07387cb000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f07389b8000-7f07389bb000 rw-p 00000000 00:00 0 
    7f07389c7000-7f07389ca000 rw-p 00000000 00:00 0 
    7f07389ca000-7f07389cb000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f07389cb000-7f07389cc000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7f07389cc000-7f07389cd000 rw-p 00000000 00:00 0 
    7ffc535bf000-7ffc535e0000 rw-p 00000000 00:00 0                          [stack]
    7ffc535e1000-7ffc535e3000 r--p 00000000 00:00 0                          [vvar]
    7ffc535e3000-7ffc535e5000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    
    ========================
    ./hhtest -l
    *** Error in `./hhtest': free(): invalid pointer: 0x00000000016c5050 ***
    ======= Backtrace: =========
    /lib/x86_64-linux-gnu/libc.so.6(+0x777e5)[0x7faf28da07e5]
    /lib/x86_64-linux-gnu/libc.so.6(+0x8037a)[0x7faf28da937a]
    /lib/x86_64-linux-gnu/libc.so.6(cfree+0x4c)[0x7faf28dad53c]
    ./hhtest[0x4014d1]
    ./hhtest[0x400b27]
    /lib/x86_64-linux-gnu/libc.so.6(__libc_start_main+0xf0)[0x7faf28d49830]
    ./hhtest[0x400b89]
    ======= Memory map: ========
    00400000-00403000 r-xp 00000000 08:01 421324                             /home/user/hhtest
    00602000-00603000 r--p 00002000 08:01 421324                             /home/user/hhtest
    00603000-00604000 rw-p 00003000 08:01 421324                             /home/user/hhtest
    016c5000-016e6000 rw-p 00000000 00:00 0                                  [heap]
    7faf24000000-7faf24021000 rw-p 00000000 00:00 0 
    7faf24021000-7faf28000000 ---p 00000000 00:00 0 
    7faf28b13000-7faf28b29000 r-xp 00000000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7faf28b29000-7faf28d28000 ---p 00016000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7faf28d28000-7faf28d29000 rw-p 00015000 08:01 536                        /lib/x86_64-linux-gnu/libgcc_s.so.1
    7faf28d29000-7faf28ee9000 r-xp 00000000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7faf28ee9000-7faf290e9000 ---p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7faf290e9000-7faf290ed000 r--p 001c0000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7faf290ed000-7faf290ef000 rw-p 001c4000 08:01 510                        /lib/x86_64-linux-gnu/libc-2.23.so
    7faf290ef000-7faf290f3000 rw-p 00000000 00:00 0 
    7faf290f3000-7faf291fb000 r-xp 00000000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7faf291fb000-7faf293fa000 ---p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7faf293fa000-7faf293fb000 r--p 00107000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7faf293fb000-7faf293fc000 rw-p 00108000 08:01 551                        /lib/x86_64-linux-gnu/libm-2.23.so
    7faf293fc000-7faf29422000 r-xp 00000000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7faf2960f000-7faf29612000 rw-p 00000000 00:00 0 
    7faf2961e000-7faf29621000 rw-p 00000000 00:00 0 
    7faf29621000-7faf29622000 r--p 00025000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7faf29622000-7faf29623000 rw-p 00026000 08:01 486                        /lib/x86_64-linux-gnu/ld-2.23.so
    7faf29623000-7faf29624000 rw-p 00000000 00:00 0 
    7fffa3fde000-7fffa3fff000 rw-p 00000000 00:00 0                          [stack]
    7fffa4060000-7fffa4062000 r--p 00000000 00:00 0                          [vvar]
    7fffa4062000-7fffa4064000 r-xp 00000000 00:00 0                          [vdso]
    ffffffffff600000-ffffffffff601000 r-xp 00000000 00:00 0                  [vsyscall]
    timeout: the monitored command dumped core
    hhtests complete. Check the results to see if they look OK.
    


### Marking

Heavy hitter marks: 0.0/20

Total score: (20/38) * 80.0 + 0.0 = 42.0/100

