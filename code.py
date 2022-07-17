Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

Install the latest PowerShell for new features and improvements! https://aka.ms/PSWindows

PS C:\Users\riddh\Documents\python> wsl
Welcome to Ubuntu 20.04.4 LTS (GNU/Linux 5.10.16.3-microsoft-standard-WSL2 x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage

  System information as of Sat Jul 16 18:04:24 IST 2022

  System load:  0.16               Processes:             8
  Usage of /:   1.8% of 250.98GB   Users logged in:       0
  Memory usage: 7%                 IPv4 address for eth0: 172.22.193.152
  Swap usage:   0%


18 updates can be applied immediately.
14 of these updates are standard security updates.
To see these additional updates run: apt list --upgradable


The list of available updates is more than a week old.
To check for new updates run: sudo apt update


/home/riddhi/.hushlogin file.
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py
type your number here : w
Traceback (most recent call last):
  File "half.py", line 1, in <module>
    x=int(input("type your number here : "))
ValueError: invalid literal for int() with base 10: 'w'
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py
type your number here : 2
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py 
  File "half.py", line 13
    return True
    ^
IndentationError: unexpected indent
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py 
  File "half.py", line 13
    return True
    ^
IndentationError: unexpected indent
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py 
  File "half.py", line 14
    print ("it is a not prime number")
    ^
IndentationError: unexpected indent
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py 
  File "half.py", line 14
    return True
    ^
IndentationError: unexpected indent
riddhi@montero:/mnt/c/Users/riddh/Documents/python$ python3 half.py 
  File "half.py", line 13