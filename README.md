## Simple x-macros example

I came across this idiom at work yesterday and am suprised that I've never really internalized it before.  I have seen it many times but never from a pattern perspective.

### To build and run the silly example
```
$ ls
lld.c  lld.h  ll.h  main.c

$ gcc main.c lld.c

$ ./a.out 
Hello
3 elements in table
gt[0] = { TT_nam1, 10, 20, 100 }
gt[1] = { TT_nam2, 11, 30, 100 }
gt[2] = { TT_nam3, 11, 12, 100 }
```
