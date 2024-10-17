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

## Show Login History
```bash
$ last -aiF
```
