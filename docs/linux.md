# Linux Cheat Sheet

## Show Details of a Package

`apt show firefox`

## Standard Environment Variables 

stderr: `echo $?` (`0` means no error, everything else is a different error type eg. `127` is command not found)

Terminal in Use: `echo $0`

## Command Aliases

to get the alias used: 
```bash
$ type gs
git status
```
## Show Directory History
```bash
$ d 
0   ~/Documents/ObsidianSync
1   ~/Documents 
2   ~ 
3   ~/Developer/apps/squash
```

## Use Vim Keybindings in Terminal
(put in your rc file)
```bash
$ set -o vi
```
to be able to see you are in insert of command mode you can create a '~/.inputrc' file
```bash
set show-mode-in-prompt on
```
and then if you don't like that, you can change it such that you can tell if you're in insert/command mode by the cursor. In command mode the cursor will be a block, in insert mode it will be a line. You need to add this to your `.inputrc` file.
```bash
set vi-cmd-mode-string "\1\e[2 q\2"
set vi-ins-mode-string "\1\e[6 q\2"
```
then run
```bash
bind -f ~/.inputrc
```

## Show Login History
```bash
$ last -aiF
```

## Show When a Specific User Last Logged In
```bash
$ lastlog -u joshuada
```
