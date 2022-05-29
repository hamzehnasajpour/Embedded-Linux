```bash
#!/bin/bash
```
The “#!” combo is called a shebang by most Unix geeks. This is used by the shell to decide which interpreter to run the rest of the script, and ignored by the shell that actually runs the script. Confused? Scripts can be written for all kinds of interpreters — bash, tsch, zsh, or other shells, or for Perl, Python, and so on. You could even omit that line if you wanted to run the script by sourcing it at the shell, but let’s save ourselves some trouble and add it to allow scripts to be run non-interactively.

-------------------------------
```bash
#!/bin/bash
# A simple script
```
-------------------------------

```bash
#!/bin/bash
echo "HELLO"
```

-------------------------------
```bash
#!/bin/bash
echo "HELLO"
exit 1
```

-------------------------------
```bash
#!/bin/bash
x=1
while [ $x -le 5 ]
do
  echo "Welcome $x times"
  x=$(( $x + 1 ))
  sleep 1
done
```
-------------------------------

```bash
#!/bin/bash
echo "start"
sleep 1
echo "end"
```






