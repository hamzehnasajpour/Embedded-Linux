### Cron

The cron command-line utility, also known as cron job, is a job scheduler on Unix-like operating systems. Users who set up and maintain software environments use cron to schedule jobs (commands or shell scripts) to run periodically at fixed times, dates, or intervals. It typically automates system maintenance or administration—though its general-purpose nature makes it useful for things like downloading files from the Internet and downloading email at regular intervals.


#### Configuration

The actions of cron are driven by a crontab (cron table) file, a configuration file that specifies shell commands to run periodically on a given schedule. The crontab files are stored where the lists of jobs and other instructions to the cron daemon are kept. Users can have their own individual crontab files and often there is a system-wide crontab file (usually in /etc or a subdirectory of /etc e.g. /etc/cron.d) that only system administrators can edit.[note 1] 

```
# ┌───────────── minute (0 - 59)
# │ ┌───────────── hour (0 - 23)
# │ │ ┌───────────── day of the month (1 - 31)
# │ │ │ ┌───────────── month (1 - 12)
# │ │ │ │ ┌───────────── day of the week (0 - 6) (Sunday to Saturday;
# │ │ │ │ │                                   7 is also Sunday on some systems)
# │ │ │ │ │
# │ │ │ │ │
# * * * * * USERNAME <command to execute>
```
```
1 2 3 4 5 USERNAME /path/to/command arg1 arg2
```


**hint**
```
grep run-parts /etc/crontab

01 * * * * root run-parts /etc/cron.hourly
02 4 * * * root run-parts /etc/cron.daily
22 4 * * 0 root run-parts /etc/cron.weekly
42 4 1 * * root run-parts /etc/cron.monthly
```

#### Example

1. Create `test.sh` in `~`:
```bash
#!/bin/bash
echo $(date) >> /tmp/cronlog
```

2. `chmod +x ~/test.sh`
3. create a cronjob: by running `nano /etc/cron.d/testjob`:
```
* * * * * root /root/test.sh
```



### more info
https://en.wikipedia.org/wiki/Cron