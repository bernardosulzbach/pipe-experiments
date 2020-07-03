# Pipe experiments

These are small experiments for testing properties of pipes in the system.

## Testing the pipe buffer size

```bash
./writer | ./reader && cat writer.txt
```

```
[Reader] Sleeping for a while.
[Reader] Consuming bytes from standard input.
[Reader] Finished reading from standard input.
[Writer] After 1 s, wrote 69632 B to standard output.
[Writer] After 2 s, wrote 69632 B to standard output.
[Writer] After 3 s, wrote 69632 B to standard output.
[Writer] After 4 s, wrote 69632 B to standard output.
[Writer] After 5 s, wrote 69632 B to standard output.
```

Oddly enough, the size on my system was 68 KiB.
