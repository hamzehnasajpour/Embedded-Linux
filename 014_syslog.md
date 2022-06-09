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

