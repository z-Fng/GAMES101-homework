# URL of Virtual Machine

URL: `https://pan.baidu.com/s/198u7ETgY7h24IuYCYslmlw ` password: `p085`

OR

URL: `https://pan.baidu.com/s/12zuEZ4qfeg1s9Hw1p7yo_A ` password: `hask`

# MD5 of Virtual Machine

md5 of zip file : `0edaf9ed1422e3ac0833188b9cecccf5`
md5 of vdi file: `ab0622020e97b76524a5ed32a6443fd2`

In `MS Windows`, to calculate the md5 of a file:

```
certutil -hashfile "GAMES101_Ubuntu 18.04.2 (64bit).zip" md5
certutil -hashfile "GAMES101_Ubuntu 18.04.2 (64bit).vdi" md5
```

# To Change .vdi File to .vmdk File

To change .vdi file to .vmdk file, you can try this command: 

```
"D:\Program Files\Oracle\VirtualBox\VBoxManage.exe" clonehd "D:\vmware\GAMES101_Ubuntu 18.04.2 (64bit)\GAMES101_Ubuntu 18.04.2 (64bit).vdi" "D:\vmware\GAMES101_Ubuntu 18.04.2 (64bit)\GAMES101_Ubuntu 18.04.2 (64bit).vmdk" --format vmdk
```

`However, I don't recommend it.`

## To change the UUID of a virtual disk

To change the UUID of a virtual disk, you can try this command:

```
"D:\Program Files\Oracle\VirtualBox\VBoxManage.exe" internalcommands sethduuid "D:\vmware\GAMES101_Ubuntu 18.04.2 (64bit)\GAMES101_Ubuntu 18.04.2 (64bit).vdi"
```

