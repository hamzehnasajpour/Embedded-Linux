## SCP Linux Command – How to SSH File Transfer from Remote to Local

SCP is an acronym for Secure Copy Protocol. It is a command line utility that allows the user to securely copy files and directories between two locations usually between unix or linux systems.

The protocol ensures the transmission of files is encrypted to prevent anyone with suspicious intentions from getting sensitive information.

In simpler words we can say that SCP is a safer option for the cp (copy) command.

It is also important to note that SCP uses encryption over an SSH (Secure Shell) connection, this ensures that the data being transferred is protected from suspicious attacks.

### SCP Syntax

Just like any other commands used in the terminal, the SCP also have a format that is used for a successful execution to happen. By understanding the syntax it makes it easier for you to write down the commands:

```bash
scp [OPTIONS] [[user@]src_host:]file1 [[user@]dest_host:]file2
```

* `scp` - It initializes the command and ensures a secure shell is in place.
* `OPTIONS` - They grant different permissions depending on how they have been used. Some of the most common options include:
* `P`(Caps) - specifies the port to establish connection with the remote host.
* `r` - copies the entire directory recursively
* `q` - copies files quietly, doesn't display the progress messages. Also known as quiet mode.
* `C` - for compression of data during transmission.
    To understand more about OPTIONS read scp options
* `src_host` - where the file is hosted. The source can either be a client or server depending on the origin of the file.
* `dest_host` - where the file will be copied to.

We are able to use SCP in the following cases:

* Copy files within same machine.
* Copy files from a local host to remote host and vice versa.
* Copy files between two different remote servers.

#### Copy File From Local Host to Remote Server

* Let's take a scenario where we have a file test.txt and we need to copy it to a remote server, our command will look like below:
```bash
scp test.txt userbravo@destination:/location2
```

* We are not limited to the number of files we can copy. Let's say we are on our desktop in the folder called web where we have .php file extensions and we need to copy the to remote server home directory. Our command will look like:
```bash
scp *.php userbravo@destination_host:/~/
```

* Let's say you wanted to copy a file named test.txt and save it with a different name in the remote server this time round using an option of port. The command will be:

```bash
scp -P 8080 test.txt userbravo@destination_host:/user/home/test2.txt
```

#### Copy Files From Remote to Local

To copy the files you will need to first invoke the SCP, followed by the remote username@IP address, path to file. If you do not specify the path, it is assumed as default in this case which will be the user's home directory, this will be followed the path where the file will be stored locally.

```bash
scp file <remote_username>@<IPorHost>:<PathToFile>   <LocalFileLocation>
```

```bash
scp linuxcheatsheet lary@192.168.1.100: .
```

#### Copy Files From Remote Host to Another

The beauty of using SCP in file transferring, is that it does not only allow connection between local machines but also it allows for you to connect to remote servers.

```bash
scp user1@host1.com:/files/test.txt user2@user2.com:/files
```

