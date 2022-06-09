## SysLog
In computing, syslog /ˈsɪslɒɡ/ is a standard for message logging. It allows separation of the software that generates messages, the system that stores them, and the software that reports and analyzes them. Each message is labeled with a facility code, indicating the type of system generating the message, and is assigned a severity level. 

https://en.wikipedia.org/wiki/Syslog


### Build A simple library to use syslog

1. Clone: https://github.com/hamzehnasajpour/SysLoggerCpp
2. Build based on the instructions.
3. run the example.
4. `sudo tail -f /var/log/messages`

### Remote Syslog server

#### Install
* https://help.sumologic.com/03Send-Data/Sources/02Sources-for-Hosted-Collectors/Cloud-Syslog-Source/Install-syslog-ng
* https://linuxtechlab.com/setup-syslog-server-centos-ubuntu-centralized-logs-management/
* https://www.linuxtechi.com/setup-rsyslog-server-on-debian/

#### Configuration
* Config file: `/etc/rsyslog.conf`
* Put logs to another log file: Add this line to config line and then restart the service:
 - `*.info;mail.none;authpriv.none;cron.none;local1.none     /var/log/messages`
 - `$ service syslog restart`
 
#### Remote apps/webapps
* Edit `/etc/rsyslog.conf` append this line
```
*.* @10.0.0.10:514
```
* `$ service syslog restart`

Now the logs will be forwarded to `10.0.0.10` and udp port `514`. 

**In windows** you can have a syslog server with these applications:
* `tftpd`: https://bitbucket.org/phjounin/tftpd64/downloads/
* `SysLog Watcher`: https://ezfive.com/syslog-watcher/

**In Linux:** you can active and listen to the port in the `syslog` server config, so you can uncomment these lines:
```
module(load="imudp")
input(type="imudp" port="514")
```
After restarting the remote syslog you can check the port via this:
```bash
$ sudo lsof -i -P -n | grep 514
rsyslogd  2496          syslog    5u  IPv4  29885      0t0  UDP *:514 
rsyslogd  2496          syslog    6u  IPv6  29886      0t0  UDP *:514 
```
