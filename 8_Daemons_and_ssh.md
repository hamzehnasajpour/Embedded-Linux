### Daemons

A daemon is a service process that runs in the background and supervises the system or provides functionality to other processes.

like: `sshd`, `telnetd`, `ftpd`, ...


#### `service` vs `systemctl`

service is an "high-level" command used for starting and stopping services in different unixes and linuxes. Depending on the "lower-level" service manager, service redirects on different binaries.

For example, on CentOS 7 it redirects to systemctl, while on CentOS 6 it directly calls the relative /etc/init.d script. On the other hand, in older Ubuntu releases it redirects to upstart

service is adequate for basic service management, while directly calling systemctl give greater control options.

https://serverfault.com/questions/867322/what-is-the-difference-between-service-and-systemctl

---

### SSH

Secure Shell, sometimes referred to as Secure Socket Shell, is a protocol which allows you to connect securely to a remote computer or a server by using a text-based interface.

#### How doeas ssh work?

How Does SSH Work?

In order to establish an SSH connection, you need two components: a client and the corresponding server-side component. An SSH client is an application you install on the computer which you will use to connect to another computer or a server. The client uses the provided remote host information to initiate the connection and if the credentials are verified, establishes the encrypted connection.

On the server’s side, there is a component called an SSH daemon that is constantly listening to a specific TCP/IP port for possible client connection requests. Once a client initiates a connection, the SSH daemon will respond with the software and the protocol versions it supports and the two will exchange their identification data. If the provided credentials are correct, SSH creates a new session for the appropriate environment.

#### How to Install an OpenSSH Server

1. Type in ssh localhost and hit enter.

or run :

```bash
service ssh status
```

2. For the systems without the SSH server installed the response will look similar to this:

```bash
username@host:~$ ssh localhost
ssh: connect to host localhost port 22: Connection refused username@host:~$
```
If the above is the case, you will need to install the OpenSSH server. Leave the terminal open and:

3. Run the following command to install the SSH server:

```bash
sudo apt-get install openssh-server
```

#### Start/Stop/Restart

```bash
sudo service ssh start
```

```bash
sudo service ssh stop
```

```bash
sudo service ssh restart
```

#### Connect via SSH

In the client side:

```bash
ssh IP_ADDRESS
```

#### Best SSH Clients

1. PuTTY : https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html
2. WinSCP : https://winscp.net/
3. In Linux: 
```bash
ssh user@ip
```