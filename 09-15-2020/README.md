Below are the two alternatives. As you can see, C strings are far more efficient.

```
[sekhar@aurora 09-15-2020]$ time string1 > /dev/null

real	0m9.796s
user	0m9.383s
sys	0m0.402s
[sekhar@aurora 09-15-2020]$ time string2 > /dev/null

real	0m0.731s
user	0m0.700s
sys	0m0.030s
[sekhar@aurora 09-15-2020]$
```