# minishell
Epitech Project in C

What is it :
A simple shell in which you can write commands such as ls or other any existed unix binaries.
Pipes and multi-processes line commands are not handled.

How to use :
First build the project executing make
Launch on a command file with ./mysh file
Launch with piped commands with echo "command" | ./mysh
Launch as normal mode with ./mysh
Exit shell pressing ^D
And for the text in expect just launch ./tests and watch.

The code respects Epitech-Norm and contains no memory leak but some error of style.
You can also test cd pwd env setenv unsetenv and env bultins.

The project passes 50% of the tests then a bonus with tests carried out in expect.