winsz
===

A stupid little program that prints the size of your terminal

## Building

### Requirements

- GCC
- Make 

### Making

Run `make`.

### Installing

I just have a symlink in my scripts folder that points to `target/release/winsz`.

## How to Use It

Run `winsz` in your terminal.

## FAQ

### Is this a joke of some kind?

Yes and no. 

Yes because ["[w]indow sizes are kept in the kernel, but not used by the kernel"](https://man7.org/linux/man-pages/man4/tty_ioctl.4.html), so they have to be retrieved using a system call&mdash;an ioctl to be more specific&mdash;and the ioctl for getting the size of a terminal window is `TIOCGWINSZ` (**T**erminal **I**nput/**O**utput **C**ontrol **G**et **WIN**dow **S**i**Z**e). It's all just so Unix that it feels like a parody. 

No because I made this while I was bored and wanted to play around with how to structure a C project.

### Why didn't you do this in Rust like you do everything else?

I definitely could have but for something so simple and fool-proof I didn't wanna make a whole new Cargo project. I figured it'd be painless enough to just do in C. Besides, calling ioctls in Rust would require :ghost: unsafe code :ghost:

### It doesn't work on my machine!

It is *literally* 40 lines of C. You can probably fix it yourself.

### Where can I read more about the concepts used in this program?

It's all in the man pages:

- `man ioctl`
- `man ioctl_tty`
- `man termios`

Poke around these and their "SEE ALSO"s, Google some stuff. You know how it goes.
