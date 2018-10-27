# KnR_C_Programming 
<p>This repository is for the exercises used in the famous book, "The
C Programming Language" by Brian Kernighan and Dennis Ritchie. This book is colloquially referred to as "K&R", widely known as the Bible for C programming. I hope you enjoy it as much as I have!</p>

<p>Each file will be named in the following format: 'cxey', where 'x' stands for the chapter of the book, and 'y' stands for the exercise number. </p>

<p>Each C file was compiled in the terminal on Mac OSX. You can compile and run your programs from the terminal following these steps:</p>

<p>Creat a C file with your favorite text editor with the following code:</p>

<blockquote>#include <stdio.h><br />

int main(void) { <br />
   printf("Hello, World!\n");<br />
   return 0;<br />
}</blockquote>

<p>Save the file as HelloWorld.c and type in the terminal:</br>

gcc -o HelloWorld HelloWorld.c</br>
Afterwards just run the executable like this:</br>

./HelloWorld</br>

You should be seeing Hello, World!
</p>