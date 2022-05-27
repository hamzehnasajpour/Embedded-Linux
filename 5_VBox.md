### Install VBox

### Install OS

### Settings

* VBox > Devices > Shared Clipboard > Bidirectional
* VBox > Devices > Drag & Drop > Bidirectional
* Install Guest Addition:
  
  1. VBox > Devices > Insert Guest Addition CD image ...
  2. go to folder
  3. `sudo ./VBoxLinuxAdditions.run`
  4. reboot


#### Import Machine
1. copy `.vdi` file.
2. Start VirtualBox and create a new VM.
3. When you’re asked for a hard disk image, select Use existing hard disk and click on the small icon on the right.
4. Which will brings you to the Virtual Media Manager. Click on Add and select the VDI file from step 1.
5. Done
6. Start